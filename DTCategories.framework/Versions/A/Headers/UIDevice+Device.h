//
//  UIDevice+Device.h
//
//  Created by Darktt on 13/7/4.
//  Copyright © 2013 Darktt Personal Company. All rights reserved.
//

@import UIKit;

NS_ASSUME_NONNULL_BEGIN
@interface UIDevice (Device)

// Check device model with boolean value
@property (readonly, getter = isIPadDevice) BOOL iPadDevice;
@property (readonly, getter = isIPhoneDevice) BOOL iPhoneDevice;

// Detect iPhone models.
@property (readonly) BOOL is3_5InchScreenDevice;
@property (readonly) BOOL is4InchScreenDevice;
@property (readonly) BOOL is4_7InchScreenDevice;
@property (readonly) BOOL is5_5InchScreenDevice;

// Detect iPad models.
@property (readonly) BOOL is12InchScreenDevice;

// Check device jail breaked
@property (readonly, getter = isJailBreaked) BOOL jailBreaked;

// Check device model with string value
- (NSString *)deviceModel;

// Check device current use language
- (NSString *)currentLanguage;

@end
NS_ASSUME_NONNULL_END