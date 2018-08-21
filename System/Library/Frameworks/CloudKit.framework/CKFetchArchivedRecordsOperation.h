/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:57 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray, NSDictionary, NSMutableDictionary;

@interface CKFetchArchivedRecordsOperation : CKDatabaseOperation {

	BOOL _fetchAllChanges;
	BOOL _shouldFetchAssetContents;
	/*^block*/id _recordFetchedBlock;
	/*^block*/id _recordZoneChangeTokensUpdatedBlock;
	/*^block*/id _recordZoneFetchCompletionBlock;
	/*^block*/id _fetchArchivedRecordsCompletionBlock;
	NSArray* _recordZoneIDs;
	NSDictionary* _optionsByRecordZoneID;
	NSMutableDictionary* _statusByZoneID;
	NSMutableDictionary* _perItemErrors;
	NSDictionary* _assetTransferOptionsByRecordTypeAndKey;

}

@property (nonatomic,retain) NSMutableDictionary * statusByZoneID;                               //@synthesize statusByZoneID=_statusByZoneID - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchAssetContents;                                      //@synthesize shouldFetchAssetContents=_shouldFetchAssetContents - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * perItemErrors;                                //@synthesize perItemErrors=_perItemErrors - In the implementation block
@property (nonatomic,retain) NSDictionary * assetTransferOptionsByRecordTypeAndKey;              //@synthesize assetTransferOptionsByRecordTypeAndKey=_assetTransferOptionsByRecordTypeAndKey - In the implementation block
@property (nonatomic,copy) NSArray * recordZoneIDs;                                              //@synthesize recordZoneIDs=_recordZoneIDs - In the implementation block
@property (nonatomic,copy) NSDictionary * optionsByRecordZoneID;                                 //@synthesize optionsByRecordZoneID=_optionsByRecordZoneID - In the implementation block
@property (assign,nonatomic) BOOL fetchAllChanges;                                               //@synthesize fetchAllChanges=_fetchAllChanges - In the implementation block
@property (nonatomic,copy) id recordFetchedBlock;                                                //@synthesize recordFetchedBlock=_recordFetchedBlock - In the implementation block
@property (nonatomic,copy) id recordZoneChangeTokensUpdatedBlock;                                //@synthesize recordZoneChangeTokensUpdatedBlock=_recordZoneChangeTokensUpdatedBlock - In the implementation block
@property (nonatomic,copy) id recordZoneFetchCompletionBlock;                                    //@synthesize recordZoneFetchCompletionBlock=_recordZoneFetchCompletionBlock - In the implementation block
@property (nonatomic,copy) id fetchArchivedRecordsCompletionBlock;                               //@synthesize fetchArchivedRecordsCompletionBlock=_fetchArchivedRecordsCompletionBlock - In the implementation block
-(id)init;
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(NSMutableDictionary *)perItemErrors;
-(void)setPerItemErrors:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)statusByZoneID;
-(id)fetchArchivedRecordsCompletionBlock;
-(id)recordZoneArchivesStatusByZoneID;
-(void)setStatusByZoneID:(NSMutableDictionary *)arg1 ;
-(NSDictionary *)optionsByRecordZoneID;
-(void)setRecordFetchedBlock:(id)arg1 ;
-(BOOL)fetchAllChanges;
-(void)setOptionsByRecordZoneID:(NSDictionary *)arg1 ;
-(id)recordZoneChangeTokensUpdatedBlock;
-(void)setRecordZoneChangeTokensUpdatedBlock:(id)arg1 ;
-(id)recordZoneFetchCompletionBlock;
-(id)recordFetchedBlock;
-(void)setFetchArchivedRecordsCompletionBlock:(id)arg1 ;
-(NSArray *)recordZoneIDs;
-(id)initWithRecordZoneIDs:(id)arg1 optionsByRecordZoneID:(id)arg2 ;
-(void)setFetchAllChanges:(BOOL)arg1 ;
-(void)setRecordZoneFetchCompletionBlock:(id)arg1 ;
-(void)setRecordZoneIDs:(NSArray *)arg1 ;
-(id)activityCreate;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(void)setAssetTransferOptionsByRecordTypeAndKey:(NSDictionary *)arg1 ;
-(NSDictionary *)assetTransferOptionsByRecordTypeAndKey;
-(BOOL)shouldFetchAssetContents;
-(void)setShouldFetchAssetContents:(BOOL)arg1 ;
@end

