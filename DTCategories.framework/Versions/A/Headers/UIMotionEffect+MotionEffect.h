//
//  UIMotionEffect+MotionEffect.h
//
//  Created by Darktt on 15/1/7.
//  Copyright © 2015 Darktt Personal Company. All rights reserved.
//

@import UIKit;

NS_ASSUME_NONNULL_BEGIN
@interface UIMotionEffect (MotionEffect)

+ (instancetype)motionEffectWithKeyPath:(NSString *)keyPath relativeValue:(CGFloat)relativeValue;

@end

@interface UIMotionEffectGroup (MotionEffect)

- (instancetype)initWithEffectWithKeyPath:(NSString *)keyPath relativeValue:(CGFloat)relativeValue;

@end
NS_ASSUME_NONNULL_END