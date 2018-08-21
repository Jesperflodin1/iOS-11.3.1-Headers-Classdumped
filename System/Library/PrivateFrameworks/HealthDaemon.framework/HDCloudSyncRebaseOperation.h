/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:39 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSProgressReporting.h>

@protocol OS_dispatch_queue;
@class NSProgress, HDCloudSyncOperationConfiguration, HDCloudSyncFetchOperationResult, HDCloudSyncStoreRecord, NSUUID, NSDate, NSObject, NSString;

@interface HDCloudSyncRebaseOperation : NSObject <NSProgressReporting> {

	HDCloudSyncOperationConfiguration* _configuration;
	HDCloudSyncFetchOperationResult* _fetchOperationResult;
	HDCloudSyncStoreRecord* _pushStoreRecord;
	NSUUID* _operationIdentifier;
	NSDate* _startTime;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _queue_hasStarted;
	/*^block*/id _completion;
	NSProgress* _progress;

}

@property (nonatomic,readonly) NSProgress * progress;               //@synthesize progress=_progress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSProgress *)progress;
-(void)startWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithConfiguration:(id)arg1 fetchOperationResult:(id)arg2 ;
-(void)_finishWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(void)_queue_runRebaseOperation;
-(void)_queue_startBaselinePrepForNewBaselineOperation:(id)arg1 ;
-(BOOL)_queue_finishRebasePreparationWithError:(id*)arg1 ;
-(void)_queue_calculateRecordsToSaveAndDeleteWithStoreRecord:(id)arg1 resultsHandler:(/*^block*/id)arg2 ;
-(id)_includedIdentifiersWithStoreRecord:(id)arg1 abandonedStoreRecords:(id)arg2 ;
-(BOOL)_queue_updatePersistedStateForStore:(id)arg1 error:(id*)arg2 ;
@end

