//
//  UIToolbar+Toolbar.h
//
//  Created by Darktt on 13/9/9.
//  Copyright © 2013 Darktt Personal Company. All rights reserved.
//

@import UIKit;

NS_ASSUME_NONNULL_BEGIN
@interface UIToolbar (Toolbar)

+ (instancetype)toolbarWithFrame:(CGRect)frame;

// Get toolbar in superview
+ (__kindof UIToolbar * _Nullable)toolbarInView:(UIView *)superview withTag:(NSInteger)tag NS_SWIFT_NAME(toolbar(inView:tag:));

// Get UIBarButtonItem from current items
- (__kindof UIBarButtonItem *)itemAtIndex:(NSUInteger)index;

@end
NS_ASSUME_NONNULL_END