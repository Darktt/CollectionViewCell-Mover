//
//  UIGestureRecognizer+GestureRecognizer.h
//  DTTest
//
//  Created by Darktt on 14/12/29.
//  Copyright © 2014 Darktt Personal Company. All rights reserved.
//

@import UIKit;

NS_ASSUME_NONNULL_BEGIN
@interface UIGestureRecognizer (GestureRecognizer)

+ (instancetype)gestureRecognizerWithTarget:(nullable id)target action:(nullable SEL)action;

- (void)cancel;

@end
NS_ASSUME_NONNULL_END