//
//  UIImage+ColorPicker.h
//
//  Created by Darktt on 15/3/19.
//  Copyright © 2015 Darktt Personal Company. All rights reserved.
//

@import UIKit;

NS_ASSUME_NONNULL_BEGIN
@interface UIImage (ColorPicker)

- (UIColor *)pickColorWithPoint:(CGPoint)point;
- (CGPoint)convertPoint:(CGPoint)viewPoint fromImageView:(UIImageView *)imageView;

@end
NS_ASSUME_NONNULL_END