//
//  UIView+Wobble.h
//
//  Created by Darktt on 15/10/13.
//  Copyright © 2015 Darktt Personal Company. All rights reserved.
//

@import UIKit;

@interface UIView (Wobble)

NS_ASSUME_NONNULL_BEGIN
@property (readonly, getter=isWobbling) BOOL wobbling;

- (void)startWobble;
- (void)stopWobble;

@end
NS_ASSUME_NONNULL_END