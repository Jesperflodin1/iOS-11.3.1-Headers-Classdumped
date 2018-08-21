/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:19:44 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSNumber, NSDictionary, NSString;

@interface CEMSecurityTimeLimitsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>

@property (nonatomic,readonly) NSNumber * payloadFamilyControlsEnabled; 
@property (nonatomic,readonly) NSDictionary * payloadTimeLimits; 
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
+(id)TimeLimits_allowedPayloadKeys;
+(id)Allowance_allowedPayloadKeys;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)validPayloadDictionary:(id)arg1 error:(id*)arg2 ;
-(BOOL)validStatusDictionary:(id)arg1 error:(id*)arg2 ;
-(id)serializePayload:(id)arg1 withAssetProviders:(id)arg2 ;
-(BOOL)validPayloadTimeLimits_Dictionary:(id)arg1 parentKeyPath:(id)arg2 error:(id*)arg3 ;
-(BOOL)validPayloadAllowance_Dictionary:(id)arg1 parentKeyPath:(id)arg2 error:(id*)arg3 ;
-(id)serializePayloadTimeLimits:(id)arg1 withAssetProviders:(id)arg2 ;
-(id)serializePayloadAllowance:(id)arg1 withAssetProviders:(id)arg2 ;
-(NSNumber *)payloadFamilyControlsEnabled;
-(NSDictionary *)payloadTimeLimits;
@end

