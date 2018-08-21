/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:38 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <libobjc.A.dylib/SUScriptInterfaceDelegate.h>
#import <libobjc.A.dylib/WebFrameLoadDelegate.h>
#import <libobjc.A.dylib/WebPolicyDelegate.h>
#import <libobjc.A.dylib/WebResourceLoadDelegate.h>
#import <libobjc.A.dylib/WebUIDelegate.h>
#import <UIKit/UIWebViewDelegate.h>

@protocol SUWebViewManagerDelegate;
@class SSAuthenticationContext, SUClientInterface, ISURLRequestPerformance, NSLock, SUWebScriptReloadContext, NSMutableSet, NSMapTable, SUScriptWindowContext, NSSet, UIWebView, NSString;

@interface SUWebViewManager : NSObject <SUScriptInterfaceDelegate, WebFrameLoadDelegate, WebPolicyDelegate, WebResourceLoadDelegate, WebUIDelegate, UIWebViewDelegate> {

	SSAuthenticationContext* _authenticationContext;
	SUClientInterface* _clientInterface;
	id<SUWebViewManagerDelegate> _delegate;
	ISURLRequestPerformance* _initialRequestPerformance;
	NSLock* _lock;
	id _originalFrameLoadDelegate;
	id _originalPolicyDelegate;
	id _originalResourceLoadDelegate;
	id _originalUIDelegate;
	SUWebScriptReloadContext* _pendingWebScriptReloadContext;
	NSMutableSet* _requireCellularURLs;
	NSMapTable* _scriptInterfaces;
	SUScriptWindowContext* _scriptWindowContext;
	BOOL _shouldSignRequests;
	NSSet* _suppressCookiesHosts;
	long long _usingNetworkCount;
	CFSetRef _webFramesPendingInitialRequest;
	UIWebView* _webView;

}

