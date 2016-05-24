//
//  UIScrollView+ScrollView.h
//
//  Created by Darktt on 13/5/4.
//  Copyright © 2013 Darktt Personal Company. All rights reserved.
//

@import UIKit;

typedef NS_OPTIONS(NSUInteger, UIScrollOrientation){
    UIScrollOrientationVertical = 1 << 0,
    UIScrollOrientationHorizontal = 1 << 1,
};

NS_ASSUME_NONNULL_BEGIN
@interface UIScrollView (ScrollView)

+ (instancetype)scrollViewWithFrame:(CGRect)frame;
+ (instancetype)scrollViewPagingWithFrame:(CGRect)frame NS_SWIFT_NAME(scrollViewPagingWithFrame(_:));

- (void)addSubviews:(NSArray<__kindof UIView *> *)views scrollOrientation:(UIScrollOrientation)orientation;

/**
 *    Query current page index for paging mode.
 *
 *    @param count Total pages count.
 *
 *    @return Unsigns integer of page index.
 *
 *    @note When return value is NSNotFound, needs ignore that value.
 */
- (NSUInteger)pageIndexForCount:(NSUInteger)count;

// Get scrollView in superview
+ (__kindof UIScrollView * _Nullable)scrollViewInView:(UIView *)superview withTag:(NSUInteger)tag NS_SWIFT_NAME(scrollView(inView:tag:));

@end
NS_ASSUME_NONNULL_END