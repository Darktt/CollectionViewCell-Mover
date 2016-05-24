//
//  NSArray+Array.h
//
//  Created by Darktt on 15/5/19.
//  Copyright © 2015 Darktt Personal Company. All rights reserved.
//

@import Foundation;

NS_ASSUME_NONNULL_BEGIN
typedef void (^NSArrayEnumerateBlock) (id obj, NSUInteger idx, BOOL *stop);

@interface NSArray<ObjectType> (Array)

- (BOOL)containsString:(NSString *)aString;

// Revert array content object.
- (NSArray<ObjectType> *)reverseArray;

- (NSArray<ObjectType> *)objectsFromRange:(NSRange)range NS_SWIFT_NAME(objects(fromRange:));

@end
NS_ASSUME_NONNULL_END