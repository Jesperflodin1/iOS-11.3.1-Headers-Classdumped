/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:08 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSMutableSet, NSMutableDictionary;

@interface PSSearchResults : NSObject <NSCopying> {

	NSMutableArray* _sectionEntries;
	NSMutableSet* _explicitlyAddedSectionEntries;
	NSMutableDictionary* _entriesBySection;
	BOOL _needsSorting;
	BOOL _treatSectionEntriesAsRegularEntries;
	/*^block*/id _sectionComparator;
	/*^block*/id _entryComparator;

}

@property (nonatomic,copy) id sectionComparator;                                    //@synthesize sectionComparator=_sectionComparator - In the implementation block
@property (nonatomic,copy) id entryComparator;                                      //@synthesize entryComparator=_entryComparator - In the implementation block
@property (assign,nonatomic) BOOL treatSectionEntriesAsRegularEntries;              //@synthesize treatSectionEntriesAsRegularEntries=_treatSectionEntriesAsRegularEntries - In the implementation block
-(void)addEntries:(id)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addEntry:(id)arg1 ;
-(unsigned long long)removeEntries:(id)arg1 ;
-(void)sortResults;
-(void)mergeWithResults:(id)arg1 ;
-(BOOL)removeEntry:(id)arg1 ;
-(void)setSectionComparator:(id)arg1 ;
-(id)_initForCopyWithSectionEntries:(id)arg1 entriesBySection:(id)arg2 explicitlyAddedSectionEntries:(id)arg3 ;
-(id)entriesInSectionAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfSectionEntries;
-(unsigned long long)numberOfEntriesInSectionAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)totalNumberOfEntries;
-(id)sectionEntryAtIndex:(unsigned long long)arg1 ;
-(id)entryAtIndexPath:(id)arg1 ;
-(id)allSectionEntries;
-(void)setEntryComparator:(id)arg1 ;
-(id)sectionComparator;
-(id)entryComparator;
-(BOOL)treatSectionEntriesAsRegularEntries;
-(void)setTreatSectionEntriesAsRegularEntries:(BOOL)arg1 ;
-(id)resultsByMergingWithResults:(id)arg1 ;
@end

