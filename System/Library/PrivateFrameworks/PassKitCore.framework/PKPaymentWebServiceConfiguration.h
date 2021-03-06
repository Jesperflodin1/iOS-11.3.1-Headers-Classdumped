/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:25 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSObject, NSDictionary, NSNumber, NSURL;

@interface PKPaymentWebServiceConfiguration : NSObject <NSSecureCoding> {

	NSObject*<OS_dispatch_queue> _queue;
	NSDictionary* _configuration;
	NSNumber* _version;
	NSURL* _configurationURL;

}

@property (copy) NSDictionary * configuration;               //@synthesize configuration=_configuration - In the implementation block
@property (__weak,readonly) NSNumber * version;              //@synthesize version=_version - In the implementation block
@property (copy) NSURL * configurationURL;                   //@synthesize configurationURL=_configurationURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setConfiguration:(NSDictionary *)arg1 ;
-(NSDictionary *)configuration;
-(NSNumber *)version;
-(id)supportedRegionsForOSVersion:(id)arg1 deviceClass:(id)arg2 ;
-(BOOL)buddyProvisioningEnabledForRegion:(id)arg1 ;
-(BOOL)buddyManualProvisioningEnabledForRegion:(id)arg1 ;
-(id)unsupportedWebPaymentConfigurations;
-(id)primaryFeaturedNetworkForRegion:(id)arg1 ;
-(BOOL)suppressCardholderNameFieldForRegion:(id)arg1 ;
-(BOOL)regionHasProvisioningEnablementPercentage:(id)arg1 ;
-(double)provisioningEnablementPercentageForRegion:(id)arg1 ;
-(void)setConfigurationURL:(NSURL *)arg1 ;
-(NSURL *)configurationURL;
-(id)_queue_region:(id)arg1 ;
-(id)supportedRegionsForOSVersion:(id)arg1 deviceClass:(id)arg2 platform:(id)arg3 ;
-(id)_queue_regions;
-(BOOL)_queue_supportedForOSVersion:(id)arg1 inRegion:(id)arg2 deviceClass:(id)arg3 platform:(id)arg4 ;
-(id)initWithConfiguration:(id)arg1 url:(id)arg2 ;
-(id)brokerURLForRegion:(id)arg1 ;
-(id)paymentServicesURLForRegion:(id)arg1 ;
-(id)paymentServicesMerchantURLForRegion:(id)arg1 ;
-(BOOL)manualProvisioningEnabledForRegion:(id)arg1 ;
-(id)heroImageManifestURLForRegion:(id)arg1 ;
-(id)maxRefreshIntervalForUnsupportedRegion;
-(id)maxRefreshIntervalForRegion:(id)arg1 ;
-(BOOL)remotePaymentsRequiredForVoiceover;
-(id)marketGeoRegionNotificationDisabledNetworksForRegion:(id)arg1 ;
-(id)marketGeoRegionNoitificationSendLimitForRegion:(id)arg1 ;
-(id)marketGeoRegionNoitificationHourForRegion:(id)arg1 ;
-(BOOL)userCanResetCloudStoreApplePayViewForRegion:(id)arg1 ;
-(id)paymentSetupBrowsableProductTypesForRegion:(id)arg1 ;
-(id)betaTransitPaymentNetworksForRegion:(id)arg1 ;
-(BOOL)cameraFirstProvisioningEnabledForRegion:(id)arg1 ;
-(id)paymentSetupFeaturedNetworksForRegion:(id)arg1 ;
-(BOOL)peerPaymentEnabledForRegion:(id)arg1 ;
-(BOOL)findWithoutNumberEnabledForRegion:(id)arg1 ;
@end

