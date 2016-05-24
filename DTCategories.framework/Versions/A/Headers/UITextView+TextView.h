//
//  UITextView+TextView.h
//
//  Created by Darktt on 13/6/2.
//  Copyright © 2013 Darktt Personal Company. All rights reserved.
//

@import UIKit;

NS_ASSUME_NONNULL_BEGIN
@interface UITextView (TextView)

+ (instancetype)textViewWithFrame:(CGRect)frame;
+ (instancetype)textViewWithFrame:(CGRect)frame text:(NSString * _Nullable)text;
+ (instancetype)textViewWithFrame:(CGRect)frame backgroundColor:(UIColor * _Nullable)bgColor;

// Get textView in superview
+ (__kindof UITextView * _Nullable)textViewInView:(UIView *)superview withTag:(NSInteger)tag NS_SWIFT_NAME(textView(inView:tag:));

@end
NS_ASSUME_NONNULL_END