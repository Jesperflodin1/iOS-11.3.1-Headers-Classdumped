//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADMInternalAdNetworkConnector-Protocol.h"
#import "GADMediationAdRequestInternal-Protocol.h"

@class GADAdLoaderConfiguration, GADMAdManager, GADMAdNetworkConfig, GADMConfig, NSDictionary, NSString;
@protocol GADMAdNetworkAdapter;

@interface GADMAdNetworkConnector : NSObject <GADMInternalAdNetworkConnector, GADMediationAdRequestInternal>
{
    NSDictionary *_strippedCredentials;
    _Bool _isLocationShared;
    _Bool _didNetworkRefresh;
    _Bool _clicked;
    GADMAdNetworkConfig *_networkConfig;
    GADMAdManager *_adManager;
    GADMConfig *_mediationConfig;
    GADAdLoaderConfiguration *_adLoaderConfiguration;
    id <GADMAdNetworkAdapter> _adapter;
}

@property(nonatomic, getter=isClicked) _Bool clicked; // @synthesize clicked=_clicked;
@property(nonatomic) _Bool didNetworkRefresh; // @synthesize didNetworkRefresh=_didNetworkRefresh;
@property(retain, nonatomic) id <GADMAdNetworkAdapter> adapter; // @synthesize adapter=_adapter;
@property(retain, nonatomic) GADAdLoaderConfiguration *adLoaderConfiguration; // @synthesize adLoaderConfiguration=_adLoaderConfiguration;
@property(retain, nonatomic) GADMConfig *mediationConfig; // @synthesize mediationConfig=_mediationConfig;
@property(nonatomic) __weak GADMAdManager *adManager; // @synthesize adManager=_adManager;
@property(retain, nonatomic) GADMAdNetworkConfig *networkConfig; // @synthesize networkConfig=_networkConfig;
- (void).cxx_destruct;
- (void)adapter:(id)arg1 clickDidOccurInBanner:(id)arg2;
- (void)adapter:(id)arg1 didReceiveInterstitial:(id)arg2;
- (void)reportFill;
- (void)reportImpression;
- (void)reportClick;
- (void)pingMediationURLs:(id)arg1 defaultURL:(id)arg2 durations:(id)arg3 exitCodes:(id)arg4 fillStatus:(id)arg5 eventType:(id)arg6;
- (void)adapterDidGetAdClick:(id)arg1;
- (void)adapterWillLeaveApplication:(id)arg1;
- (void)adapterDidDismissInterstitial:(id)arg1;
- (void)adapterWillDismissInterstitial:(id)arg1;
- (void)adapterWillPresentInterstitial:(id)arg1;
- (void)adapterDidDismissFullScreenModal:(id)arg1;
- (void)adapterWillDismissFullScreenModal:(id)arg1;
- (void)adapterWillPresentFullScreenModal:(id)arg1;
- (void)adapter:(id)arg1 didFailInterstitial:(id)arg2;
- (void)adapterDidReceiveInterstitial:(id)arg1;
- (void)adapter:(id)arg1 didFailAd:(id)arg2;
- (void)adapter:(id)arg1 didReceiveMediatedNativeAd:(id)arg2;
- (void)adapter:(id)arg1 didReceiveAdView:(id)arg2;
- (double)croppedContentThreshold;
- (struct CGSize)adSize;
- (_Bool)autoClickProtectionEnabled;
- (id)childDirectedTreatment;
- (id)userKeywords;
- (id)userLocationDescription;
- (double)userLocationAccuracyInMeters;
- (double)userLongitude;
- (double)userLatitude;
- (_Bool)userHasLocation;
- (id)userLocation;
- (id)userBirthday;
- (long long)userGender;
- (id)viewControllerForPresentingModalView;
- (id)networkExtrasForClass:(Class)arg1;
- (id)networkExtras;
- (_Bool)testMode;
- (id)credentials;
- (id)publisherId;
- (id)slot;
- (id)userRequestAgent;
- (id)currentAdapterName;
- (id)adapterNames;
- (id)extras;
- (id)inlineAd;
- (void)dealloc;
- (void)askAdapterToStopBeingDelegate;
- (void)getAdFromAdapterWithType:(id)arg1;
- (id)adapterVersion;
- (void)setUpAdapter;
- (id)initWithConfig:(id)arg1 networkConfig:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

