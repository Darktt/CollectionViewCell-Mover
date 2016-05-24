//
//  UISegmentedControl+SegmentedControl.h
//
//  Created by Darktt on 16/3/12.
//  Copyright © 2016 Darktt Personal Company. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
@interface UISegmentedControl (SegmentedControl)

+ (instancetype)segmentedControlWithItems:(nullable NSArray *)items;

- (void)setTitles:(NSArray<NSString *> *)titles;
- (void)setImages:(NSArray<UIImage *> *)images;

+ (__kindof UISegmentedControl * _Nullable)segmentedControlInView:(UIView *)superview withTag:(NSUInteger)tag NS_SWIFT_NAME(segmentedControl(inView:tag:));

@end
NS_ASSUME_NONNULL_END