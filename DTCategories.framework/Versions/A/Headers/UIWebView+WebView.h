//
//  UIWebView+WebView.h
//
//  Created by Darktt on 13/1/16.
//  Copyright © 2013 Darktt Personal Company. All rights reserved.
//

@import UIKit;

NS_ASSUME_NONNULL_BEGIN
@interface UIWebView (WebView)

+ (instancetype)webViewWithFrame:(CGRect)frame;
+ (instancetype)webViewWithFrame:(CGRect)frame URL:(NSURL *)url;
+ (instancetype)webViewWithFrame:(CGRect)frame URL:(NSURL *)url delegate:(id<UIWebViewDelegate> _Nullable)delegate;
+ (instancetype)webViewWithContentsOfFile:(NSString *)filePath;

// Get webView in superview
+ (__kindof UIWebView * _Nullable)webViewInView:(UIView *)superview withTag:(NSUInteger)tag NS_SWIFT_NAME(webView(inView:tag:));

@end
NS_ASSUME_NONNULL_END
