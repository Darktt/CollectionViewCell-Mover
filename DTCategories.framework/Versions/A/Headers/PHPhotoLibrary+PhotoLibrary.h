//
//  PHPhotoLibrary+PhotoLibrary.h
//
//  Created by Darktt on 14/11/4.
//  Copyright © 2014 Darktt Personal Company. All rights reserved.
//

@import Photos.PHPhotoLibrary;

@class UIImage;

NS_ASSUME_NONNULL_BEGIN
typedef dispatch_block_t PHPhotoLibraryCompletionHandler;
typedef void (^PHPhotoLibraryAccessFailureHandler) (BOOL success, NSError * _Nullable error);

@interface PHPhotoLibrary (PhotoLibrary)

// Create collection (aka album). will not check the collection name is exist.
- (void)createCollectionWithName:(NSString *)name completionHandler:(PHPhotoLibraryCompletionHandler _Nullable)completionHandler failureHandle:(PHPhotoLibraryAccessFailureHandler _Nullable)failureHandler;

// Add image to camera roll.
- (void)addImage:(UIImage *)image completionHandler:(PHPhotoLibraryCompletionHandler _Nullable)completionHandler failureHandle:(PHPhotoLibraryAccessFailureHandler _Nullable)failureHandler;
- (void)addImageAtFileURL:(NSURL *)fileURL completionHandler:(PHPhotoLibraryCompletionHandler _Nullable)completionHandler failureHandle:(PHPhotoLibraryAccessFailureHandler _Nullable)failureHandler;

// Add video to camera roll.
- (void)addVideoAtFileURL:(NSURL *)fileURL completionHandler:(PHPhotoLibraryCompletionHandler _Nullable)completionHandler failureHandle:(PHPhotoLibraryAccessFailureHandler _Nullable)failureHandler;

// Add image to collection.
- (void)addImage:(UIImage *)image toCollectionWithName:(NSString *)collectionName completionHandler:(PHPhotoLibraryCompletionHandler _Nullable)completionHandler failureHandle:(PHPhotoLibraryAccessFailureHandler _Nullable)failureHandler;
- (void)addImageAtFileURL:(NSURL *)fileURL toCollectionWithName:(NSString *)collectionName completionHandler:(PHPhotoLibraryCompletionHandler _Nullable)completionHandler failureHandle:(PHPhotoLibraryAccessFailureHandler _Nullable)failureHandler;

// Add video to collection.
- (void)addVideoAtFileURL:(NSURL *)fileURL toCollectionWithName:(NSString *)collectionName completionHandler:(PHPhotoLibraryCompletionHandler _Nullable)completionHandler failureHandle:(PHPhotoLibraryAccessFailureHandler _Nullable)failureHandler;

// Delete assets from camera roll.
- (void)deleteAssets:(id<NSFastEnumeration>)assets completionHandler:(PHPhotoLibraryCompletionHandler _Nullable)completionHandler failureHandle:(PHPhotoLibraryAccessFailureHandler )failureHandler;

// Remove assets from collection.
- (void)removeAssets:(id<NSFastEnumeration>)assets fromCollectionWithName:(NSString *)collectionName completionHandler:(PHPhotoLibraryCompletionHandler _Nullable)completionHandler failureHandle:(PHPhotoLibraryAccessFailureHandler _Nullable)failureHandler;

@end
NS_ASSUME_NONNULL_END