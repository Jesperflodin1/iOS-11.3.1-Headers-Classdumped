/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSDictionary, FCColorGradient;

@interface FCTopStoriesOperationResult : NSObject {

	NSArray* _mandatoryHeadlines;
	NSArray* _optionalHeadlines;
	NSDictionary* _topStoriesMetadataByArticleID;
	FCColorGradient* _backgroundColorGradient;

}

@property (copy) NSArray * mandatoryHeadlines;                                     //@synthesize mandatoryHeadlines=_mandatoryHeadlines - In the implementation block
@property (copy) NSArray * optionalHeadlines;                                      //@synthesize optionalHeadlines=_optionalHeadlines - In the implementation block
@property (copy) NSDictionary * topStoriesMetadataByArticleID;                     //@synthesize topStoriesMetadataByArticleID=_topStoriesMetadataByArticleID - In the implementation block
@property (nonatomic,copy) FCColorGradient * backgroundColorGradient;              //@synthesize backgroundColorGradient=_backgroundColorGradient - In the implementation block
-(FCColorGradient *)backgroundColorGradient;
-(NSDictionary *)topStoriesMetadataByArticleID;
-(void)setTopStoriesMetadataByArticleID:(NSDictionary *)arg1 ;
-(void)setBackgroundColorGradient:(FCColorGradient *)arg1 ;
-(NSArray *)mandatoryHeadlines;
-(NSArray *)optionalHeadlines;
-(id)initWithTopStoriesGroupConfig:(id)arg1 mandatoryHeadlines:(id)arg2 optionalHeadlines:(id)arg3 topStoriesMetadataByArticleID:(id)arg4 ;
-(void)setMandatoryHeadlines:(NSArray *)arg1 ;
-(void)setOptionalHeadlines:(NSArray *)arg1 ;
@end

