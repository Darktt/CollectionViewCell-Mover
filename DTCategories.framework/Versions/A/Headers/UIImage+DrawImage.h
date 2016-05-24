//
//  UIImage+DrawImage.h
//
//  Created by Darktt on 13/6/3.
//  Copyright © 2013 Darktt Personal Company. All rights reserved.
//

@import UIKit;

NS_ASSUME_NONNULL_BEGIN
@interface UIImage (DrawImage)

+ (instancetype)imageWithColor:(UIColor *)color size:(CGSize)size;
+ (instancetype)imageWithString:(NSString *)string attributes:(NSDictionary<NSString *, id> *)attributes;
+ (instancetype)imageWithString:(NSString *)string attributes:(NSDictionary<NSString *, id> *)attributes offset:(CGPoint)offset;

// Draw Gradient Image
+ (instancetype)gradientImageWithRect:(CGRect)rect beginColor:(UIColor *)beginColor endColor:(UIColor *)endColor location:(const CGFloat *)location;
+ (instancetype)gradientImageWithRect:(CGRect)rect gradientColors:(NSArray/*<CGColorRef>*/ *)gradientColors location:(const CGFloat *)location;

// Custom Gradient Image
+ (instancetype)bicycleMapsNavigationImage;
+ (instancetype)redGradientImageWithRect:(CGRect)rect;
+ (instancetype)grayGradientImageWithRect:(CGRect)rect;
+ (instancetype)blueGradientImageWithRect:(CGRect)rect;
+ (instancetype)greenGradientImageWithRect:(CGRect)rect;
+ (instancetype)purpleGradientImageWithRect:(CGRect)rect;
+ (instancetype)lightYellowGradientImageWithRect:(CGRect)rect;

// Draw Rounded Rect Gradient Image
+ (instancetype)rounedRectImageWithSize:(CGSize)size cornerRadius:(CGFloat)cornerRadius gradientColors:(NSArray/*<CGColorRef>*/ *)gradientColors lineColor:(nullable UIColor *)lineColor gradientLocation:(const CGFloat *)location;
+ (instancetype)rounedRectImageWithRect:(CGRect)rect cornerRadius:(CGFloat)cornerRadius gradientColors:(NSArray/*<CGColorRef>*/ *)gradientColors lineColor:(nullable UIColor *)lineColor gradientLocation:(const CGFloat *)location;

// Draw Rounded Rect Image
+ (instancetype)rounedRectImageWithSize:(CGSize)size cornerRadius:(CGFloat)cornerRadius color:(UIColor *)color;
+ (instancetype)rounedRectImageWithRect:(CGRect)rect cornerRadius:(CGFloat)cornerRadius color:(UIColor *)color;

+ (instancetype)rounedRectImageWithSize:(CGSize)size cornerRadius:(CGFloat)cornerRadius tintColor:(UIColor *)tintColor lineWidth:(CGFloat)lineWidth lineColor:(nullable UIColor *)lineColor;
+ (instancetype)rounedRectImageWithRect:(CGRect)rect cornerRadius:(CGFloat)cornerRadius tintColor:(UIColor *)tintColor lineWidth:(CGFloat)lineWidth lineColor:(nullable UIColor *)lineColor;

@end
NS_ASSUME_NONNULL_END