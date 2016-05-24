//
//  NSString+String.h
//
//  Created by Darktt on 12/12/30.
//  Copyright © 2012 Darktt Personal Company. All rights reserved.
//

@import Foundation;
@import CoreGraphics;
@import CoreLocation;

NS_ASSUME_NONNULL_BEGIN

extern NSString *NSStringFromBool(BOOL boolValue);
extern NSString *NSStringFromCLLocationDistance(CLLocationDistance distance, NSLocale *__nullable locale);

@interface NSString (String)

@property (readonly, getter = isEmailAddress) BOOL emailAddress;
@property (readonly, getter = isPhoneNumber) BOOL phoneNumber;

+ (instancetype)stringWithInteger:(NSInteger)integer;
+ (instancetype)stringWithFloat:(float)floatValue numberOfDecimalPlaces:(NSUInteger)decimal;

+ (instancetype _Nullable)jsonStringWithObject:(id)object error:(NSError * _Nullable * _Nullable)error NS_SWIFT_NAME(jsonString(object:));
+ (instancetype _Nullable)jsonStringWithArray:(NSArray<id> *)array error:(NSError * _Nullable * _Nullable)error NS_SWIFT_NAME(jsonString(_:));
+ (instancetype _Nullable)jsonStringWithDictionary:(NSDictionary<NSString *, id> *)dictionary error:(NSError * _Nullable * _Nullable)error NS_SWIFT_NAME(jsonString(_:));

- (instancetype)initWithInteger:(NSInteger)integer;
- (instancetype)initWithFloat:(float)floatValue numberOfDecimalPlaces:(NSUInteger)decimal;

- (BOOL)containString:(NSString *)string;
- (BOOL)hasPrefix:(NSString *)prefix caseInsensitive:(BOOL)caseInsensitive;
- (BOOL)hasSuffix:(NSString *)suffix caseInsensitive:(BOOL)caseInsensitive;
- (BOOL)isAddressWithError:(NSError * __nullable * __nullable)error;

- (NSString *)lowercasePathExtension;
- (NSString *)stringByTrimmingWithFromString:(NSString *)fromString toString:(NSString *)toString;
- (NSString *)stringByAddingPercentEncoding;

- (long long)hexLongLongValue;
- (NSInteger)hexIntegerValue;

@end

@interface NSString (BinaryCodedDecimal)

+ (instancetype)stringWithBCDChar:(char *)BCDChar;
- (instancetype)initWithBCDChar:(char *)BCDChar;

@end

@interface NSString (MD5)

- (NSString *)MD5String;

@end
NS_ASSUME_NONNULL_END