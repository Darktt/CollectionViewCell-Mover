//
//  UITableView+TableView.h
//
//  Created by Darktt on 13/3/22.
//  Copyright © 2013 Darktt Personal Company. All rights reserved.
//

@import UIKit;

NS_ASSUME_NONNULL_BEGIN
@interface UITableView (TableView)

+ (instancetype)tableViewWithFrame:(CGRect)frame style:(UITableViewStyle)tableViewStyle forTarget:(nullable id<UITableViewDataSource, UITableViewDelegate>)target;

- (instancetype)initWithFrame:(CGRect)frame style:(UITableViewStyle)tableViewStyle forTarget:(nullable id<UITableViewDataSource, UITableViewDelegate>)target;

- (NSIndexPath * _Nullable)indexPathForRowAtView:(UIView *)view;

- (void)reloadRow:(NSUInteger)row inSection:(NSUInteger)section withRowAnimation:(UITableViewRowAnimation)animation;
- (void)reloadRowAtIndexPath:(NSIndexPath *)indexPath withRowAnimation:(UITableViewRowAnimation)animation;
- (void)reloadSection:(NSUInteger)section withRowAnimation:(UITableViewRowAnimation)animation;

- (void)insertRow:(NSUInteger)row inSection:(NSUInteger)section withRowAnimation:(UITableViewRowAnimation)animation;
- (void)insertRowAtIndexPath:(NSIndexPath *)indexPath withRowAnimation:(UITableViewRowAnimation)animation;
- (void)insertSection:(NSUInteger)section withRowAnimation:(UITableViewRowAnimation)animation;

- (void)deleteRow:(NSUInteger)row inSection:(NSUInteger)section withRowAnimation:(UITableViewRowAnimation)animation;
- (void)deleteRowAtIndexPath:(NSIndexPath *)indexPath withRowAnimation:(UITableViewRowAnimation)animation;
- (void)deleteSection:(NSUInteger)section withRowAnimation:(UITableViewRowAnimation)animation;

- (void)scrollToRow:(NSUInteger)row inSection:(NSUInteger)section atScrollPosition:(UITableViewScrollPosition)scrollPosition animated:(BOOL)animated;

// Get tableView in superview
+ (__kindof UITableView * _Nullable)tableViewInView:(UIView *)superview withTag:(NSInteger)tag NS_SWIFT_NAME(tableView(inView:tag:));

@end
NS_ASSUME_NONNULL_END