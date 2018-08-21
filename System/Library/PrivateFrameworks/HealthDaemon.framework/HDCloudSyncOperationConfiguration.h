/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:39 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CKContainer, CKDatabase, CKOperationGroup, NSString, HDProfile, NSUUID;

@interface HDCloudSyncOperationConfiguration : NSObject {

	CKContainer* _container;
	CKDatabase* _privateDatabase;
	CKOperationGroup* _operationGroup;
	NSString* _syncContainerPrefix;
	NSString* _ownerIdentifier;
	HDProfile* _profile;
	unsigned long long _options;
	long long _reason;
	NSUUID* _syncIdentifier;

}

@property (nonatomic,readonly) CKContainer * container;                          //@synthesize container=_container - In the implementation block
@property (nonatomic,readonly) CKDatabase * privateDatabase;                     //@synthesize privateDatabase=_privateDatabase - In the implementation block
@property (nonatomic,readonly) CKOperationGroup * operationGroup;                //@synthesize operationGroup=_operationGroup - In the implementation block
@property (nonatomic,copy,readonly) NSString * syncContainerPrefix;              //@synthesize syncContainerPrefix=_syncContainerPrefix - In the implementation block
@property (nonatomic,copy,readonly) NSString * ownerIdentifier;                  //@synthesize ownerIdentifier=_ownerIdentifier - In the implementation block
@property (nonatomic,readonly) HDProfile * profile;                              //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                       //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) long long reason;                                 //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) NSUUID * syncIdentifier;                          //@synthesize syncIdentifier=_syncIdentifier - In the implementation block
-(CKContainer *)container;
-(unsigned long long)options;
-(long long)reason;
-(NSString *)ownerIdentifier;
-(HDProfile *)profile;
-(NSString *)syncContainerPrefix;
-(NSUUID *)syncIdentifier;
-(id)initWithCKContainer:(id)arg1 operationGroup:(id)arg2 syncContainerPrefix:(id)arg3 ownerIdentifier:(id)arg4 profile:(id)arg5 options:(unsigned long long)arg6 reason:(long long)arg7 syncIdentifier:(id)arg8 ;
-(CKOperationGroup *)operationGroup;
-(CKDatabase *)privateDatabase;
@end

