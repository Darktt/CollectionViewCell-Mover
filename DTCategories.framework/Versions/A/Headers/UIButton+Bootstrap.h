//
//  UIButton+Bootstrap.h
//
//  Created by Darktt on 13/10/14.
//  Copyright © 2013 Darktt Personal Company. All rights reserved.
//

@import UIKit;

typedef NS_ENUM(NSInteger, DTBootstrapStyle) {
    DTBootstrapStyleDefault = 0,
    DTBootstrapStylePrimary,
    DTBootstrapStyleSuccess,
    DTBootstrapStyleInfo,
    DTBootstrapStyleWarning,
    DTBootstrapStyleDanger
};

NS_ASSUME_NONNULL_BEGIN
@interface UIButton (Bootstrap)

+ (instancetype)bootstrapButtonWithFrame:(CGRect)frame style:(DTBootstrapStyle)style NS_SWIFT_NAME(bootstrapButton(frame:style:));
- (instancetype)initWithFrame:(CGRect)frame style:(DTBootstrapStyle)style;

@end
NS_ASSUME_NONNULL_END