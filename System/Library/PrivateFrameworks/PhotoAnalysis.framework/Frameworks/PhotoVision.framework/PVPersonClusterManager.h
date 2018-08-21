/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:40 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotoVision.framework/PhotoVision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PVPhotoLibraryProtocol.h>

@protocol PVPhotoLibraryProtocol;
@class NSMutableDictionary, NSSet, PVCVMLHelper, NSString;

@interface PVPersonClusterManager : NSObject <PVPhotoLibraryProtocol> {

	NSMutableDictionary* _representativeFaceObservationForPersonIdentifier;
	NSMutableDictionary* _distancesForPersonLocalIdentifier;
	NSMutableDictionary* _distancesInCommonMomentsForPersonLocalIdentifier;
	NSSet* _assetsToIgnore;
	id<PVPhotoLibraryProtocol> _photoLibrary;
	PVCVMLHelper* _cvmlHelper;
	NSMutableDictionary* _personClusters;

}

@property (nonatomic,retain) id<PVPhotoLibraryProtocol> photoLibrary;              //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (nonatomic,retain) PVCVMLHelper * cvmlHelper;                            //@synthesize cvmlHelper=_cvmlHelper - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * personClusters;                 //@synthesize personClusters=_personClusters - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)personProcessingSortDescriptors;
+(id)nodeSortDescriptors;
+(id)peopleSortDescriptors;
+(id)faceSortDescriptors;
+(id)momentSortDescriptors;
+(id)assetSortDescriptors;
+(id)faceGroupSortDescriptors;
-(void)setPhotoLibrary:(id<PVPhotoLibraryProtocol>)arg1 ;
-(void)mergePersons:(id)arg1 withPerson:(id)arg2 ;
-(id<PVPhotoLibraryProtocol>)photoLibrary;
-(id)initWithPhotoLibrary:(id)arg1 ;
-(unsigned long long)numberOfAssetsInCommonBetweenPerson:(id)arg1 andPerson:(id)arg2 ;
-(unsigned long long)numberOfMomentsInCommonBetweenPerson:(id)arg1 andPerson:(id)arg2 ;
-(float)distanceBetweenPerson:(id)arg1 andPerson:(id)arg2 useCommonMoments:(BOOL)arg3 updateBlock:(/*^block*/id)arg4 error:(id*)arg5 ;
-(long long)assetsOverlapBetweenPerson:(id)arg1 andPerson:(id)arg2 ;
-(id)_representativeFaceObservationForPerson:(id)arg1 ;
-(void)invalidateCachesForPerson:(id)arg1 ;
-(long long)assetsOverlapBetweenPersonAssetIdentifiers:(id)arg1 andPersonAssetIdentifiers:(id)arg2 ;
-(unsigned long long)numberOfAssetsInCommonBetweenPersonAssetIdentifiers:(id)arg1 andPersonAssetIdentifiers:(id)arg2 ;
-(id)_representativeFaceObservationForPerson:(id)arg1 inAssetCollections:(id)arg2 ;
-(id)representativeFaceObservationForFaces:(id)arg1 inPerson:(id)arg2 ;
-(id)_mapPersonClustersToPersons:(id)arg1 ;
-(id)_mapPersonClustersToFaceGroups:(id)arg1 ;
-(float)distanceWithOverlapCheckBetweenPerson:(id)arg1 andPerson:(id)arg2 useCommonMoments:(BOOL)arg3 updateBlock:(/*^block*/id)arg4 error:(id*)arg5 ;
-(PVCVMLHelper *)cvmlHelper;
-(void)setCvmlHelper:(PVCVMLHelper *)arg1 ;
-(NSMutableDictionary *)personClusters;
-(void)setPersonClusters:(NSMutableDictionary *)arg1 ;
-(id)pv_fetchMoments;
-(id)pv_fetchMomentsWithLocalIdentifiers:(id)arg1 ;
-(void)clearCaches;
-(id)pv_fetchPersonsWithType:(unsigned long long)arg1 ;
-(id)pv_fetchAssetsForPerson:(id)arg1 ;
-(id)pv_fetchFacesGroupedByAssetLocalIdentifierForAssets:(id)arg1 ;
-(id)pv_persistentStorageDirectoryURL;
-(BOOL)pv_performChangesAndWait:(/*^block*/id)arg1 error:(id*)arg2 ;
-(id)pv_fetchPersonsWithLocalIdentifiers:(id)arg1 ;
-(id)pv_fetchPersonsInMoment:(id)arg1 ;
-(id)pv_fetchCandidatePersonsForPerson:(id)arg1 ;
-(id)pv_fetchInvalidCandidatePersonsForPerson:(id)arg1 ;
-(id)pv_fetchPersonsGroupedByAssetLocalIdentifierForAssets:(id)arg1 ;
-(id)pv_fetchFaces;
-(id)pv_fetchFacesWithLocalIdentifiers:(id)arg1 ;
-(id)pv_fetchFacesForPerson:(id)arg1 ;
-(id)pv_fetchFacesForPerson:(id)arg1 inMoment:(id)arg2 ;
-(id)pv_fetchFacesForPersonLocalIdentifiers:(id)arg1 inMoment:(id)arg2 ;
-(id)pv_fetchFacesForFaceGroup:(id)arg1 ;
-(id)pv_fetchMomentsForPerson:(id)arg1 ;
-(id)pv_fetchMomentsForAssetsWithLocalIdentifiers:(id)arg1 ;
-(id)pv_fetchAssetsWithLocalIdentifiers:(id)arg1 ;
-(id)pv_fetchAssetsInMoment:(id)arg1 ;
-(id)pv_fetchAssetsForFaceGroup:(id)arg1 ;
-(id)pv_fetchFaceGroups;
-(id)pv_fetchFaceGroupsForPerson:(id)arg1 ;
-(id)pv_fetchInvalidAssetIdentifiersForCommonComparison;
-(float)pv_faceProcessingProgress;
-(BOOL)pv_isLibraryBeingSynchronized;
-(id)pv_lastAssetDate;
@end

