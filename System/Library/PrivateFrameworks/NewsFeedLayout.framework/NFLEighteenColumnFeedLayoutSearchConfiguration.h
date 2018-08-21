/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsFeedLayout/NewsFeedLayout-Structs.h>
#import <libobjc.A.dylib/NFLFeedLayoutSearchConfiguration.h>

@class NSArray, NSString;

@interface NFLEighteenColumnFeedLayoutSearchConfiguration : NSObject <NFLFeedLayoutSearchConfiguration> {

	BOOL _showAccessoryText;
	NSString* _preferredContentSizeCategory;

}

@property (nonatomic,retain) NSString * preferredContentSizeCategory;                           //@synthesize preferredContentSizeCategory=_preferredContentSizeCategory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isShowingAccessoryText,nonatomic) BOOL showAccessoryText;              //@synthesize showAccessoryText=_showAccessoryText - In the implementation block
@property (nonatomic,readonly) unsigned long long preferredTileInfoBatchSize; 
@property (nonatomic,readonly) NSArray * allRowTypes; 
-(NSString *)preferredContentSizeCategory;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPreferredContentSizeCategory:(NSString *)arg1 ;
-(void)setShowAccessoryText:(BOOL)arg1 ;
-(NSArray *)allRowTypes;
-(BOOL)mayRowType:(unsigned long long)arg1 useTileInfos:(id)arg2 withPreferedContentSizeCategory:(id)arg3 ;
-(id)nextRowTypeCandidatesForRowType:(unsigned long long)arg1 ;
-(BOOL)isShowingAccessoryText;
-(id)descriptionForRowType:(unsigned long long)arg1 ;
-(double)transitionRankFromNoneToRowType:(unsigned long long)arg1 ;
-(double)transitionRankFromRowTypeToNone:(unsigned long long)arg1 ;
-(double)transitionRankFromRowType:(unsigned long long)arg1 toRowType:(unsigned long long)arg2 ;
-(unsigned long long)numberOfTileInfosUsedByRowType:(unsigned long long)arg1 ;
-(Class)subBatchLayoutTilingOperationClassForRowType:(unsigned long long)arg1 ;
-(SCD_Struct_NF2)subBatchLayoutSeedForRowType:(unsigned long long)arg1 withTileInfos:(id)arg2 ;
-(Class)rankedLayoutGenerationOperationClassForRequest:(id)arg1 ;
-(unsigned long long)preferredTileInfoBatchSize;
-(id)_transitions;
-(Class)_tilingOperationClassForRowType:(unsigned long long)arg1 ;
-(id)_transitionRankByToRowTypeFromRowType:(unsigned long long)arg1 ;
-(BOOL)supportsTileInfoType:(unsigned long long)arg1 ;
-(id)preferredOrderingOfTileInfos:(id)arg1 ;
@end
