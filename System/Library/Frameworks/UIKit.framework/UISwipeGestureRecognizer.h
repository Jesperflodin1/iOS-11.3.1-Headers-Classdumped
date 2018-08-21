/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIGestureRecognizer.h>

@class NSMutableArray;

@interface UISwipeGestureRecognizer : UIGestureRecognizer {

	double _maximumDuration;
	double _minimumPrimaryMovement;
	double _maximumPrimaryMovement;
	double _minimumSecondaryMovement;
	double _maximumSecondaryMovement;
	double _rateOfMinimumMovementDecay;
	double _rateOfMaximumMovementDecay;
	unsigned long long _numberOfTouchesRequired;
	NSMutableArray* _touches;
	unsigned long long _direction;
	CGPoint _startLocation;
	CGPoint* _startLocations;
	double _startTime;
	BOOL _failed;

}

@property (assign,nonatomic) double maximumDuration;                                  //@synthesize maximumDuration=_maximumDuration - In the implementation block
@property (assign,nonatomic) double minimumPrimaryMovement;                           //@synthesize minimumPrimaryMovement=_minimumPrimaryMovement - In the implementation block
@property (assign,nonatomic) double maximumPrimaryMovement;                           //@synthesize maximumPrimaryMovement=_maximumPrimaryMovement - In the implementation block
@property (assign,nonatomic) double minimumSecondaryMovement;                         //@synthesize minimumSecondaryMovement=_minimumSecondaryMovement - In the implementation block
@property (assign,nonatomic) double maximumSecondaryMovement;                         //@synthesize maximumSecondaryMovement=_maximumSecondaryMovement - In the implementation block
@property (assign,nonatomic) double rateOfMinimumMovementDecay;                       //@synthesize rateOfMinimumMovementDecay=_rateOfMinimumMovementDecay - In the implementation block
@property (assign,nonatomic) double rateOfMaximumMovementDecay;                       //@synthesize rateOfMaximumMovementDecay=_rateOfMaximumMovementDecay - In the implementation block
@property (nonatomic,readonly) CGPoint startPoint; 
@property (assign,nonatomic) unsigned long long numberOfTouchesRequired;              //@synthesize numberOfTouchesRequired=_numberOfTouchesRequired - In the implementation block
@property (assign,nonatomic) unsigned long long direction;                            //@synthesize direction=_direction - In the implementation block
+(BOOL)_shouldDefaultToTouches;
-(CGPoint)locationInView:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setDirection:(unsigned long long)arg1 ;
-(unsigned long long)numberOfTouches;
-(unsigned long long)direction;
-(void)setMaximumDuration:(double)arg1 ;
-(CGPoint)startPoint;
-(unsigned long long)numberOfTouchesRequired;
-(CGPoint)locationOfTouch:(unsigned long long)arg1 inView:(id)arg2 ;
-(void)setNumberOfTouchesRequired:(unsigned long long)arg1 ;
-(void)_resetGestureRecognizer;
-(void)setMinimumPrimaryMovement:(double)arg1 ;
-(void)_appendSubclassDescription:(id)arg1 ;
-(BOOL)_checkForSwipeWithDelta:(CGPoint)arg1 time:(double)arg2 ;
-(double)maximumDuration;
-(double)minimumPrimaryMovement;
-(double)maximumPrimaryMovement;
-(void)setMaximumPrimaryMovement:(double)arg1 ;
-(double)minimumSecondaryMovement;
-(void)setMinimumSecondaryMovement:(double)arg1 ;
-(double)maximumSecondaryMovement;
-(void)setMaximumSecondaryMovement:(double)arg1 ;
-(double)rateOfMinimumMovementDecay;
-(void)setRateOfMinimumMovementDecay:(double)arg1 ;
-(double)rateOfMaximumMovementDecay;
-(void)setRateOfMaximumMovementDecay:(double)arg1 ;
@end

