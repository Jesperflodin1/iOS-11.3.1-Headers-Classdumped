/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol NFLFeedComponentLayout <NSObject,NSCopying>
@property (nonatomic,readonly) double rank; 
@property (nonatomic,copy,readonly) NSArray * tileInfosUsed; 
@property (nonatomic,readonly) unsigned long long rowSpan; 
@property (nonatomic,readonly) unsigned long long columnSpan; 
@required
-(double)rank;
-(NSArray *)tileInfosUsed;
-(id)layoutInfosAtRowOrigin:(long long)arg1 columnOrigin:(long long)arg2 subBatchRowOffset:(long long)arg3 feedSettings:(id)arg4;
-(unsigned long long)columnSpan;
-(unsigned long long)rowSpan;

@end
