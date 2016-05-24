//
//  NSDictionary+InfoPlist.h
//  CueME
//
//  Created by Darktt on 15/7/3.
//  Copyright © 2015 realtime. All rights reserved.
//

@import Foundation;

NS_ASSUME_NONNULL_BEGIN
@interface NSDictionary (InfoPlist)

+ (instancetype)infoDictionary;
+ (instancetype)localizedInfoDictionary;

- (NSString *)bundleVersion;
- (NSString *)bundleShortVersion;

- (NSString *)bundleName;
- (NSString *)bundleDisplayName;

@end
NS_ASSUME_NONNULL_END