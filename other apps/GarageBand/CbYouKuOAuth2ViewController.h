//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIWebViewDelegate-Protocol.h"

@class CbYouKuExporterService, NSString, UIWebView;

@interface CbYouKuOAuth2ViewController : UIViewController <UIWebViewDelegate>
{
    UIWebView *_webView;
    NSString *_usersCodeToGetAccessToken;
    CbYouKuExporterService *youKuExporterService;
    NSString *usersAccessToken;
    NSString *_usersAccountName;
    CDUnknownBlockType _loginFinishedBlock;
}

+ (void)checkAccessToken:(id *)arg1 accountName:(id *)arg2;
+ (void)invalidateStoredAccessToken;
@property(copy, nonatomic) CDUnknownBlockType loginFinishedBlock; // @synthesize loginFinishedBlock=_loginFinishedBlock;
@property(retain, nonatomic) NSString *usersAccountName; // @synthesize usersAccountName=_usersAccountName;
@property(retain, nonatomic) NSString *usersAccessToken; // @synthesize usersAccessToken;
@property(nonatomic) CbYouKuExporterService *youKuExporterService; // @synthesize youKuExporterService;
- (void).cxx_destruct;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)storeAccessToken:(id)arg1;
- (void)storeUsersAccountName:(id)arg1;
- (void)requestTheAccessCode;
- (void)requestTheExchangeCode;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

