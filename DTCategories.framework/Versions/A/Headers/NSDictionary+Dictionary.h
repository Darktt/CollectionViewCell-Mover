//
//  NSDictionary+Dictionary.h
//
//  Created by Darktt on 13/6/5.
//  Copyright © 2013 Darktt Personal Company. All rights reserved.
//

@import UIKit;

NS_ASSUME_NONNULL_BEGIN
typedef void (^NSDirectoryEnumerateBlock) (id key , id obj, BOOL *stop);

@interface NSDictionary<KeyType, ObjectType> (Dictionary)

- (BOOL)hasKey:(KeyType)key;

@end

@interface NSDictionary (UIKeyboardUserInformation)

/// Keyboard frame from UIKeyboardFrameBeginUserInfoKey.
- (CGRect)keyboardFrameBegin;

/// Keyboard frame from UIKeyboardFrameEndUserInfoKey.
- (CGRect)keyboardFrameEnd;

/// UIKeyboardAnimationCurveUserInfoKey
- (UIViewAnimationCurve)animationCurve;

/// UIKeyboardAnimationDurationUserInfoKey
- (NSTimeInterval)animationDuration;

@end
NS_ASSUME_NONNULL_END