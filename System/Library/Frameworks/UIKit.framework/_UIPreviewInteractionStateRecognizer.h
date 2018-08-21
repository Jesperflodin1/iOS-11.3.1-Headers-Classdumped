/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:37 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@interface _UIPreviewInteractionStateRecognizer : NSObject {

	unsigned long long _deepPressCount;
	double _smoothedForce;
	double _maximumForce;
	double _previousEffectiveTouchForce;
	double _timeMark;
	double _currentTime;
	double _previousTime;
	double _popOffsetInitial;
	double _popOffsetLongterm;
	double _popOffsetDecayAlpha;
	double _lowpassForceAlpha;
	double _popDecayingOffset;
	double _popReductionForce;
	double _progressToStrongThreshold;
	BOOL _allowsPopOffsetDecay;
	double _popForceReductionThreshold;
	double _popAlwaysThreshold;
	double _highPopThreshold;
	double _previousPopThreshold;
	double _saturationForce;
	double _revealThreshold;
	double _standardThreshold;
	double _strongThreshold;
	double _hintAndPeekInterval;
	double _hintReductionForce;
	double _actualHintForce;
	double _actualPeekForce;
	double _actualPopForce;
	double _actualHintTime;
	double _actualPeekTime;
	double _actualPopTime;
	BOOL _shouldDelayReveal;
	long long _currentState;
	double _minimumPreviewDuration;
	double _currentTouchForce;

}

@property (assign,nonatomic) long long currentState;                     //@synthesize currentState=_currentState - In the implementation block
@property (assign,nonatomic) double currentTouchForce;                   //@synthesize currentTouchForce=_currentTouchForce - In the implementation block
@property (nonatomic,readonly) double velocity; 
@property (assign,nonatomic) double minimumPreviewDuration;              //@synthesize minimumPreviewDuration=_minimumPreviewDuration - In the implementation block
@property (assign,nonatomic) BOOL shouldDelayReveal;                     //@synthesize shouldDelayReveal=_shouldDelayReveal - In the implementation block
-(id)init;
-(void)dealloc;
-(id)description;
-(void)reset;
-(long long)currentState;
-(double)velocity;
-(void)setMinimumPreviewDuration:(double)arg1 ;
-(void)setShouldDelayReveal:(BOOL)arg1 ;
-(void)evaluateWithTouchForce:(double)arg1 atTimestamp:(double)arg2 withCentroidAtLocation:(CGPoint)arg3 ;
-(double)currentProgressToState:(long long)arg1 ;
-(void)setCurrentState:(long long)arg1 ;
-(void)_accessibilityForceSensitivityChanged:(id)arg1 ;
-(double)_currentTouchForceMultiplier;
-(double)_thresholdForForceLevel:(long long)arg1 ;
-(double)currentTouchForce;
-(double)_normalizedTouchForceValue:(double)arg1 ;
-(double)_denormalizedTouchForceValue:(double)arg1 ;
-(void)setCurrentTouchForce:(double)arg1 ;
-(BOOL)shouldDelayReveal;
-(double)minimumPreviewDuration;
@end

