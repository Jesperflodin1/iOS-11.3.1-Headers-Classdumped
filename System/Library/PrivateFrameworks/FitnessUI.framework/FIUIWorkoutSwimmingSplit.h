/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FIUIWorkoutSwimmingSplit : NSObject {

	double _duration;
	long long _splitDistance;
	double _distanceInUserUnit;
	long long _strokeCount;
	long long _strokeCountScaledToFillSplit;
	double _durationScaledToFillSplit;

}

@property (assign,nonatomic) double duration;                                     //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) long long splitDistance;                             //@synthesize splitDistance=_splitDistance - In the implementation block
@property (assign,nonatomic) double distanceInUserUnit;                           //@synthesize distanceInUserUnit=_distanceInUserUnit - In the implementation block
@property (assign,nonatomic) long long strokeCount;                               //@synthesize strokeCount=_strokeCount - In the implementation block
@property (assign,nonatomic) long long strokeCountScaledToFillSplit;              //@synthesize strokeCountScaledToFillSplit=_strokeCountScaledToFillSplit - In the implementation block
@property (assign,nonatomic) double durationScaledToFillSplit;                    //@synthesize durationScaledToFillSplit=_durationScaledToFillSplit - In the implementation block
-(id)description;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(id)formattedPaceWithFormattingManager:(id)arg1 ;
-(double)distanceInUserUnit;
-(double)_fractionToFillTotalSplitDistance;
-(long long)strokeCountScaledToFillSplit;
-(double)durationScaledToFillSplit;
-(id)formattedStrokeCount;
-(void)setDistanceInUserUnit:(double)arg1 ;
-(void)setStrokeCount:(long long)arg1 ;
-(void)setStrokeCountScaledToFillSplit:(long long)arg1 ;
-(void)setDurationScaledToFillSplit:(double)arg1 ;
-(long long)splitDistance;
-(void)setSplitDistance:(long long)arg1 ;
-(long long)strokeCount;
@end

