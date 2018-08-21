/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:48 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Search/Search-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, SFSearchSuggestion, NSDictionary;

@interface SPSearchQuery : NSObject <NSCopying> {

	unsigned long long _queryID;
	NSString* _searchString;
	NSString* _keyboardLanguage;
	NSString* _keyboardPrimaryLanguage;
	NSArray* markedTextArray;
	BOOL _finished;
	BOOL _internal;
	BOOL _promoteLocalResults;
	BOOL _promoteParsecResults;
	double _creationTime;
	double _cancellationTime;
	unsigned long long _creationStamp;
	AB _cancelled;
	BOOL _dictationStable;
	BOOL _grouped;
	BOOL _noTokenize;
	BOOL _infinitePatience;
	BOOL _isWideScreen;
	BOOL _isPasscodeLocked;
	NSArray* _searchDomains;
	NSArray* _markedTextArray;
	SFSearchSuggestion* _engagedSuggestion;
	NSArray* _disabledDomains;
	NSArray* _searchEntities;
	NSDictionary* _dictationResponse;
	long long _maxCount;
	NSArray* _disabledBundles;
	NSArray* _disabledApps;
	unsigned long long _whyQuery;
	unsigned long long _queryIdent;
	long long _contentFilters;

}

@property (nonatomic,readonly) NSString * searchString;                             //@synthesize searchString=_searchString - In the implementation block
@property (nonatomic,readonly) SFSearchSuggestion * engagedSuggestion;              //@synthesize engagedSuggestion=_engagedSuggestion - In the implementation block
@property (nonatomic,readonly) NSString * keyboardLanguage;                         //@synthesize keyboardLanguage=_keyboardLanguage - In the implementation block
@property (nonatomic,readonly) NSString * keyboardPrimaryLanguage;                  //@synthesize keyboardPrimaryLanguage=_keyboardPrimaryLanguage - In the implementation block
@property (nonatomic,readonly) BOOL cancelled; 
@property (nonatomic,readonly) NSArray * searchDomains;                             //@synthesize searchDomains=_searchDomains - In the implementation block
@property (nonatomic,readonly) NSArray * disabledDomains;                           //@synthesize disabledDomains=_disabledDomains - In the implementation block
@property (nonatomic,readonly) NSArray * searchEntities;                            //@synthesize searchEntities=_searchEntities - In the implementation block
@property (nonatomic,retain) NSDictionary * dictationResponse;                      //@synthesize dictationResponse=_dictationResponse - In the implementation block
@property (assign,nonatomic) BOOL dictationStable;                                  //@synthesize dictationStable=_dictationStable - In the implementation block
@property (assign,nonatomic) BOOL grouped;                                          //@synthesize grouped=_grouped - In the implementation block
@property (assign,nonatomic) long long maxCount;                                    //@synthesize maxCount=_maxCount - In the implementation block
@property (assign,nonatomic) BOOL internal;                                         //@synthesize internal=_internal - In the implementation block
@property (nonatomic,retain) NSArray * disabledBundles;                             //@synthesize disabledBundles=_disabledBundles - In the implementation block
@property (nonatomic,retain) NSArray * disabledApps;                                //@synthesize disabledApps=_disabledApps - In the implementation block
@property (nonatomic,readonly) NSArray * markedTextArray;                           //@synthesize markedTextArray=_markedTextArray - In the implementation block
@property (nonatomic,readonly) BOOL hasMarkedText; 
@property (assign,nonatomic) BOOL noTokenize;                                       //@synthesize noTokenize=_noTokenize - In the implementation block
@property (assign,nonatomic) BOOL infinitePatience;                                 //@synthesize infinitePatience=_infinitePatience - In the implementation block
@property (assign,nonatomic) unsigned long long whyQuery;                           //@synthesize whyQuery=_whyQuery - In the implementation block
@property (assign,nonatomic) BOOL isWideScreen;                                     //@synthesize isWideScreen=_isWideScreen - In the implementation block
@property (nonatomic,readonly) BOOL isPasscodeLocked;                               //@synthesize isPasscodeLocked=_isPasscodeLocked - In the implementation block
@property (assign,nonatomic) unsigned long long queryIdent;                         //@synthesize queryIdent=_queryIdent - In the implementation block
@property (assign,nonatomic) BOOL promoteLocalResults;                              //@synthesize promoteLocalResults=_promoteLocalResults - In the implementation block
@property (assign,nonatomic) BOOL promoteParsecResults;                             //@synthesize promoteParsecResults=_promoteParsecResults - In the implementation block
@property (assign,nonatomic) long long contentFilters;                              //@synthesize contentFilters=_contentFilters - In the implementation block
@property (nonatomic,readonly) double creationTime;                                 //@synthesize creationTime=_creationTime - In the implementation block
@property (nonatomic,readonly) double cancellationTime;                             //@synthesize cancellationTime=_cancellationTime - In the implementation block
@property (nonatomic,readonly) unsigned long long creationStamp;                    //@synthesize creationStamp=_creationStamp - In the implementation block
-(void)setGrouped:(BOOL)arg1 ;
-(NSString *)keyboardLanguage;
-(NSArray *)markedTextArray;
-(BOOL)grouped;
-(void)cancel;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)cancelled;
-(BOOL)hasMarkedText;
-(NSString *)searchString;
-(void)execute:(/*^block*/id)arg1 ;
-(NSArray *)searchDomains;
-(SFSearchSuggestion *)engagedSuggestion;
-(void)setMaxCount:(long long)arg1 ;
-(long long)maxCount;
-(BOOL)isWideScreen;
-(unsigned long long)queryIdent;
-(void)setQueryIdent:(unsigned long long)arg1 ;
-(NSString *)keyboardPrimaryLanguage;
-(NSArray *)disabledDomains;
-(NSArray *)disabledBundles;
-(void)setDisabledBundles:(NSArray *)arg1 ;
-(NSArray *)disabledApps;
-(void)setDisabledApps:(NSArray *)arg1 ;
-(BOOL)promoteLocalResults;
-(BOOL)promoteParsecResults;
-(BOOL)noTokenize;
-(void)setNoTokenize:(BOOL)arg1 ;
-(id)initWithSearchQueryContext:(id)arg1 ;
-(id)initWithQuery:(id)arg1 domains:(id)arg2 ;
-(double)cancellationTime;
-(NSDictionary *)dictationResponse;
-(void)setDictationResponse:(NSDictionary *)arg1 ;
-(BOOL)dictationStable;
-(void)setDictationStable:(BOOL)arg1 ;
-(void)setIsWideScreen:(BOOL)arg1 ;
-(long long)contentFilters;
-(void)setContentFilters:(long long)arg1 ;
-(unsigned long long)creationStamp;
-(BOOL)isPasscodeLocked;
-(BOOL)internal;
-(double)creationTime;
-(void)setInternal:(BOOL)arg1 ;
-(void)setPromoteLocalResults:(BOOL)arg1 ;
-(void)setPromoteParsecResults:(BOOL)arg1 ;
-(void)setWhyQuery:(unsigned long long)arg1 ;
-(NSArray *)searchEntities;
-(unsigned long long)whyQuery;
-(BOOL)infinitePatience;
-(void)setInfinitePatience:(BOOL)arg1 ;
@end

