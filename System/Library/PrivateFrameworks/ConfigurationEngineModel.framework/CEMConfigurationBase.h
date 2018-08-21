/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:19:44 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/CEMDeclarationBase.h>

@interface CEMConfigurationBase : CEMDeclarationBase
+(id)profileType;
+(id)restrictionPayloadKeys;
+(id)declarationClass;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(id)synthesizeProfilePayloadOutUUIDs:(id)arg1 withOldUUIDs:(id)arg2 assetProviders:(id)arg3 ;
-(id)profilePayloadsByTypeWithAssetProviders:(id)arg1 ;
-(id)payloadUUIDWithIdentifier:(id)arg1 outUUIDs:(id)arg2 oldUUIDs:(id)arg3 ;
-(id)synthesizeProfileOutUUIDs:(id)arg1 withOldUUIDs:(id)arg2 assetProviders:(id)arg3 ;
@end

