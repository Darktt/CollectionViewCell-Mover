//
//  DTCollectionViewCellMover.m
//
//  Created by Darktt on 2016/5/23.
//  Copyright © 2016年 Darktt. All rights reserved.
//

#import "DTCollectionViewCellMover.h"

#pragma mark - UIPanGestureRecognizer

@import UIKit.UIGestureRecognizerSubclass;

@interface UIPanGestureRecognizer (Private)

- (void)cancel;

@end

@implementation UIPanGestureRecognizer (Private)

- (void)cancel
{
    [self setState:UIGestureRecognizerStateCancelled];
}

@end

#pragma mark - UICollectionViewCell

@interface UICollectionViewCell (Private)

@property (assign, readonly) UIView *snapshotView;

@end

@implementation UICollectionViewCell (Private)

- (UIView *)snapshotView
{
    return [self snapshotViewAfterScreenUpdates:NO];
}

@end

#pragma mark - DTCollectionViewCellMover

@interface DTCollectionViewCellMover () <UIGestureRecognizerDelegate>
{
    // Scrolling Up Down set
    CADisplayLink *_scrollTimer; /**< Will invalidate and release when scroll end. */
    BOOL _scrollUp;
    
    // Exchange Items set
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    NSIndexPath *_startIndexPath; /**< Will release in finish gesture recognizer */
    NSIndexPath *_previousIndexPath; /**< Will release in finish gesture recognizer */
    UIView *_draggingView; /**< Will release in finish gesture recognizer */
}

@property (assign) id<DTCollectionViewCellMoverDelegate> delegate;

@property (assign, nonatomic) UICollectionView *collectionView;
@property (assign) CGRect topScrollRect;
@property (assign) CGRect bottomScrollRect;

@end

@implementation DTCollectionViewCellMover

+ (instancetype)cellMoverWithDelegate:(id<DTCollectionViewCellMoverDelegate>)delegate
{
    DTCollectionViewCellMover *cellMover = [[DTCollectionViewCellMover alloc] initWithDelegate:delegate];
    
    return cellMover;
}

- (instancetype)initWithDelegate:(id<DTCollectionViewCellMoverDelegate>)delegate
{
    self = [super init];
    if (self == nil) return nil;
    
    [self setDelegate:delegate];
    [self setCellScale:1.5f];
    
    return self;
}

- (void)dealloc
{
    [self.collectionView removeGestureRecognizer:_longPressGestureRecognizer];
    
    [super dealloc];
}

#pragma mark - Override Property

- (void)setCollectionView:(UICollectionView *)collectionView
{
    _collectionView = collectionView;
    
    // Setup pan gesture to collectionView;
    if (collectionView != nil) {
        
        UILongPressGestureRecognizer *longPressGesture = [[UILongPressGestureRecognizer alloc] initWithTarget:self action:@selector(handleGesture:)];
        [longPressGesture setMinimumPressDuration:0.5f];
        
        [collectionView addGestureRecognizer:longPressGesture];
        
        _longPressGestureRecognizer = longPressGesture;
        [longPressGesture release];
    }
}

#pragma mark - Action

- (void)handleGesture:(UILongPressGestureRecognizer *)sender
{
    CGPoint point = [sender locationInView:self.collectionView];
    
    UIGestureRecognizerState state = sender.state;
    UICollectionView *collectionView = self.collectionView;
    
    // Begin State
    if (state == UIGestureRecognizerStateBegan) {
        _startIndexPath = [[collectionView indexPathForItemAtPoint:point] retain];
        _previousIndexPath = [[collectionView indexPathForItemAtPoint:point] retain];
        
        // Copy a cell snapshot to dragging view.
        UICollectionViewCell *cell = [collectionView cellForItemAtIndexPath:_startIndexPath];
        
        // When cell is nil cancel dragging.
        if (cell == nil) {
            
            [self cleanUP];
            return;
        }
        
        BOOL shouldDragging = YES;
        
        if ([self.delegate respondsToSelector:@selector(cellMover:shouldBeginDraggingAtIndexPath:)]) {
            shouldDragging = [self.delegate cellMover:self shouldBeginDraggingAtIndexPath:_startIndexPath];
        }
        
        // When should not dragging, cancel dragging.
        if (!shouldDragging) {
            
            [self cleanUP];
            return;
        }
        
        // Notify delegate will begin dragging.
        if ([self.delegate respondsToSelector:@selector(cellMoverWillBeginDragging:)]) {
            [self.delegate cellMoverWillBeginDragging:self];
        }
        
        [cell setHidden:YES];
        
        CGAffineTransform transform = CGAffineTransformMakeScale(self.cellScale, self.cellScale);
        
        _draggingView = cell.snapshotView;
        [_draggingView setCenter:point];
        [_draggingView setTransform:transform];
        
        [collectionView addSubview:_draggingView];
        [collectionView bringSubviewToFront:_draggingView];
    }
    
    // End State
    if (state == UIGestureRecognizerStateEnded) {
        // Assign a point not in scoll range to stop scroll.
        [self scrollWithPoint:CGPointMake(-10.0f, -10.0f)];
        
        UICollectionViewCell *cell = [collectionView cellForItemAtIndexPath:_previousIndexPath];
        [cell setHidden:NO];
        
        NSUInteger startIndex = _startIndexPath.item;
        NSUInteger toIndex = _previousIndexPath.item;
        
        // Notify delegate will end dragging.
        if ([self.delegate respondsToSelector:@selector(cellMoverWillEndDragging:)]) {
            [self.delegate cellMoverWillEndDragging:self];
        }
        
        // Notify delegate item will move to new index.
        if ([self.delegate respondsToSelector:@selector(cellMover:willMoveItemFromIndex:toIndex:)]) {
            [self.delegate cellMover:self willMoveItemFromIndex:startIndex toIndex:toIndex];
        }
        
        // Notify delegate did end dragging.
        if ([self.delegate respondsToSelector:@selector(cellMoverDidEndDragging:)]) {
            [self.delegate cellMoverDidEndDragging:self];
        }
        
        // Clean up
        [self cleanUP];
        
        [_draggingView removeFromSuperview];
        _draggingView = nil;
    }
    
    // Other States (Not change state)
    if (state != UIGestureRecognizerStateChanged) {
        return;
    }
    
    // Change State
    [self scrollWithPoint:point];
    
    NSIndexPath *throughIndexPath = [_collectionView indexPathForItemAtPoint:point];
    
    if (throughIndexPath == nil) {
        throughIndexPath = _previousIndexPath;
    }
    
    void (^moveBatch) (void) = ^{
        [_collectionView moveItemAtIndexPath:_previousIndexPath toIndexPath:throughIndexPath];
    };
    
    [_collectionView performBatchUpdates:moveBatch completion:nil];
    
    NSComparisonResult comareResult = [_previousIndexPath compare:throughIndexPath];
    if (comareResult != NSOrderedSame) {
        [_previousIndexPath release];
        _previousIndexPath = [throughIndexPath retain];
    }
    
    [_draggingView setCenter:point];
}

