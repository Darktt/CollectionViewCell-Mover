//
//  UIButton+RoundedRectButton.h
//
//  Created by Darktt on 14/7/31.
//  Copyright © 2014 Darktt Personal Company. All rights reserved.
//

@import UIKit;

NS_ASSUME_NONNULL_BEGIN
@interface UIButton (RoundedRectButton)

+ (instancetype)roundRectButtonWithFrame:(CGRect)frame byRoundingCorners:(UIRectCorner)corners NS_SWIFT_NAME(roundRectButton(frame:roundingCorners:));

@end
NS_ASSUME_NONNULL_END