/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:00 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSULocale, NSDictionary, NSCharacterSet;

@interface TSDShapeSearchIndex : NSObject {

	TSULocale* _locale;
	NSDictionary* _searchIndex;
	NSCharacterSet* _whitespaceCharacterSet;

}

@property (nonatomic,retain) TSULocale * p_locale;                                   //@synthesize locale=_locale - In the implementation block
@property (nonatomic,copy) NSDictionary * p_searchIndex;                             //@synthesize searchIndex=_searchIndex - In the implementation block
@property (nonatomic,retain) NSCharacterSet * p_whitespaceCharacterSet;              //@synthesize whitespaceCharacterSet=_whitespaceCharacterSet - In the implementation block
-(NSDictionary *)p_searchIndex;
-(id)resultsForSearchTerm:(id)arg1 ;
-(void)addSearchResultWithIdentifier:(id)arg1 forKeyword:(id)arg2 priority:(unsigned long long)arg3 ;
-(void)setP_searchIndex:(NSDictionary *)arg1 ;
-(TSULocale *)p_locale;
-(void)setP_locale:(TSULocale *)arg1 ;
-(void)removeSearchResultWithIdentifier:(id)arg1 forKeyword:(id)arg2 ;
-(NSCharacterSet *)p_whitespaceCharacterSet;
-(id)p_resultsForSearchTermBasedOnStringScore:(id)arg1 shouldPerformDiacriticInsensitiveSearch:(BOOL)arg2 ;
-(id)p_resultsForSearchTermBasedOnAnchoredSearch:(id)arg1 shouldPerformDiacriticInsensitiveSearch:(BOOL)arg2 ;
-(void)p_tokenizeKeywordIfNeeded:(id)arg1 yieldingKeyword:(/*^block*/id)arg2 ;
-(void)p_removeSearchResultWithIdentifier:(id)arg1 forTokenizedKeyword:(id)arg2 ;
-(id)p_resultsForKeyword:(id)arg1 ;
-(id)p_predicateWithSearchTerm:(id)arg1 shouldPerformDiacriticInsensitiveSearch:(BOOL)arg2 ;
-(id)p_sortedFilteredKeywordsForSearchTerm:(id)arg1 usingPredicate:(id)arg2 ;
-(id)p_resultsDictionaryForSearchTerm:(id)arg1 withFilteredKeywords:(id)arg2 shouldPerformDiacriticInsensitiveSearch:(BOOL)arg3 ;
-(NSRange)p_rangeOfSearchTerm:(id)arg1 inString:(id)arg2 shouldPerformDiacriticInsensitiveSearch:(BOOL)arg3 ;
-(id)p_keywords;
-(void)setP_whitespaceCharacterSet:(NSCharacterSet *)arg1 ;
-(void)addSearchResults:(id)arg1 ;
-(id)initWithLocale:(id)arg1 ;
@end

