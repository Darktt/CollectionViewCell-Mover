//
//  NSURL+URL.h
//
//  Created by Darktt on 13/8/12.
//  Copyright © 2013 Darktt Personal Company. All rights reserved.
//

@import Foundation;

NS_ASSUME_NONNULL_BEGIN
@interface NSURL (URL)

@property (nonatomic, readonly) NSURL *rootURL;

+ (instancetype)URLWithEncodingString:(NSString *)string;
- (instancetype)initWithEncodingString:(NSString *)string;

- (BOOL)isRootURL;

@end
NS_ASSUME_NONNULL_END