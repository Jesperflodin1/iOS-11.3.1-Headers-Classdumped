/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BurstFaceScoreEntry : NSObject {

	float maxScore;
	float minScore;
	float sumScores;
	float sumSqScores;
	int numScores;

}

@property (assign) float maxScore; 
@property (assign) float minScore; 
@property (assign) int numScores; 
-(float)computeAverage;
-(void)addScore:(float)arg1 ;
-(float)computeStandardDeviation;
-(float)minScore;
-(void)setMinScore:(float)arg1 ;
-(int)numScores;
-(void)setNumScores:(int)arg1 ;
-(float)maxScore;
-(void)setMaxScore:(float)arg1 ;
-(id)initWithScore:(float)arg1 ;
@end

