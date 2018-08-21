/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:43 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIFeedbackGenerator.h>
#import <UIKit/UIFeedbackGeneratorUserInteractionDriven.h>

@protocol _UIFeedbackContinuousPlayable;
@class _UIFeedbackEngine, _UIFeedback, _UIEdgeFeedbackGeneratorConfiguration;

@interface _UIEdgeFeedbackGenerator : UIFeedbackGenerator <UIFeedbackGeneratorUserInteractionDriven> {

	_UIFeedbackEngine* _feedbackEngine;
	BOOL _playedOvershotThresholdFeedback;
	BOOL _closeToEdge;
	double _distance;
	long long _axis;
	double _extentBeyondDistance;
	double _closeToEdgeUpdateTime;
	double _value;
	double _previousValue;
	long long _lastState;
	double _lastValueUpdateTime;
	double _previousValueUpdateTime;
	double _velocity;
	_UIFeedback*<_UIFeedbackContinuousPlayable> _playingContinuousFeedback;
	long long _state;

}

@property (getter=_edgeConfiguration,nonatomic,readonly) _UIEdgeFeedbackGeneratorConfiguration * edgeConfiguration; 
@property (assign,setter=_setCloseToEdge:,getter=_isCloseToEdge,nonatomic) BOOL closeToEdge;                                                                                             //@synthesize closeToEdge=_closeToEdge - In the implementation block
@property (assign,setter=_setCloseToEdgeUpdateTime:,getter=_closeToEdgeUpdateTime,nonatomic) double closeToEdgeUpdateTime;                                                               //@synthesize closeToEdgeUpdateTime=_closeToEdgeUpdateTime - In the implementation block
@property (assign,setter=_setValue:,getter=_value,nonatomic) double value;                                                                                                               //@synthesize value=_value - In the implementation block
@property (assign,setter=_setPreviousValue:,getter=_previousValue,nonatomic) double previousValue;                                                                                       //@synthesize previousValue=_previousValue - In the implementation block
@property (assign,setter=_setLastState:,getter=_lastState,nonatomic) long long lastState;                                                                                                //@synthesize lastState=_lastState - In the implementation block
@property (assign,setter=_setLastValueUpdateTime:,getter=_lastValueUpdateTime,nonatomic) double lastValueUpdateTime;                                                                     //@synthesize lastValueUpdateTime=_lastValueUpdateTime - In the implementation block
@property (assign,setter=_setPreviousValueUpdateTime:,getter=_previousValueUpdateTime,nonatomic) double previousValueUpdateTime;                                                         //@synthesize previousValueUpdateTime=_previousValueUpdateTime - In the implementation block
@property (assign,setter=_setVelocity:,getter=_velocity,nonatomic) double velocity;                                                                                                      //@synthesize velocity=_velocity - In the implementation block
@property (getter=_isOvershot,nonatomic,readonly) BOOL overshot; 
@property (getter=_percentBeyondDistance,nonatomic,readonly) float percentBeyondDistance; 
@property (setter=_setPlayingContinuousFeedback:,getter=_playingContinuousFeedback,nonatomic,retain) _UIFeedback*<_UIFeedbackContinuousPlayable> playingContinuousFeedback;              //@synthesize playingContinuousFeedback=_playingContinuousFeedback - In the implementation block
@property (getter=_effectiveDistance,nonatomic,readonly) double effectiveDistance; 
@property (assign,setter=_setState:,getter=_state,nonatomic) long long state;                                                                                                            //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) long long axis;                                                                                                                                             //@synthesize axis=_axis - In the implementation block
@property (assign,nonatomic) double distance;                                                                                                                                            //@synthesize distance=_distance - In the implementation block
@property (assign,nonatomic) double extentBeyondDistance;                                                                                                                                //@synthesize extentBeyondDistance=_extentBeyondDistance - In the implementation block
+(Class)_configurationClass;
-(id)initWithConfiguration:(id)arg1 coordinateSpace:(id)arg2 ;
-(void)setAxis:(long long)arg1 ;
-(double)_velocity;
-(double)_value;
-(void)_positionUpdated:(double)arg1 withVelocity:(double)arg2 ;
-(void)userInteractionEnded;
-(void)setDistance:(double)arg1 ;
-(void)setExtentBeyondDistance:(double)arg1 ;
-(void)userInteractionStarted;
-(void)_animationEnded;
-(void)_animationStarted;
-(void)userInteractionCancelled;
-(long long)_state;
-(id)_stats_key;
-(long long)axis;
-(double)distance;
-(void)positionUpdated:(double)arg1 ;
-(void)_setState:(long long)arg1 ;
-(id)initWithStyle:(long long)arg1 coordinateSpace:(id)arg2 ;
-(id)initWithStyle:(long long)arg1 ;
-(id)_playingContinuousFeedback;
-(void)_setValue:(double)arg1 ;
-(double)_previousValue;
-(void)_setPlayingContinuousFeedback:(id)arg1 ;
-(void)_setVelocity:(double)arg1 ;
-(void)_deactivate;
-(id)_edgeConfiguration;
-(void)_cancelStopAnimatingTimeout;
-(void)_setLastState:(long long)arg1 ;
-(void)_setPreviousValue:(double)arg1 ;
-(void)_setLastValueUpdateTime:(double)arg1 ;
-(void)_setPreviousValueUpdateTime:(double)arg1 ;
-(void)_animationStartedUsingTimeout:(BOOL)arg1 ;
-(void)_setCloseToEdge:(BOOL)arg1 ;
-(void)_stopAnimatingWithTimeout:(double)arg1 ;
-(BOOL)_isOvershot;
-(double)_effectiveDistance;
-(BOOL)_valueIsOvershot:(double)arg1 ;
-(BOOL)_isCloseToEdge;
-(float)_percentBeyondDistance;
-(void)_updateCloseToEdge;
-(double)extentBeyondDistance;
-(double)_closeToEdgeUpdateTime;
-(void)_setCloseToEdgeUpdateTime:(double)arg1 ;
-(long long)_lastState;
-(double)_lastValueUpdateTime;
-(double)_previousValueUpdateTime;
@end

