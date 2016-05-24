//
//  UINavigationController+Navigation.h
//
//  Created by Darktt on 13/1/16.
//  Copyright © 2013 Darktt Personal Company. All rights reserved.
//

@import UIKit;

NS_ASSUME_NONNULL_BEGIN
@interface UINavigationController (Navigation)

+ (instancetype)navigationWithRootViewController:(UIViewController *)rootViewController NS_SWIFT_UNAVAILABLE("Does not suport Swift version");
+ (instancetype)navigationWithNavigationBarClass:(Class)navigationBarClass toolbarClass:(Class)toolbarClass NS_SWIFT_UNAVAILABLE("Does not suport Swift version");

@end
NS_ASSUME_NONNULL_END