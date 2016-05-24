//
//  CGAffineTransformExtension.h
//
//  Created by Darktt on 15/1/31.
//  Copyright © 2015 Darktt Personal Company. All rights reserved.
//

#include <math.h>
@import UIKit.UIKitDefines;
@import CoreGraphics;

#ifndef CGAffineTransformExtension_h
#define CGAffineTransformExtension_h

struct CGAffineScale {
    CGFloat tx;
    CGFloat ty;
};
typedef struct CGAffineScale CGAffineScale;

CG_EXTERN NSString *NSStringFromCGAffineScale(CGAffineScale scale);
CG_EXTERN CGFloat ConvertRadiansFromDegrees(CGFloat degrees);

#pragma mark - CGAffineTransfrom Extension

CG_EXTERN double CGAffineTransformGetAngle(CGAffineTransform t) CG_AVAILABLE_STARTING(__MAC_10_0, __IPHONE_2_0);

CG_EXTERN CGAffineScale CGAffineTransformGetScale(CGAffineTransform t) CG_AVAILABLE_STARTING(__MAC_10_0, __IPHONE_2_0);

#endif