//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WKWebView;

@protocol _WKFullscreenDelegate <NSObject>

@optional
- (void)_webViewDidExitElementFullscreen:(WKWebView *)arg1;
- (void)_webViewWillExitElementFullscreen:(WKWebView *)arg1;
- (void)_webViewDidEnterElementFullscreen:(WKWebView *)arg1;
- (void)_webViewWillEnterElementFullscreen:(WKWebView *)arg1;
@end

