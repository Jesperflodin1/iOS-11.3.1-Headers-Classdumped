/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCFeedGroupEmittingOperation.h>

@protocol FCHeadlineClustering, FCHeadlineClusterOrdering;
@class NSSet;

@interface FCMyArticlesFeedGroupEmittingOperation : FCFeedGroupEmittingOperation {

	id<FCHeadlineClustering> _headlineClusterer;
	id<FCHeadlineClusterOrdering> _headlineClusterOrderer;
	NSSet* _emittableGroupTypes;

}

@property (nonatomic,retain) id<FCHeadlineClustering> headlineClusterer;                        //@synthesize headlineClusterer=_headlineClusterer - In the implementation block
@property (nonatomic,retain) id<FCHeadlineClusterOrdering> headlineClusterOrderer;              //@synthesize headlineClusterOrderer=_headlineClusterOrderer - In the implementation block
@property (nonatomic,retain) NSSet * emittableGroupTypes;                                       //@synthesize emittableGroupTypes=_emittableGroupTypes - In the implementation block
-(void)performOperation;
-(NSSet *)emittableGroupTypes;
-(id<FCHeadlineClustering>)headlineClusterer;
-(void)setHeadlineClusterer:(id<FCHeadlineClustering>)arg1 ;
-(id<FCHeadlineClusterOrdering>)headlineClusterOrderer;
-(void)setHeadlineClusterOrderer:(id<FCHeadlineClusterOrdering>)arg1 ;
-(id)_nonEditorialFeedTransformationWithFeedContext:(id)arg1 feedItemScores:(id)arg2 showStoriesOnlyFromFavorites:(BOOL)arg3 ;
-(id)_joinedFeedTransformation;
-(id)_sortClusteredHeadlinesForDisplay:(id)arg1 withAdditionalData:(id)arg2 scoresByArticleID:(id)arg3 topicsByID:(id)arg4 ;
-(id)interleaveHeadlines:(id)arg1 withPublisherDiversificationPenalty:(double)arg2 ;
-(void)setEmittableGroupTypes:(NSSet *)arg1 ;
@end
