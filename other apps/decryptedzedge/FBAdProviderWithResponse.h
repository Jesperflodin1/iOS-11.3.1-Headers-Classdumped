//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FBAdProvider.h"

@class FBAdProviderResponseAds;

@interface FBAdProviderWithResponse : FBAdProvider
{
    FBAdProviderResponseAds *_response;
}

@property(retain, nonatomic) FBAdProviderResponseAds *response; // @synthesize response=_response;
- (void).cxx_destruct;
- (void)loadAdWithEnvironmentData:(id)arg1;
- (id)initWithResponse:(id)arg1 forAdAtIndex:(long long)arg2;
- (id)initWithDelegate:(id)arg1;

@end

