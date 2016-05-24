//
//  CGRectExtension.h
//
//  Created by Darktt on 13/11/5.
//  Copyright © 2013 Darktt Personal Company. All rights reserved.
//

@import CoreGraphics.CGGeometry;

CG_INLINE CGPoint CGRectGetOrigin(CGRect rect)
{
    return rect.origin;
}

CG_INLINE CGSize CGRectGetSize(CGRect rect)
{
    return rect.size;
}

CG_INLINE CGPoint CGRectGetCenter(CGRect rect)
{
    return CGPointMake(CGRectGetMidX(rect), CGRectGetMidY(rect));
}

CG_INLINE CGRect CGRectScale(CGRect rect, CGFloat wScale, CGFloat hScale)
{
    CGAffineTransform transformScale = CGAffineTransformMakeScale(wScale, hScale);
    
    return CGRectApplyAffineTransform(rect, transformScale);
}

CG_INLINE void CGRectSetCenter(CGRect *rect, CGPoint center)
{
    CGFloat halfWidth = CGRectGetWidth(*rect) / 2.0f;
    CGFloat halfHeight = CGRectGetHeight(*rect) / 2.0f;
    
    CGRect _rect = *rect;
    _rect.origin = CGPointMake(center.x - halfWidth, center.y - halfHeight);
    
    *rect = _rect;
}