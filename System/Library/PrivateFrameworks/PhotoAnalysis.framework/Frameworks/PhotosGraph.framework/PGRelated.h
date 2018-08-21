/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:41 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, NSDictionary, NSDate;

@interface PGRelated : NSObject {

	BOOL _generateTitleBasedOnKeyAsset;
	unsigned _aggregatedVersions;
	NSString* _debugDescription;
	NSArray* _moments;
	NSDictionary* _keywords;
	double _score;
	double _matchingScore;
	NSString* _title;
	NSString* _subtitle;
	long long _titleCategory;
	NSDate* _localStartDate;
	NSDate* _localEndDate;
	unsigned long long _memoryTripTitleType;
	long long _dateMatchingType;

}

@property (nonatomic,retain) NSString * debugDescription;                                                            //@synthesize debugDescription=_debugDescription - In the implementation block
@property (nonatomic,retain) NSArray * moments;                                                                      //@synthesize moments=_moments - In the implementation block
@property (assign,nonatomic) double score;                                                                           //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) double matchingScore;                                                                   //@synthesize matchingScore=_matchingScore - In the implementation block
@property (assign,nonatomic) long long titleCategory;                                                                //@synthesize titleCategory=_titleCategory - In the implementation block
@property (assign,nonatomic) long long dateMatchingType;                                                             //@synthesize dateMatchingType=_dateMatchingType - In the implementation block
@property (assign,nonatomic) unsigned long long memoryTripTitleType;                                                 //@synthesize memoryTripTitleType=_memoryTripTitleType - In the implementation block
@property (assign,getter=isGeneratingTitleBasedOnKeyAsset,nonatomic) BOOL generateTitleBasedOnKeyAsset;              //@synthesize generateTitleBasedOnKeyAsset=_generateTitleBasedOnKeyAsset - In the implementation block
@property (assign,nonatomic) unsigned short graphSchemaVersion; 
@property (assign,nonatomic) unsigned short relatedAlgorithmsVersion; 
@property (nonatomic,readonly) NSString * title;                                                                     //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * subtitle;                                                                  //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) NSDate * localStartDate;                                                              //@synthesize localStartDate=_localStartDate - In the implementation block
@property (nonatomic,readonly) NSDate * localEndDate;                                                                //@synthesize localEndDate=_localEndDate - In the implementation block
@property (nonatomic,readonly) NSDictionary * keywords;                                                              //@synthesize keywords=_keywords - In the implementation block
@property (nonatomic,readonly) unsigned aggregatedVersions;                                                          //@synthesize aggregatedVersions=_aggregatedVersions - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
-(void)setScore:(double)arg1 ;
-(NSString *)debugDescription;
-(NSString *)title;
-(NSString *)subtitle;
-(NSDictionary *)dictionaryRepresentation;
-(NSArray *)moments;
-(void)setMoments:(NSArray *)arg1 ;
-(long long)titleCategory;
-(double)score;
-(void)setTitleCategory:(long long)arg1 ;
-(NSDate *)localEndDate;
-(NSDate *)localStartDate;
-(void)setGraphSchemaVersion:(unsigned short)arg1 ;
-(void)setRelatedAlgorithmsVersion:(unsigned short)arg1 ;
-(id)_initWithGraphMatchingResult:(id)arg1 moments:(id)arg2 needsDebugInfo:(BOOL)arg3 ;
-(unsigned short)graphSchemaVersion;
-(unsigned short)relatedAlgorithmsVersion;
-(void)_addKeywordsFromKeywords:(id)arg1 ;
-(id)initWithGraphMatchingResult:(id)arg1 moment:(id)arg2 needsDebugInfo:(BOOL)arg3 ;
-(id)initWithGraphMatchingResult:(id)arg1 moments:(id)arg2 tripMemoryTitleType:(unsigned long long)arg3 tripNodes:(id)arg4 needsDebugInfo:(BOOL)arg5 ;
-(id)initWithMoment:(id)arg1 needsDebugInfo:(BOOL)arg2 ;
-(void)_generateTitleWithMomentNodes:(id)arg1 keyAsset:(id)arg2 curatedAssetCollection:(id)arg3 referenceDateInterval:(id)arg4 ;
-(void)_addKeywords:(id)arg1 forRelatedType:(unsigned long long)arg2 ;
-(void)setDebugDescription:(NSString *)arg1 ;
-(double)matchingScore;
-(void)setMatchingScore:(double)arg1 ;
-(unsigned)aggregatedVersions;
-(unsigned long long)memoryTripTitleType;
-(void)setMemoryTripTitleType:(unsigned long long)arg1 ;
-(long long)dateMatchingType;
-(void)setDateMatchingType:(long long)arg1 ;
-(BOOL)isGeneratingTitleBasedOnKeyAsset;
-(void)setGenerateTitleBasedOnKeyAsset:(BOOL)arg1 ;
-(NSDictionary *)keywords;
@end
