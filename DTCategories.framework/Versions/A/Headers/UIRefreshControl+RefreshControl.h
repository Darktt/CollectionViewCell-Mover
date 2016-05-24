//
//  UIRefreshControl+RefreshControl.h
//
//  Created by Darktt on 16/3/24.
//  Copyright © 2016 Darktt Personal Company. All rights reserved.
//

@import UIKit;

NS_ASSUME_NONNULL_BEGIN
@interface UIRefreshControl (RefreshControl)

+ (instancetype)refreshControlAddToView:(__kindof UIScrollView *)view;

@end
NS_ASSUME_NONNULL_END