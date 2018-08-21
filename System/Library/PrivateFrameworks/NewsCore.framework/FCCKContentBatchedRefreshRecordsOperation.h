/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:27 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@class FCCKContentDatabase, NSArray, NSDictionary, CKRecordID, NSMutableArray, NSMutableSet, NSMutableDictionary, NSError;

@interface FCCKContentBatchedRefreshRecordsOperation : FCOperation {

	BOOL _checkForDeletions;
	FCCKContentDatabase* _database;
	NSArray* _recordIDs;
	NSDictionary* _changeTagsByRecordID;
	NSArray* _desiredKeys;
	CKRecordID* _canaryRecordID;
	/*^block*/id _refreshRecordsCompletionBlock;
	NSMutableArray* _remainingRecordIDBatches;
	NSMutableSet* _refreshedRecordIDs;
	NSMutableDictionary* _updatedRecordsByRecordID;
	NSMutableSet* _deletedRecordIDs;
	NSMutableDictionary* _errorsByRecordID;
	NSError* _operationError;

}

@property (nonatomic,retain) NSMutableArray * remainingRecordIDBatches;                   //@synthesize remainingRecordIDBatches=_remainingRecordIDBatches - In the implementation block
@property (nonatomic,retain) NSMutableSet * refreshedRecordIDs;                           //@synthesize refreshedRecordIDs=_refreshedRecordIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * updatedRecordsByRecordID;              //@synthesize updatedRecordsByRecordID=_updatedRecordsByRecordID - In the implementation block
@property (nonatomic,retain) NSMutableSet * deletedRecordIDs;                             //@synthesize deletedRecordIDs=_deletedRecordIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * errorsByRecordID;                      //@synthesize errorsByRecordID=_errorsByRecordID - In the implementation block
@property (nonatomic,retain) NSError * operationError;                                    //@synthesize operationError=_operationError - In the implementation block
@property (nonatomic,retain) FCCKContentDatabase * database;                              //@synthesize database=_database - In the implementation block
@property (nonatomic,copy) NSArray * recordIDs;                                           //@synthesize recordIDs=_recordIDs - In the implementation block
@property (nonatomic,copy) NSDictionary * changeTagsByRecordID;                           //@synthesize changeTagsByRecordID=_changeTagsByRecordID - In the implementation block
@property (nonatomic,copy) NSArray * desiredKeys;                                         //@synthesize desiredKeys=_desiredKeys - In the implementation block
@property (assign,nonatomic) BOOL checkForDeletions;                                      //@synthesize checkForDeletions=_checkForDeletions - In the implementation block
@property (nonatomic,copy) CKRecordID * canaryRecordID;                                   //@synthesize canaryRecordID=_canaryRecordID - In the implementation block
@property (nonatomic,copy) id refreshRecordsCompletionBlock;                              //@synthesize refreshRecordsCompletionBlock=_refreshRecordsCompletionBlock - In the implementation block
-(id)init;
-(NSArray *)desiredKeys;
-(BOOL)validateOperation;
-(void)performOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)resetForRetry;
-(void)setChangeTagsByRecordID:(NSDictionary *)arg1 ;
-(void)setCheckForDeletions:(BOOL)arg1 ;
-(void)setCanaryRecordID:(CKRecordID *)arg1 ;
-(void)setRefreshRecordsCompletionBlock:(id)arg1 ;
-(void)prepareOperation;
-(NSArray *)recordIDs;
-(NSMutableArray *)remainingRecordIDBatches;
-(void)_continueRefreshing;
-(id)refreshRecordsCompletionBlock;
-(NSMutableSet *)refreshedRecordIDs;
-(NSMutableDictionary *)updatedRecordsByRecordID;
-(NSMutableSet *)deletedRecordIDs;
-(NSError *)operationError;
-(void)setOperationError:(NSError *)arg1 ;
-(CKRecordID *)canaryRecordID;
-(NSDictionary *)changeTagsByRecordID;
-(BOOL)checkForDeletions;
-(NSMutableDictionary *)errorsByRecordID;
-(void)setRemainingRecordIDBatches:(NSMutableArray *)arg1 ;
-(void)setRefreshedRecordIDs:(NSMutableSet *)arg1 ;
-(void)setUpdatedRecordsByRecordID:(NSMutableDictionary *)arg1 ;
-(void)setDeletedRecordIDs:(NSMutableSet *)arg1 ;
-(void)setErrorsByRecordID:(NSMutableDictionary *)arg1 ;
-(FCCKContentDatabase *)database;
-(void)setDatabase:(FCCKContentDatabase *)arg1 ;
-(void)setDesiredKeys:(NSArray *)arg1 ;
-(void)setRecordIDs:(NSArray *)arg1 ;
@end

