/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:24 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SFSharingExtensionWebProcessController;
@class WKWebView;

@interface _SFSafariSharingExtensionController : NSObject {

	WKWebView* _webView;
	id<SFSharingExtensionWebProcessController> _extensionControllerProxy;

}
-(id)initWithWebView:(id)arg1 ;
-(void)runJavaScriptForSharingExtension:(id)arg1 javaScript:(id)arg2 extraArguments:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)finalizeJavaScriptForSharingExtension:(id)arg1 arguments:(id)arg2 ;
-(id)_extensionControllerProxy;
@end

