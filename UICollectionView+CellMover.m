//
//  UICollectionView+CellMover.m
//
//  Created by Darktt on 2016/5/23.
//  Copyright © 2016年 Darktt. All rights reserved.
//

#import "UICollectionView+CellMover.h"
#import "DTCollectionViewCellMover.h"

@import ObjectiveC.runtime;

static void DT_SwizzleMethod(Class class, SEL originalSelector, SEL swizzledSelector)
{
    Method originalMethod = class_getInstanceMethod(class, originalSelector);
    Method swizzledMethod = class_getInstanceMethod(class, swizzledSelector);
    
    IMP swizzledImplemention = method_getImplementation(swizzledMethod);
    const char *swizzledTypeEncoding = method_getTypeEncoding(swizzledMethod);
    
    BOOL addMethod = class_addMethod(class, originalSelector, swizzledImplemention, swizzledTypeEncoding);
    
    if (addMethod) {
        IMP originalImplemention = method_getImplementation(originalMethod);
        const char *originalTypeEncoding = method_getTypeEncoding(originalMethod);
        
        class_replaceMethod(class, swizzledSelector, originalImplemention, originalTypeEncoding);
    } else {
        method_exchangeImplementations(originalMethod, swizzledMethod);
    }
}

#pragma mark - DTCollectionViewCellMover Category

@interface DTCollectionViewCellMover (Private)

@property (readwrite) UICollectionView *collectionView;
@property (readwrite) CGRect topScrollRect;
@property (readwrite) CGRect bottomScrollRect;

@end

#pragma mark - UICollectionView Category

static NSString *const kCellMoverKey = @"Cell Mover";

@implementation UICollectionView (CellMover)

+ (void)load
{
    [super load];
    
    Class aClass = self;
    
    // Replace -layoutSubviews to -DT_layoutSubviews
    {
        SEL originalSelector = @selector(layoutSubviews);
        SEL replaceSelector = @selector(DT_layoutSubviews);
        
        DT_SwizzleMethod(aClass, originalSelector, replaceSelector);
    }
    
    // Replace -dealloc to -DT_dealloc
    {
        SEL originalSelector = @selector(dealloc);
        SEL replaceSelector = @selector(DT_dealloc);
        
        DT_SwizzleMethod(aClass, originalSelector, replaceSelector);
    }
}

- (void)DT_layoutSubviews
{
    [self DT_layoutSubviews];
    
    CGFloat heightOfEdge = CGRectGetHeight(self.bounds) - 100.0f;
    UIEdgeInsets topEdgeInsets = UIEdgeInsetsMake(0.0f, 0.0f, heightOfEdge, 0.0f);
    UIEdgeInsets bottomEdgeInsets = UIEdgeInsetsMake(heightOfEdge, 0.0f, 0.0f, 0.0f);
    
    CGRect topScrollRect = UIEdgeInsetsInsetRect(self.bounds, topEdgeInsets);
    CGRect bottomScrollRect = UIEdgeInsetsInsetRect(self.bounds, bottomEdgeInsets);
    
    [self.cellMover setTopScrollRect:topScrollRect];
    [self.cellMover setBottomScrollRect:bottomScrollRect];
}

- (void)DT_dealloc
{
    objc_removeAssociatedObjects(self);
    
    [self DT_dealloc];
}

#pragma mark - Override Methods

- (void)setValue:(id)value forKey:(NSString *)key
{
    objc_setAssociatedObject(self, key, value, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

- (id)valueForKey:(NSString *)key
{
    return objc_getAssociatedObject(self, key);
}

- (id)objectForKeyedSubscript:(NSString *)key
{
    return [self valueForKey:key];
}

#pragma mark - Override Property

- (void)setCellMover:(DTCollectionViewCellMover *)cellMover
{
    
    if (cellMover != nil) {
        [cellMover setCollectionView:self];
    }
    
    [self setValue:cellMover forKey:kCellMoverKey];
}

- (DTCollectionViewCellMover *)cellMover
{
    return self[kCellMoverKey];
}

@end
