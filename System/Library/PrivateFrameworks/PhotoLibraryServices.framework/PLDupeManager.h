/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:58 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSMutableDictionary, NSMutableSet, PLPhotoLibrary, NSCountedSet, NSSet;

@interface PLDupeManager : NSObject {

	NSMutableArray* _normalAssetsObjectIDsToAnalyze;
	NSMutableDictionary* _cloudAssetsToAnalyze;
	NSMutableArray* _assetsWithUpdatedVisibility;
	BOOL _doneWithCloudAssets;
	BOOL _isRebuilding;
	NSMutableSet* _normalInserts;
	NSMutableSet* _cloudInserts;
	PLPhotoLibrary* _photoLibrary;
	long long _once;
	NSCountedSet* _pauseReasons;
	NSSet* _softPauseReasons;
	double _rebuildStartTime;

}

@property (nonatomic,readonly) PLPhotoLibrary * photoLibrary; 
+(id)sharedInstance;
+(id)hashForAsset:(id)arg1 ;
+(BOOL)resetDupesAnalysisForOfflineStore:(id)arg1 ;
+(id)placeholderHash;
+(BOOL)_resetDupesAnalysisInManagedObjectContext:(id)arg1 ;
+(id)_hashForFileAtPath:(id)arg1 utiType:(id)arg2 ;
+(void)_setPlaceHolderHashOnAsset:(id)arg1 ;
+(BOOL)_computeHashForAsset:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)pauseAnalysisWithReason:(id)arg1 ;
-(void)resumeAnalysisWithReason:(id)arg1 ;
-(void)resetDupesAnalysis;
-(void)analyzeDupesWithNormalInserts:(id)arg1 cloudInserts:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)persistPublicGlobalUUIDsForAssets:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)launchDupeAnalysisIfNeeded;
-(void)_updateVisibilityState:(short)arg1 forAsset:(id)arg2 ;
-(void)_noteAssetVisibilityDidChange:(id)arg1 ;
-(id)_duplicateCloudAssetForHash:(id)arg1 orPublicGlobalUUID:(id)arg2 ;
-(void)_removeCloudAssetFromAnalysis:(id)arg1 ;
-(BOOL)_prepareCloudAssetsToAnalyzeForManagedObjectContext:(id)arg1 ;
-(void)_analyzeDupeForNormalAsset:(id)arg1 ;
-(void)_analyzeDupesForRebuild;
-(void)_continueAnalysisForRebuild;
-(short)_computeCloudAssetHashesForManagedObjectContext:(id)arg1 ;
-(void)_continueAnalysisForRebuildOrPause;
-(short)_analyzeNormalAssetsForManagedObjectContext:(id)arg1 ;
-(short)_computeAssetHashesForManagedObjectContext:(id)arg1 ;
-(short)_adjustCloudAssetVisibilityStateForManagedObjectContext:(id)arg1 ;
-(void)_performAnalysisTransaction:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_analyzeDupeForCloudAssetsAndHashes:(id)arg1 andPublicGlobalUUIDs:(id)arg2 forManagedObjectContext:(id)arg3 ;
-(void)_analyzeDupes;
-(short)_analyzeDupesForNormalInsertsForManagedObjectContext:(id)arg1 ;
-(void)_continueAnalysis;
-(short)_analyzeDupesForCloudInsertsForManagedObjectContext:(id)arg1 ;
-(void)_resetSoftPauseReasons;
-(PLPhotoLibrary *)photoLibrary;
@end

