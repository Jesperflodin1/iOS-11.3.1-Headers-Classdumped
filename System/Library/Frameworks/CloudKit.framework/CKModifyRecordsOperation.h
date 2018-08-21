/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:58 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray, NSData, NSMutableArray, NSMutableDictionary, NSMutableSet, NSDictionary;

@interface CKModifyRecordsOperation : CKDatabaseOperation {

	BOOL _atomic;
	BOOL _shouldReportRecordsInFlight;
	BOOL _shouldOnlySaveAssetContent;
	/*^block*/id _perRecordProgressBlock;
	/*^block*/id _perRecordCompletionBlock;
	/*^block*/id _modifyRecordsCompletionBlock;
	/*^block*/id _recordsInFlightBlock;
	NSArray* _recordsToSave;
	NSArray* _recordIDsToDelete;
	long long _savePolicy;
	NSData* _clientChangeTokenData;
	NSMutableArray* _savedRecords;
	NSMutableArray* _deletedRecordIDs;
	NSMutableDictionary* _recordsByRecordIDs;
	NSMutableDictionary* _recordErrors;
	NSMutableDictionary* _assetsByRecordIDAndRecordKey;
	NSMutableSet* _packagesToDestroy;
	NSDictionary* _recordIDsToDeleteToEtags;
	NSDictionary* _conflictLosersToResolveByRecordID;
	NSDictionary* _pluginFieldsForRecordDeletesByID;

}

@property (nonatomic,retain) NSMutableArray * savedRecords;                                   //@synthesize savedRecords=_savedRecords - In the implementation block
@property (nonatomic,retain) NSMutableArray * deletedRecordIDs;                               //@synthesize deletedRecordIDs=_deletedRecordIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordsByRecordIDs;                        //@synthesize recordsByRecordIDs=_recordsByRecordIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordErrors;                              //@synthesize recordErrors=_recordErrors - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * assetsByRecordIDAndRecordKey;              //@synthesize assetsByRecordIDAndRecordKey=_assetsByRecordIDAndRecordKey - In the implementation block
@property (assign,nonatomic) BOOL shouldReportRecordsInFlight;                                //@synthesize shouldReportRecordsInFlight=_shouldReportRecordsInFlight - In the implementation block
@property (nonatomic,retain) NSMutableSet * packagesToDestroy;                                //@synthesize packagesToDestroy=_packagesToDestroy - In the implementation block
@property (assign,nonatomic) BOOL shouldOnlySaveAssetContent;                                 //@synthesize shouldOnlySaveAssetContent=_shouldOnlySaveAssetContent - In the implementation block
@property (nonatomic,copy) NSDictionary * recordIDsToDeleteToEtags;                           //@synthesize recordIDsToDeleteToEtags=_recordIDsToDeleteToEtags - In the implementation block
@property (nonatomic,retain) NSDictionary * conflictLosersToResolveByRecordID;                //@synthesize conflictLosersToResolveByRecordID=_conflictLosersToResolveByRecordID - In the implementation block
@property (nonatomic,copy) NSDictionary * pluginFieldsForRecordDeletesByID;                   //@synthesize pluginFieldsForRecordDeletesByID=_pluginFieldsForRecordDeletesByID - In the implementation block
@property (nonatomic,copy) id recordsInFlightBlock;                                           //@synthesize recordsInFlightBlock=_recordsInFlightBlock - In the implementation block
@property (nonatomic,copy) NSArray * recordsToSave;                                           //@synthesize recordsToSave=_recordsToSave - In the implementation block
@property (nonatomic,copy) NSArray * recordIDsToDelete;                                       //@synthesize recordIDsToDelete=_recordIDsToDelete - In the implementation block
@property (assign,nonatomic) long long savePolicy;                                            //@synthesize savePolicy=_savePolicy - In the implementation block
@property (nonatomic,copy) NSData * clientChangeTokenData;                                    //@synthesize clientChangeTokenData=_clientChangeTokenData - In the implementation block
@property (assign,nonatomic) BOOL atomic;                                                     //@synthesize atomic=_atomic - In the implementation block
@property (nonatomic,copy) id perRecordProgressBlock;                                         //@synthesize perRecordProgressBlock=_perRecordProgressBlock - In the implementation block
@property (nonatomic,copy) id perRecordCompletionBlock;                                       //@synthesize perRecordCompletionBlock=_perRecordCompletionBlock - In the implementation block
@property (nonatomic,copy) id modifyRecordsCompletionBlock;                                   //@synthesize modifyRecordsCompletionBlock=_modifyRecordsCompletionBlock - In the implementation block
-(id)init;
-(id)initWithRecordsToSave:(id)arg1 recordIDsToDelete:(id)arg2 ;
-(void)setModifyRecordsCompletionBlock:(id)arg1 ;
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(NSMutableSet *)packagesToDestroy;
-(BOOL)claimPackagesInRecord:(id)arg1 error:(id*)arg2 ;
-(void)setPackagesToDestroy:(NSMutableSet *)arg1 ;
-(NSMutableDictionary *)recordErrors;
-(void)setRecordErrors:(NSMutableDictionary *)arg1 ;
-(void)destroyPackagesInRecords:(id)arg1 ;
-(NSMutableDictionary *)recordsByRecordIDs;
-(void)_trackAssetsToUpload;
-(NSMutableDictionary *)assetsByRecordIDAndRecordKey;
-(NSMutableArray *)savedRecords;
-(void)destroyPackages:(id)arg1 ;
-(void)setSavedRecords:(NSMutableArray *)arg1 ;
-(void)setRecordsByRecordIDs:(NSMutableDictionary *)arg1 ;
-(void)setAssetsByRecordIDAndRecordKey:(NSMutableDictionary *)arg1 ;
-(long long)savePolicy;
-(id)modifyRecordsCompletionBlock;
-(NSArray *)recordIDsToDelete;
-(id)perRecordCompletionBlock;
-(id)perRecordProgressBlock;
-(NSMutableArray *)deletedRecordIDs;
-(void)setDeletedRecordIDs:(NSMutableArray *)arg1 ;
-(void)setAtomic:(BOOL)arg1 ;
-(void)setRecordsToSave:(NSArray *)arg1 ;
-(void)setRecordIDsToDelete:(NSArray *)arg1 ;
-(void)setPerRecordCompletionBlock:(id)arg1 ;
-(void)setRecordsInFlightBlock:(id)arg1 ;
-(BOOL)shouldOnlySaveAssetContent;
-(id)activityCreate;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(BOOL)atomic;
-(void)setClientChangeTokenData:(NSData *)arg1 ;
-(NSDictionary *)recordIDsToDeleteToEtags;
-(NSDictionary *)conflictLosersToResolveByRecordID;
-(NSDictionary *)pluginFieldsForRecordDeletesByID;
-(NSData *)clientChangeTokenData;
-(BOOL)shouldReportRecordsInFlight;
-(void)setRecordIDsToDeleteToEtags:(NSDictionary *)arg1 ;
-(void)setConflictLosersToResolveByRecordID:(NSDictionary *)arg1 ;
-(void)setPluginFieldsForRecordDeletesByID:(NSDictionary *)arg1 ;
-(id)recordsInFlightBlock;
-(void)setShouldReportRecordsInFlight:(BOOL)arg1 ;
-(void)setShouldOnlySaveAssetContent:(BOOL)arg1 ;
-(void)setSavePolicy:(long long)arg1 ;
-(void)setPerRecordProgressBlock:(id)arg1 ;
-(NSArray *)recordsToSave;
@end

