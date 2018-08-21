/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/MusicMediaEntityProvider.h>

@class MusicLibraryRecentlyAddedOverviewEntityValueProvider;

@interface MusicLibraryRecentlyAddedOverviewEntityProvider : MusicMediaEntityProvider {

	BOOL _hasValidOverviewEntityValueProvider;
	MusicLibraryRecentlyAddedOverviewEntityValueProvider* _overviewEntityValueProvider;
	unsigned long long _entityLimit;

}

@property (assign,nonatomic) unsigned long long entityLimit;              //@synthesize entityLimit=_entityLimit - In the implementation block
-(id)init;
-(unsigned long long)numberOfSections;
-(void)setEntityLimit:(unsigned long long)arg1 ;
-(unsigned long long)entityLimit;
-(BOOL)hasEntities;
-(unsigned long long)numberOfEntitiesInSection:(unsigned long long)arg1 ;
-(unsigned long long)numberOfIndexBarEntries;
-(unsigned long long)sectionForSectionIndexBarEntryAtIndex:(unsigned long long)arg1 ;
-(void)configureEntityValueContextOutputForAnyIndexPath:(id)arg1 ;
-(id)indexBarEntryAtIndex:(unsigned long long)arg1 ;
-(void)configureEntityValueContextOutput:(id)arg1 forIndexPath:(id)arg2 ;
-(void)configureSectionEntityValueContextOutput:(id)arg1 forIndex:(unsigned long long)arg2 ;
-(id)indexPathForEntityValueContext:(id)arg1 ;
-(BOOL)hasEntitiesNotInLibrary;
-(id)initWithEntityLimit:(unsigned long long)arg1 ;
-(id)_overviewEntityValueProvider;
-(void)_handleMediaQueryDataSourceDidInvalidate;
@end

