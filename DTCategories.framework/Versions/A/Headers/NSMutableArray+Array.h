//
//  NSMutableArray+Array.h
//
//  Created by Darktt on 15/3/24.
//  Copyright © 2015 Darktt Personal Company. All rights reserved.
//

@import Foundation;

NS_ASSUME_NONNULL_BEGIN
@interface NSMutableArray<ObjectType> (Array)

- (void)moveObject:(ObjectType)object toIndex:(NSUInteger)toIndex;
- (void)moveObjectAtIndex:(NSUInteger)fromIndex toIndex:(NSUInteger)toIndex NS_SWIFT_NAME(moveObject(atIndex:toIndex:));

- (void)replaceObject:(ObjectType)object toObject:(ObjectType)toObject;
- (void)replaceLastObject:(ObjectType)object;

@end
NS_ASSUME_NONNULL_END