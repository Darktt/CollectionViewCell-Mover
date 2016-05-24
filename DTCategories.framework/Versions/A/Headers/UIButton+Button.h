//
//  UIButton+Button.h
//
//  Created by Darktt on 13/10/15.
//  Copyright © 2013 Darktt Personal Company. All rights reserved.
//

@import UIKit;

NS_ASSUME_NONNULL_BEGIN
@interface UIButton (Button)

- (void)setBackgroundImageWithColor:(UIColor *)color forState:(UIControlState)state NS_SWIFT_NAME(setBackgroundImage(color:forState:));

// Get button in superview
+ (__kindof UIButton * _Nullable)buttonInView:(UIView *)superview withTag:(NSInteger)tag NS_SWIFT_NAME(button(inView:tag:));

@end
NS_ASSUME_NONNULL_END