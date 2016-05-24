//
//  ALAssetsLibrary+SaveAsset.h
//
//  Created by Darktt on 13/7/24.
//  Copyright © 2013 Darktt Personal Company. All rights reserved.
//

@import AssetsLibrary;

NS_ASSUME_NONNULL_BEGIN
typedef void (^ALAssetsLibrarySaveCompletionBlock) ( NSError * _Nullable );

@class UIImage;

@interface ALAssetsLibrary (SaveAsset)

// Save Image File Into Exist Album.
- (void)saveImageToAlbumWithImage:(UIImage *)image album:(NSString *)albumName completionBlock:(nullable ALAssetsLibrarySaveCompletionBlock)completionBlock;

// Save Video To Album
- (void)saveVideoToAlbumWithPath:(NSString *)path album:(NSString *)albumName completionBlock:(nullable ALAssetsLibrarySaveCompletionBlock)completionBlock;

- (void)saveVideoToAlbumWithURL:(NSURL *)resourceURL album:(NSString *)albumName completionBlock:(nullable ALAssetsLibrarySaveCompletionBlock)completionBlock;

// Add Asset To Exist Album.
- (void)addAssetToAlbumWithAssetURL:(NSURL *)assetURL album:(NSString *)albumName completionBlock:(nullable ALAssetsLibrarySaveCompletionBlock)completionBlock;

@end
NS_ASSUME_NONNULL_END