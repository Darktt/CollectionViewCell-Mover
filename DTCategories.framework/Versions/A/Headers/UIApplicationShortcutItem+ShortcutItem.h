//
//  UIApplicationShortcutItem+ShortcutItem.h
//
//  Created by Darktt on 15/11/12.
//  Copyright © 2015 Darktt Personal Company. All rights reserved.
//

@import UIKit;

NS_ASSUME_NONNULL_BEGIN
@interface UIApplicationShortcutItem (ShortcutItem)

+ (instancetype)shortcutItemWithType:(NSString *)type localizedTitle:(NSString *)localizedTitle;
+ (instancetype)shortcutItemWithType:(NSString *)type localizedTitle:(NSString *)localizedTitle localizedSubtitle:( nullable NSString *)localizedSubtitle icon:(nullable UIApplicationShortcutIcon *)icon userInfo:(nullable NSDictionary *)userInfo;

@end
NS_ASSUME_NONNULL_END