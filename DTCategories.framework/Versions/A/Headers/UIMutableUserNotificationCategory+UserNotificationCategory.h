//
//  UIMutableUserNotificationCategory+UserNotificationCategory.h
//
//  Created by Darktt on 15/11/12.
//  Copyright © 2015 Darktt Personal Company. All rights reserved.
//

@import UIKit;

NS_ASSUME_NONNULL_BEGIN
@interface UIMutableUserNotificationCategory (UserNotificationCategory)

+ (instancetype)userNotificationCategoryWithIdentifier:(NSString *)identifier;

@end
NS_ASSUME_NONNULL_END