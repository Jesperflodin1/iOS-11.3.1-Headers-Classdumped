/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/_UIBasicAnimationFactory.h>

@class CAMediaTimingFunction, NSString;

@interface HUAnimationSettings : NSObject <NSCopying, _UIBasicAnimationFactory> {

	float _repeatCount;
	double _duration;
	double _delay;
	double _speed;
	CAMediaTimingFunction* _timingFunction;

}

@property (assign,nonatomic) double duration;                                     //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double delay;                                        //@synthesize delay=_delay - In the implementation block
@property (assign,nonatomic) double speed;                                        //@synthesize speed=_speed - In the implementation block
@property (assign,nonatomic) float repeatCount;                                   //@synthesize repeatCount=_repeatCount - In the implementation block
@property (nonatomic,readonly) double durationWithSpeed; 
@property (nonatomic,retain) CAMediaTimingFunction * timingFunction;              //@synthesize timingFunction=_timingFunction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)settingsWithDuration:(double)arg1 ;
+(id)settingsWithDuration:(double)arg1 curve:(long long)arg2 ;
-(id)init;
-(void)setSpeed:(double)arg1 ;
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(id)_timingFunctionForAnimation;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setDelay:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CAMediaTimingFunction *)timingFunction;
-(void)setTimingFunction:(CAMediaTimingFunction *)arg1 ;
-(float)repeatCount;
-(double)speed;
-(void)setRepeatCount:(float)arg1 ;
-(double)delay;
-(double)durationWithSpeed;
-(double)interpolatedProgressForProgress:(double)arg1 ;
-(double)interpolatedProgressForTime:(double)arg1 ;
-(id)settingsSpedUpByFactor:(double)arg1 ;
@end

