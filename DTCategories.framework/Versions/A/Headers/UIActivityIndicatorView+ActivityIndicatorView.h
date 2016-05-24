//
//  UIActivityIndicatorView+ActivityIndicatorView.h
//
//  Created by Darktt on 16/3/24.
//  Copyright © 2016 Darktt Personal Company. All rights reserved.
//

@import UIKit;

NS_ASSUME_NONNULL_BEGIN
@interface UIActivityIndicatorView (ActivityIndicatorView)

+ (instancetype)activityIndicatorViewWithStyle:(UIActivityIndicatorViewStyle)style;

+ (UIActivityIndicatorView * _Nullable)activityIndicatorViewInView:(UIView *)superview withTag:(NSInteger)tag NS_SWIFT_NAME(activityIndicatorView(inView:tag:));

@end
NS_ASSUME_NONNULL_END