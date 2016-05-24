//
//  UITextField+TextField.h
//
//  Created by Darktt on 14/2/5.
//  Copyright © 2014 Darktt Personal Company. All rights reserved.
//

@import UIKit;

NS_ASSUME_NONNULL_BEGIN
@interface UITextField (TextField)

+ (instancetype)textFieldWithFrame:(CGRect)frame;
+ (instancetype)textFieldWithFrame:(CGRect)frame placeholder:(NSString * _Nullable)placeholder;

// Get textField in superview
+ (__kindof UITextField * _Nullable)textFieldInView:(UIView *)superview withTag:(NSInteger)tag NS_SWIFT_NAME(textField(inView:tag:));

@end
NS_ASSUME_NONNULL_END