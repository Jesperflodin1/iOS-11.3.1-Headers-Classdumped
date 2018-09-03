//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSURL, UIView, UIViewController;
@protocol MPNativeAdAdapterDelegate;

@protocol MPNativeAdAdapter <NSObject>
@property(readonly, nonatomic) NSURL *defaultActionURL;
@property(readonly, nonatomic) NSDictionary *properties;

@optional
@property(nonatomic) __weak id <MPNativeAdAdapterDelegate> delegate;
- (UIView *)mainMediaView;
- (UIView *)privacyInformationIconView;
- (void)displayContentForDAAIconTap;
- (void)willAttachToView:(UIView *)arg1;
- (void)trackClick;
- (_Bool)enableThirdPartyClickTracking;
- (void)displayContentForURL:(NSURL *)arg1 rootViewController:(UIViewController *)arg2;
@end

