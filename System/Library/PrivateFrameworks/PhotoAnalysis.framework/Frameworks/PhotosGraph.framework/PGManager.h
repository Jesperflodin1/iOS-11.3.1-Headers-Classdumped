/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:42 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_os_log;
@class NSRecursiveLock, NSMutableSet, NSMutableArray, NSObject, NSURL, PGGraph, NSString, PIPipeline, PHPhotoLibrary, PGMemoryController;

@interface PGManager : NSObject {

	NSRecursiveLock* _updatesLock;
	unsigned long long _updateCount;
	/*^block*/id _updateCompletionHandler;
	/*^block*/id _updateProgressHandler;
	NSMutableSet* _updateInserts;
	NSMutableSet* _updateDeletes;
	NSMutableSet* _updateDeleteIDs;
	NSMutableArray* _prefetchCuratedKeyAssetsBlocks;
	NSMutableArray* _prefetchCuratedAssetsBlocks;
	NSObject*<OS_dispatch_queue> _curationPrefetchQueue;
	NSURL* _cachedGraphPersistenceParentDirectoryURL;
	double _timestampOfLastCallToProgress;
	double _timestampOfLastRecordedCallToProgress;
	unsigned long long _numberOfCallsToProgressSinceLastRecordedCall;
	BOOL _wasStopped;
	NSObject*<OS_dispatch_queue> _graphAccessQueue;
	AQ _numberOfCurrentGraphAccesses;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	PGGraph* _graph;
	NSString* _graphName;
	PIPipeline* _pipeline;
	NSObject*<OS_os_log> _loggingConnection;
	BOOL _photoLibraryIsReadonly;
	PHPhotoLibrary* _photoLibrary;
	unsigned long long _libraryAnalysisState;
	PGMemoryController* _memoryController;
	NSURL* _metadataSnapshotOutputPathURL;
	NSObject*<OS_os_log> _memoriesLoggingConnection;
	NSObject*<OS_os_log> _curationLoggingConnection;
	NSObject*<OS_os_log> _relatedLoggingConnection;
	NSObject*<OS_os_log> _ingestLoggingConnection;
	NSObject*<OS_os_log> _graphLoggingConnection;

}

