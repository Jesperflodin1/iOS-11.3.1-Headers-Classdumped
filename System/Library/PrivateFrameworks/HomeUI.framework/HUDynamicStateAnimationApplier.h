/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:02 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HUDisplayLinkApplier.h>

@class HUAnimationSettings;

@interface HUDynamicStateAnimationApplier : HUDisplayLinkApplier {

	BOOL _hasUpdatedProgress;
	HUAnimationSettings* _animationSettings;
	double _initialProgress;
	double _targetProgress;
	double _preInterpolatedProgress;
	double _lastTargetChangeTime;

}

@property (assign,nonatomic) double initialProgress;                                      //@synthesize initialProgress=_initialProgress - In the implementation block
@property (assign,nonatomic) double targetProgress;                                       //@synthesize targetProgress=_targetProgress - In the implementation block
@property (assign,nonatomic) double preInterpolatedProgress;                              //@synthesize preInterpolatedProgress=_preInterpolatedProgress - In the implementation block
@property (assign,nonatomic) double lastTargetChangeTime;                                 //@synthesize lastTargetChangeTime=_lastTargetChangeTime - In the implementation block
@property (assign,nonatomic) BOOL hasUpdatedProgress;                                     //@synthesize hasUpdatedProgress=_hasUpdatedProgress - In the implementation block
@property (nonatomic,copy,readonly) HUAnimationSettings * animationSettings;              //@synthesize animationSettings=_animationSettings - In the implementation block
-(BOOL)start;
-(HUAnimationSettings *)animationSettings;
-(void)updateProgress:(double)arg1 ;
-(void)setLastTargetChangeTime:(double)arg1 ;
-(void)setHasUpdatedProgress:(BOOL)arg1 ;
-(BOOL)hasUpdatedProgress;
-(void)setTargetProgress:(double)arg1 ;
-(double)initialProgress;
-(void)setPreInterpolatedProgress:(double)arg1 ;
-(double)targetProgress;
-(double)preInterpolatedProgress;
-(void)setInitialProgress:(double)arg1 ;
-(double)lastTargetChangeTime;
-(id)initWithAnimationSettings:(id)arg1 initialProgress:(double)arg2 progressInputBlock:(/*^block*/id)arg3 ;
-(double)effectiveInputProgressForBlock:(/*^block*/id)arg1 ;
@end

