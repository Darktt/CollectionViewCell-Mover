//
//  NSDateFormatter+DateFormatter.h
//  DTTest
//
//  Created by EdenLi on 2016/1/28.
//  Copyright © 2016 Darktt Personal Company. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@interface NSDateFormatter (DateFormatter)

+ (instancetype)sharedDateFormatter;
+ (instancetype)dateFormatterWithFormat:(NSString *)format;
+ (instancetype)dateFormatterWithFormat:(NSString *)format timeZone:(nullable NSTimeZone *)timeZone;
+ (instancetype)dateFormatterWithFormat:(NSString *)format timeZone:(nullable NSTimeZone *)timeZone locate:(nullable NSLocale *)locate;

@end
NS_ASSUME_NONNULL_END
