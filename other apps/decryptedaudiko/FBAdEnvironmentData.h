//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBAdPlacementDefinition, NSDictionary, NSString;

@interface FBAdEnvironmentData : NSObject
{
    _Bool _retryForPodPosition;
    NSString *_placementID;
    long long _placementType;
    long long _adType;
    long long _templateId;
    unsigned long long _numAdsRequested;
    long long _initOrientation;
    FBAdPlacementDefinition *_placementDefinition;
    unsigned long long _podPosition;
    unsigned long long _podPositionInternal;
    NSString *_failedConnectionIdString;
    NSString *_servedCreativeIdString;
    NSString *_failedCreativeIdString;
    struct FBAdSize _adSize;
    struct CGSize _adViewInitSize;
}

@property(retain, nonatomic) NSString *failedCreativeIdString; // @synthesize failedCreativeIdString=_failedCreativeIdString;
@property(retain, nonatomic) NSString *servedCreativeIdString; // @synthesize servedCreativeIdString=_servedCreativeIdString;
@property(retain, nonatomic) NSString *failedConnectionIdString; // @synthesize failedConnectionIdString=_failedConnectionIdString;
@property(nonatomic) unsigned long long podPositionInternal; // @synthesize podPositionInternal=_podPositionInternal;
@property(nonatomic) _Bool retryForPodPosition; // @synthesize retryForPodPosition=_retryForPodPosition;
@property(nonatomic) unsigned long long podPosition; // @synthesize podPosition=_podPosition;
@property(retain, nonatomic) FBAdPlacementDefinition *placementDefinition; // @synthesize placementDefinition=_placementDefinition;
@property(nonatomic) long long initOrientation; // @synthesize initOrientation=_initOrientation;
@property(nonatomic) struct CGSize adViewInitSize; // @synthesize adViewInitSize=_adViewInitSize;
@property(nonatomic) unsigned long long numAdsRequested; // @synthesize numAdsRequested=_numAdsRequested;
@property(readonly, nonatomic) long long templateId; // @synthesize templateId=_templateId;
@property(nonatomic) long long adType; // @synthesize adType=_adType;
@property(nonatomic) struct FBAdSize adSize; // @synthesize adSize=_adSize;
@property(nonatomic) long long placementType; // @synthesize placementType=_placementType;
@property(retain, nonatomic) NSString *placementID; // @synthesize placementID=_placementID;
- (void).cxx_destruct;
- (void)putRequestParameter:(id)arg1 key:(id)arg2 value:(id)arg3;
@property(readonly, nonatomic) NSDictionary *adRequestParameters;
- (void)setFailedCreativeIds:(id)arg1;
- (void)setServedCreativeIds:(id)arg1;
- (void)setFailedConnectionIds:(id)arg1;
- (_Bool)hasValidPlacementId;
- (_Bool)hasValidDefinition;
- (id)initInternalWithPlacementId:(id)arg1 publisherId:(id)arg2 placementType:(long long)arg3 adSize:(struct FBAdSize)arg4 adType:(long long)arg5 numAdsRequested:(unsigned long long)arg6;
- (id)initWithPlacementId:(id)arg1 placementType:(long long)arg2 adSize:(struct FBAdSize)arg3 adType:(long long)arg4;
- (id)initForNativeAdWithPlacementId:(id)arg1 numAdsRequested:(unsigned long long)arg2;

@end

