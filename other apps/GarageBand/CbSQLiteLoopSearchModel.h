//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LCSearchEngineMobile.h"

#import "CbLoopSearchModelInterface-Protocol.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, NSString;

@interface CbSQLiteLoopSearchModel : LCSearchEngineMobile <CbLoopSearchModelInterface>
{
    NSArray *_sectionTitles;
    NSMutableDictionary *_firstLetterToNumberOfRowsDict;
    NSMutableDictionary *_indexPathToIndexDict;
    NSMutableArray *_indicesArray;
}

- (void).cxx_destruct;
- (void)handleWillStartImportNotification:(id)arg1;
- (void)rebuildResultItemsIndexMapping;
- (id)valueForKey:(id)arg1 atIndexPath:(id)arg2;
- (id)indexPathInCurrentSearchResultForLoopWithName:(id)arg1;
@property(readonly, nonatomic) NSArray *sectionIndexTitles;
- (long long)numberOfRowsInSection:(long long)arg1;
@property(readonly, nonatomic) long long numberOfSections;
- (_Bool)indexTitlesEnabled;
- (void)setIsFavorite:(_Bool)arg1 forUniqueID:(id)arg2;
- (void)doSearch;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSSet *enabledJamPackIdentifier;
@property(nonatomic) _Bool filterOutWebLoops;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) long long numberOfLoops;
@property(nonatomic) _Bool searchForFavorites;
@property(retain, nonatomic) NSMutableSet *searchKeywords;
@property(retain, nonatomic) NSString *searchString;
@property(retain, nonatomic) NSString *specialNameSearchString;
@property(readonly) Class superclass;
@property(nonatomic) _Bool useLocalizedSorting;

@end

