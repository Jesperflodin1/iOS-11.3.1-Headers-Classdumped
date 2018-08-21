/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:52 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSMutableArray, PLGenericAlbum, NSCalendar, NSMutableDictionary, NSSet, PLManagedAlbum, PLFetchingAlbum, PLManagedAlbumList, PLManagedFolder, NSString, PLManagedObjectContext, NSArray;

@interface PLPhotoLibrary : NSObject {

	BOOL _listeningForITunesSyncing;
	BOOL _isTransient;
	unsigned long long _pendingTransactions;
	CFDictionaryRef _allPhotos;
	int _databaseMigrationKind;
	NSMutableArray* _transactionCompletionHandlers;
	PLGenericAlbum* _allImportedPhotosAlbum;
	PLGenericAlbum* _lastImportedPhotosAlbum;
	NSCalendar* _exifConversionCalendar;
	NSMutableDictionary* _photoStreamAlbumsByStreamID;
	NSMutableArray* _photoStreamAlbums;
	NSSet* _imageFileExtensions;
	NSSet* _rawImageFileExtensions;
	NSSet* _audioFileExtensions;
	NSSet* _extraVideoExtensions;
	unsigned long long _lastFetchedGPSCount;
	unsigned long long _insertedCountSinceLastFetchedGPSCount;
	unsigned long long _deletedCountSinceLastFetchedGPSCount;
	unsigned long long _newlyCompleteWithGPS;
	PLManagedAlbum* _cameraRollAlbum;
	PLFetchingAlbum* _userLibraryAlbum;
	PLFetchingAlbum* _cameraSessionAlbum;
	PLManagedAlbumList* _rootAlbumList;
	PLManagedFolder* _rootFolder;
	NSString* _cachedName;
	PLManagedObjectContext* managedObjectContext;

}

