//
//  PHCollection+Collection.h
//
//  Created by Darktt on 14/11/4.
//  Copyright © 2014 Darktt Personal Company. All rights reserved.
//

@import Photos.PHCollection;

NS_ASSUME_NONNULL_BEGIN
@interface PHCollection (Collection)

// Fetch create by user collections.
+ (PHFetchResult<PHCollection *> *)fetchTopLevelUserCollectionsWithName:(NSString *)name;

@end
NS_ASSUME_NONNULL_END