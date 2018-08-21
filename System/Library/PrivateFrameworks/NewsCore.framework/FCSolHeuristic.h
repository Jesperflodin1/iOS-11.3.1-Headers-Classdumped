/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface FCSolHeuristic : NSObject {

	BOOL _alternate;
	NSArray* _groupSizes;
	long long _iterations;
	long long _heuristicSampleSize;
	/*^block*/id _utilityBlock;

}

@property (nonatomic,retain) NSArray * groupSizes;                         //@synthesize groupSizes=_groupSizes - In the implementation block
@property (nonatomic,readonly) BOOL alternate;                             //@synthesize alternate=_alternate - In the implementation block
@property (nonatomic,readonly) long long iterations;                       //@synthesize iterations=_iterations - In the implementation block
@property (nonatomic,readonly) long long heuristicSampleSize;              //@synthesize heuristicSampleSize=_heuristicSampleSize - In the implementation block
@property (nonatomic,copy,readonly) id utilityBlock;                       //@synthesize utilityBlock=_utilityBlock - In the implementation block
-(long long)iterations;
-(long long)heuristicSampleSize;
-(BOOL)alternate;
-(NSArray *)groupSizes;
-(id)fillGroupsWithSelectedGroup:(id)arg1 remainingArticles:(id)arg2 remainingTags:(id)arg3 articlesByTag:(id)arg4 groupSizes:(id)arg5 ;
-(id)utilityBlock;
-(id)initWithOption:(long long)arg1 minClusterSize:(long long)arg2 maxClusterSize:(long long)arg3 minIdealClusterSize:(long long)arg4 maxIdealClusterSize:(long long)arg5 heuristicSampleSize:(long long)arg6 utilityBlock:(/*^block*/id)arg7 ;
-(double)computeScoreWithSelectedGroup:(id)arg1 remainingArticles:(id)arg2 remainingTags:(id)arg3 articlesByTag:(id)arg4 ;
-(void)setGroupSizes:(NSArray *)arg1 ;
@end
