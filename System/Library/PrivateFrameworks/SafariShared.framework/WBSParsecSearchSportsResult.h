/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:42 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/WBSParsecLegacySearchResult.h>

@class WBSParsecSportsScoreSummary, WBSParsecSearchSportsAttributionExtraCompletionItem, NSArray, NSString;

@interface WBSParsecSearchSportsResult : WBSParsecLegacySearchResult {

	WBSParsecSportsScoreSummary* _scoreSummary;
	WBSParsecSearchSportsAttributionExtraCompletionItem* _extraCompletionItem;

}

@property (nonatomic,copy,readonly) NSArray * images; 
@property (nonatomic,copy,readonly) NSArray * individualScores; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,readonly) WBSParsecSearchSportsAttributionExtraCompletionItem * extraCompletionItem;              //@synthesize extraCompletionItem=_extraCompletionItem - In the implementation block
+(id)_specializedSchema;
-(id)initWithDictionary:(id)arg1 ;
-(NSArray *)images;
-(NSString *)subtitle;
-(NSArray *)individualScores;
-(WBSParsecSearchSportsAttributionExtraCompletionItem *)extraCompletionItem;
@end

