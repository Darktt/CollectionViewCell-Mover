//
//  UISearchBar+SearchBar.h
//
//  Created by Darktt on 13/9/2.
//  Copyright © 2013 Darktt Personal Company. All rights reserved.
//

@import UIKit;

NS_ASSUME_NONNULL_BEGIN
@interface UISearchBar (SearchBar)

+ (instancetype)searchBarWithFrame:(CGRect)frame;

// Get searchBar in superview
+ (__kindof UISearchBar * _Nullable)searchBarInView:(UIView *)superview withTag:(NSUInteger)tag NS_SWIFT_NAME(searchBar(inView:tag:));

@end
NS_ASSUME_NONNULL_END