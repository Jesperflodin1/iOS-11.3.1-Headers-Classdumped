/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:05 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ICSearchIndexable;
#import <NotesUI/NotesUI-Structs.h>
@class NSString, NSTextCheckingResult, NSAttributedString;

@interface ICSearchResult : NSObject {

	unsigned long long _cachedHash;
	id<ICSearchIndexable> _object;
	double _rankingScore;
	unsigned long long _relevanceBitField;
	NSString* _searchString;
	NSString* _highlightString;
	NSString* _displayingTitle;
	NSTextCheckingResult* _displayingTitleCheckingResult;
	NSAttributedString* _titleAttributedString;
	NSString* _displayingSnippet;
	NSTextCheckingResult* _displayingSnippetCheckingResult;
	NSAttributedString* _snippetAttributedString;
	CGRect _titleAttributedStringInsideFrame;
	CGRect _snippetAttributedStringInsideFrame;

}

@property (nonatomic,retain) NSAttributedString * titleAttributedString;                            //@synthesize titleAttributedString=_titleAttributedString - In the implementation block
@property (assign,nonatomic) CGRect titleAttributedStringInsideFrame;                               //@synthesize titleAttributedStringInsideFrame=_titleAttributedStringInsideFrame - In the implementation block
@property (nonatomic,retain) NSAttributedString * snippetAttributedString;                          //@synthesize snippetAttributedString=_snippetAttributedString - In the implementation block
@property (assign,nonatomic) CGRect snippetAttributedStringInsideFrame;                             //@synthesize snippetAttributedStringInsideFrame=_snippetAttributedStringInsideFrame - In the implementation block
@property (nonatomic,readonly) id<ICSearchIndexable> object;                                        //@synthesize object=_object - In the implementation block
@property (nonatomic,readonly) double rankingScore;                                                 //@synthesize rankingScore=_rankingScore - In the implementation block
@property (nonatomic,readonly) unsigned long long relevanceBitField;                                //@synthesize relevanceBitField=_relevanceBitField - In the implementation block
@property (nonatomic,copy,readonly) NSString * searchString;                                        //@synthesize searchString=_searchString - In the implementation block
@property (nonatomic,readonly) NSString * highlightString;                                          //@synthesize highlightString=_highlightString - In the implementation block
@property (nonatomic,readonly) NSString * displayingTitle;                                          //@synthesize displayingTitle=_displayingTitle - In the implementation block
@property (nonatomic,readonly) NSTextCheckingResult * displayingTitleCheckingResult;                //@synthesize displayingTitleCheckingResult=_displayingTitleCheckingResult - In the implementation block
@property (nonatomic,readonly) NSString * displayingSnippet;                                        //@synthesize displayingSnippet=_displayingSnippet - In the implementation block
@property (nonatomic,readonly) NSTextCheckingResult * displayingSnippetCheckingResult;              //@synthesize displayingSnippetCheckingResult=_displayingSnippetCheckingResult - In the implementation block
+(id)firstMatchOfString:(id)arg1 withinString:(id)arg2 matchWordBoundaries:(BOOL)arg3 ;
+(id)bestMatchTokensForString:(id)arg1 ;
+(id)regularExpressionForSearchingWithString:(id)arg1 matchWordBoundaries:(BOOL)arg2 ;
+(CGRect)boundingRectForAttributedString:(id)arg1 fittingSize:(CGSize)arg2 ;
+(id)attributesByHighlightingAttributes:(id)arg1 ;
+(BOOL)canFitAttributedString:(id)arg1 ellipses:(id)arg2 shouldPrefixWithEllipses:(BOOL)arg3 insideFrame:(CGRect)arg4 ;
+(id)attributedStringWithMatchHighlighted:(id)arg1 textCheckingResult:(id)arg2 usingAttributes:(id)arg3 insideFrame:(CGRect)arg4 ;
+(id)bestMatchOfString:(id)arg1 withinString:(id)arg2 matchWordBoundaries:(BOOL)arg3 ;
+(id)stringMatchHighlightedForString:(id)arg1 atributedString:(id)arg2 highlightString:(id)arg3 ;
+(id)authorNameToHighlightForNote:(id)arg1 fromSearchResult:(id)arg2 matchWordBoundaries:(BOOL)arg3 ;
+(id)stringMatchHighlightedForString:(id)arg1 fromSearchResult:(id)arg2 ;
+(id)stringMatchHighlightedForAttributedString:(id)arg1 fromSearchResult:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id<ICSearchIndexable>)object;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)searchString;
-(double)rankingScore;
-(unsigned long long)relevanceBitField;
-(NSString *)highlightString;
-(id)initWithObject:(id)arg1 rankingScore:(double)arg2 relevanceBitField:(unsigned long long)arg3 searchString:(id)arg4 highlightString:(id)arg5 ;
-(CGRect)titleAttributedStringInsideFrame;
-(NSAttributedString *)titleAttributedString;
-(NSString *)displayingTitle;
-(NSTextCheckingResult *)displayingTitleCheckingResult;
-(void)setTitleAttributedString:(NSAttributedString *)arg1 ;
-(void)setTitleAttributedStringInsideFrame:(CGRect)arg1 ;
-(id)bestMatchWithinString:(id)arg1 ;
-(id)bestMatchWithinString:(id)arg1 matchWordBoundaries:(BOOL)arg2 ;
-(NSString *)displayingSnippet;
-(void)setSnippetAttributedString:(NSAttributedString *)arg1 ;
-(CGRect)snippetAttributedStringInsideFrame;
-(NSAttributedString *)snippetAttributedString;
-(NSTextCheckingResult *)displayingSnippetCheckingResult;
-(void)setSnippetAttributedStringInsideFrame:(CGRect)arg1 ;
-(void)prepareDisplayingTitleWithAccessingObject:(id)arg1 ;
-(void)prepareDisplayingSnippetWithAccessingObject:(id)arg1 ;
-(id)titleWithMatchHighlightedUsingAttributes:(id)arg1 insideFrame:(CGRect)arg2 ;
-(id)snippetWithMatchHighlightedUsingAttributes:(id)arg1 insideFrame:(CGRect)arg2 ;
-(id)initWithMainContextObject:(id)arg1 currentContextObject:(id)arg2 rankingScore:(double)arg3 relevanceBitField:(unsigned long long)arg4 searchString:(id)arg5 highlightString:(id)arg6 ;
-(long long)compareByModificationDate:(id)arg1 ;
-(void)refetchObjectFromContext:(id)arg1 ;
@end

