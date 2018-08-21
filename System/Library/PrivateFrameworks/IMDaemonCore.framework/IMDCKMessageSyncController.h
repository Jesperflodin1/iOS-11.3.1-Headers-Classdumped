/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:20 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMDaemonCore/IMDCKAbstractSyncController.h>

@protocol OS_dispatch_queue, IMDCKSyncTokenStore, OS_xpc_object;
@class CKServerChangeToken, NSObject, IMDRecordZoneManager, IMDCKMessageSyncCKOperationFactory, NSMutableDictionary;

@interface IMDCKMessageSyncController : IMDCKAbstractSyncController {

	BOOL _shouldCheckDeviceConditions;
	CKServerChangeToken* _archivedRecordSyncToken;
	NSObject*<OS_dispatch_queue> _ckQueue;
	IMDRecordZoneManager* _recordZoneManager;
	id<IMDCKSyncTokenStore> _syncTokenStore;
	IMDCKMessageSyncCKOperationFactory* _CKOperationFactory;
	NSObject*<OS_xpc_object> _activity;
	NSMutableDictionary* _visitedChats;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> ckQueue;                               //@synthesize ckQueue=_ckQueue - In the implementation block
@property (nonatomic,retain) IMDRecordZoneManager * recordZoneManager;                             //@synthesize recordZoneManager=_recordZoneManager - In the implementation block
@property (nonatomic,retain) id<IMDCKSyncTokenStore> syncTokenStore;                               //@synthesize syncTokenStore=_syncTokenStore - In the implementation block
@property (nonatomic,retain) CKServerChangeToken * latestSyncToken; 
@property (nonatomic,retain) IMDCKMessageSyncCKOperationFactory * CKOperationFactory;              //@synthesize CKOperationFactory=_CKOperationFactory - In the implementation block
@property (nonatomic,retain) CKServerChangeToken * archivedRecordSyncToken;                        //@synthesize archivedRecordSyncToken=_archivedRecordSyncToken - In the implementation block
@property (assign) NSObject*<OS_xpc_object> activity;                                              //@synthesize activity=_activity - In the implementation block
@property (assign,nonatomic) BOOL shouldCheckDeviceConditions;                                     //@synthesize shouldCheckDeviceConditions=_shouldCheckDeviceConditions - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * visitedChats;                                   //@synthesize visitedChats=_visitedChats - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(NSObject*<OS_xpc_object>)activity;
-(void)setActivity:(NSObject*<OS_xpc_object>)arg1 ;
-(void)deleteMessagesZone;
-(long long)syncControllerRecordType;
-(void)clearLocalSyncState;
-(void)setRecordZoneManager:(IMDRecordZoneManager *)arg1 ;
-(IMDRecordZoneManager *)recordZoneManager;
-(NSObject*<OS_dispatch_queue>)ckQueue;
-(void)_scheduleOperation:(id)arg1 ;
-(id)initWithSyncTokenStore:(id)arg1 ;
-(void)setShouldCheckDeviceConditions:(BOOL)arg1 ;
-(void)setLatestSyncToken:(CKServerChangeToken *)arg1 ;
-(CKServerChangeToken *)latestSyncToken;
-(BOOL)shouldCheckDeviceConditions;
-(id)_ckUtilitiesInstance;
-(id)_recordKeyManagerSharedInstance;
-(BOOL)_deviceConditionsAllowsMessageSync;
-(IMDCKMessageSyncCKOperationFactory *)CKOperationFactory;
-(void)_resetSyncToken;
-(id)_operationErrorForModifyingRecordCompletion:(id)arg1 ;
-(id<IMDCKSyncTokenStore>)syncTokenStore;
-(id)_changeTokenKey;
-(id)_copyRecordIDsToDeleteWithLimit:(unsigned long long)arg1 ;
-(void)setCKOperationFactory:(IMDCKMessageSyncCKOperationFactory *)arg1 ;
-(void)setSyncTokenStore:(id<IMDCKSyncTokenStore>)arg1 ;
-(void)_migrateSyncTokens;
-(id)_chatRegistry;
-(unsigned long long)_numberOfMessagesToUpload;
-(id)_messageZoneID;
-(id)_messageRecordSalt;
-(BOOL)_isValidCKRecordToSync:(id)arg1 ;
-(id)_sharedIMDMessageStore;
-(id)_recordsToSaveWithAttemptCount:(unsigned long long)arg1 ;
-(void)_writeDirtyMessagesToCloudKitWithCompletion:(/*^block*/id)arg1 ;
-(id)_recordsToSave;
-(id)_syncOperationGroupName;
-(void)_processRecordWriteCompletionForRecord:(id)arg1 NSError:(id)arg2 ;
-(void)_processModifyRecordsCompletion:(id)arg1 deletedRecordIDs:(id)arg2 operationError:(id)arg3 isLastBatchOfWrite:(BOOL)arg4 writeCompletionBlock:(/*^block*/id)arg5 ;
-(void)setArchivedRecordSyncToken:(CKServerChangeToken *)arg1 ;
-(void)_fetchArchivedRecordsIfNeeded:(BOOL)arg1 currentBatchCount:(long long)arg2 maxNumberOfBatches:(long long)arg3 WithCompletionBlock:(/*^block*/id)arg4 ;
-(void)_resetArvchivedRecordSyncToken;
-(CKServerChangeToken *)archivedRecordSyncToken;
-(void)_processRecordChange:(id)arg1 ;
-(void)_processArchivedRecordsFetchCompletionZoneID:(id)arg1 serverChangeToken:(id)arg2 moreComing:(BOOL)arg3 currentBatchCount:(long long)arg4 maxNumberOfBatches:(long long)arg5 NSError:(id)arg6 completionBlock:(/*^block*/id)arg7 ;
-(void)_processFetchArchivedRecordCompletionWithError:(id)arg1 WithCompletionBlock:(/*^block*/id)arg2 ;
-(void)_fetchMessageZoneChangesSyncType:(long long)arg1 currentBatchCount:(long long)arg2 maxNumberOfBatches:(long long)arg3 completionBlock:(/*^block*/id)arg4 ;
-(BOOL)_messageZoneCreated;
-(BOOL)_doesAnyRecordZoneIDHavePendingArchivedRecords:(long long)arg1 ;
-(unsigned long long)_numberOfRecordsToFetchForSyncType:(long long)arg1 ;
-(BOOL)_shouldFetchArchivedRecords:(id)arg1 ;
-(void)_processRecordZoneFetchCompletionZoneID:(id)arg1 serverChangeToken:(id)arg2 clientChangeTokenData:(id)arg3 moreComing:(BOOL)arg4 NSError:(id)arg5 syncType:(long long)arg6 currentBatchCount:(long long)arg7 maxNumberOfBatches:(long long)arg8 shouldFetchArchivedRecords:(BOOL)arg9 completionBlock:(/*^block*/id)arg10 ;
-(void)_processFetchRecordZoneChangesCompletionWithError:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(BOOL)_shouldMarkAllMessagesAsNeedingSync;
-(void)_updateAllMessagesAsNotNeedingReUpload;
-(long long)_numberOfBatchesOfMessagesToFetchInInitialSync;
-(void)_markAllUnsuccessFullSyncMessagesAsNeedingSync;
-(void)_noteSyncEnded;
-(void)_deleteStingRaySyncToken;
-(void)deleteMessageSyncToken;
-(void)_processRecordDeletionCompletion:(id)arg1 error:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)_constructMessageRecordIDUsingTombStoneDictionary:(id)arg1 ;
-(unsigned long long)_messageDeleteBatchSize;
-(void)syncDeletedMessagesToCloudKitWithCompletion:(/*^block*/id)arg1 ;
-(void)_deleteMessagesWithRecordIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)syncMessagesWithSyncType:(long long)arg1 shouldCheckDeviceConditions:(BOOL)arg2 activity:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(NSMutableDictionary *)visitedChats;
-(void)setVisitedChats:(NSMutableDictionary *)arg1 ;
@end

