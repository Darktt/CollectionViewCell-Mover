//
//  NSURLSession+URLSession.h
//
//  Created by Darktt on 16/1/13.
//  Copyright © 2016 Darktt Personal Company. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void (^NSURLSessionDataTaskHandler)(NSData *__nullable data, NSURLResponse *__nullable response, NSError *__nullable error);
typedef void (^NSURLSessionDownloadTaskHandler)(NSURL * __nullable location, NSURLResponse * __nullable response, NSError * __nullable error);


NS_ASSUME_NONNULL_BEGIN
@interface NSURLSession (URLSession)

+ (instancetype)defaultSession;
+ (instancetype)defaultSessionWithQueue:(NSOperationQueue *)queue NS_SWIFT_NAME(defaultSession(queue:));
+ (instancetype)defaultSessionWithDelegate:(id<NSURLSessionDelegate>)delegate NS_SWIFT_NAME(defaultSession(delegate:));
+ (instancetype)defaultSessionWithDelegate:(nullable id<NSURLSessionDelegate>)delegate delegateQueue:(NSOperationQueue *)delegateQueue NS_SWIFT_NAME(defaultSession(delegate:queue:));

@end
NS_ASSUME_NONNULL_END