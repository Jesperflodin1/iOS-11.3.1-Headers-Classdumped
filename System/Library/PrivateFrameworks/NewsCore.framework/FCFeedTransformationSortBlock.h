/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCFeedTransformationSort.h>

@interface FCFeedTransformationSortBlock : FCFeedTransformationSort {

	/*^block*/id _sortBlock;

}

@property (nonatomic,copy) id sortBlock;              //@synthesize sortBlock=_sortBlock - In the implementation block
+(id)transformationWithSortBlock:(/*^block*/id)arg1 ;
-(id)transformFeedItems:(id)arg1 ;
-(void)setSortBlock:(id)arg1 ;
-(id)sortBlock;
@end

