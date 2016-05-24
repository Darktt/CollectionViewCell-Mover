//
//  UIPickerView+PickerView.h
//
//  Created by Darktt on 16/3/28.
//  Copyright © 2016 Darktt Personal Company. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
@interface UIPickerView (PickerView)

+ (instancetype)pickerViewWithFrame:(CGRect)frame;

// Get pickerView in superview
+ (__kindof UIPickerView * _Nullable)pickerViewInView:(UIView *)superview withTag:(NSUInteger)tag NS_SWIFT_NAME(pickerView(inView:tag:));

@end
NS_ASSUME_NONNULL_END