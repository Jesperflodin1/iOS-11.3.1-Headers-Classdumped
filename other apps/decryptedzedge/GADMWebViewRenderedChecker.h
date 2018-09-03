//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIWebView;
@protocol GADMWebViewRenderedCheckerDelegate;

@interface GADMWebViewRenderedChecker : NSObject
{
    UIWebView *_webView;
    id <GADMWebViewRenderedCheckerDelegate> _delegate;
}

@property(nonatomic) __weak id <GADMWebViewRenderedCheckerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (double)percentOfImage:(id)arg1 ofColor:(id)arg2;
- (void)checkIsContentRenderedInWebView;
- (id)init;
- (id)initWithWebView:(id)arg1 delegate:(id)arg2;

@end

