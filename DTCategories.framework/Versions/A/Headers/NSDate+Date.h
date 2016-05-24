//
//  NSDate+Date.h
//
//  Created by Darktt on 13/12/23.
//  Copyright © 2013 Darktt Personal Company. All rights reserved.
//

@import Foundation;

NS_ASSUME_NONNULL_BEGIN
@interface NSDate (Date)

// Past date
- (NSDate *)pastDateForDays:(NSInteger)days NS_SWIFT_NAME(pastDate(forDays:));
- (NSDate *)pastDateForMonths:(NSInteger)months NS_SWIFT_NAME(pastDate(forMonths:));
- (NSDate *)pastDateForYears:(NSInteger)years NS_SWIFT_NAME(pastDate(forYears:));

// Future date
- (NSDate *)futureDateForDays:(NSInteger)days NS_SWIFT_NAME(futureDate(forDays:));
- (NSDate *)futureDateForMonths:(NSInteger)months NS_SWIFT_NAME(futureDate(forMonths:));
- (NSDate *)futureDateForYears:(NSInteger)years NS_SWIFT_NAME(futureDate(forYears:));

// Get date for nearest minites.
- (NSDate *)nearestMinutes:(NSTimeInterval)minites;

// Time interval string.
- (NSString *)timeIntervalStringSinceDate:(NSDate *)anotherDate;
- (NSString *)timeIntervalStringSinceNow;

@end
NS_ASSUME_NONNULL_END