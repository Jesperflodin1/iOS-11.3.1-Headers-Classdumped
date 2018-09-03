//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBRewardedVideoAdView, NSError;

@protocol FBRewardedVideoAdViewDelegate <NSObject>
- (void)rewardedVideoViewContextSwitch:(FBRewardedVideoAdView *)arg1;
- (void)rewardedVideoViewCached:(FBRewardedVideoAdView *)arg1;
- (void)rewardedVideoViewEnded:(FBRewardedVideoAdView *)arg1 withSuccess:(_Bool)arg2 withTime:(double)arg3;
- (void)rewardedVideoView:(FBRewardedVideoAdView *)arg1 didFailWithError:(NSError *)arg2;
- (void)rewardedVideoViewDidSkip:(FBRewardedVideoAdView *)arg1;
- (void)rewardedVideoViewDidResume:(FBRewardedVideoAdView *)arg1;
- (void)rewardedVideoViewDidPause:(FBRewardedVideoAdView *)arg1;
- (void)rewardedVideoViewProgress:(FBRewardedVideoAdView *)arg1;
- (void)rewardedVideoViewDidLoad:(FBRewardedVideoAdView *)arg1;
@end

