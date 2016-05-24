//
//  NSTimeZone+TimeZone.h
//  DTTest
//
//  Created by EdenLi on 2016/3/4.
//  Copyright © 2016 Darktt Personal Company. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@interface NSTimeZone (TimeZone)

/**
 *  Coordinated Universal Time
 *
 *  @return The instance of NSTimeZone.
 */
+ (instancetype)UTCTimeZone;

/**
 *  Japan Standard Time
 *
 *  @return The instance of NSTimeZone.
 */
+ (instancetype)JSTTimeZone;

/**
 *  China Standard Time, for Taipei(Taiwan), Beijing(China), Shanghai(China), etc.
 *
 *  @return The instance of NSTimeZone.
 */
+ (instancetype)CSTTimeZone;

/**
 *  Singapore Time
 *
 *  @return The instance of NSTimeZone.
 */
+ (instancetype)SGTTimeZone;

/**
 *  Hong Kong Time
 *
 *  @return The instance of NSTimeZone.
 */
+ (instancetype)HKTTimeZone;

@end
NS_ASSUME_NONNULL_END