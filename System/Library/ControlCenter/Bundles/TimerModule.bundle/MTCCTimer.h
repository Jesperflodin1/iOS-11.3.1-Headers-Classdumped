/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:01:35 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/ControlCenter/Bundles/TimerModule.bundle/TimerModule
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TimerModule/TimerModule-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate;

@interface MTCCTimer : NSObject <NSCopying> {

	int _state;
	double _duration;
	double _remainingTime;
	NSDate* _fireDate;

}

@property (assign,nonatomic) int state;                         //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) double duration;                   //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double remainingTime;              //@synthesize remainingTime=_remainingTime - In the implementation block
@property (nonatomic,copy) NSDate * fireDate;                   //@synthesize fireDate=_fireDate - In the implementation block
-(void)setRemainingTime:(double)arg1 ;
-(double)remainingTime;
-(int)state;
-(double)duration;
-(void)setState:(int)arg1 ;
-(void)setDuration:(double)arg1 ;
-(void)setFireDate:(NSDate *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)fireDate;
@end
