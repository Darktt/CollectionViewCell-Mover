//
//  UIViewController+ViewController.h
//
//  Created by Darktt on 14/11/25.
//  Copyright © 2014 Darktt Personal Company. All rights reserved.
//

@import UIKit;

NS_ASSUME_NONNULL_BEGIN
@interface UIViewController (ViewController)

+ (instancetype)viewController;
+ (instancetype)viewControllerWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil;

- (__kindof UIBarButtonItem *)toolbarItemAtIndex:(NSInteger)index;

@end

@interface UIViewController (ErrorHandler)

/**
 *  Present error with UIAlertController, alert title will use localizeable "Error" string
 *  and with a dismiss button(localizeable too).
 *
 *  @param error The error object will present.
 */
- (void)presentErrorAlertWithError:(NSError *)error;

/**
 *  Present alert with UIAlertController, this alert used single button,
 *  that button title will use localizeable "Dismiss" string.
 *
 *  @param title   The alert title to present.
 *  @param message The alert message to present.
 */
- (void)presentAlertWithTitle:(nullable NSString *)title message:(NSString *)message;

/**
 *    Present alert with UIAlertController.
 *
 *    @param title       Custom title.
 *    @param message     Custom message.
 *    @param cancelTitle Custom cancel title for button.
 */
- (void)presentAlertWithTitle:(nullable NSString *)title message:(NSString *)message cancelButtonTitle:(NSString *)cancelTitle;

@end
NS_ASSUME_NONNULL_END