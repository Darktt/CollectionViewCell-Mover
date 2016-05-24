//
//  UIBarButtonItem+BarButtonItem.h
//
//  Created by Darktt on 13/12/24.
//  Copyright © 2013 Darktt Personal Company. All rights reserved.
//

@import UIKit;

NS_ASSUME_NONNULL_BEGIN
@interface UIBarButtonItem (BarButtonItem)

+ (instancetype)flexibleSpace;
+ (instancetype)fixedSpaceWithWidth:(CGFloat)width;
+ (instancetype)barButtonItemWithCustomView:(UIView *)customView;
+ (instancetype)barButtonSystemItem:(UIBarButtonSystemItem)systemItem target:(nullable id)target action:(nullable SEL)action NS_SWIFT_NAME(systemItem(_:target:action:));
+ (instancetype)barButtonItemWithTitle:(NSString *)title style:(UIBarButtonItemStyle)style target:(nullable id)target action:(nullable SEL)action;

// Aka +fixedSpaceWithWidth: with -16 width (after iOS7).
+ (instancetype)negativeSeparator;

@end
NS_ASSUME_NONNULL_END