@property (nonatomic,retain) PLManagedObjectContext * managedObjectContext; 
@property (nonatomic,retain,readonly) PLFetchingAlbum * userLibraryAlbum; 
@property (nonatomic,retain,readonly) PLManagedAlbumList * rootAlbumList; 
@property (nonatomic,retain,readonly) PLManagedFolder * rootFolder; 
@property (nonatomic,copy,readonly) NSArray * albums; 
@property (nonatomic,copy,readonly) NSArray * userAlbums; 
@property (nonatomic,copy,readonly) NSArray * imagePickerAlbums; 
@property (nonatomic,copy,readonly) NSArray * wallpaperAlbums; 
@property (nonatomic,copy,readonly) NSArray * importAlbums; 
@property (nonatomic,copy,readonly) NSArray * eventAlbums; 
@property (nonatomic,copy,readonly) NSArray * faceAlbums; 
@property (nonatomic,copy,readonly) NSArray * placeAlbums; 
@property (nonatomic,copy,readonly) NSObject*<PLAlbumProtocol> favoritesAlbum; 
@property (nonatomic,copy,readonly) NSArray * photoStreamAlbums; 
@property (nonatomic,copy,readonly) NSArray * photoStreamAlbumsForPreferences; 
+(BOOL)isRunningInStoreDemoMode;
+(id)deletedMemoryUUIDsFilePath;
+(unsigned long long)sharedStreamsSize;
+(id)lightweightReimportPhotoCloudSharingDataDirectory;
+(id)photoCloudSharingCacheDataDirectory;
+(id)photoMetadataDirectoryURL;
+(id)fileReservationForFileAtPath:(id)arg1 exclusive:(BOOL)arg2 ;
+(void)performOnTransientLibraryWithPriority:(long long)arg1 name:(const char*)arg2 block:(/*^block*/id)arg3 ;
+(void)setSqliteErrorAndExitIfNecessaryForSimulatedCorruption:(BOOL)arg1 ;
+(id)crashRecoveryIndicatorFilePaths:(BOOL)arg1 ;
+(void)_enqeueRecoveryJob:(id)arg1 ;
+(id)opportunisticTaskIsolationQueue;
+(unsigned long long)defaultUnverifiedFaceCountThreshold;
+(BOOL)photoLibraryIsObtainable;
+(id)photoDataDirectory;
+(void)setApplicationIsWildcat:(BOOL)arg1 ;
+(void)_doFilesystemImportIfNeededWithMOC:(id)arg1 reason:(id)arg2 ;
+(id)photoCloudSharingDataDirectory;
+(id)photoDataCachesDirectory;
+(id)dcimDirectoryURL;
+(void)_inq_createPhotoStreamAlbumStreamID:(id)arg1 inLibrary:(id)arg2 ;
+(id)takingVideoIndicatorFilePath;
+(id)takingPhotoIndicatorFilePath;
+(id)imageWriterIndicatorFilePath;
+(BOOL)libraryAvailableIndicatorState;
+(id)pathToAssetsToAlbumsMapping;
+(id)iTunesSyncedAssetsDirectory;
+(id)mediaFilesDirectoryURL;
+(id)persistedAlbumDataDirectoryURL;
+(void)setLibraryAvailableIndicatorState:(BOOL)arg1 ;
+(void)postGlobalPhotoLibraryAvailableNotification;
+(void)repairSingletonObjects;
+(id)migrationIndicatorFilePath;
+(id)momentAnalysisNeededFilePath;
+(id)forceSoftResetSyncPath;
+(id)disableICloudPhotosFilePath;
+(id)enableICloudPhotosFilePath;
+(void)updateICloudPhotosMarkerForEnable:(BOOL)arg1 ;
+(void)setCameraRollCountedInQuota:(BOOL)arg1 ;
+(BOOL)isICloudPhotosPaused;
+(BOOL)clearPauseMarkerForReason:(short)arg1 ;
+(BOOL)isEnableICloudPhotos;
+(BOOL)isDisableICloudPhotos;
+(BOOL)isForceSoftResetSync;
+(id)cplEnableMarkerFilePath;
+(id)cplDownloadFinishedMarkerFilePath;
+(id)pauseICloudPhotosFilePath;
+(BOOL)isUserPause;
+(id)_pauseDataOnPath:(id)arg1 ;
+(BOOL)_canSetPauseMarkerWithUnpauseTime:(id)arg1 onPauseData:(id)arg2 ;
+(void)_createPauseMarkerForReason:(short)arg1 withUnpauseTime:(id)arg2 withPath:(id)arg3 ;
+(id)dupeAnalysisNeededFilePath;
+(id)_rebuildingPersonsIndicatorFilePath;
+(id)libraryAvailableIndicatorFilePath;
+(id)streamsLibraryUpdatingExpiredIndicatorFilePath;
+(id)_dataProtectionIndicatorFilePath;
+(id)_dataMigratorFinishedFilePath;
+(id)_dataMigratorFinishedMarkerQueue;
+(id)photoDataDirectoryURL;
+(id)photoDataCPLDirectory;
+(id)persistedFaceDataDirectoryURL;
+(id)allPersistedDirectoryURLs;
+(BOOL)_isRebuildingPersons;
+(void)_setIsRebuildingPersons:(BOOL)arg1 ;
+(BOOL)removeFaceMetadataAtURL:(id)arg1 includingPeople:(BOOL)arg2 ;
+(BOOL)processWithID:(int)arg1 canReadSandboxForPath:(id)arg2 ;
+(BOOL)processWithID:(int)arg1 canWriteSandboxForPath:(id)arg2 ;
+(id)sqliteErrorIndicatorFilePath;
+(BOOL)createSqliteErrorIndicatorFile;
+(int)priorityForFileExtension:(id)arg1 ;
+(void)_loadFileExtensionInformation;
+(BOOL)isNonRawImageFileExtension:(id)arg1 ;
+(BOOL)isRawImageFileExtension:(id)arg1 ;
+(BOOL)isVideoFileExtension:(id)arg1 ;
+(BOOL)isAudioFileExtension:(id)arg1 ;
+(id)iTunesSyncedFaceAlbumThumbnailsDirectory;
+(id)iTunesSyncedFaceDataDirectory;
+(id)iTunesPhotosDirectory;
+(id)iTunesSyncedAssetMetadataThumbnailsDirectory;
+(id)iTunesSyncedAssetSmallThumbnailsDirectory;
+(void)resetSyncedAssetsDCIMDirectory;
+(id)photoMetadataDirectoryURLForMediaInMainDirectory:(id)arg1 ;
+(id)photoMutationsDirectory;
+(id)photoStreamsDataDirectory;
+(BOOL)isDupeAnalysisNeeded;
+(BOOL)isDataMigratorFinished;
+(void)setDataMigratorFinished:(BOOL)arg1 ;
+(id)syncInfoPath;
+(void)refreshCachedCountsOnAssetsContainerClass:(Class)arg1 inContext:(id)arg2 withPredicate:(id)arg3 ;
+(void)_updateAssetCountKeyPath:(id)arg1 withPendingCountKeyPath:(id)arg2 inContext:(id)arg3 ;
+(void)_updateMemoryCountKeyPath:(id)arg1 withPendingCountKeyPath:(id)arg2 inContext:(id)arg3 ;
+(BOOL)isApplicationWildcat;
+(void)handlePossibleCoreDataError:(id)arg1 ;
+(void)recoverFromCrashIfNeeded;
+(void)disableOpportunisticTasks:(BOOL)arg1 ;
+(BOOL)areOpportunisticTasksDisabled;
+(BOOL)isSafeToRecoverAfterCrash;
+(unsigned long long)unverifiedFaceCountThreshold;
+(void)setUnverifiedFaceCountThreshold:(unsigned long long)arg1 ;
+(void)updateUnverifiedFaceCountThreshold;
+(void)setPhotoStreamEnabled:(BOOL)arg1 ;
+(void)setCloudAlbumSharingEnabled:(BOOL)arg1 ;
+(id)photoCloudSharingMetadataDirectory;
+(id)lightweightReimportPhotoCloudSharingAssetDirectoryForAlbumWithCloudGUID:(id)arg1 cloudPersonID:(id)arg2 ;
+(id)lightweightReimportPhotoCloudSharingAssetFileNameWithCloudAssetGUID:(id)arg1 type:(id)arg2 ;
+(id)assetsDataDirectory;
+(void)createPhotoStreamAlbumWithStreamID:(id)arg1 inLibrary:(id)arg2 ;
+(void)createPhotoStreamAlbumWithStreamID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)recordDataMigrationInfo:(id)arg1 ;
+(void)setMigratorIsBusy:(BOOL)arg1 ;
+(void)setImageWriterIsBusy:(BOOL)arg1 ;
+(void)setVideoCaptureIsBusy:(BOOL)arg1 ;
+(void)setTakingPhotoIsBusy:(BOOL)arg1 ;
+(void)setMomentAnalysisNeeded:(BOOL)arg1 ;
+(BOOL)isMomentAnalysisNeeded;
+(void)forceSoftResetSync;
+(void)setDisableICloudPhotos:(BOOL)arg1 ;
+(void)setEnableICloudPhotos:(BOOL)arg1 ;
+(void)setICloudPhotosEnabled:(BOOL)arg1 ;
+(void)createPauseMarkerWithUnpauseTime:(id)arg1 reason:(short)arg2 ;
+(id)unpauseTime;
+(void)setDupeAnalysisNeeded:(BOOL)arg1 ;
+(void)setDataProtectionComplete:(BOOL)arg1 ;
+(BOOL)isDataProtectionComplete;
+(id)videosPath;
+(id)photoDataCPLDerivativeDirectory;
+(id)photoDataCPLLibraryIdentifier;
+(id)photoDataCPLResourceDestinationDirectoryWithIdentifier:(id)arg1 ;
+(id)cplAssetsDirectoryURL;
+(id)dcimDirectory;
+(id)simpleDCIMDirectory;
+(BOOL)processCanReadSandboxForPath:(id)arg1 ;
+(BOOL)processCanWriteSandboxForPath:(id)arg1 ;
+(void)initializeGraphicsServices;
+(BOOL)isImageFileExtension:(id)arg1 ;
+(BOOL)canSaveVideoToCameraRoll:(id)arg1 ;
+(BOOL)isAlbumSynced:(id)arg1 ;
+(void)delayedRefreshCachedCountsInAlbumIDs:(id)arg1 ;
+(void)refreshCachedCountsOnAllAssetContainersInContext:(id)arg1 ;
+(void)updateAssetPlayShareViewCountsInContext:(id)arg1 ;
+(void)updateMemoryPlayShareViewCountsInContext:(id)arg1 ;
+(void)updateAlbumKeyAssetsInContext:(id)arg1 withPredicate:(id)arg2 ;
+(void)scheduleUserInitiatedAnalysisForAssets:(id)arg1 ;
+(void)_assetsLibrary_disableSharedPhotoStreamsSupport;
+(BOOL)_assetsLibrary_isSharedPhotoStreamsSupportEnabled;
+(unsigned long long)CloudPhotoLibrarySize;
+(void)performTransactionAndWaitOnTransientLibraryWithName:(const char*)arg1 block:(/*^block*/id)arg2 ;
+(id)_operationQueueForPriority:(long long)arg1 ;
+(id)_statusDescriptionForQueue:(id)arg1 ;
+(id)queueStatusDescription;
+(void)performOnTransientLibraryWithPriority:(long long)arg1 name:(const char*)arg2 block:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(BOOL)_assetsdQueueingMode;
+(void)_enqueueOperationWithName:(id)arg1 priority:(long long)arg2 block:(/*^block*/id)arg3 ;
+(void)_activateStatusTimer;
+(short)currentPauseReason;
+(id)tmpDragAndDropDirectoryURL;
+(void)performAndWaitOnTransientLibraryWithName:(const char*)arg1 block:(/*^block*/id)arg2 ;
+(id)sharedPhotoLibrary;
+(BOOL)hasITunesSyncedContent;
+(id)photoOutboundSharingTmpDirectoryURL;
+(BOOL)isStreamsLibraryUpdatingExpired;
+(void)setStreamsLibraryUpdatingExpired:(BOOL)arg1 ;
+(id)photoDataMiscDirectory;
+(id)syncedAlbumSubtitleStringFormat;
-(id)init;
-(void)dealloc;
-(id)name;
-(id)_init;
-(BOOL)isTransient;
-(id)initWithName:(const char*)arg1 ;
-(void)performBlock:(/*^block*/id)arg1 ;
-(void)performBlockAndWait:(/*^block*/id)arg1 ;
-(PLManagedObjectContext *)managedObjectContext;
-(void)performTransactionAndWait:(/*^block*/id)arg1 ;
-(id)existingObjectWithID:(id)arg1 error:(id*)arg2 ;
-(void)performBlock:(/*^block*/id)arg1 withPriority:(long long)arg2 ;
-(void)_loadDatabase:(const char*)arg1 ;
-(unsigned long long)concurrencyType;
-(void)copyAssetToCameraRoll:(id)arg1 ;
-(BOOL)_hasAtLeastOneItem:(BOOL)arg1 ;
-(void)_batchDeleteAssets:(id)arg1 inManagedObjectContext:(id)arg2 withReason:(id)arg3 ;
-(PLManagedAlbumList *)rootAlbumList;
-(NSObject*)allPhotoStreamPhotosAlbum;
-(NSArray *)photoStreamAlbumsForPreferences;
-(void)_filterAlbums:(id)arg1 toTrashableAlbums:(id*)arg2 deletableAlbums:(id*)arg3 otherAlbums:(id*)arg4 ;
-(void)_userDeleteAlbums:(id)arg1 ;
-(void)_userApplyTrashedState:(short)arg1 toAlbums:(id)arg2 ;
-(NSArray *)photoStreamAlbums;
-(id)assetWithUUID:(id)arg1 inContainer:(id)arg2 ;
-(void)_filterAssets:(id)arg1 toTrashableAssets:(id*)arg2 deletableAssets:(id*)arg3 otherAssets:(id*)arg4 ;
-(void)_reportExpungedAssets:(id)arg1 ;
-(void)_userDeleteAssets:(id)arg1 withReason:(id)arg2 ;
-(void)_userApplyTrashedState:(short)arg1 toAssets:(id)arg2 ;
-(id)globalValueForKey:(id)arg1 ;
-(void)setGlobalValue:(id)arg1 forKey:(id)arg2 ;
-(void)_deleteObsoleteMetadataFiles;
-(void)_safeSave:(id)arg1 ;
-(void)_calculatePendingItemCountsAfterOTARestoreWithMangedObjectContext:(id)arg1 ;
-(id)_allAssetsForDeletion:(id)arg1 ;
-(void)_removeSyncedAlbumsInTransactionWithManagedObjectContext:(id)arg1 ;
-(id)_fetchCompleteAssetIDsWithSavedAssetType:(short)arg1 context:(id)arg2 ;
-(NSObject*)otaRestoreProgressAlbum;
-(BOOL)_shouldCreateDatabase;
-(void)setManagedObjectContext:(PLManagedObjectContext *)arg1 ;
-(void)_linkAsideAlbumMetadataForOTARestore;
-(void)prepareDatabaseForOTAAssetsPhase;
-(void)deleteITunesSyncedContentWithReason:(id)arg1 ;
-(void)_recreateItemsFromMetadataAtDirectoryURLs:(id)arg1 ;
-(void)_enumerateFilesAtURLs:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(PLManagedFolder *)rootFolder;
-(void)_deleteEmptyImportAlbumsWithAddedAlbums:(id)arg1 ;
-(void)_removeOldFaceMetadataAsync;
-(void)_enumerateFilesAtURL:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)allImportedPhotosAlbumCreateIfNeeded:(BOOL)arg1 ;
-(id)lastImportedPhotosAlbumCreateIfNeeded:(BOOL)arg1 ;
-(void)_updateHasAtLeastOnePhotoWithGPSWithInsertedCount:(unsigned long long)arg1 deletedCount:(unsigned long long)arg2 updatedAssets:(id)arg3 ;
-(NSObject*)allPhotosAlbum;
-(NSObject*)iPadAllPhotosAlbum;
-(id)newImageForPhoto:(id)arg1 format:(int)arg2 ;
-(id)newImageForPhoto:(id)arg1 format:(int)arg2 allowPlaceholder:(BOOL)arg3 outImageProperties:(const _CFDictionary*)arg4 outDeliveredPlaceholder:(BOOL*)arg5 ;
-(void)_applySideCarFiles:(id)arg1 toAsset:(id)arg2 withMainFileURL:(id)arg3 ;
-(void)_processPhotoIrisSidecarIfNecessary:(id)arg1 forAsset:(id)arg2 ;
-(void)_applyAdjustmentFileInfo:(id)arg1 renderedContentFileInfo:(id)arg2 renderedVideoComplementFileInfo:(id)arg3 toAsset:(id)arg4 withMainFileURL:(id)arg5 ;
-(void)cleanupFilesAfteriTunesSyncBeforeDate:(id)arg1 ;
-(BOOL)_isHeifUTI:(CFStringRef)arg1 ;
-(NSObject*)syncProgressAlbum;
-(NSArray *)imagePickerAlbums;
-(BOOL)getPhotoCount:(unsigned long long*)arg1 videoCount:(unsigned long long*)arg2 excludeTrashed:(BOOL)arg3 excludeInvisible:(BOOL)arg4 excludeCloudShared:(BOOL)arg5 ;
-(NSObject*)filesystemImportProgressAlbum;
-(BOOL)_hasIncompleteAsset;
-(BOOL)hasCompletedRestorePostProcessing;
-(BOOL)_hasPendingAssetsIgnoreiTunes:(BOOL)arg1 ;
-(id)_dataMigrationInfo;
-(BOOL)isReadyForCloudPhotoLibrary;
-(BOOL)_isOTARestoreInProgress;
-(void)cleanupIncompleteAssetsAfterOTARestore;
-(id)incompleteRestoreProcesses;
-(BOOL)hasCompletedMomentAnalysis;
-(BOOL)_checkMomentAnalysisCompletion;
-(void)performTransaction:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 withPriority:(long long)arg3 ;
-(void)testForRecoveryInBackground;
-(void)flushDCIMAlbums;
-(void)flushPhotoStreamAlbums;
-(void)flushAlbums;
-(void)clientApplicationWillEnterForeground;
-(void)_photoLibraryCorruptNotification;
-(void)_photoLibraryForceClientExitNotification;
-(BOOL)hasAtLeastOnePhoto;
-(void)deleteFailedInMemoryCameraAsset:(id)arg1 ;
-(void)deleteAllImages;
-(NSObject*)eventWithName:(id)arg1 andImportSessionIdentifier:(id)arg2 ;
-(NSArray *)userAlbums;
-(NSArray *)wallpaperAlbums;
-(NSArray *)importAlbums;
-(NSArray *)eventAlbums;
-(NSArray *)faceAlbums;
-(NSArray *)placeAlbums;
-(void)userTrashAlbums:(id)arg1 ;
-(void)userUntrashAlbums:(id)arg1 ;
-(void)userExpungeAlbums:(id)arg1 ;
-(id)albumListForAlbumOfKind:(int)arg1 ;
-(NSObject*<PLAlbumProtocol>)favoritesAlbum;
-(NSObject*)eventAlbumContainingPhoto:(id)arg1 ;
-(unsigned long long)countOfLocalAlbumsContainingAssets:(id)arg1 assetsInSomeAlbumCount:(long long*)arg2 ;
-(id)objectWithObjectID:(id)arg1 ;
-(void)userTrashAssets:(id)arg1 ;
-(void)userUntrashAssets:(id)arg1 ;
-(void)userExpungeAssets:(id)arg1 ;
-(void)addToKnownPhotoStreamAlbums:(id)arg1 ;
-(void)removeFromKnownPhotoStreamAlbums:(id)arg1 ;
-(id)lastImportSessionUUID;
-(void)setLastImportSessionUUID:(id)arg1 ;
-(id)assetURLForPhoto:(id)arg1 extension:(id)arg2 ;
-(id)assetURLForPhoto:(id)arg1 ;
-(id)assetURLForManagedPhoto:(id)arg1 ;
-(NSObject*)albumFromGroupURL:(id)arg1 ;
-(void)cleanupAfterImportAllDCIMAssets;
-(void)cleanupModelForDataMigrationPurgeMissingSharedAndSynced;
-(void)cleanupForStoreDemoMode;
-(id)managedObjectWithObjectID:(id)arg1 ;
-(id)managedObjectContextStoreUUID;
-(BOOL)needsMigration;
-(void)recreateAlbumsAndPersonsFromMetadata;
-(void)recreatePersonsFromMetadata;
-(id)allImportedPhotosAlbum;
-(id)lastImportedPhotosAlbum;
-(void)resetCachedImportAlbumsIfNeededForAlbum:(id)arg1 ;
-(BOOL)hasAtLeastOnePhotoWithGPS;
-(void)_updateWithInsertedAssetsCount:(unsigned long long)arg1 deletedCount:(unsigned long long)arg2 updatedAssets:(id)arg3 ;
-(id)syncedAlbums;
-(unsigned long long)editableAlbumCount;
-(NSObject*)allPhotosAlbumIfExists;
-(NSObject*)iPadAllPhotosAlbumIfExists;
-(id)imageForFormat:(int)arg1 forAsset:(id)arg2 ;
-(void)modifyDCIMEntryForPhoto:(id)arg1 ;
-(id)addDCIMEntryAtFileURL:(id)arg1 toEvent:(NSObject*)arg2 sidecarFileInfo:(id)arg3 progress:(id)arg4 importSessionIdentifier:(id)arg5 isImported:(BOOL)arg6 previewImage:(id)arg7 thumbnailImage:(id)arg8 savedAssetType:(short)arg9 replacementUUID:(id)arg10 publicGlobalUUID:(id)arg11 extendedInfo:(id)arg12 withUUID:(id)arg13 ignoreEmbeddedMetadata:(BOOL)arg14 isPlaceholder:(BOOL)arg15 ;
-(id)masterURLFromSidecarURLs:(id)arg1 ;
-(BOOL)hasPhotoWithFileCreationDate:(id)arg1 fileName:(id)arg2 fileSize:(long long)arg3 ;
-(void)processSyncSaveJob:(id)arg1 albumMap:(id)arg2 ;
-(id)albumsForContentMode:(int)arg1 ;
-(id)librarySizesFromDB;
-(id)librarySizes;
-(void)deleteExpiredTrashBinObjects;
-(unsigned long long)numberOfCPLSupportedAssetsOfKind:(short)arg1 includingTrashedSinceDate:(id)arg2 ;
-(unsigned long long)numberOfUnpushedAssetsOfKind:(short)arg1 ;
-(void)performTransactionAndWait:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)withDispatchGroup:(id)arg1 performBlock:(/*^block*/id)arg2 ;
-(void)performBlock:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 withPriority:(long long)arg3 ;
-(void)_withDispatchGroup:(id)arg1 synchronously:(BOOL)arg2 priority:(long long)arg3 name:(id)arg4 shouldSave:(BOOL)arg5 performTransaction:(/*^block*/id)arg6 completionHandler:(/*^block*/id)arg7 ;
-(void)performTransaction:(/*^block*/id)arg1 withPriority:(long long)arg2 ;
-(void)performTransactionAndWaitWithName:(id)arg1 transaction:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)withDispatchGroup:(id)arg1 performTransaction:(/*^block*/id)arg2 ;
-(void)withDispatchGroup:(id)arg1 performTransaction:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)hasAtLeastOneItem;
-(id)albumListForContentMode:(int)arg1 ;
-(id)iTunesSyncedContentInfo;
-(void)performTransaction:(/*^block*/id)arg1 ;
-(void)performBlock:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)photoFromAssetURL:(id)arg1 ;
-(BOOL)getPhotoCount:(unsigned long long*)arg1 videoCount:(unsigned long long*)arg2 ;
-(void)performBlockAndWait:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(PLFetchingAlbum *)userLibraryAlbum;
-(NSArray *)albums;
-(id)duplicatePhotoStreamPhotosForPhotos:(id)arg1 ;
-(void)performTransaction:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithTransientContext:(BOOL)arg1 name:(const char*)arg2 ;
-(BOOL)deleteAllDiagnosticFiles:(id*)arg1 ;
-(void)addCompletionHandlerToCurrentTransaction:(/*^block*/id)arg1 ;
-(id)assetWithUUID:(id)arg1 ;
-(NSObject*)albumWithUuid:(id)arg1 ;
-(id)syncProgressAlbumsIgnoreiTunes:(BOOL)arg1 ;
@end

