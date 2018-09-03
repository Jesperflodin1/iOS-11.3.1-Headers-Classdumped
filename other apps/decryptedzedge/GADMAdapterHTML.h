//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADMAdNetworkAdapter-Protocol.h"
#import "GADMWebViewRenderedCheckerDelegate-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"

@class GADMWebViewRenderedChecker, NSString, NSTimer, NSURL, UIWebView;
@protocol GADMAdNetworkConnector;

@interface GADMAdapterHTML : NSObject <GADMAdNetworkAdapter, GADMWebViewRenderedCheckerDelegate, UIWebViewDelegate>
{
    unsigned long long _checkRenderingCount;
    NSTimer *_checkRenderingTimer;
    GADMWebViewRenderedChecker *_webViewRenderedChecker;
    UIWebView *_webView;
    NSURL *_passbackURL;
    id <GADMAdNetworkConnector> _connector;
}

+ (Class)networkExtrasClass;
+ (id)adapterVersion;
@property(nonatomic) id <GADMAdNetworkConnector> connector; // @synthesize connector=_connector;
- (void).cxx_destruct;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (_Bool)isPassbackRequest:(id)arg1;
- (_Bool)isPath:(id)arg1 equivalentToPath:(id)arg2;
- (id)stripTrailingSlashFromPath:(id)arg1;
- (void)presentInterstitialFromRootViewController:(id)arg1;
- (_Bool)isBannerAnimationOK:(long long)arg1;
- (void)stopBeingDelegate;
- (void)getInterstitial;
- (void)createWebViewWithSize:(struct GADAdSize)arg1;
- (void)getBannerWithSize:(struct GADAdSize)arg1;
- (void)webView:(id)arg1 isRendered:(_Bool)arg2;
- (id)errorWithCode:(long long)arg1 text:(id)arg2;
- (void)stopRenderingTimer;
- (void)startRenderingTimer;
- (void)failInterstitialRequest;
- (void)clearWebView;
- (void)dealloc;
- (id)init;
- (id)initWithGADMAdNetworkConnector:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

