//
//  UIDevice+Version.h
//
//  Created by Darktt on 13/4/23.
//  Copyright © 2013 Darktt Personal Company. All rights reserved.
//

@import UIKit;

NS_ASSUME_NONNULL_BEGIN
@interface UIDevice (Version)

- (BOOL)systemVersionIsEqualVersion:(NSString *)version;
- (BOOL)systemVersionIsGreaterThanVersion:(NSString *)version;
- (BOOL)systemVersionIsLessThanVersion:(NSString *)version;

- (BOOL)systemVersionIsGreateThanOrEqualVersion:(NSString *)version;
- (BOOL)systemVersionIsLessThanOrEqualVersion:(NSString *)version;

@end
NS_ASSUME_NONNULL_END