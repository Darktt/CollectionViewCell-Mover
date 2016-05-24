//
//  UIView+View.h
//
//  Created by Darktt on 13/4/15.
//  Copyright © 2013 Darktt Personal Company. All rights reserved.
//

@import UIKit;

NS_ASSUME_NONNULL_BEGIN

typedef void (^UIViewAnimationsBlock) (void);
typedef void (^UIViewCompletionBlock) (BOOL finshed);

UIKIT_EXTERN UIViewAnimationOptions UIViewAnimationOptionsFromCurve(UIViewAnimationCurve curve);

@interface UIView (View)

@property (nonatomic, assign) CGPoint   origin;
@property (nonatomic, assign) CGSize    size;
@property (nonatomic, assign) CGFloat   x;
@property (nonatomic, assign) CGFloat   y;
@property (nonatomic, assign) CGFloat   width;
@property (nonatomic, assign) CGFloat   height;

+ (instancetype)viewWithFrame:(CGRect)frame;
+ (instancetype)viewWithFrame:(CGRect)frame backgroundColor:(UIColor * _Nullable)bgColor;

- (void)addSubviews:(NSArray<__kindof UIView *> *)views;
- (void)removeAllSubviews;

- (__kindof UIView * _Nullable)findFirstResponder;

@end
NS_ASSUME_NONNULL_END