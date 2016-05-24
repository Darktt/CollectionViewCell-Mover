//
//  NSOperationQueue+OperationQueue.h
//
//  Created by Darktt on 15/11/19.
//  Copyright © 2015 Darktt Personal Company. All rights reserved.
//

@import Foundation;

NS_ASSUME_NONNULL_BEGIN
typedef void (^NSOperationQueueBlock) (void);

extern void RequestMainQueue(NSOperationQueueBlock block);

@interface NSOperationQueue (OperationQueue)

+ (void)addOperationBlockInMainQueue:(NSOperationQueueBlock)block;

@end
NS_ASSUME_NONNULL_END