//
//  UITabBarController+TabBar.h
//
//  Created by Darktt on 13/1/16.
//  Copyright © 2013 Darktt Personal Company. All rights reserved.
//

@import UIKit;

NS_ASSUME_NONNULL_BEGIN
@interface UITabBarController (TabBar)

+ (instancetype)defauleTabBar;
+ (instancetype)tabBarWithViewControllers:(NSArray<__kindof UIViewController *> *)viewControllers;

@end
NS_ASSUME_NONNULL_END