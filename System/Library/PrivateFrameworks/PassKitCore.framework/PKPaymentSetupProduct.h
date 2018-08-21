/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSSet, NSArray, NSURL, NSDictionary, PKPaymentSetupProductImageAssetURLs, PKPaymentSetupProductImageAssets, NSMutableDictionary;

@interface PKPaymentSetupProduct : NSObject <NSCopying> {

	NSString* _displayName;
	unsigned long long _type;
	NSSet* _regions;
	NSString* _productIdentifier;
	NSString* _partnerIdentifier;
	NSArray* _requiredFields;
	NSArray* _supportedProtocols;
	NSURL* _termsURL;
	long long _supportedProvisioningMethods;
	NSDictionary* _readerModeMetadata;
	unsigned long long _flags;
	long long _hsa2Requirement;
	PKPaymentSetupProductImageAssetURLs* _imageAssetURLs;
	PKPaymentSetupProductImageAssets* _imageAssets;
	NSArray* _associatedStoreIdentifiers;
	NSURL* _appLaunchURL;
	NSArray* _paymentOptions;
	NSDictionary* _rawDictionary;
	NSString* _identifier;
	NSDictionary* _minimumOSVersion;
	NSMutableDictionary* _requestedProvisioningMethods;

}

@property (nonatomic,copy) NSString * identifier;                                                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                                //@synthesize displayName=_displayName - In the implementation block
@property (assign,nonatomic) unsigned long long type;                                             //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSSet * regions;                                                       //@synthesize regions=_regions - In the implementation block
@property (nonatomic,copy) NSString * productIdentifier;                                          //@synthesize productIdentifier=_productIdentifier - In the implementation block
@property (nonatomic,copy) NSString * partnerIdentifier;                                          //@synthesize partnerIdentifier=_partnerIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * requiredFields;                                              //@synthesize requiredFields=_requiredFields - In the implementation block
@property (nonatomic,copy) NSArray * supportedProtocols;                                          //@synthesize supportedProtocols=_supportedProtocols - In the implementation block
@property (nonatomic,copy) NSURL * termsURL;                                                      //@synthesize termsURL=_termsURL - In the implementation block
@property (nonatomic,copy) NSArray * associatedStoreIdentifiers;                                  //@synthesize associatedStoreIdentifiers=_associatedStoreIdentifiers - In the implementation block
@property (nonatomic,copy) NSURL * appLaunchURL;                                                  //@synthesize appLaunchURL=_appLaunchURL - In the implementation block
@property (nonatomic,retain) NSDictionary * minimumOSVersion;                                     //@synthesize minimumOSVersion=_minimumOSVersion - In the implementation block
@property (nonatomic,copy) NSDictionary * rawDictionary;                                          //@synthesize rawDictionary=_rawDictionary - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * requestedProvisioningMethods;                  //@synthesize requestedProvisioningMethods=_requestedProvisioningMethods - In the implementation block
@property (assign,nonatomic) long long supportedProvisioningMethods;                              //@synthesize supportedProvisioningMethods=_supportedProvisioningMethods - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * readerModeMetadata;                            //@synthesize readerModeMetadata=_readerModeMetadata - In the implementation block
@property (nonatomic,readonly) unsigned long long flags;                                          //@synthesize flags=_flags - In the implementation block
@property (nonatomic,readonly) long long hsa2Requirement;                                         //@synthesize hsa2Requirement=_hsa2Requirement - In the implementation block
@property (nonatomic,readonly) PKPaymentSetupProductImageAssetURLs * imageAssetURLs;              //@synthesize imageAssetURLs=_imageAssetURLs - In the implementation block
@property (nonatomic,readonly) PKPaymentSetupProductImageAssets * imageAssets;                    //@synthesize imageAssets=_imageAssets - In the implementation block
@property (nonatomic,copy,readonly) NSString * partnerName; 
@property (nonatomic,copy,readonly) NSArray * paymentOptions;                                     //@synthesize paymentOptions=_paymentOptions - In the implementation block
+(id)partnerProductsFromArrayOfPartners:(id)arg1 andProducts:(id)arg2 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(unsigned long long)flags;
-(void)setRegions:(NSSet *)arg1 ;
-(NSString *)identifier;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSSet *)regions;
-(NSString *)displayName;
-(NSString *)productIdentifier;
-(NSDictionary *)readerModeMetadata;
-(void)setTermsURL:(NSURL *)arg1 ;
-(id)provisioningMethodTypes;
-(void)setProvisioningMethodMetadata:(id)arg1 forType:(id)arg2 ;
-(void)setRequiredFields:(NSArray *)arg1 ;
-(NSArray *)supportedProtocols;
-(id)initWithProductDictionary:(id)arg1 ;
-(NSString *)partnerIdentifier;
-(void)setPartnerIdentifier:(NSString *)arg1 ;
-(void)setSupportedProtocols:(NSArray *)arg1 ;
-(void)setAssociatedStoreIdentifiers:(NSArray *)arg1 ;
-(NSDictionary *)rawDictionary;
-(void)setRawDictionary:(NSDictionary *)arg1 ;
-(NSDictionary *)minimumOSVersion;
-(void)setMinimumOSVersion:(NSDictionary *)arg1 ;
-(NSMutableDictionary *)requestedProvisioningMethods;
-(void)setRequestedProvisioningMethods:(NSMutableDictionary *)arg1 ;
-(id)_initWithDisplayName:(id)arg1 partnerDictionary:(id)arg2 productIdentifier:(id)arg3 paymentOptions:(id)arg4 termsURL:(id)arg5 provisioningMethods:(id)arg6 readerModeMetadata:(id)arg7 requiredFields:(id)arg8 imageAssets:(id)arg9 minimumOSVersion:(id)arg10 region:(id)arg11 hsa2Requirement:(id)arg12 ;
-(void)setProductIdentifier:(NSString *)arg1 ;
-(NSURL *)termsURL;
-(id)provisioningMethodMetadataForType:(id)arg1 ;
-(NSURL *)appLaunchURL;
-(NSArray *)paymentOptions;
-(BOOL)supportsOSVersion:(id)arg1 deviceClass:(id)arg2 ;
-(long long)supportedProvisioningMethods;
-(long long)allSupportedProtocols;
-(long long)hsa2Requirement;
-(void)setSupportedProvisioningMethods:(long long)arg1 ;
-(NSArray *)requiredFields;
-(PKPaymentSetupProductImageAssets *)imageAssets;
-(void)setAppLaunchURL:(NSURL *)arg1 ;
-(NSArray *)associatedStoreIdentifiers;
-(NSString *)partnerName;
-(PKPaymentSetupProductImageAssetURLs *)imageAssetURLs;
@end

