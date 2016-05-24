//
//  UISwitch+Switch.h
//
//  Created by Darktt on 14/12/22.
//  Copyright © 2014 Darktt Personal Company. All rights reserved.
//

@import UIKit;

NS_ASSUME_NONNULL_BEGIN
@interface UISwitch (Switch)

+ (instancetype)switchWithTarget:(id)target action:(SEL)action;
- (instancetype)initWithTarget:(id)target action:(SEL)action;

// Get switch in super view.
+ (__kindof UISwitch * _Nullable)switchViewInView:(UIView *)superview withTag:(NSUInteger)tag NS_SWIFT_NAME(switch(inView:tag:));

@end
NS_ASSUME_NONNULL_END