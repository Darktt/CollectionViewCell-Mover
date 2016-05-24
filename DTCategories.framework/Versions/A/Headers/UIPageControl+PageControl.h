//
//  UIPageControl+PageControl.h
//
//  Created by Darktt on 14/11/19.
//  Copyright © 2014 Darktt Personal Company. All rights reserved.
//

@import UIKit;

NS_ASSUME_NONNULL_BEGIN
@interface UIPageControl (PageControl)

+ (instancetype)pageControlWithFrame:(CGRect)frame;

// Get pageControl in superview
+ (__kindof UIPageControl * _Nullable)pageControlInView:(UIView *)superview withTag:(NSUInteger)tag NS_SWIFT_NAME(pageControl(inView:tag:));

@end
NS_ASSUME_NONNULL_END