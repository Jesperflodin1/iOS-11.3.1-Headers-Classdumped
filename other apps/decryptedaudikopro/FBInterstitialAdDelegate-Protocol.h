//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBInterstitialAd, NSError;

@protocol FBInterstitialAdDelegate <NSObject>

@optional
- (void)interstitialAdWillLogImpression:(FBInterstitialAd *)arg1;
- (void)interstitialAd:(FBInterstitialAd *)arg1 didFailWithError:(NSError *)arg2;
- (void)interstitialAdDidLoad:(FBInterstitialAd *)arg1;
- (void)interstitialAdWillClose:(FBInterstitialAd *)arg1;
- (void)interstitialAdDidClose:(FBInterstitialAd *)arg1;
- (void)interstitialAdDidClick:(FBInterstitialAd *)arg1;
@end
