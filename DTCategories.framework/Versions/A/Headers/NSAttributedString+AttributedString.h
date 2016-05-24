//
//  NSAttributedString+AttributedString.h
//
//  Created by Darktt on 14/12/30.
//  Copyright © 2014 Darktt Personal Company. All rights reserved.
//

@import UIKit;

NS_ASSUME_NONNULL_BEGIN
@interface NSAttributedString (AttributedString)

+ (instancetype)attributedStringWithString:(NSString *)string;
+ (instancetype)attributedStringWithString:(NSString *)string attributes:(NSDictionary *)attributes;
+ (instancetype)attributedStringWithString:(NSString *)string fontSize:(CGFloat)fontSize;
+ (instancetype)attributedStringWithString:(NSString *)string foregoundColor:(UIColor *)foregoundColor;
+ (instancetype)attributedStringWithString:(NSString *)string fontSize:(CGFloat)fontSize foregoundColor:(UIColor *)foregoundColor;

@end

@interface NSAttributedString (StrikethroughStyle)

+ (instancetype)strikethroughStringWithString:(NSString *)string;
+ (instancetype)strikethroughStringWithString:(NSString *)string fontSize:(CGFloat)fontSize;
+ (instancetype)strikethroughStringWithString:(NSString *)string foregoundColor:(UIColor *)foregoundColor;
+ (instancetype)strikethroughStringWithString:(NSString *)string fontSize:(CGFloat)fontSize foregoundColor:(UIColor *)foregoundColor;;

@end

NS_ASSUME_NONNULL_END