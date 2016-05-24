//
//  UIImage+Image.h
//
//  Created by Darktt on 13/3/28.
//  Copyright © 2013 Darktt Personal Company. All rights reserved.
//

@import UIKit;

NS_ASSUME_NONNULL_BEGIN
UIKIT_EXTERN BOOL UIImageOrientationIsPortrait(UIImageOrientation orientation);
UIKIT_EXTERN BOOL UIImageOrientationIsLandscape(UIImageOrientation orientation);

@interface UIImage (Image)

@property (readonly) BOOL hasAlpha;

+ (UIImage *)screenImageWithRect:(CGRect)rect view:(UIView *)view;

+ (UIImage * _Nullable)imageFromView:(UIView *)view NS_SWIFT_NAME(imageFromView(_:));

+ (UIImage *)launchImageWithOrientation:(UIDeviceOrientation)orientation;

+ (UIImage *)imageNamed:(NSString *)name inBundleName:(NSString *)bundleName NS_SWIFT_NAME(imageNamed(_:inBundleName:));

- (UIImage *)imageWithTransform:(CGAffineTransform)transform;

- (UIImage *)imageWithBackgroundColor:(UIColor *)backgroundColor;

@end
NS_ASSUME_NONNULL_END