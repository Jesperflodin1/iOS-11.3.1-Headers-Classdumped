/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:12 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSSet, NSDictionary, NSMutableDictionary, NSArray, NSObject, NSMapTable;

@interface PHChange : NSObject {

	NSSet* _insertedObjectIDs;
	NSSet* _changedObjectIDs;
	NSSet* _deletedObjectIDs;
	NSDictionary* _changedAttributesByOID;
	NSDictionary* _changedRelationshipsByOID;
	NSMutableDictionary* _updatedObjectsChangedAttributesByEntityName;
	NSMutableDictionary* _updatedObjectsChangedRelationshipsByEntityName;
	NSArray* _changedObjectIDsArray;
	NSMutableDictionary* _changeDetailsForObjects;
	NSMutableDictionary* _collectionChangeDetailsForObjects;
	NSObject*<OS_dispatch_queue> _changeDetailIsolation;
	NSMapTable* _changeHandlingMap;
	BOOL _unknownMergeEvent;

}

@property (nonatomic,readonly) BOOL hasIncrementalChanges; 
+(void)pl_simulateChangeWithAssetContainerList:(id)arg1 handler:(/*^block*/id)arg2 ;
+(id)handlerQueue;
-(id)insertedObjectIDs;
-(id)init;
-(id)description;
-(void)preloadSimulatedChangeDetailsForManualFetchResults:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_prepareCachedValuesForEntity:(id)arg1 ;
-(id)_preloadChangeDetailsWithRefetchForFetchResults:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(id)_preloadChangeDetailsWithClearCacheForFetchResults:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(id)initWithChangedIdentifiers:(id)arg1 unknownMergeEvent:(BOOL)arg2 ;
-(id)changedAttributesByOID;
-(id)changedRelationshipsByOID;
-(BOOL)anyUpdatedObjectsWithChangedAttributes:(unsigned long long)arg1 ofEntity:(id)arg2 ;
-(BOOL)anyUpdatedObjectsWithChangedRelationships:(unsigned long long)arg1 ofEntity:(id)arg2 ;
-(void)preloadChangeDetailsForFetchResults:(id)arg1 inManagedObjectContext:(id)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)contentOrThumbnailChangedForAsset:(id)arg1 ;
-(id)updatedObjectIDs;
-(id)deletedObjectIDs;
-(BOOL)keyFaceChangedForPersonOID:(id)arg1 ;
-(BOOL)contentOrThumbnailChangedForPHAssetOID:(id)arg1 ;
-(BOOL)trashedStateChangedForPHAssetOID:(id)arg1 ;
-(BOOL)hiddenStateChangedForPHAssetOID:(id)arg1 ;
-(BOOL)favoriteStateChangedForPHAssetOID:(id)arg1 ;
-(BOOL)containsChangesForEntityClass:(Class)arg1 ;
-(BOOL)hasIncrementalChanges;
-(id)changeDetailsForFetchResult:(id)arg1 ;
-(id)changeDetailsForObject:(id)arg1 ;
@end

