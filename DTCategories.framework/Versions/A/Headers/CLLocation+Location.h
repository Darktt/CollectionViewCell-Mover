//
//  CLLocation+Location.h
//
//  Created by Darktt on 15/4/20.
//  Copyright © 2015 Darktt Personal Company. All rights reserved.
//

@import CoreLocation;

NS_ASSUME_NONNULL_BEGIN
@interface CLLocation (Location)

CL_EXTERN NSString *NSStringFromCLLocationCoordinate2D(CLLocationCoordinate2D coordinate);

+ (instancetype)locationWithCoordinate:(CLLocationCoordinate2D)coordinate;
+ (instancetype)locationWithLatitude:(CLLocationDegrees)latitude longitude:(CLLocationDegrees)longitude;

- (instancetype)initWithCoordinate:(CLLocationCoordinate2D)coordinate;

/*!
 @method compare:
 @param otherLocation
 The location for compare.
 
 @abstract
 Compare two locations.
 
 @result
 NSOrderedAscending is two locations not at same point.
 NSOrderedSame is two locations at same point.
 
 */
- (NSComparisonResult)compare:(CLLocation *)otherLocation;

- (BOOL)isEqualLocation:(CLLocation *)otherLocation;

@end
NS_ASSUME_NONNULL_END