//
//  UISplitViewController+SplitView.h
//
//  Created by Darktt on 14/9/23.
//  Copyright © 2014 Darktt Personal Company. All rights reserved.
//

@import UIKit;

NS_ASSUME_NONNULL_BEGIN
@interface UISplitViewController (SplitView)

+ (instancetype)splitWithViewControllers:(NSArray<__kindof UIViewController *> *)viewControllers;

@end
NS_ASSUME_NONNULL_END