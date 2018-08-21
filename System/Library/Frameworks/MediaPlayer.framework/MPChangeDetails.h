/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:47 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableIndexSet, NSMutableSet, NSIndexSet, NSArray;

@interface MPChangeDetails : NSObject {

	NSMutableDictionary* _sectionMoves;
	NSMutableIndexSet* _updatedSectionMoveFromIndexes;
	NSMutableDictionary* _itemMoves;
	NSMutableSet* _updatedItemMoveFromIndexPaths;
	NSIndexSet* _insertedSections;
	NSIndexSet* _deletedSections;
	NSIndexSet* _updatedSections;
	NSArray* _insertedItemIndexPaths;
	NSArray* _deletedItemIndexPaths;
	NSArray* _updatedItemIndexPaths;

}

@property (nonatomic,copy) NSIndexSet * insertedSections;                      //@synthesize insertedSections=_insertedSections - In the implementation block
@property (nonatomic,copy) NSIndexSet * deletedSections;                       //@synthesize deletedSections=_deletedSections - In the implementation block
@property (nonatomic,copy) NSIndexSet * updatedSections;                       //@synthesize updatedSections=_updatedSections - In the implementation block
@property (nonatomic,copy) NSArray * insertedItemIndexPaths;                   //@synthesize insertedItemIndexPaths=_insertedItemIndexPaths - In the implementation block
@property (nonatomic,copy) NSArray * deletedItemIndexPaths;                    //@synthesize deletedItemIndexPaths=_deletedItemIndexPaths - In the implementation block
@property (nonatomic,copy) NSArray * updatedItemIndexPaths;                    //@synthesize updatedItemIndexPaths=_updatedItemIndexPaths - In the implementation block
@property (nonatomic,readonly) BOOL hasChanges; 
@property (nonatomic,copy,readonly) NSIndexSet * insertedIndexes; 
@property (nonatomic,copy,readonly) NSIndexSet * deletedIndexes; 
@property (nonatomic,copy,readonly) NSIndexSet * updatedIndexes; 
+(id)changeDetailsWithPreviousCount:(long long)arg1 finalCount:(long long)arg2 isEqualBlock:(/*^block*/id)arg3 isUpdatedBlock:(/*^block*/id)arg4 ;
-(id)description;
-(id)debugDescription;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(void)enumerateMovesWithBlock:(/*^block*/id)arg1 ;
-(void)appendSectionMoveFromIndex:(long long)arg1 toIndex:(long long)arg2 updated:(BOOL)arg3 ;
-(void)appendItemMoveFromIndexPath:(id)arg1 toIndexPath:(id)arg2 updated:(BOOL)arg3 ;
-(void)setInsertedSections:(NSIndexSet *)arg1 ;
-(void)setDeletedSections:(NSIndexSet *)arg1 ;
-(void)setUpdatedSections:(NSIndexSet *)arg1 ;
-(void)setInsertedItemIndexPaths:(NSArray *)arg1 ;
-(void)setDeletedItemIndexPaths:(NSArray *)arg1 ;
-(void)setUpdatedItemIndexPaths:(NSArray *)arg1 ;
-(NSArray *)updatedItemIndexPaths;
-(NSArray *)insertedItemIndexPaths;
-(NSArray *)deletedItemIndexPaths;
-(void)enumerateItemMovesWithBlock:(/*^block*/id)arg1 ;
-(void)_finalize;
-(NSIndexSet *)updatedSections;
-(void)enumerateSectionMovesWithBlock:(/*^block*/id)arg1 ;
-(void)removeSectionMoveFromIndex:(long long)arg1 ;
-(void)removeItemMoveFromIndexPath:(id)arg1 ;
-(NSIndexSet *)deletedSections;
-(NSIndexSet *)insertedSections;
-(BOOL)hasChanges;
-(NSIndexSet *)insertedIndexes;
-(NSIndexSet *)deletedIndexes;
-(NSIndexSet *)updatedIndexes;
@end

