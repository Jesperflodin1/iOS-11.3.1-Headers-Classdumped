/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:19:43 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSString, NSNumber, NSArray, NSDictionary;

@interface CEMAccountLDAPDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>

@property (nonatomic,readonly) NSString * payloadLDAPAccountDescription; 
@property (nonatomic,readonly) NSString * payloadLDAPAccountHostName; 
@property (nonatomic,readonly) NSNumber * payloadLDAPAccountUseSSL; 
@property (nonatomic,readonly) NSArray * payloadLDAPSearchSettings; 
@property (nonatomic,readonly) NSDictionary * payloadCommunicationServiceRules; 
@property (nonatomic,readonly) NSString * payloadLDAPCredentials; 
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
+(id)CommunicationServiceRules_allowedPayloadKeys;
+(id)CommunicationServiceRules_DefaultServiceHandlers_allowedPayloadKeys;
+(id)LDAPSearchSettingsItem_allowedPayloadKeys;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)validPayloadDictionary:(id)arg1 error:(id*)arg2 ;
-(BOOL)validStatusDictionary:(id)arg1 error:(id*)arg2 ;
-(id)serializePayload:(id)arg1 withAssetProviders:(id)arg2 ;
-(BOOL)validPayloadCommunicationServiceRules_Dictionary:(id)arg1 parentKeyPath:(id)arg2 error:(id*)arg3 ;
-(BOOL)validPayloadCommunicationServiceRules_DefaultServiceHandlers_Dictionary:(id)arg1 parentKeyPath:(id)arg2 error:(id*)arg3 ;
-(id)serializePayloadCommunicationServiceRules:(id)arg1 withAssetProviders:(id)arg2 ;
-(id)serializePayloadCommunicationServiceRules_DefaultServiceHandlers:(id)arg1 withAssetProviders:(id)arg2 ;
-(NSDictionary *)payloadCommunicationServiceRules;
-(NSString *)payloadLDAPCredentials;
-(BOOL)validPayloadLDAPSearchSettingsItem_Dictionary:(id)arg1 parentKeyPath:(id)arg2 error:(id*)arg3 ;
-(id)serializePayloadLDAPSearchSettingsItem:(id)arg1 withAssetProviders:(id)arg2 ;
-(NSString *)payloadLDAPAccountDescription;
-(NSString *)payloadLDAPAccountHostName;
-(NSNumber *)payloadLDAPAccountUseSSL;
-(NSArray *)payloadLDAPSearchSettings;
@end

