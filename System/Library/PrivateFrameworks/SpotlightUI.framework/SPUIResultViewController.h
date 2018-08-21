/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:37 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUIResultViewController.h>
#import <libobjc.A.dylib/SPSearchAgentDelegate.h>

@class NSArray, SFResultSection, SFSearchResult;

@interface SPUIResultViewController : SearchUIResultViewController <SPSearchAgentDelegate> {

	BOOL _hasResultsWaitingToUpdate;
	NSArray* _resultSections;
	SFResultSection* _suggestionsSection;
	SFResultSection* _searchThroughSection;

}

@property (retain) NSArray * resultSections;                                          //@synthesize resultSections=_resultSections - In the implementation block
@property (retain) SFResultSection * suggestionsSection;                              //@synthesize suggestionsSection=_suggestionsSection - In the implementation block
@property (readonly) SFSearchResult * actualSearchSuggestionResult; 
@property (assign) BOOL hasResultsWaitingToUpdate;                                    //@synthesize hasResultsWaitingToUpdate=_hasResultsWaitingToUpdate - In the implementation block
@property (retain) SFResultSection * searchThroughSection;                            //@synthesize searchThroughSection=_searchThroughSection - In the implementation block
@property (assign,nonatomic,__weak) id<SPUIResultViewDelegate> delegate; 
+(unsigned long long)defaultStyle;
-(void)setHasResultsWaitingToUpdate:(BOOL)arg1 ;
-(SFSearchResult *)actualSearchSuggestionResult;
-(void)clearSuggestionSection;
-(void)setSuggestionsSection:(SFResultSection *)arg1 ;
-(SFResultSection *)suggestionsSection;
-(void)_truncateResultsSectionToFit;
-(SFResultSection *)searchThroughSection;
-(void)setSearchThroughSection:(SFResultSection *)arg1 ;
-(void)setResultSections:(NSArray *)arg1 ;
-(void)_updateCombinedSections;
-(void)_pushSectionsUpdate;
-(NSArray *)resultSections;
-(BOOL)hasResultsWaitingToUpdate;
-(void)searchAgentUpdatedResults:(id)arg1 ;
-(void)searchAgentClearedResults:(id)arg1 ;
-(id)initWithSearchModel:(id)arg1 ;
-(BOOL)isResultOriginalSearchSuggestion:(id)arg1 ;
-(id)_newSuggestionSection;
-(void)searchStringUpdated:(id)arg1 wantsCompletions:(BOOL)arg2 ;
-(BOOL)_hasRealSuggestions;
@end

