/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:32 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, UIAnimatablePropertyState, _UIViewAnimatablePropertyTransformer;

@interface UIViewFloatAnimatableProperty : NSObject {

	NSObject*<OS_dispatch_queue> _animatablePropertyStateLockingQueue;
	NSObject*<OS_dispatch_queue> _presentationValueLockingQueue;
	NSObject*<OS_dispatch_queue> _invalidationLockingQueue;
	double _presentationValue;
	BOOL _invalidated;
	UIAnimatablePropertyState* _animatablePropertyState;
	BOOL _performingInterpolationBetweenTwoStates;
	double _value;
	_UIViewAnimatablePropertyTransformer* _transformer;

}

@property (assign,nonatomic) double presentationValue; 
@property (nonatomic,retain) UIAnimatablePropertyState * animatablePropertyState; 
@property (nonatomic,retain) _UIViewAnimatablePropertyTransformer * transformer;               //@synthesize transformer=_transformer - In the implementation block
@property (assign,nonatomic) BOOL performingInterpolationBetweenTwoStates;                     //@synthesize performingInterpolationBetweenTwoStates=_performingInterpolationBetweenTwoStates - In the implementation block
@property (assign,nonatomic) double value;                                                     //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) double velocity; 
@property (getter=isInvalidated,nonatomic,readonly) BOOL invalidated; 
-(id)init;
-(void)invalidate;
-(void)dealloc;
-(void)setVelocity:(double)arg1 ;
-(void)setValue:(double)arg1 ;
-(double)value;
-(double)velocity;
-(double)presentationValue;
-(void)setTransformer:(_UIViewAnimatablePropertyTransformer *)arg1 ;
-(void)setPerformingInterpolationBetweenTwoStates:(BOOL)arg1 ;
-(_UIViewAnimatablePropertyTransformer *)transformer;
-(BOOL)isInvalidated;
-(BOOL)_performAnimation;
-(void)setPresentationValue:(double)arg1 ;
-(UIAnimatablePropertyState *)animatablePropertyState;
-(void)invalidateAndStopImmediately:(BOOL)arg1 ;
-(void)setAnimatablePropertyState:(UIAnimatablePropertyState *)arg1 ;
-(BOOL)performingInterpolationBetweenTwoStates;
@end

