//
//  UIColor+Colors.h
//
//  Created by Darktt on 12/10/17.
//  Copyright © 2012 Darktt Personal Company. All rights reserved.
//

@import UIKit;

NS_ASSUME_NONNULL_BEGIN
UIKIT_EXTERN UIColor * UIColorFromRGB(NSInteger r, NSInteger g, NSInteger b) NS_SWIFT_UNAVAILABLE("Does not support Swift.");

UIKIT_EXTERN UIColor * UIColorFromRGBA(NSInteger r, NSInteger g, NSInteger b, NSInteger a) NS_SWIFT_UNAVAILABLE("Does not support Swift.");

@interface UIColor (Colors)

// Random color
+ (UIColor *)randomColor;

// Custom colors
+ (UIColor *)baseWhiteColor;
+ (UIColor *)lightBrownColor;

+ (UIColor *)facebookColor;         // Facebook blue base color
+ (UIColor *)deepFacebookColor;     // Facebook blue base color from Facebook App ver. 6.5
+ (UIColor *)twitterColor;          // Twitter blue base color
+ (UIColor *)googleRedColor;        // Google logo red color
+ (UIColor *)googleGreenColor;      // Google logo green color
+ (UIColor *)googleBlueColor;       // Google logo blue color
+ (UIColor *)googleYellowColor;     // Google logo yellow color
+ (UIColor *)yahooRedColor;         // Yahoo red color
+ (UIColor *)netEaseRedColor;       // Netease (網易) red color
+ (UIColor *)windows8BlueColor;     // Microsoft Windows 8 base blue color.
+ (UIColor *)togoBoxGrayColor;      // Aximcom TOGOBox gray color
+ (UIColor *)togoBoxGreenColor;     // Aximcom TOGOBox green color
+ (UIColor *)togoBoxPurpleColor;    // Aximcom TOGOBox purple color
+ (UIColor *)iOS7WhiteColor;        // iOS 7 style white color
+ (UIColor *)iOS7BlueColor;         // iOS 7 style blue color

// Flat Colors
+ (UIColor *)flatRedColor;
+ (UIColor *)flatDarkRedColor;

+ (UIColor *)flatGreenColor;
+ (UIColor *)flatDarkGreenColor;

+ (UIColor *)flatBlueColor;
+ (UIColor *)flatDarkBlueColor;

+ (UIColor *)flatTealColor;
+ (UIColor *)flatDarkTealColor;

+ (UIColor *)flatPurpleColor;
+ (UIColor *)flatDarkPurpleColor;

+ (UIColor *)flatBlackColor;
+ (UIColor *)flatDarkBlackColor;

+ (UIColor *)flatYellowColor;
+ (UIColor *)flatDarkYellowColor;

+ (UIColor *)flatOrangeColor;
+ (UIColor *)flatDarkOrangeColor;

+ (UIColor *)flatWhiteColor;
+ (UIColor *)flatDarkWhiteColor;

+ (UIColor *)flatGrayColor;
+ (UIColor *)flatDarkGrayColor;

// Fork from KXKiOS7Colors, as iOS7 icon used colors.
+ (UIColor *)iOS7LightGreenColor;
+ (UIColor *)iOS7MidGreenColor;
+ (UIColor *)iOS7DarkGreenColor;

+ (UIColor *)iOS7LightGreyColor;
+ (UIColor *)iOS7DarkGreyColor;

+ (UIColor *)iOS7LightBlueColor;
+ (UIColor *)iOS7MidBlueColor;
+ (UIColor *)iOS7DarkBlueColor;

+ (UIColor *)iOS7LightPinkColor;
+ (UIColor *)iOS7DarkPinkColor;

+ (UIColor *)iOS7RedColor;

+ (UIColor *)iOS7LightOrangeColor;
+ (UIColor *)iOS7DarkOrangeColor;

+ (UIColor *)iOS7LightTealColor;

+ (UIColor *)iOS7LightPurpleColor;
+ (UIColor *)iOS7DarkPurpleColor;

+ (UIColor *)iOS7BrownColor;
+ (UIColor *)iOS7YellowColor;

// Input hexadecimal string or integer
+ (instancetype)colorWithHex:(UInt32)hex; // eg: [UIColor colorWithHex:0xff00ff];
+ (instancetype)colorWithHexString:(NSString *)hex; // eg: [UIColor colorWithHexString:@"ff00ff"];
- (instancetype)initWithHexString:(NSString *)hex; // eg: [[UIColor alloc] initWithHexString:@"ff00ff"];

// Input color name with safe web color names
// Color names is define in ColorNames.h file
+ (UIColor *)colorWithColorName:(NSString *)name;

// Input RGB value, without alpha value.
+ (UIColor *)colorWithRed:(CGFloat)red green:(CGFloat)green blue:(CGFloat)blue;
- (instancetype)initWithRed:(CGFloat)red green:(CGFloat)green blue:(CGFloat)blue;

// return Color RGB value.
// eg: [UIColor colorComponentsFromColor:[UIColor redColor]];
//     Output : "Red : 255, Green : 0, Blue : 0, Alpha : 100"
+ (NSArray<NSString *> *)colorComponentsFromColor:(UIColor *)color NS_SWIFT_UNAVAILABLE("Use UIColor.colorComponets()");
- (NSArray<NSString *> *)colorComponents;

@end
NS_ASSUME_NONNULL_END