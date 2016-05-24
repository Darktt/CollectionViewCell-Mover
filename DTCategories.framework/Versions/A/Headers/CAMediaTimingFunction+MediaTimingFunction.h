//
//  CAMediaTimingFunction+MediaTimingFunction.h
//
//  Created by Darktt on 15/11/24.
//  Copyright © 2015 Darktt Personal Company. All rights reserved.
//

@import QuartzCore.CAMediaTimingFunction;

NS_ASSUME_NONNULL_BEGIN
@interface CAMediaTimingFunction (MediaTimingFunction)

+ (instancetype)functionWithControlPoint1:(CGPoint)point1 controlPoint2:(CGPoint)point2;

- (instancetype)initWithControlPoint1:(CGPoint)point1 controlPoint2:(CGPoint)point2;

@end
NS_ASSUME_NONNULL_END