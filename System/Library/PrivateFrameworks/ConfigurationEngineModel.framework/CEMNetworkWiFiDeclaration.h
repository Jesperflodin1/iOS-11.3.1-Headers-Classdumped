/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:19:44 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSNumber, NSString, NSDictionary, NSArray;

@interface CEMNetworkWiFiDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>

@property (nonatomic,readonly) NSNumber * payloadAutoJoin; 
@property (nonatomic,readonly) NSString * payloadSSIDSTR; 
@property (nonatomic,readonly) NSNumber * payloadHIDDENNETWORK; 
@property (nonatomic,readonly) NSString * payloadProxyType; 
@property (nonatomic,readonly) NSString * payloadEncryptionType; 
@property (nonatomic,readonly) NSString * payloadPassword; 
@property (nonatomic,readonly) NSString * payloadPayloadCertificateUUID; 
@property (nonatomic,readonly) NSDictionary * payloadEAPClientConfiguration; 
@property (nonatomic,readonly) NSString * payloadDisplayedOperatorName; 
@property (nonatomic,readonly) NSString * payloadDomainName; 
@property (nonatomic,readonly) NSArray * payloadRoamingConsortiumOIs; 
@property (nonatomic,readonly) NSNumber * payloadServiceProviderRoamingEnabled; 
@property (nonatomic,readonly) NSNumber * payloadIsHotspot; 
@property (nonatomic,readonly) NSString * payloadHESSID; 
@property (nonatomic,readonly) NSArray * payloadNAIRealmNames; 
@property (nonatomic,readonly) NSArray * payloadMCCAndMNCs; 
@property (nonatomic,readonly) NSNumber * payloadCaptiveBypass; 
@property (nonatomic,readonly) NSDictionary * payloadQoSMarkingPolicy; 
@property (nonatomic,readonly) NSString * payloadInterface; 
@property (nonatomic,readonly) NSArray * payloadSetupModes; 
@property (nonatomic,readonly) NSNumber * payloadPriority; 
@property (nonatomic,readonly) NSNumber * payloadEnableIPv6; 
@property (nonatomic,readonly) NSString * payloadNONEXISTENT; 
@property (nonatomic,readonly) NSNumber * payloadTLSCertificateRequired; 
@property (nonatomic,readonly) NSString * payloadProxyServer; 
@property (nonatomic,readonly) NSString * payloadProxyUsername; 
@property (nonatomic,readonly) NSNumber * payloadProxyServerPort; 
@property (nonatomic,readonly) NSString * payloadProxyPassword; 
@property (nonatomic,readonly) NSString * payloadProxyPACURL; 
@property (nonatomic,readonly) NSNumber * payloadProxyPACFallbackAllowed; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)profileType;
+(id)allowedPayloadKeys;
+(id)allowedStatusKeys;
+(id)registeredClass;
+(id)registeredType;
+(id)restrictionPayloadKeys;
+(id)allowedReasons;
+(id)EAPClientConfiguration_allowedPayloadKeys;
+(id)QoSMarkingPolicy_allowedPayloadKeys;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)validPayloadDictionary:(id)arg1 error:(id*)arg2 ;
-(BOOL)validStatusDictionary:(id)arg1 error:(id*)arg2 ;
-(id)serializePayload:(id)arg1 withAssetProviders:(id)arg2 ;
-(NSString *)payloadPassword;
-(NSString *)payloadProxyServer;
-(NSNumber *)payloadProxyServerPort;
-(NSString *)payloadProxyUsername;
-(NSString *)payloadProxyPassword;
-(NSString *)payloadProxyPACURL;
-(NSNumber *)payloadProxyPACFallbackAllowed;
-(NSString *)payloadProxyType;
-(BOOL)validPayloadEAPClientConfiguration_Dictionary:(id)arg1 parentKeyPath:(id)arg2 error:(id*)arg3 ;
-(BOOL)validPayloadQoSMarkingPolicy_Dictionary:(id)arg1 parentKeyPath:(id)arg2 error:(id*)arg3 ;
-(id)serializePayloadEAPClientConfiguration:(id)arg1 withAssetProviders:(id)arg2 ;
-(id)serializePayloadQoSMarkingPolicy:(id)arg1 withAssetProviders:(id)arg2 ;
-(NSNumber *)payloadAutoJoin;
-(NSString *)payloadSSIDSTR;
-(NSNumber *)payloadHIDDENNETWORK;
-(NSString *)payloadEncryptionType;
-(NSString *)payloadPayloadCertificateUUID;
-(NSDictionary *)payloadEAPClientConfiguration;
-(NSString *)payloadDisplayedOperatorName;
-(NSString *)payloadDomainName;
-(NSArray *)payloadRoamingConsortiumOIs;
-(NSNumber *)payloadServiceProviderRoamingEnabled;
-(NSNumber *)payloadIsHotspot;
-(NSString *)payloadHESSID;
-(NSArray *)payloadNAIRealmNames;
-(NSArray *)payloadMCCAndMNCs;
-(NSNumber *)payloadCaptiveBypass;
-(NSDictionary *)payloadQoSMarkingPolicy;
-(NSString *)payloadInterface;
-(NSArray *)payloadSetupModes;
-(NSNumber *)payloadPriority;
-(NSNumber *)payloadEnableIPv6;
-(NSString *)payloadNONEXISTENT;
-(NSNumber *)payloadTLSCertificateRequired;
@end

