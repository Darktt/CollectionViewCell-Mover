//
//  UIImage+resizeImage.h
//
//  Created by Darktt on 13/4/3.
//  Copyright © 2013 Darktt Personal Company. All rights reserved.
//

@import UIKit;

NS_ASSUME_NONNULL_BEGIN
@interface UIImage (ResizeImage)

+ (UIImage *)resizeImageWithSourceImageName:(NSString *)sourceName forMaxSize:(CGFloat)maxSize;

@end
NS_ASSUME_NONNULL_END