//
//  NSNumber+Mathematica.h
//
//  Created by Darktt on 13/12/20.
//  Copyright © 2013 Darktt Personal Company. All rights reserved.
//

@import Foundation;
@import CoreGraphics;

NS_ASSUME_NONNULL_BEGIN
@interface NSNumber (Mathematica)

- (NSArray<NSNumber *> *)squareFactorization;

@end

@interface NSNumber (CGFloatAddition)

@property (readonly) CGFloat CGFloatValue;

+ (instancetype)numberWithCGFloat:(CGFloat)floatValue;
- (instancetype)initWithCGFloat:(CGFloat)value;

@end
NS_ASSUME_NONNULL_END