#pragma mark - Private Methods

- (void)cleanUP
{
    [_startIndexPath release];
    _startIndexPath = nil;
    
    [_previousIndexPath release];
    _previousIndexPath = nil;
}

#pragma mark Scroll Up Down When Dragging

- (void)scrollWithPoint:(CGPoint)point
{
    UICollectionView *collectionView = self.collectionView;
    UIEdgeInsets contentInset = collectionView.contentInset;
    
    CGPoint convertPoint = [collectionView convertPoint:point toView:collectionView];
    
    BOOL scrollUp = CGRectContainsPoint(self.bottomScrollRect, convertPoint);
    BOOL scrollDown = CGRectContainsPoint(self.topScrollRect, convertPoint);
    
    CGPoint contentOffset = collectionView.contentOffset;
    CGFloat heightOfCollectionView = CGRectGetHeight(collectionView.bounds);
    CGFloat heightOfContentView = collectionView.contentSize.height;
    CGFloat minimumOffsetY = 0.0f - contentInset.top;
    CGFloat maximumOffsetY = heightOfContentView - heightOfCollectionView + contentInset.bottom;
    
    if (scrollUp && contentOffset.y < maximumOffsetY) {
        _scrollUp = YES;
        
        if (_scrollTimer == nil) {
            NSRunLoop *runLoop = [NSRunLoop mainRunLoop];
            
            CADisplayLink *scrollTimer = [CADisplayLink displayLinkWithTarget:self selector:@selector(scrollUpDown:)];
            [scrollTimer addToRunLoop:runLoop forMode:NSDefaultRunLoopMode];
            
            _scrollTimer = [scrollTimer retain];
        }
        
        return;
    }
    
    if (scrollDown && contentOffset.y > minimumOffsetY) {
        _scrollUp = NO;
        
        if (_scrollTimer == nil) {
            NSRunLoop *runLoop = [NSRunLoop mainRunLoop];
            
            CADisplayLink *scrollTimer = [CADisplayLink displayLinkWithTarget:self selector:@selector(scrollUpDown:)];
            [scrollTimer addToRunLoop:runLoop forMode:NSDefaultRunLoopMode];
            
            _scrollTimer = [scrollTimer retain];
        }
        
        return;
    }
    
    _scrollUp = NO;
    
    if (_scrollTimer != nil) {
        [_scrollTimer invalidate];
        [_scrollTimer release];
        _scrollTimer = nil;
    }
}

- (void)scrollUpDown:(CADisplayLink *)sender
{
    UICollectionView *collectionView = self.collectionView;
    UIEdgeInsets contentInset = collectionView.contentInset;
    
    CGFloat offsetY = (_scrollUp) ? 2.0f : -2.0f;
    
    CGFloat heightOfCollectionView = CGRectGetHeight(collectionView.bounds);
    CGFloat heightOfContentView = collectionView.contentSize.height;
    CGFloat minimumOffsetY = 0.0f - contentInset.top;
    CGFloat maximumOffsetY = heightOfContentView - heightOfCollectionView + contentInset.bottom;
    
    BOOL needAdjustPosistion = YES;
    
    CGPoint contentOffset = _collectionView.contentOffset;
    contentOffset.y += offsetY;
    
    if (contentOffset.y < minimumOffsetY) {
        contentOffset.y = minimumOffsetY;
        
        needAdjustPosistion = NO;
    }
    
    if (contentOffset.y > maximumOffsetY) {
        contentOffset.y = maximumOffsetY;
        
        needAdjustPosistion = NO;
    }
    
    [_collectionView setContentOffset:contentOffset];
    
    if (needAdjustPosistion) {
        CGRect viewFrame = _draggingView.frame;
        viewFrame.origin.y += offsetY;
        
        [_draggingView setFrame:viewFrame];
    }
}

@end
