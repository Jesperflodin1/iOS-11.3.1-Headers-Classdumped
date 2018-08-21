/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:40 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSProgressReporting.h>

@protocol OS_dispatch_queue;
@class HDCloudSyncOperationConfiguration, NSObject, NSMutableSet, NSMutableDictionary, HDCloudSyncMasterRecord, NSSet, NSUUID, HDCloudSyncStoreRecord, HDCloudSyncStore, NSDate, NSProgress, NSString;

@interface HDCloudSyncFetchOperation : NSObject <NSProgressReporting> {

	HDCloudSyncOperationConfiguration* _configuration;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableSet* _emptyZoneIDs;
	double _timeIntervalBeforeOwnershipTransfer;
	NSMutableDictionary* _storeRecordsCacheMap;
	HDCloudSyncMasterRecord* _masterRecord;
	NSSet* _recordZoneIDs;
	NSMutableSet* _candidateSyncStorePushIdentifiers;
	NSUUID* _syncStorePushIdentifier;
	HDCloudSyncStoreRecord* _pushStoreRecord;
	HDCloudSyncStore* _syncPushStore;
	NSMutableSet* _syncStorePullIdentifiers;
	NSMutableSet* _abandonedStoreIdentifiers;
	NSMutableSet* _reclaimedIdentifiers;
	NSMutableSet* _sequenceRecords;
	NSMutableDictionary* _inactiveRecordZonesByStoreIdentifierMap;
	NSMutableSet* _emptyZonesForGarbageCollection;
	NSSet* _pushZonesForCleanup;
	NSUUID* _operationIdentifier;
	NSDate* _startTime;
	BOOL _rebaseRequired;
	BOOL _queue_hasStarted;
	/*^block*/id _completion;
	NSProgress* _progress;

}

@property (nonatomic,readonly) NSProgress * progress;               //@synthesize progress=_progress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithConfiguration:(id)arg1 ;
-(NSProgress *)progress;
-(void)startWithCompletion:(/*^block*/id)arg1 ;
-(double)_determineTimeIntervalBeforeOwnershipTransfer;
-(void)_fetchSyncZonesAndHeaderRecords;
-(void)_incrementAggdCountForResultStatus:(long long)arg1 ;
-(void)_queue_fetchHeaderRecordsInBatchesForZoneID:(id)arg1 ;
-(BOOL)_canIgnorePartialFailureError:(id)arg1 fetchedRecords:(id)arg2 error:(id*)arg3 ;
-(void)_finishWithStatus:(long long)arg1 error:(id)arg2 ;
-(void)_queue_updateSyncCacheDataWithRecords:(id)arg1 ;
-(id)_generateAllRecordIDsFromZoneIDs:(id)arg1 ;
-(void)_deleteRecordZonesWithLostManateeIdentitiesForPartialError:(id)arg1 ;
-(id)_fetchRecordsOperationForZones:(id)arg1 ;
-(void)_queue_helpFetchHeaderRecordsInBatchesForZoneID:(id)arg1 recordIndex:(long long)arg2 recordsByRecordID:(id)arg3 ;
-(void)_queue_fetchHeaderRecordsForZoneID:(id)arg1 continuation:(/*^block*/id)arg2 ;
-(BOOL)_queue_processSyncRecord:(id)arg1 ;
-(void)_queue_computeInactiveAndAbandonedStoreIdentifiers;
-(void)_queue_validateSequenceRecords;
-(BOOL)_queue_validatePushStore;
-(void)_queue_checkForSeizableAbandonedZones;
-(void)_queue_computePushZonesForCleaup;
-(void)_queue_garbageCollectZones;
-(void)_verifySequenceForStoreRecord:(id)arg1 syncStore:(id)arg2 ;
-(id)_lastestPushStoreIdentifierWithPushStoreIdentifiers:(id)arg1 storeRecordsCacheMap:(id)arg2 ;
-(id)_syncStorePushIdentifierWithError:(id*)arg1 ;
-(long long)_verifyAnchorRangesForSyncStore:(id)arg1 storeRecord:(id)arg2 error:(id*)arg3 ;
-(void)_persistState:(id)arg1 syncStore:(id)arg2 ;
-(void)_deleteRecordZones:(id)arg1 ;
-(long long)_verifyAnchorRangesForSyncStore:(id)arg1 storeRecord:(id)arg2 sequenceRecord:(id)arg3 error:(id*)arg4 ;
-(void)_verifySequenceForPushStore:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_orderedChangeRecordSequenceRequiresRebase:(id)arg1 ;
-(BOOL)_isValidChangeRecord:(id)arg1 forStoreRecord:(id)arg2 ;
@end
