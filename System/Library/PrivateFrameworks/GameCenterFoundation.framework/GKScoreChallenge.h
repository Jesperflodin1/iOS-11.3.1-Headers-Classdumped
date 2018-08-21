/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:20 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GKChallenge.h>

@class GKScore, GKLeaderboard;

@interface GKScoreChallenge : GKChallenge {

	GKScore* _score;

}

@property (nonatomic,readonly) GKLeaderboard * leaderboard; 
@property (nonatomic,retain) GKScore * score;                            //@synthesize score=_score - In the implementation block
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
-(void)setScore:(GKScore *)arg1 ;
-(id)titleText;
-(void)dealloc;
-(id)description;
-(GKScore *)score;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(BOOL)detailsLoaded;
-(void)loadDetailsWithCompletionHandler:(/*^block*/id)arg1 ;
-(GKLeaderboard *)leaderboard;
-(id)detailGoalTextForPlayer:(id)arg1 withLeaderboard:(id)arg2 ;
-(void)setInternal:(id)arg1 ;
@end

