//
//  NSUserDefaults+UserDefaults.h
//
//  Created by Darktt on 15/11/18.
//  Copyright © 2015 Darktt Personal Company. All rights reserved.
//

@import Foundation;

NS_ASSUME_NONNULL_BEGIN
@interface NSUserDefaults (UserDefaults)

- (nullable id)objectForKeyedSubscript:(NSString *)key;
- (void)setObject:(nullable id)object forKeyedSubscript:(NSString *)key;

@end
NS_ASSUME_NONNULL_END