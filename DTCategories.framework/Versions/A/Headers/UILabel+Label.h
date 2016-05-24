//
//  UILabel+Label.h
//
//  Created by Darktt on 13/4/23.
//  Copyright © 2013 Darktt Personal Company. All rights reserved.
//

@import UIKit;

NS_ASSUME_NONNULL_BEGIN
@interface UILabel (Label)

+ (instancetype)labelWithFrame:(CGRect)frame;

+ (instancetype)labelWithFrame:(CGRect)frame textSize:(CGFloat)textSize;

+ (instancetype)labelWithFrame:(CGRect)frame text:(NSString * _Nullable)text;

+ (instancetype)labelWithFrame:(CGRect)frame text:(NSString *)text textSize:(CGFloat)textSize;

+ (instancetype)labelWithText:(NSString * _Nullable)text;

+ (instancetype)labelWithText:(NSString *)text textSize:(CGFloat)textSize;

+ (instancetype)labelWithAttributedText:(NSAttributedString * _Nullable)attributedText;

// Get label in superview
+ (__kindof UILabel * _Nullable)labelInView:(UIView *)superview withTag:(NSInteger)tag NS_SWIFT_NAME(label(inView:tag:));

@end
NS_ASSUME_NONNULL_END