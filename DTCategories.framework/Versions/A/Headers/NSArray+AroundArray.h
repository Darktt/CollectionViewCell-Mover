//
//  NSArray+AroundArray.h
//
//  Created by Darktt on 13/3/22.
//  Copyright © 2013 Darktt Personal Company. All rights reserved.
//

@import Foundation;

NS_ASSUME_NONNULL_BEGIN
@interface NSArray<ObjectType> (AroundArray)

// Get object of index for infinity index.
- (ObjectType)aroundObjectAtIndex:(NSInteger)index NS_SWIFT_NAME(aroundObject(atIndex:));

- (ObjectType)aroundObjectAtIndex:(NSInteger)index offset:(nullable NSInteger *)offset NS_SWIFT_UNAVAILABLE("Does not support Swift vesrion.");

@end
NS_ASSUME_NONNULL_END