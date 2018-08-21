/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:48 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, SFSearchSuggestion, NSArray;

@interface SPSearchQueryContext : NSObject {

	BOOL _allowInternet;
	BOOL _isPasscodeLocked;
	BOOL _forceQueryEvenIfSame;
	BOOL _promoteLocalResults;
	BOOL _promoteParsecResults;
	BOOL _noTokenize;
	NSString* _searchString;
	SFSearchSuggestion* _engagedSuggestion;
	NSArray* _markedTextArray;
	NSString* _keyboardLanguage;
	NSString* _keyboardPrimaryLanguage;
	NSArray* _searchDomains;
	NSArray* _disabledDomains;
	NSArray* _disabledBundles;
	NSArray* _disabledApps;
	unsigned long long _whyQuery;
	unsigned long long _whyClear;
	unsigned long long _queryIdent;
	NSArray* _searchEntities;

}

@property (assign,nonatomic) BOOL allowInternet;                                  //@synthesize allowInternet=_allowInternet - In the implementation block
@property (assign,nonatomic) BOOL isPasscodeLocked;                               //@synthesize isPasscodeLocked=_isPasscodeLocked - In the implementation block
@property (nonatomic,retain) NSString * searchString;                             //@synthesize searchString=_searchString - In the implementation block
@property (nonatomic,retain) SFSearchSuggestion * engagedSuggestion;              //@synthesize engagedSuggestion=_engagedSuggestion - In the implementation block
@property (nonatomic,retain) NSArray * markedTextArray;                           //@synthesize markedTextArray=_markedTextArray - In the implementation block
@property (nonatomic,readonly) BOOL hasMarkedText; 
@property (nonatomic,readonly) NSString * displayedText; 
@property (nonatomic,retain) NSString * keyboardLanguage;                         //@synthesize keyboardLanguage=_keyboardLanguage - In the implementation block
@property (nonatomic,retain) NSString * keyboardPrimaryLanguage;                  //@synthesize keyboardPrimaryLanguage=_keyboardPrimaryLanguage - In the implementation block
@property (nonatomic,retain) NSArray * searchDomains;                             //@synthesize searchDomains=_searchDomains - In the implementation block
@property (nonatomic,retain) NSArray * disabledDomains;                           //@synthesize disabledDomains=_disabledDomains - In the implementation block
@property (nonatomic,retain) NSArray * disabledBundles;                           //@synthesize disabledBundles=_disabledBundles - In the implementation block
@property (nonatomic,retain) NSArray * disabledApps;                              //@synthesize disabledApps=_disabledApps - In the implementation block
@property (assign,nonatomic) BOOL forceQueryEvenIfSame;                           //@synthesize forceQueryEvenIfSame=_forceQueryEvenIfSame - In the implementation block
@property (assign,nonatomic) unsigned long long whyQuery;                         //@synthesize whyQuery=_whyQuery - In the implementation block
@property (assign,nonatomic) unsigned long long whyClear;                         //@synthesize whyClear=_whyClear - In the implementation block
@property (assign,nonatomic) unsigned long long queryIdent;                       //@synthesize queryIdent=_queryIdent - In the implementation block
@property (nonatomic,retain) NSArray * searchEntities;                            //@synthesize searchEntities=_searchEntities - In the implementation block
@property (assign,nonatomic) BOOL promoteLocalResults;                            //@synthesize promoteLocalResults=_promoteLocalResults - In the implementation block
@property (assign,nonatomic) BOOL promoteParsecResults;                           //@synthesize promoteParsecResults=_promoteParsecResults - In the implementation block
@property (assign,nonatomic) BOOL noTokenize;                                     //@synthesize noTokenize=_noTokenize - In the implementation block
+(id)queryContextWithSearchString:(id)arg1 ;
-(void)setKeyboardLanguage:(NSString *)arg1 ;
-(NSString *)keyboardLanguage;
-(NSArray *)markedTextArray;
-(void)setMarkedTextArray:(NSArray *)arg1 ;
-(BOOL)hasMarkedText;
-(NSString *)searchString;
-(void)setSearchString:(NSString *)arg1 ;
-(NSArray *)searchDomains;
-(void)setSearchDomains:(NSArray *)arg1 ;
-(NSString *)displayedText;
-(void)setEngagedSuggestion:(SFSearchSuggestion *)arg1 ;
-(SFSearchSuggestion *)engagedSuggestion;
-(id)initWithSearchString:(id)arg1 ;
-(unsigned long long)queryIdent;
-(void)setQueryIdent:(unsigned long long)arg1 ;
-(NSString *)keyboardPrimaryLanguage;
-(NSArray *)disabledDomains;
-(void)setDisabledDomains:(NSArray *)arg1 ;
-(NSArray *)disabledBundles;
-(void)setDisabledBundles:(NSArray *)arg1 ;
-(NSArray *)disabledApps;
-(void)setDisabledApps:(NSArray *)arg1 ;
-(BOOL)forceQueryEvenIfSame;
-(void)setForceQueryEvenIfSame:(BOOL)arg1 ;
-(BOOL)promoteLocalResults;
-(BOOL)promoteParsecResults;
-(BOOL)noTokenize;
-(void)setNoTokenize:(BOOL)arg1 ;
-(BOOL)isPasscodeLocked;
-(void)setKeyboardPrimaryLanguage:(NSString *)arg1 ;
-(void)setPromoteLocalResults:(BOOL)arg1 ;
-(void)setPromoteParsecResults:(BOOL)arg1 ;
-(void)setWhyQuery:(unsigned long long)arg1 ;
-(void)setWhyClear:(unsigned long long)arg1 ;
-(NSArray *)searchEntities;
-(void)setSearchEntities:(NSArray *)arg1 ;
-(void)setIsPasscodeLocked:(BOOL)arg1 ;
-(unsigned long long)whyQuery;
-(unsigned long long)whyClear;
-(BOOL)allowInternet;
-(void)setAllowInternet:(BOOL)arg1 ;
@end

