//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MoPub/MPNativeCustomEvent.h>

#import "FBNativeAdDelegate-Protocol.h"

@class FBNativeAd, NSString;

@interface FacebookNativeCustomEvent : MPNativeCustomEvent <FBNativeAdDelegate>
{
    FBNativeAd *_fbNativeAd;
}

@property(retain, nonatomic) FBNativeAd *fbNativeAd; // @synthesize fbNativeAd=_fbNativeAd;
- (void).cxx_destruct;
- (void)nativeAd:(id)arg1 didFailWithError:(id)arg2;
- (void)nativeAdDidLoad:(id)arg1;
- (void)requestAdWithCustomEventInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

