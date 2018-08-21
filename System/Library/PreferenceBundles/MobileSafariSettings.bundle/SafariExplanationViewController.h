/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/MobileSafariSettings.bundle/MobileSafariSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UIWebViewDelegate.h>

@protocol SafariExplanationViewControllerDelegate;
@class UIWebView, NSString;

@interface SafariExplanationViewController : UIViewController <UIWebViewDelegate> {

	UIWebView* _webView;
	id<SafariExplanationViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SafariExplanationViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SafariExplanationViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SafariExplanationViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)donePressed;
-(id)initWithTitle:(id)arg1 explanatoryHTMLResourceName:(id)arg2 fromBundle:(id)arg3 ;
@end

