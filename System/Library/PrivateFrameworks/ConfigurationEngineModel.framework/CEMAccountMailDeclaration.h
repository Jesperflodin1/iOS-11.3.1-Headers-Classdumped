/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:19:43 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSString, NSNumber;

@interface CEMAccountMailDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>

@property (nonatomic,readonly) NSString * payloadEmailAccountDescription; 
@property (nonatomic,readonly) NSString * payloadEmailAccountName; 
@property (nonatomic,readonly) NSString * payloadEmailAccountType; 
@property (nonatomic,readonly) NSString * payloadEmailAddress; 
@property (nonatomic,readonly) NSString * payloadIncomingMailServerAuthentication; 
@property (nonatomic,readonly) NSString * payloadIncomingMailServerHostName; 
@property (nonatomic,readonly) NSNumber * payloadIncomingMailServerPortNumber; 
@property (nonatomic,readonly) NSNumber * payloadIncomingMailServerUseSSL; 
@property (nonatomic,readonly) NSNumber * payloadOutgoingPasswordSameAsIncomingPassword; 
@property (nonatomic,readonly) NSString * payloadOutgoingMailServerAuthentication; 
@property (nonatomic,readonly) NSNumber * payloadOutgoingMailServerPortNumber; 
@property (nonatomic,readonly) NSNumber * payloadOutgoingMailServerUseSSL; 
@property (nonatomic,readonly) NSString * payloadOutgoingMailServerUsername; 
@property (nonatomic,readonly) NSNumber * payloadPreventMove; 
@property (nonatomic,readonly) NSNumber * payloadPreventAppSheet; 
@property (nonatomic,readonly) NSNumber * payloadSMIMEEnabled; 
@property (nonatomic,readonly) NSString * payloadSMIMESigningCertificateUUID; 
@property (nonatomic,readonly) NSString * payloadSMIMEEncryptionCertificateUUID; 
@property (nonatomic,readonly) NSNumber * payloadSMIMEEnablePerMessageSwitch; 
@property (nonatomic,readonly) NSNumber * payloadDisableMailRecentsSyncing; 
@property (nonatomic,readonly) NSNumber * payloadAllowMailDrop; 
@property (nonatomic,readonly) NSNumber * payloadSMIMESigningEnabled; 
@property (nonatomic,readonly) NSNumber * payloadSMIMEEncryptionEnabled; 
@property (nonatomic,readonly) NSString * payloadIncomingMailServerIMAPPathPrefix; 
@property (nonatomic,readonly) NSString * payloadIncomingCredentials; 
@property (nonatomic,readonly) NSString * payloadOutgoingCredentials; 
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
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)validPayloadDictionary:(id)arg1 error:(id*)arg2 ;
-(BOOL)validStatusDictionary:(id)arg1 error:(id*)arg2 ;
-(id)serializePayload:(id)arg1 withAssetProviders:(id)arg2 ;
-(NSString *)payloadEmailAddress;
-(NSString *)payloadIncomingCredentials;
-(NSString *)payloadOutgoingCredentials;
-(NSString *)payloadEmailAccountDescription;
-(NSString *)payloadEmailAccountName;
-(NSString *)payloadEmailAccountType;
-(NSString *)payloadIncomingMailServerAuthentication;
-(NSString *)payloadIncomingMailServerHostName;
-(NSNumber *)payloadIncomingMailServerPortNumber;
-(NSNumber *)payloadIncomingMailServerUseSSL;
-(NSNumber *)payloadOutgoingPasswordSameAsIncomingPassword;
-(NSString *)payloadOutgoingMailServerAuthentication;
-(NSNumber *)payloadOutgoingMailServerPortNumber;
-(NSNumber *)payloadOutgoingMailServerUseSSL;
-(NSString *)payloadOutgoingMailServerUsername;
-(NSNumber *)payloadPreventMove;
-(NSNumber *)payloadPreventAppSheet;
-(NSNumber *)payloadSMIMEEnabled;
-(NSString *)payloadSMIMESigningCertificateUUID;
-(NSString *)payloadSMIMEEncryptionCertificateUUID;
-(NSNumber *)payloadSMIMEEnablePerMessageSwitch;
-(NSNumber *)payloadDisableMailRecentsSyncing;
-(NSNumber *)payloadAllowMailDrop;
-(NSNumber *)payloadSMIMESigningEnabled;
-(NSNumber *)payloadSMIMEEncryptionEnabled;
-(NSString *)payloadIncomingMailServerIMAPPathPrefix;
@end

