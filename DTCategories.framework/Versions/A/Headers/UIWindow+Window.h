//
//  UIWindow+Window.h
//
//  Created by Darktt on 16/5/17.
//  Copyright © 2016 Darktt Personal Company. All rights reserved.
//

@import UIKit;

NS_ASSUME_NONNULL_BEGIN
@interface UIWindow (Window)

+ (instancetype)windowWithFrame:(CGRect)frame;
+ (instancetype)windowWithRootViewController:(UIViewController * _Nullable)viewController;

@end
NS_ASSUME_NONNULL_END