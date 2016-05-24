//
//  UIImage+Resize.h
//
//  Created by Darktt on 13/3/28.
//  Copyright © 2013 Darktt Personal Company. All rights reserved.
//

@import UIKit;
@import CoreGraphics;

NS_ASSUME_NONNULL_BEGIN
@interface UIImage(Resize)

- (UIImage *)croppedImage:(CGRect)bounds;

- (UIImage *)thumbnailImage:(NSInteger)thumbnailSize interpolationQuality:(CGInterpolationQuality)quality;

- (UIImage *)resizedImage:(CGSize)newSize interpolationQuality:(CGInterpolationQuality)quality;

- (UIImage *)resizeImage:(UIImage *)image interpolationQuality:(CGInterpolationQuality)quality rate:(CGFloat)rate;

- (UIImage *)resizedImageWithContentMode:(UIViewContentMode)contentMode bounds:(CGSize)bounds interpolationQuality:(CGInterpolationQuality)quality;

- (UIImage *)scaleImageToSize:(CGSize)scaleSize;

- (NSArray<UIImage *> *)croppedImagesWithRect:(CGRect)croppedRect;

@end
NS_ASSUME_NONNULL_END