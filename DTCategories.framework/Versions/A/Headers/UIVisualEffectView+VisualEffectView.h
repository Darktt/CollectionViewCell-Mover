//
//  UIVisualEffectView+VisualEffectView.h
//
//  Created by Darktt on 14/12/29.
//  Copyright © 2014 Darktt Personal Company. All rights reserved.
//

@import UIKit;

NS_ASSUME_NONNULL_BEGIN
@interface UIVisualEffectView (VisualEffectView)

+ (instancetype)visualEffectViewWithBlurEffectStyle:(UIBlurEffectStyle)style;
+ (instancetype)visualEffectViewWithEffect:(UIVisualEffect *)effect;

@end
NS_ASSUME_NONNULL_END