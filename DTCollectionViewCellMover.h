//
//  DTCollectionViewCellMover.h
//
//  Created by Darktt on 2016/5/23.
//  Copyright © 2016年 Darktt. All rights reserved.
//

#import "UICollectionView+CellMover.h"

@import UIKit;

NS_ASSUME_NONNULL_BEGIN
@protocol DTCollectionViewCellMoverDelegate;
@interface DTCollectionViewCellMover : NSObject

/**
 *    The scale for cell when dragging. Default is 1.5.
 */
@property (assign) CGFloat cellScale;

@property (readonly, nonnull) UICollectionView *collectionView;

+ (instancetype)cellMoverWithDelegate:(id<DTCollectionViewCellMoverDelegate>)delegate;
- (instancetype)initWithDelegate:(id<DTCollectionViewCellMoverDelegate>)delegate;

@end

@protocol DTCollectionViewCellMoverDelegate <NSObject>

@optional

/**
 *    Notify delegate will begin dragging.
 *
 *    @param cellMover Instance of DTCollectionViewCellMover.
 */
- (void)cellMoverWillBeginDragging:(DTCollectionViewCellMover *)cellMover NS_SWIFT_NAME(cellMover(willBeginDragging:));

/**
 *    Notify delegate will end dragging, before update item.
 *
 *    @param cellMover Instance of DTCollectionViewCellMover.
 */
- (void)cellMoverWillEndDragging:(DTCollectionViewCellMover *)cellMover NS_SWIFT_NAME(cellMover(willEndDragging:));

/**
 *    Notify delegate did end dragging, after update item.
 *
 *    @param cellMover Instance of DTCollectionViewCellMover.
 */
- (void)cellMoverDidEndDragging:(DTCollectionViewCellMover *)cellMover NS_SWIFT_NAME(cellMover(didEndDragging:));

/**
 *    Check this cell of index path should be dragging.
 *
 *    @param cellMover Instance of DTCollectionViewCellMover.
 *    @param indexPath IndexPath of will dragging cell.
 *
 *    @return YES is cell should be dragging, otherwise NO.
 */
- (BOOL)cellMover:(DTCollectionViewCellMover *)cellMover shouldBeginDraggingAtIndexPath:(NSIndexPath *)indexPath;

@required

/**
 *    Notfy delegate what index did item move to.
 *
 *    @param cellMover Instance of DTCollectionViewCellMover.
 *    @param index     Item's current index.
 *    @param toIndex   Index of item will move to.
 */
- (void)cellMover:(DTCollectionViewCellMover *)cellMover willMoveItemFromIndex:(NSInteger)index toIndex:(NSInteger)toIndex;

@end
NS_ASSUME_NONNULL_END
