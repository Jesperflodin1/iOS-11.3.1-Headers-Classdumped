/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:38 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, HDProfile, CKContainer;

@interface HDCloudSyncContainer : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	long long _pullOperationFailureCount;
	BOOL _secondaryContainer;
	BOOL _secureContainer;
	HDProfile* _profile;
	CKContainer* _syncContainer;

}

@property (assign,nonatomic,__weak) HDProfile * profile;               //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) CKContainer * syncContainer;              //@synthesize syncContainer=_syncContainer - In the implementation block
@property (nonatomic,readonly) BOOL secondaryContainer;                //@synthesize secondaryContainer=_secondaryContainer - In the implementation block
@property (nonatomic,readonly) BOOL secureContainer;                   //@synthesize secureContainer=_secureContainer - In the implementation block
-(id)description;
-(HDProfile *)profile;
-(void)setProfile:(HDProfile *)arg1 ;
-(void)disableSyncLocallyWithTaskTree:(id)arg1 ;
-(id)initWithProfile:(id)arg1 syncContainer:(id)arg2 ;
-(id)syncWithOptions:(unsigned long long)arg1 reason:(long long)arg2 identifier:(id)arg3 taskTree:(id)arg4 ;
-(id)_operationGroupForReason:(long long)arg1 options:(unsigned long long)arg2 ;
-(void)fetchSyncStatusWithTaskTree:(id)arg1 resultsHandler:(/*^block*/id)arg2 ;
-(long long)_pendingProgressCountForPushOperationGivenOptions:(unsigned long long)arg1 maxPullOperationCount:(long long)arg2 ;
-(long long)_pendingProgressCountForPullOperationsGivenOptions:(unsigned long long)arg1 ;
-(id)_startPullOperationForStoreIdentifier:(id)arg1 configuration:(id)arg2 fetchOperationResult:(id)arg3 taskTree:(id)arg4 ;
-(void)_recordSuccessfulPull;
-(id)_lastSuccessfulPullKey;
-(id)_cloudSyncContainerDescriptionFromFetchOperationResult:(id)arg1 configuration:(id)arg2 ;
-(id)_fetchDescriptionWithOptions:(unsigned long long)arg1 reason:(long long)arg2 identifier:(id)arg3 taskTree:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
-(void)_disableCloudSyncWithCompletion:(/*^block*/id)arg1 ;
-(id)initAsSecondaryWithProfile:(id)arg1 syncContainer:(id)arg2 ;
-(id)syncWithOptions:(unsigned long long)arg1 reason:(long long)arg2 identifier:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)resetWithOptions:(unsigned long long)arg1 reason:(long long)arg2 identifier:(id)arg3 taskTree:(id)arg4 ;
-(id)fetchDescriptionWithOptions:(unsigned long long)arg1 reason:(long long)arg2 identifier:(id)arg3 taskTree:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
-(id)disableAndDeleteAllSyncDataWithTaskTree:(id)arg1 identifier:(id)arg2 ;
-(BOOL)secondaryContainer;
-(BOOL)secureContainer;
-(CKContainer *)syncContainer;
-(void)setSyncContainer:(CKContainer *)arg1 ;
@end