@property (nonatomic,retain) id originalFrameLoadDelegate;                                     //@synthesize originalFrameLoadDelegate=_originalFrameLoadDelegate - In the implementation block
@property (nonatomic,retain) id originalPolicyDelegate;                                        //@synthesize originalPolicyDelegate=_originalPolicyDelegate - In the implementation block
@property (nonatomic,retain) id originalResourceLoadDelegate;                                  //@synthesize originalResourceLoadDelegate=_originalResourceLoadDelegate - In the implementation block
@property (nonatomic,retain) id originalUIDelegate;                                            //@synthesize originalUIDelegate=_originalUIDelegate - In the implementation block
@property (nonatomic,__weak,readonly) UIWebView * webView;                                     //@synthesize webView=_webView - In the implementation block
@property (assign,nonatomic) id<SUWebViewManagerDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) SSAuthenticationContext * authenticationContext;                    //@synthesize authenticationContext=_authenticationContext - In the implementation block
@property (nonatomic,retain) ISURLRequestPerformance * initialRequestPerformance;              //@synthesize initialRequestPerformance=_initialRequestPerformance - In the implementation block
@property (nonatomic,retain) SUScriptWindowContext * scriptWindowContext;                      //@synthesize scriptWindowContext=_scriptWindowContext - In the implementation block
@property (assign,nonatomic) BOOL shouldSignRequests;                                          //@synthesize shouldSignRequests=_shouldSignRequests - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultLocalStoragePath;
-(id)init;
-(id<SUWebViewManagerDelegate>)delegate;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(void)setDelegate:(id<SUWebViewManagerDelegate>)arg1 ;
-(void)dealloc;
-(id)_delegate;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(UIWebView *)webView;
-(void)forwardInvocation:(id)arg1 ;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5 ;
-(void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2 ;
-(void)webView:(id)arg1 didReceiveTitle:(id)arg2 forFrame:(id)arg3 ;
-(void)webView:(id)arg1 didClearWindowObject:(id)arg2 forFrame:(id)arg3 ;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(void)uiWebView:(id)arg1 decidePolicyForMIMEType:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5 ;
-(void)webViewDidStartLoad:(id)arg1 ;
-(id)uiWebView:(id)arg1 connectionPropertiesForResource:(id)arg2 dataSource:(id)arg3 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(id)uiWebView:(id)arg1 identifierForInitialRequest:(id)arg2 fromDataSource:(id)arg3 ;
-(void)uiWebView:(id)arg1 resource:(id)arg2 didFinishLoadingFromDataSource:(id)arg3 ;
-(void)uiWebView:(id)arg1 resource:(id)arg2 didFailLoadingWithError:(id)arg3 fromDataSource:(id)arg4 ;
-(id)webThreadWebView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5 ;
-(void)webView:(id)arg1 didFirstLayoutInFrame:(id)arg2 ;
-(void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 ;
-(BOOL)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 ;
-(id)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4 ;
-(void)webView:(id)arg1 resource:(id)arg2 didReceiveResponse:(id)arg3 fromDataSource:(id)arg4 ;
-(id)initWithClientInterface:(id)arg1 ;
-(id)DOMElementForScriptInterface:(id)arg1 element:(id)arg2 ;
-(id)parentViewControllerForScriptInterface:(id)arg1 ;
-(void)scriptInterface:(id)arg1 requireCellularForResourceWithURL:(id)arg2 ;
-(id)performanceMetricsForScriptInterface:(id)arg1 ;
-(void)dispatchEvent:(id)arg1 forName:(id)arg2 ;
-(SUScriptWindowContext *)scriptWindowContext;
-(void)setScriptWindowContext:(SUScriptWindowContext *)arg1 ;
-(void)webView:(id)arg1 documentViewDidSetFrame:(CGRect)arg2 ;
-(void)_requestWebScriptReloadWithContext:(id)arg1 ;
-(void)disconnectFromWebView;
-(void)setInitialRequestPerformance:(ISURLRequestPerformance *)arg1 ;
-(void)setShouldSignRequests:(BOOL)arg1 ;
-(void)connectToWebView:(id)arg1 ;
-(void)dispatchEvent:(id)arg1 forName:(id)arg2 synchronously:(BOOL)arg3 ;
-(BOOL)shouldSignRequests;
-(void)_cancelUsingNetwork;
-(void)setOriginalFrameLoadDelegate:(id)arg1 ;
-(void)setOriginalPolicyDelegate:(id)arg1 ;
-(void)setOriginalResourceLoadDelegate:(id)arg1 ;
-(void)setOriginalUIDelegate:(id)arg1 ;
-(void)_enumerateScriptInterfacesWithBlock:(/*^block*/id)arg1 ;
-(void)_endUsingNetwork;
-(void)_beginUsingNetwork;
-(id)_userIdentifier;
-(id)_locateStorePageViewController;
-(BOOL)_presentModalAlertWithMessage:(id)arg1 includingCancelButton:(BOOL)arg2 configurationHandler:(/*^block*/id)arg3 ;
-(void)webView:(id)arg1 didParseSource:(id)arg2 fromURL:(id)arg3 sourceId:(long long)arg4 forWebFrame:(id)arg5 ;
-(void)webView:(id)arg1 failedToParseSource:(id)arg2 baseLineNumber:(unsigned long long)arg3 fromURL:(id)arg4 withError:(id)arg5 forWebFrame:(id)arg6 ;
-(void)webView:(id)arg1 exceptionWasRaised:(id)arg2 sourceId:(long long)arg3 line:(int)arg4 forWebFrame:(id)arg5 ;
-(ISURLRequestPerformance *)initialRequestPerformance;
-(id)originalFrameLoadDelegate;
-(id)originalPolicyDelegate;
-(id)originalResourceLoadDelegate;
-(id)originalUIDelegate;
-(void)setAuthenticationContext:(SSAuthenticationContext *)arg1 ;
-(SSAuthenticationContext *)authenticationContext;
@end

