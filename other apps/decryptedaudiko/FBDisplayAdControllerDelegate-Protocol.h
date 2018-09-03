//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBNativeAdDataModel, NSError, NSURL, UIView;

@protocol FBDisplayAdControllerDelegate <NSObject>
- (void)onAdError:(NSError *)arg1;
- (void)onAdStopped;
- (void)onAdLoaded;

@optional
- (void)onAdUserClose;
- (void)onAdClickThruWithURL:(NSURL *)arg1 playerHandles:(_Bool)arg2;
- (void)onAdImpression;
- (void)onAdDataPresented:(FBNativeAdDataModel *)arg1 onImpression:(void (^)(NSDictionary *, NSDictionary *))arg2 onClick:(void (^)(UIViewController *, NSDictionary *))arg3 onVideoPlay:(void (^)(NSDictionary *))arg4 onVideoSkip:(void (^)(NSDictionary *))arg5;
- (void)onAdViewPresented:(UIView *)arg1;
@end

