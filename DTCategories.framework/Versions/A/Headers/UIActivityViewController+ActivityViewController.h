//
//  UIActivityViewController+ActivityViewController.h
//
//  Created by Darktt on 16/3/16.
//  Copyright © 2016 Darktt Personal Company. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
@interface UIActivityViewController (ActivityViewController)

+ (instancetype)activityViewControllerWithActivityItems:(NSArray *)activityItems applicationActivities:(nullable NSArray<__kindof UIActivity *> *)applicationActivities;

@end
NS_ASSUME_NONNULL_END