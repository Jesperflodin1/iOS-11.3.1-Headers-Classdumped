/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:18 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QLItemAggregatedViewController.h>

@class QLItem, QLPasswordItemViewController, QLWKWebItemViewController;

@interface QLProtectedItemViewController : QLItemAggregatedViewController {

	QLItem* _previewItem;
	QLPasswordItemViewController* _passwordItemViewController;
	QLWKWebItemViewController* _webViewController;

}

@property (retain) QLPasswordItemViewController * passwordItemViewController;              //@synthesize passwordItemViewController=_passwordItemViewController - In the implementation block
@property (retain) QLWKWebItemViewController * webViewController;                          //@synthesize webViewController=_webViewController - In the implementation block
+(Class)transformerClass;
+(BOOL)shouldBeRemoteForContentType:(id)arg1 ;
+(id)supportedContentTypes;
-(void)dealloc;
-(void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setPasswordItemViewController:(QLPasswordItemViewController *)arg1 ;
-(QLPasswordItemViewController *)passwordItemViewController;
-(QLWKWebItemViewController *)webViewController;
-(void)setWebViewController:(QLWKWebItemViewController *)arg1 ;
@end

