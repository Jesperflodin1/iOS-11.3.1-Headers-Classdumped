/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:20 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/PrimaryCloudCallingSettingsBundle.bundle/PrimaryCloudCallingSettingsBundle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UIWebViewDelegate.h>

@class UIWebView, UIActivityIndicatorView, NSURL, NSData, NSString;

@interface PHSettingsWebViewController : UIViewController <UIWebViewDelegate> {

	long long _type;
	UIWebView* _webView;
	/*^block*/id _completionBlock;
	UIActivityIndicatorView* _activityIndicator;
	NSURL* _url;
	NSData* _body;

}

@property (assign,nonatomic) long long type;                                           //@synthesize type=_type - In the implementation block
@property (nonatomic,retain,readonly) UIWebView * webView;                             //@synthesize webView=_webView - In the implementation block
@property (nonatomic,copy) id completionBlock;                                         //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;              //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,retain) NSURL * url;                                              //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSData * body;                                            //@synthesize body=_body - In the implementation block
@property (getter=isPresentingURL,nonatomic,readonly) BOOL presentingURL; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isPresentingURL;
-(void)cancelWebView;
-(void)loadWebViewWithSpinner:(/*^block*/id)arg1 ;
-(void)loadURL:(id)arg1 body:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)doWebViewTimedOut;
-(void)doProvisioningCanceled;
-(void)doProvisioningFailed;
-(void)setupControllerInWebFrame:(id)arg1 ;
-(void)doProvisioningDone;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(NSURL *)url;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)initWithType:(long long)arg1 ;
-(UIWebView *)webView;
-(NSData *)body;
-(void)setUrl:(NSURL *)arg1 ;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(void)uiWebView:(id)arg1 didClearWindowObject:(id)arg2 forFrame:(id)arg3 ;
-(void)setBody:(NSData *)arg1 ;
-(UIActivityIndicatorView *)activityIndicator;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(void)_cancelButtonClicked:(id)arg1 ;
@end

