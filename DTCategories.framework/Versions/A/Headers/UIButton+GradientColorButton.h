//
//  UIButton+GradientColorButton.h
//
//  Created by Darktt on 13/6/6.
//  Copyright © 2013 Darktt Personal Company. All rights reserved.
//

@import UIKit;

NS_ASSUME_NONNULL_BEGIN
@interface UIButton (GradientColorButton)

+ (instancetype)blueButtonWithFrame:(CGRect)frame conerRadius:(CGFloat)conerRadius NS_SWIFT_NAME(blueButton(frame:conerRadius:));

+ (instancetype)grayButtonWithFrame:(CGRect)frame conerRadius:(CGFloat)conerRadius NS_SWIFT_NAME(grayButton(frame:conerRadius:));

+ (instancetype)greenButtonWithFrame:(CGRect)frame conerRadius:(CGFloat)conerRadius NS_SWIFT_NAME(greenButton(frame:conerRadius:));

+ (instancetype)purpleButtonWithFrame:(CGRect)frame conerRadius:(CGFloat)conerRadius NS_SWIFT_NAME(purpleButton(frame:conerRadius:));

+ (instancetype)redButtonWithFrame:(CGRect)frame conerRadius:(CGFloat)conerRadius NS_SWIFT_NAME(redButton(frame:conerRadius:));

@end
NS_ASSUME_NONNULL_END