@property (readonly) double durationForExistingMemoriesOverlapCheck; 
@property (readonly) unsigned long long numberOfExistingMemoriesToKeepForOverlapCheck; 
@property (readonly) unsigned long long libraryAnalysisState; 
@property (copy,readonly) NSString * graphName;                                                     //@synthesize graphName=_graphName - In the implementation block
@property (retain,readonly) PIPipeline * pipeline;                                                  //@synthesize pipeline=_pipeline - In the implementation block
@property (retain) PGGraph * graph;                                                                 //@synthesize graph=_graph - In the implementation block
@property (assign) unsigned long long libraryAnalysisState;                                         //@synthesize libraryAnalysisState=_libraryAnalysisState - In the implementation block
@property (readonly) PGMemoryController * memoryController;                                         //@synthesize memoryController=_memoryController - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_log> memoriesLoggingConnection;                      //@synthesize memoriesLoggingConnection=_memoriesLoggingConnection - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_log> curationLoggingConnection;                      //@synthesize curationLoggingConnection=_curationLoggingConnection - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_log> relatedLoggingConnection;                       //@synthesize relatedLoggingConnection=_relatedLoggingConnection - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_log> ingestLoggingConnection;                        //@synthesize ingestLoggingConnection=_ingestLoggingConnection - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_log> graphLoggingConnection;                         //@synthesize graphLoggingConnection=_graphLoggingConnection - In the implementation block
@property (readonly) BOOL photoLibraryIsReadonly;                                                   //@synthesize photoLibraryIsReadonly=_photoLibraryIsReadonly - In the implementation block
@property (nonatomic,readonly) PHPhotoLibrary * photoLibrary;                                       //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (nonatomic,retain) NSURL * metadataSnapshotOutputPathURL;                                 //@synthesize metadataSnapshotOutputPathURL=_metadataSnapshotOutputPathURL - In the implementation block
+(void)initialize;
+(id)assetPropertySetsForCuration;
+(id)meaningsForSurvey;
+(unsigned long long)_maximumNumberOfItemsForDuration:(unsigned long long)arg1 withTotalNumberOfItems:(unsigned long long)arg2 ;
+(id)_assetsBeautifierForPrecision:(unsigned long long)arg1 ;
+(id)stringFromPGPrecision:(unsigned long long)arg1 ;
+(id)stringFromPGDuration:(unsigned long long)arg1 ;
+(id)stringFromPGRelatedType:(unsigned long long)arg1 ;
+(BOOL)clientIsPhotoAnalysis;
+(BOOL)memoriesAreWorthNotifying:(id)arg1 ;
+(id)_summaryClusteringForDuration:(unsigned long long)arg1 andPrecision:(unsigned long long)arg2 ;
+(unsigned long long)_minimumNumberOfItemsForDuration:(unsigned long long)arg1 withMaximumNumberOfItems:(unsigned long long)arg2 ;
+(id)representativeAssetsForAssetCollection:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
+(id)matchingWeightToDictionary;
-(PGGraph *)graph;
-(void)setGraph:(PGGraph *)arg1 ;
-(id)init;
-(void)dealloc;
-(id)_dateFormatter;
-(BOOL)isBusy;
-(void)commonInit;
-(void)_beginUpdates;
-(BOOL)isReady;
-(PHPhotoLibrary *)photoLibrary;
-(id)initWithPhotoLibrary:(id)arg1 ;
-(id)curatedAssetsForAssetCollection:(id)arg1 duration:(unsigned long long)arg2 precision:(unsigned long long)arg3 includeAllFaces:(BOOL)arg4 progressBlock:(/*^block*/id)arg5 ;
-(id)defaultAssetSortDescriptors;
-(id)curatedKeyAssetForAssetCollection:(id)arg1 curatedAssetCollection:(id)arg2 options:(id)arg3 ;
-(double)neighborScoreForLocalDate:(id)arg1 ;
-(id)_bestAssetInAssets:(id)arg1 forReferencePeople:(id)arg2 ;
-(id)curatedAssetsForAssetCollection:(id)arg1 duration:(unsigned long long)arg2 precision:(unsigned long long)arg3 withContextualAssets:(id)arg4 minimumProportion:(double)arg5 progressBlock:(/*^block*/id)arg6 ;
-(id)blacklistedFeatures;
-(void)resetCheckCallsToProgress;
-(PGMemoryController *)memoryController;
-(NSObject*<OS_os_log>)memoriesLoggingConnection;
-(void)checkCallsToProgressForJob:(id)arg1 progress:(double)arg2 stop:(BOOL)arg3 loggingConnection:(id)arg4 ;
-(id)createMemoriesWithOptions:(id)arg1 progress:(/*^block*/id)arg2 ;
-(BOOL)_isMemoryCategoryTriggered:(long long)arg1 ;
-(double)durationForExistingMemoriesOverlapCheck;
-(unsigned long long)numberOfExistingMemoriesToKeepForOverlapCheck;
-(BOOL)isPHMemoryTriggered:(id)arg1 ;
-(BOOL)isPGMemoryTriggered:(id)arg1 ;
-(id)_memoriesWithOptions:(id)arg1 isFinalOne:(BOOL)arg2 ;
-(id)_featuresOfType:(unsigned long long)arg1 inMemories:(id)arg2 ;
-(id)_featureVectorGeneratorWithOptions:(id)arg1 ;
-(id)_featuresFromOptions:(id)arg1 ;
-(id)_memoryControllerWithOptions:(id)arg1 ;
-(id)_memoryGeneratorWithOptions:(id)arg1 memoryController:(id)arg2 ;
-(id)_generateAllMemoriesWithFeatureVectorBasedMemoryGenerator:(id)arg1 options:(id)arg2 ;
-(id)_generateAllMemoriesWithBestOfPastMemoryGenerator:(id)arg1 options:(id)arg2 ;
-(id)_generateAllMemoriesWithSeasonMemoryGenerator:(id)arg1 options:(id)arg2 ;
-(id)_generateAllMemoriesWithKeyPeopleForHolidayMemoryGenerator:(id)arg1 options:(id)arg2 ;
-(id)memorySummaryOfYear:(long long)arg1 duration:(unsigned long long)arg2 ;
-(id)bestOfPastMemoryFromLocalDate:(id)arg1 toLocalDate:(id)arg2 duration:(unsigned long long)arg3 ;
-(id)dayInHistoryMemoryForLocalDate:(id)arg1 ;
-(id)dayInHistoryMemoriesForLocalDate:(id)arg1 ;
-(id)feelingLuckyMemoriesWithLowRequirements:(BOOL)arg1 ;
-(id)sometimeInHistoryMemories;
-(id)featuredPeopleMemoriesWithLowRequirements:(BOOL)arg1 ;
-(id)nowMemoriesForLocalDate:(id)arg1 ;
-(id)nearbyTodayMemoriesForLocalDate:(id)arg1 location:(id)arg2 ;
-(id)liveMemoriesForLocalDate:(id)arg1 location:(id)arg2 peopleNames:(id)arg3 ;
-(id)recentPastMemoriesForLocalDate:(id)arg1 ;
-(id)upcomingFutureMemoriesForLocalDate:(id)arg1 ;
-(id)socialGroupMemoriesForSocialGroupWithID:(long long)arg1 year:(long long)arg2 ;
-(id)tripMemoriesWithLowRequirements:(BOOL)arg1 ;
-(id)weekendMemoriesWithLowRequirements:(BOOL)arg1 ;
-(id)petMemoriesWithLowRequirements:(BOOL)arg1 ;
-(id)babyMemoriesWithLowRequirements:(BOOL)arg1 ;
-(id)pastSupersetMemoriesWithLowRequirements:(BOOL)arg1 ;
-(id)homeAggregationMemoriesForLocalDate:(id)arg1 ;
-(id)peopleMemoriesForPeopleWithUUID:(id)arg1 year:(long long)arg2 ;
-(id)recurrentTripMemoriesWithLowRequirements:(BOOL)arg1 ;
-(id)throwbackThursdayMemoriesForLocalDate:(id)arg1 ;
-(id)celebrationOverTimeMemoriesForLocalDate:(id)arg1 ;
-(id)memoryTreeWithOptions:(id)arg1 ;
-(id)memoriesWithOptions:(id)arg1 ;
-(id)memoryWithOptions:(id)arg1 ;
-(id)_allFeatureVectorBasedMemoriesWithOptions:(id)arg1 ;
-(id)curatedAssetIdentifiersForCollectionWithIdentifier:(id)arg1 duration:(unsigned long long)arg2 precision:(unsigned long long)arg3 ;
-(void)performSynchronousConcurrentGraphReadUsingBlock:(/*^block*/id)arg1 ;
-(id)_socialGroupsIdentifiersFromSocialGroupNodes:(id)arg1 shouldIncludeMeNode:(BOOL)arg2 ;
-(BOOL)_hasMomentsForPersonIdentifiers:(id)arg1 ;
-(id)sortedArrayForPersonIdentifiers:(id)arg1 ;
-(id)allSocialGroupsForPersonIdentifier:(id)arg1 ;
-(id)socialGroupsForPersonIdentifiers:(id)arg1 ;
-(id)assetCollectionsForPersonIdentifiers:(id)arg1 ;
-(id)assetIdentifiersForPersonIdentifiers:(id)arg1 ;
-(id)curatedKeyAssetForCollectionWithIdentifier:(id)arg1 curatedAssetCollection:(id)arg2 options:(id)arg3 criteria:(id)arg4 ;
-(id)_filteredAssetsFromAssetCollection:(id)arg1 throughTraitsForMeaningWithLabel:(id)arg2 inTraitsArray:(id)arg3 ;
-(id)_filteredAssetCollectionFromAssetCollection:(id)arg1 withContextualAssets:(id)arg2 approximateTimeDistance:(double)arg3 ;
-(NSObject*<OS_os_log>)graphLoggingConnection;
-(void)matchFeatureVector:(id)arg1 options:(unsigned long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)curatedAssetsFetchResultForCollectionWithIdentifier:(id)arg1 duration:(unsigned long long)arg2 precision:(unsigned long long)arg3 ;
-(BOOL)isCelebratingHolidayEventInYear:(long long)arg1 forEventRule:(id)arg2 ;
-(BOOL)isCelebratingHolidayEventInGeneralForEventRule:(id)arg1 ;
-(id)allCitiesSortedByFrequency;
-(id)surveySocialGroupsInfoDictionaries;
-(id)momentsAndGraphScoresAboveGraphScoreThreshold:(double)arg1 ;
-(id)meaningLabelsForMoment:(id)arg1 ;
-(id)surveyInformationForMoment:(id)arg1 ;
-(id)_momentNodesForAssetCollection:(id)arg1 moodOptions:(id)arg2 ;
-(id)moodGraphNodeIdentifiersForAssetCollection:(id)arg1 moodOptions:(id)arg2 ;
-(id)moodMeaningIdentifiersForAssetCollection:(id)arg1 moodOptions:(id)arg2 ;
-(id)moodSceneIdentifiersByMomentForAssetCollection:(id)arg1 moodOptions:(id)arg2 ;
-(id)moodGraphContextIdentifiersForAssetCollection:(id)arg1 moodOptions:(id)arg2 ;
-(id)initWithReadonlyPhotoLibrary:(id)arg1 ;
-(void)startLibraryAnalysis:(/*^block*/id)arg1 keepExistingGraph:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(NSObject*<OS_os_log>)ingestLoggingConnection;
-(void)invalidateCurationCacheForMomentIdentifiers:(id)arg1 ;
-(void)invalidateCurationCacheForMoments:(id)arg1 ;
-(BOOL)isAssetFeederInteresting:(id)arg1 precision:(unsigned long long)arg2 ;
-(double)contentScoreForAssetFeeder:(id)arg1 precision:(unsigned long long)arg2 ;
-(BOOL)locationIsInSupersets:(id)arg1 ;
-(id)allYears;
-(BOOL)isLocationNearHomeOrWork:(id)arg1 ;
-(id)allMomentIdentifiersWithMostRecentModificationDate:(out id*)arg1 ;
-(id)allSocialGroupIDs;
-(id)allYearsForSocialGroupWithID:(long long)arg1 ;
-(id)nameForSocialGroupWithID:(long long)arg1 ;
-(id)allPeopleNames;
-(id)allYearsForPeopleWithName:(id)arg1 ;
-(id)fetchAssetsSortedByDateWithLocalIdentifiers:(id)arg1 ;
-(void)invalidateCurationCacheForCollectionWithIdentifier:(id)arg1 ;
-(id)collectionsInfoFromMoments:(id)arg1 withMeaningLabels:(id)arg2 ;
-(double)graphScoreForMoment:(id)arg1 ;
-(double)neighborScoreForMoment:(id)arg1 ;
-(double)contentScoreForAssetCollection:(id)arg1 precision:(unsigned long long)arg2 ;
-(id)keywordsForMoment:(id)arg1 relatedType:(unsigned long long)arg2 ;
-(id)exportableDictionaryFromKeywords:(id)arg1 ;
-(id)memoryDebugInformationWithMoments:(id)arg1 meaningLabels:(id)arg2 precision:(unsigned long long)arg3 ;
-(id)_sanitizeGraphDataDictionaryForArchiving:(id)arg1 referencedMemory:(id)arg2 ;
-(id)_extractDatesAndAssetCountsFromMemory:(id)arg1 ;
-(id)_diagnosticSummaryInfoForMemory:(id)arg1 ;
-(unsigned long long)medianValueFromUnsignedItegerArray:(id)arg1 ;
-(id)_extractYearStatsFromOrderedCollectionFetchResults:(id)arg1 fetchOptions:(id)arg2 yearEntryKey:(id)arg3 numberOfYearsEntryKey:(id)arg4 ;
-(id)_momentsStatisticsForCurrentPhotoLibrary;
-(id)_collectionStatisticsForCurrentPhotoLibrary;
-(id)_yearsStatisticsForCurrentPhotoLibrary;
-(id)diagnosticsSummaryInfoOnExistingMemoriesForCurrentPhotoLibrary;
-(id)libraryStatisticsForCurrentPhotoLibrary;
-(id)_bestAssetsInAssets:(id)arg1 forReferencePersons:(id)arg2 minimumRatioOfReferencePersonsPerAsset:(double)arg3 progressBlock:(/*^block*/id)arg4 ;
-(void)completeCuratedAssets:(id)arg1 fromAssets:(id)arg2 forPeople:(id)arg3 duration:(unsigned long long)arg4 precision:(unsigned long long)arg5 nonRemovableAssets:(id)arg6 progressBlock:(/*^block*/id)arg7 ;
-(NSObject*<OS_os_log>)relatedLoggingConnection;
-(id)graphPersistenceParentDirectoryURL;
-(void)_loadGraph;
-(BOOL)shouldInvalidatePersistentGraph;
-(void)_invalidateTransientCaches;
-(void)_invalidatePersistentCaches;
-(void)_precachePersonsInformation;
-(id)graphPersistenceParentDirectoryCandidateURLs;
-(id)processSubdirectoryName;
-(void)performAsynchronousBarrierGraphWriteUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)hasPendingGraphAccess;
-(BOOL)hasPendingUpdates;
-(PIPipeline *)pipeline;
-(void)performAsynchronousNotification:(/*^block*/id)arg1 ;
-(void)waitUntilFinishedUsingBlock:(/*^block*/id)arg1 ;
-(void)_waitGraphUntilFinishedUsingBlock:(/*^block*/id)arg1 ;
-(void)_waitLibraryUpdateUntilFinishedUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)invalidatePersistentGraph;
-(void)_reloadGraph;
-(id)initWithGraphName:(id)arg1 photoLibrary:(id)arg2 ;
-(void)invalidateTransientCaches;
-(void)invalidatePersistentCaches;
-(void)matchWithVisualFormat:(id)arg1 elements:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(BOOL)saveGraphToURL:(id)arg1 ;
-(NSString *)graphName;
-(unsigned long long)libraryAnalysisState;
-(void)setLibraryAnalysisState:(unsigned long long)arg1 ;
-(NSURL *)metadataSnapshotOutputPathURL;
-(void)setMetadataSnapshotOutputPathURL:(NSURL *)arg1 ;
-(BOOL)photoLibraryIsReadonly;
-(NSObject*<OS_os_log>)curationLoggingConnection;
-(id)titleTupleForMoment:(id)arg1 format:(long long)arg2 error:(id*)arg3 ;
-(id)titleTupleForAlbum:(id)arg1 format:(long long)arg2 error:(id*)arg3 ;
-(id)titleTupleForMemory:(id)arg1 error:(id*)arg2 ;
-(id)titleTupleForPersonIdentifiers:(id)arg1 format:(long long)arg2 error:(id*)arg3 ;
-(id)titleTupleForMomentList:(id)arg1 format:(long long)arg2 error:(id*)arg3 ;
-(id)titleTupleForAssetCollection:(id)arg1 format:(long long)arg2 error:(id*)arg3 ;
-(id)_memoryFetchOptions;
-(id)nextPossibleNotificationDate;
-(id)notificationTitleForMemory:(id)arg1 ;
-(id)notificationSubtitleForMemory:(id)arg1 ;
-(id)lastTriggeredNotificationDate;
-(BOOL)memoriesOfTheDayAreWorthNotifying;
-(BOOL)_shouldRebuildGraph:(id)arg1 ;
-(void)clearPendingUpdates;
-(id)momentsForLibraryAnalysisWithFetchOptions:(id)arg1 ;
-(id)fastGraphExportFullPath;
-(id)_libraryAnalysisOperationWithMomentInsertions:(id)arg1 momentsDeletions:(id)arg2 momentDeletionIDs:(id)arg3 ;
-(void)startCoalescingUpdates;
-(void)stopCoalescingUpdates;
-(void)updateGraphWithMomentInsertions:(id)arg1 momentsDeletions:(id)arg2 momentDeletionIDs:(id)arg3 keepExistingGraph:(BOOL)arg4 progressBlock:(/*^block*/id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)cancelLibraryAnalysis:(/*^block*/id)arg1 ;
-(BOOL)needsLibraryAnalysis;
-(id)bestAssetForItems:(id)arg1 options:(id)arg2 ;
-(id)bestAssetForAssetFeeder:(id)arg1 options:(id)arg2 ;
-(void)_removePrefetchBlock;
-(BOOL)isAssetCollectionInteresting:(id)arg1 precision:(unsigned long long)arg2 ;
-(id)bestAssetsForAssetFeeder:(id)arg1 duration:(unsigned long long)arg2 precision:(unsigned long long)arg3 includeAllFaces:(BOOL)arg4 progressBlock:(/*^block*/id)arg5 ;
-(void)_lastPassToAddMoviesForAssetFeeder:(id)arg1 assets:(id)arg2 maximumNumberOfItems:(unsigned long long)arg3 ;
-(id)_filteredAssetsForAssets:(id)arg1 inMoments:(id)arg2 keepFavorites:(BOOL)arg3 ;
-(id)_timeBasedAssetClustersForAssets:(id)arg1 maximumClusterCount:(unsigned long long)arg2 ;
-(id)_firstBestFacedAssetInAssetCluster:(id)arg1 forPersonUUID:(id)arg2 faceFetchOptions:(id)arg3 ;
-(id)_batchFetchFacesByAssetsForClusters:(id)arg1 indexOfCluster:(unsigned long long)arg2 fetchOptions:(id)arg3 ;
-(id)_batchFetchFacesByAssetsForCluster:(id)arg1 indexOfItem:(unsigned long long)arg2 fetchOptions:(id)arg3 ;
-(id)_libraryDateInterval;
-(unsigned long long)optimalDurationForAssetCollection:(id)arg1 duration:(unsigned long long)arg2 precision:(unsigned long long)arg3 options:(id)arg4 ;
-(double)contentScoreForAssets:(id)arg1 precision:(unsigned long long)arg2 ;
-(void)snapshotAssetCollectionWithGraphOptions:(id)arg1 assetCollection:(id)arg2 writeToURL:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)_locationForAsset:(id)arg1 fromNearbyAssetsInAssets:(id)arg2 ;
-(void)prefetchCuratedKeyAssetsForMoments:(id)arg1 options:(id)arg2 ;
-(void)prefetchCuratedAssetsForMoments:(id)arg1 duration:(unsigned long long)arg2 precision:(unsigned long long)arg3 ;
-(void)cancelAllCurationPrefetches;
-(void)prefetchAreMomentsInteresting:(id)arg1 precision:(unsigned long long)arg2 ;
-(id)curatedAssetsForAssetCollection:(id)arg1 duration:(unsigned long long)arg2 precision:(unsigned long long)arg3 personUUID:(id)arg4 progressBlock:(/*^block*/id)arg5 ;
-(void)snapshotMomentAssetCollection:(id)arg1 writeToURL:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(BOOL)isSmartInterestingForMoment:(id)arg1 ;
-(id)_curatedKeyAssetIdentifierForCollectionWithIdentifier:(id)arg1 curatedAssetCollection:(id)arg2 options:(id)arg3 criteria:(id)arg4 curatedKeyAsset:(id*)arg5 ;
-(id)_bestAssetForAssetFeeder:(id)arg1 options:(id)arg2 criteria:(id)arg3 ;
-(id)_filteredAssetsWithFacesForAssets:(id)arg1 ;
-(id)curatedKeyAssetIdentifierForCollectionWithIdentifier:(id)arg1 curatedAssetCollection:(id)arg2 options:(id)arg3 criteria:(id)arg4 ;
-(id)_momentNodesForMemory:(id)arg1 ;
-(id)_roiLabelsForMomentNodes:(id)arg1 ;
-(id)_poiLabelsForMomentNodes:(id)arg1 ;
-(id)_gatheringAndFamilyKeywordsForMemory:(id)arg1 momentNodes:(id)arg2 ;
-(id)_locationTripKeywordsForMemory:(id)arg1 momentNodes:(id)arg2 ;
-(id)_keywordsSortedByPriority:(id)arg1 ;
-(id)moodKeywordsForMemory:(id)arg1 ;
-(id)_meaningLabelsForMomentNodes:(id)arg1 minimumRatio:(double)arg2 ;
-(id)_defaultStatistics;
-(id)_moodStatistics;
-(id)_titleStatistics;
-(id)_mobilityStatistics;
-(id)_interestingStatistics;
-(id)_partOfDayStatistics;
-(id)_highlightEstimatesStatistics;
-(id)_checkConsistencyOfGraph:(id)arg1 ;
-(id)_stringDescriptionForMemoriesNotification;
-(id)_stringDescriptionForSocialGroups:(id)arg1 ;
-(id)_stringDescriptionForMeNode:(id)arg1 reportAggd:(BOOL)arg2 ;
-(id)_stringDescriptionForPeopleEvents;
-(id)_stringDescriptionForSupersets:(id)arg1 ;
-(id)_stringDescriptionForMeaningfulEventCollections:(id)arg1 ;
-(id)_stringDescriptionForUrbanCities:(id)arg1 ;
-(id)_stringDescriptionForInterestingCities:(id)arg1 ;
-(id)_stringDescriptionForInterestingAreas:(id)arg1 ;
-(id)_stringDescriptionForDisambiguatedLocations;
-(id)_stringDescriptionForDisambiguatedPOIsInMomentNodes:(id)arg1 ;
-(BOOL)areAssetsInteresting:(id)arg1 minimumNumberOfCuratedAssets:(unsigned long long)arg2 duration:(unsigned long long)arg3 precision:(unsigned long long)arg4 ;
-(id)relatedCollectionBetweenAsset:(id)arg1 andAssetCollection:(id)arg2 relatedType:(unsigned long long)arg3 needsDebugInfo:(BOOL)arg4 ;
-(id)keywordsForAsset:(id)arg1 relatedType:(unsigned long long)arg2 ;
-(id)_debugInformationForRelated:(id)arg1 referenceKeywords:(id)arg2 andRelatedMoment:(id)arg3 relatedType:(unsigned long long)arg4 precision:(unsigned long long)arg5 ;
-(id)relatedCollectionBetweenAssetCollection:(id)arg1 andAssetCollection:(id)arg2 relatedType:(unsigned long long)arg3 needsDebugInfo:(BOOL)arg4 ;
-(id)keywordsForMomentNodeName:(id)arg1 relatedType:(unsigned long long)arg2 ;
-(id)defaultSnapshotRootPath;
-(id)_snapshotFilenameForLookupKey:(id)arg1 ;
-(unsigned)identifierForMoment:(id)arg1 ;
-(id)statisticsWithTypeStrings:(id)arg1 ;
-(id)relatedDebugInformationBetweenAsset:(id)arg1 andRelatedAssetCollection:(id)arg2 relatedType:(unsigned long long)arg3 precision:(unsigned long long)arg4 ;
-(id)relatedDebugInformationBetweenReferenceAssetCollection:(id)arg1 andRelatedAssetCollection:(id)arg2 relatedType:(unsigned long long)arg3 precision:(unsigned long long)arg4 ;
-(id)curationDebugInformationForAsset:(id)arg1 precision:(unsigned long long)arg2 ;
-(id)memoryAssetCollectionDebugInformationForIdentifier:(id)arg1 precision:(unsigned long long)arg2 ;
-(id)_getDefaultOutputPathForMetadataSnapshot;
-(id)defaultGraphExportFullPath;
-(id)defaultPeopleClustersExportIntermediatePath;
-(id)snapshotOuputFilePathURLForKey:(id)arg1 ;
-(void)debugTitlesForAssetCollection:(id)arg1 result:(/*^block*/id)arg2 ;
-(id)_bestAssetInAssets:(id)arg1 forReferencePeople:(id)arg2 minimumNumberOfCommonPeople:(unsigned long long)arg3 avoidVideoIfPossible:(BOOL)arg4 ;
-(id)_bestAssetInSummarizedAssets:(id)arg1 forReferencePeople:(id)arg2 ;
-(id)_filteredAssetsFromAssetCollection:(id)arg1 withContextualAssets:(id)arg2 approximateTimeDistance:(double)arg3 ;
-(void)_performUpdates;
-(void)_startGraphUpdate:(id)arg1 ;
-(void)_endUpdates;
-(void)insertMoments:(id)arg1 ;
-(void)deleteMoments:(id)arg1 ;
-(void)deleteMomentsWithIdentifiers:(id)arg1 ;
-(void)reloadMoments:(id)arg1 ;
-(void)performBatchUpdates:(/*^block*/id)arg1 progressHandler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_diverseResultsFromMatchingResults:(id)arg1 timeShuffleTimestamp:(double)arg2 relatedType:(unsigned long long)arg3 options:(id)arg4 needsDebugInfo:(BOOL)arg5 ;
-(id)_postProcessGraphMatchingResults:(id)arg1 relatedType:(unsigned long long)arg2 options:(id)arg3 needsDebugInfo:(BOOL)arg4 ;
-(id)_referenceAssetWithLocalIdentifier:(id)arg1 ;
-(void)_generateTitleForRelatedResults:(id)arg1 withReferenceEvent:(id)arg2 referenceAsset:(id)arg3 ;
-(id)relatedCollectionsForMoment:(id)arg1 relatedType:(unsigned long long)arg2 options:(id)arg3 generateTitles:(BOOL)arg4 error:(id*)arg5 ;
-(id)relatedCollectionsForMemoryTripOrWeekend:(id)arg1 relatedType:(unsigned long long)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id)relatedCollectionsForDefaultAssetCollection:(id)arg1 relatedType:(unsigned long long)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id)_relatedCollectionsForDefaultAssetCollection:(id)arg1 relatedType:(unsigned long long)arg2 options:(id)arg3 assetCollectionForKeywords:(id)arg4 error:(id*)arg5 ;
-(id)_relatedCollectionBetweenMoment:(id)arg1 andAssetCollection:(id)arg2 relatedType:(unsigned long long)arg3 needsDebugInfo:(BOOL)arg4 needsDiversityInfo:(BOOL)arg5 ;
-(id)_relatedCollectionsForMemoryTripOrWeekend:(id)arg1 relatedType:(unsigned long long)arg2 options:(id)arg3 assetCollectionForKeywords:(id)arg4 error:(id*)arg5 ;
-(id)_stringFromRelatedType:(unsigned long long)arg1 ;
-(id)_fileURLForMomentNode:(id)arg1 relatedType:(unsigned long long)arg2 focusOnAsset:(id)arg3 toURL:(id)arg4 ;
-(id)relatedCollectionsForAsset:(id)arg1 relatedType:(unsigned long long)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id)relatedCollectionsForMoment:(id)arg1 relatedType:(unsigned long long)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id)relatedCollectionsForAssetCollection:(id)arg1 relatedType:(unsigned long long)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id)relatedCollectionsForPersonIdentifiers:(id)arg1 relatedType:(unsigned long long)arg2 options:(id)arg3 error:(id*)arg4 ;
-(BOOL)exportMatchingResultsForMoment:(id)arg1 relatedType:(unsigned long long)arg2 toURL:(id)arg3 error:(id*)arg4 ;
-(BOOL)exportMatchingResultsForAsset:(id)arg1 relatedType:(unsigned long long)arg2 toURL:(id)arg3 error:(id*)arg4 ;
-(id)curatedAssetsForAssetCollection:(id)arg1 duration:(unsigned long long)arg2 precision:(unsigned long long)arg3 referencePeople:(id)arg4 progressBlock:(/*^block*/id)arg5 ;
-(void)invalidateCurationCacheForMoment:(id)arg1 ;
-(id)fetchAssetWithLocalIdentifier:(id)arg1 ;
@end

