//
//  NSIndexPath+IndexPath.h
//
//  Created by Darktt on 16/3/24.
//  Copyright © 2016 Darktt Personal Company. All rights reserved.
//

@import Foundation;

NS_ASSUME_NONNULL_BEGIN
@interface NSIndexPath (IndexPath)

+ (NSArray<NSIndexPath *> *)indexPathsWithIndexes:(NSIndexSet *)indexes forSection:(NSInteger)section NS_SWIFT_NAME(indexPaths(withIndexes:forSection:));
+ (NSArray<NSIndexPath *> *)indexPathsWithCapacity:(NSUInteger)capacity indexPath:(NSIndexPath *)indexPath NS_SWIFT_NAME(indexPath(capacity:indexPath:));

@end
NS_ASSUME_NONNULL_END