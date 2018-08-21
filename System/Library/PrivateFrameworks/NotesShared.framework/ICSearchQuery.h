/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:01 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString, NSArray, CSSearchQuery;

@interface ICSearchQuery : NSObject {

	NSDictionary* _queryResults;
	NSString* _highlightString;
	unsigned long long _rankingInterpretation;
	NSString* _queryString;
	NSArray* _rankingQueries;
	CSSearchQuery* _searchQuery;

}

@property (nonatomic,copy) NSString * queryString;                                  //@synthesize queryString=_queryString - In the implementation block
@property (nonatomic,retain) NSString * highlightString;                            //@synthesize highlightString=_highlightString - In the implementation block
@property (nonatomic,retain) NSArray * rankingQueries;                              //@synthesize rankingQueries=_rankingQueries - In the implementation block
@property (nonatomic,retain) CSSearchQuery * searchQuery;                           //@synthesize searchQuery=_searchQuery - In the implementation block
@property (nonatomic,retain) NSDictionary * queryResults;                           //@synthesize queryResults=_queryResults - In the implementation block
@property (assign,nonatomic) unsigned long long rankingInterpretation;              //@synthesize rankingInterpretation=_rankingInterpretation - In the implementation block
-(void)setup;
-(CSSearchQuery *)searchQuery;
-(NSString *)queryString;
-(void)setQueryString:(NSString *)arg1 ;
-(void)cancel;
-(NSArray *)rankingQueries;
-(void)setRankingQueries:(NSArray *)arg1 ;
-(void)setQueryResults:(NSDictionary *)arg1 ;
-(NSDictionary *)queryResults;
-(void)setRankingInterpretation:(unsigned long long)arg1 ;
-(void)setHighlightString:(NSString *)arg1 ;
-(void)setSearchQuery:(CSSearchQuery *)arg1 ;
-(id)initWithQueryString:(id)arg1 rankingQueries:(id)arg2 rankingInterpretation:(unsigned long long)arg3 highlightString:(id)arg4 ;
-(unsigned long long)rankingInterpretation;
-(BOOL)run:(id*)arg1 ;
-(NSString *)highlightString;
@end

