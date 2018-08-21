/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:43 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/SafariShared-Structs.h>
#import <SafariShared/WBSSiteMetadataFetchOperation.h>
#import <libobjc.A.dylib/WKNavigationDelegate.h>

@protocol WBSWebViewMetadataFetchOperationDelegate;
@class WKWebView, WKWebViewConfiguration, NSString;

@interface WBSWebViewMetadataFetchOperation : WBSSiteMetadataFetchOperation <WKNavigationDelegate> {

	id<WBSWebViewMetadataFetchOperationDelegate> _delegate;
	WKWebView* _webView;

}

@property (assign,nonatomic,__weak) id<WBSWebViewMetadataFetchOperationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) WKWebView * webView;                                                     //@synthesize webView=_webView - In the implementation block
@property (nonatomic,readonly) WKWebViewConfiguration * webViewConfiguration; 
@property (nonatomic,readonly) CGSize webViewSize; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancel;
-(id<WBSWebViewMetadataFetchOperationDelegate>)delegate;
-(void)setDelegate:(id<WBSWebViewMetadataFetchOperationDelegate>)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(void)start;
-(WKWebView *)webView;
-(void)clearWebView;
-(void)setUpWebViewIfNeeded;
-(void)didFailFetch;
-(void)willClearWebView;
-(void)startOffscreenFetching;
-(CGSize)webViewSize;
-(WKWebViewConfiguration *)webViewConfiguration;
-(void)didCreateWebView;
-(void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3 ;
-(void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3 ;
-(void)_webViewWebProcessDidCrash:(id)arg1 ;
@end

