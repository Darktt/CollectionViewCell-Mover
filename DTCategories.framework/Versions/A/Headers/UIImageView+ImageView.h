//
//  UIImageView+ImageView.h
//
//  Created by Darktt on 13/4/23.
//  Copyright © 2013 Darktt Personal Company. All rights reserved.
//

@import UIKit;

NS_ASSUME_NONNULL_BEGIN
typedef void(^UIImageViewDownloadImageCompleteHandler) (UIImageView *imageView, NSError * _Nullable error);

@interface UIImageView (ImageView)

+ (instancetype)imageViewWithFrame:(CGRect)frame;
+ (instancetype)imageViewWithImage:(UIImage *)image;

+ (instancetype)imageViewWithScreenShotFrame:(CGRect)frame;

// Get imageView in superview
+ (__kindof UIImageView * _Nullable)imageViewInView:(UIView *)superview withTag:(NSInteger)tag NS_SWIFT_NAME(imageView(inView:tag:));

- (void)setImageWithURL:(NSURL *)URL completionHandler:(UIImageViewDownloadImageCompleteHandler _Nullable)completionHandler;

- (void)setImage:(UIImage *)image animated:(BOOL)animated;
- (void)setImage:(UIImage *)image maskImage:(UIImage *)maskImage;

@end
NS_ASSUME_NONNULL_END
