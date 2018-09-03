//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSURL;

@interface FBAdConfigManager : NSObject
{
    double _adTapMargin;
    NSURL *_configurationFileURL;
    NSDictionary *_configuration;
}

+ (id)sharedManagerWithAsyncLoad:(_Bool)arg1;
+ (id)sharedManager;
@property(copy) NSDictionary *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) NSURL *configurationFileURL; // @synthesize configurationFileURL=_configurationFileURL;
@property(readonly, nonatomic) double adTapMargin; // @synthesize adTapMargin=_adTapMargin;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool useCachedImageContextForOpenGLRenderer;
@property(readonly, nonatomic) _Bool useCachedImageContextForMetalRenderer;
@property(readonly, nonatomic) _Bool useCachedImageContextForSoftwareRenderer;
@property(readonly, nonatomic, getter=isInAppAppStoreDisabled) _Bool inAppAppStoreDisabled;
@property(readonly, copy, nonatomic) NSString *rvAutoRotate;
@property(readonly, nonatomic) long long visibleAreaPercentage;
@property(readonly, nonatomic, getter=isVisibleAreaCheckEnabled) _Bool visibleAreaCheckEnabled;
@property(readonly, nonatomic, getter=isAdClickabilityRestrictedUntilImpression) _Bool adClickabilityRestrictedUntilImpression;
@property(readonly, nonatomic) double minimumElapsedTimeAfterImpression;
@property(readonly, nonatomic) long long adTapMarginPercentage;
@property(readonly, nonatomic) double unifiedLoggingImmediateDelay;
@property(readonly, nonatomic, getter=isMetalImageRendererEnabled) _Bool metalImageRendererEnabled;
@property(readonly, nonatomic, getter=isFNFOffThreadRenderingEnabled) _Bool fnfOffThreadRenderingEnabled;
@property(readonly, nonatomic, getter=isFNFEnabled) _Bool fnfEnabled;
@property(readonly, nonatomic) double adClickabilityThresholdInterval;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)deleteConfiguration;
- (id)saveConfiguration;
- (id)saveConfiguration:(_Bool)arg1;
- (id)loadConfigurationFromPropertyList:(id)arg1;
- (id)loadConfigurationFromDictionary:(id)arg1;
- (id)loadConfigurationFromJSONString:(id)arg1;
- (id)loadConfigurationFromStorage;
- (id)loadConfigurationFromStorage:(_Bool)arg1;
- (id)initWithAsyncLoad:(_Bool)arg1;
- (id)init;

@end

