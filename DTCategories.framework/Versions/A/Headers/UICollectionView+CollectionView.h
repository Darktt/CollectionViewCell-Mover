//
//  UICollectionView+CollectionView.h
//
//  Created by Darktt on 15/7/3.
//  Copyright © 2015 Darktt Personal Company. All rights reserved.
//

@import UIKit;

NS_ASSUME_NONNULL_BEGIN
@interface UICollectionView (CollectionView)

+ (instancetype)collectionViewWithFrame:(CGRect)frame collectionViewLayout:(UICollectionViewLayout *)layout;

- (void)reloadItem:(NSUInteger)item inSection:(NSUInteger)section;
- (void)reloadSection:(NSUInteger)section;

- (void)insertItem:(NSUInteger)item inSection:(NSUInteger)section;
- (void)insertSection:(NSUInteger)section;

- (void)deleteItem:(NSUInteger)item inSection:(NSUInteger)section;
- (void)deleteSection:(NSUInteger)section;

- (void)scrollToItem:(NSUInteger)item inSection:(NSUInteger)section atScrollPosition:(UICollectionViewScrollPosition)scrollPosition animated:(BOOL)animated;

// Get collectionView in superview
+ (__kindof UICollectionView * _Nullable)collectionViewInView:(UIView *)superview withTag:(NSUInteger)tag NS_SWIFT_NAME(collectionView(inView:tag:));

@end
NS_ASSUME_NONNULL_END