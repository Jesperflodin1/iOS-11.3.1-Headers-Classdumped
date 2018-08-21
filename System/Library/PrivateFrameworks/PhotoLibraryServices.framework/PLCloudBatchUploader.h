/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:52 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PLPhotoLibrary, NSMutableArray, NSMutableSet;

@interface PLCloudBatchUploader : NSObject {

	PLPhotoLibrary* _photoLibrary;
	NSMutableArray* _uploadBatchArray;
	NSMutableSet* _downloadedDeleteUuid;
	NSMutableSet* _cameraAsset;
	BOOL _initialUpload;
	BOOL _shouldGenerateDerivatives;

}

@property (assign) BOOL initialUpload;                          //@synthesize initialUpload=_initialUpload - In the implementation block
@property (assign) BOOL shouldGenerateDerivatives;              //@synthesize shouldGenerateDerivatives=_shouldGenerateDerivatives - In the implementation block
-(void)dealloc;
-(id)pop;
-(id)createUploadBatchesForDeletionFromEvent:(id)arg1 ;
-(id)createBatchesForChanges:(id)arg1 outInsertedPhotoCount:(unsigned long long*)arg2 outInsertedVideoCount:(unsigned long long*)arg3 withUploadTracker:(id)arg4 ;
-(BOOL)shouldProcessDuringInitialUpload:(id)arg1 ;
-(void)_addAsset:(id)arg1 toAssetChanges:(id)arg2 isInsert:(BOOL)arg3 seenAssetUuid:(id)arg4 ;
-(void)_handleInvalidAsset:(id)arg1 ;
-(void)_sortData:(id)arg1 isInsert:(BOOL)arg2 forUploadChanges:(id)arg3 shouldTriggerPrefetch:(BOOL*)arg4 inManagedObjectContext:(id)arg5 ;
-(void)_sortRelationshipData:(id)arg1 forRelationshipUpdate:(id)arg2 inManagedObjectContext:(id)arg3 ;
-(BOOL)_isKnownDeletionForUuid:(id)arg1 ;
-(id)_fetchChangesFromEvent:(id)arg1 shouldTriggerPrefetch:(BOOL*)arg2 ;
-(void)_incrementUploadAttemptsAndPushStateForAssets:(id)arg1 ;
-(void)addBatches:(id)arg1 ;
-(void)_processAlbumDeletes:(id)arg1 albumInserts:(id)arg2 albumChanges:(id)arg3 withBatchManager:(id)arg4 ;
-(id)_personsToUploadIncludingReverseOrderedMergeTargetsForPersons:(id)arg1 ;
-(id)_validateAssets:(id)arg1 fromCloudUuidDeleteList:(id)arg2 ;
-(BOOL)_needsToIncludeMaster:(id)arg1 forAsset:(id)arg2 ;
-(void)_sendAlbums:(id)arg1 toBatchManager:(id)arg2 ;
-(void)_sendAssets:(id)arg1 toBatchManager:(id)arg2 ;
-(void)_sendOneBatch:(id)arg1 toBatchManager:(id)arg2 ;
-(void)_processPendingObjects:(id)arg1 withBatchManager:(id)arg2 ;
-(id)_getLocalRecordFromCPLRecord:(id)arg1 ;
-(void)quarantineRecord:(id)arg1 ;
-(void)_processGenerateDerivativesCommitError:(id)arg1 inUploadBatch:(id)arg2 forRecords:(id)arg3 ;
-(void)_processIncludeMasterCommitError:(id)arg1 inUploadBatch:(id)arg2 forRecords:(id)arg3 ;
-(void)_processChangeToFullRecordCommitError:(id)arg1 inUploadBatch:(id)arg2 forRecords:(id)arg3 ;
-(BOOL)_processRepushAlbumError:(id)arg1 inUploadBatch:(id)arg2 forRecords:(id)arg3 ;
-(void)_processQuarantineRecordsCommitError:(id)arg1 inUploadBatch:(id)arg2 forRecords:(id)arg3 ;
-(void)_addLocalResourcesToRecord:(id)arg1 ;
-(void)_push:(id)arg1 ;
-(void)_pushBatches:(id)arg1 ;
-(void)_cleanUploadedResources:(id)arg1 ;
-(id)initWithLibrary:(id)arg1 ;
-(void)clearUploadArray;
-(BOOL)hasBatchesToUpload;
-(unsigned long long)numberOfBatchesToUpload;
-(void)recordDeletionOnUuids:(id)arg1 ;
-(void)handleUploadBatchesForDeletionFromEvent:(id)arg1 ;
-(void)handleUploadBatchesFromEvent:(id)arg1 outInsertedPhotoCount:(unsigned long long*)arg2 outInsertedVideoCount:(unsigned long long*)arg3 shouldTriggerPrefetch:(BOOL*)arg4 withUploadTracker:(id)arg5 ;
-(void)uploadFullPhotoLibraryToCloud;
-(void)tryToFixCommitError:(id)arg1 inUploadBatch:(id)arg2 forRecords:(id)arg3 ;
-(id)processCommitError:(id)arg1 andFinalizeError:(id)arg2 forUploadBatchContainer:(id)arg3 withUploadTracker:(id)arg4 ;
-(BOOL)initialUpload;
-(void)setInitialUpload:(BOOL)arg1 ;
-(BOOL)shouldGenerateDerivatives;
-(void)setShouldGenerateDerivatives:(BOOL)arg1 ;
@end

