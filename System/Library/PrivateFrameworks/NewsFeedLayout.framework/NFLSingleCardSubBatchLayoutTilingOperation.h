/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsFeedLayout/NewsFeedLayout-Structs.h>
#import <NewsFeedLayout/NFLSubBatchLayoutTilingOperation.h>

@interface NFLSingleCardSubBatchLayoutTilingOperation : NFLSubBatchLayoutTilingOperation
+(BOOL)mayTileInfosTileSubBatchLayout:(id)arg1 withLayoutSeed:(SCD_Struct_NF2)arg2 ;
+(unsigned long long)tileInfosUsedCount;
+(void)drawDebugNodeViewInFrame:(CGRect)arg1 context:(CGContextRef)arg2 layoutSeed:(SCD_Struct_NF2)arg3 ;
+(BOOL)validTileInfoType:(id)arg1 ;
-(id)rankedLayoutRequests;
-(id)tiledSubBatchLayoutWithRankedLayoutsByTileInfo:(id)arg1 ;
@end

