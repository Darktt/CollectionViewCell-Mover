//
//  NSDate+DateFormatter.h
//
//  Created by Darktt on 13/12/31.
//  Copyright © 2013 Darktt Personal Company. All rights reserved.
//

@import Foundation;

NS_ASSUME_NONNULL_BEGIN
@interface NSDate (DateFormatter)

@property (readonly, getter=isLeapYear) BOOL leapYear;

+ (BOOL)isLeapYear:(NSInteger)year;

/* Convert NSString type date string to NSDate */
+ (instancetype _Nullable)dateFromString:(NSString *)dateString format:(NSString *)format;

/* Get NSString type date */
+ (NSString *)getDateStringWithFormat:(NSString *)format;

- (NSString *)stringWithFormat:(NSString *)format;

// Time

/* Current Time, Like 10:20:52 (format: HH:mm:ss) */
- (NSString *)getCurrentTime;

- (NSString *)getSecond;
- (NSString *)getMinute;
- (NSString *)getHour;

// Date

/* Current Date, Like 10/15 (format: MM/dd) */
- (NSString *)getCurrentDate;

- (NSString *)getDay;
- (NSString *)getMonth;
- (NSString *)getShortMonth;
- (NSString *)getLongMonth;
- (NSString *)getShortWeek;
- (NSString *)getLongWeek;
- (NSString *)getShortYear;
- (NSString *)getLongYear;

/**
 *  Get days in given month
 *
 *  @param month The month of current year, range is 1 ~ 12.
 *
 *  @return Number of days.
 */
+ (NSUInteger)daysInMonth:(NSUInteger)month;

+ (NSUInteger)daysInYear:(NSUInteger)year;

@end
NS_ASSUME_NONNULL_END