/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject;

@interface CMActivityAlarm : NSObject {

	BOOL fIsValid;
	CFRunLoopRef fRunLoop;
	NSObject*<OS_dispatch_queue> fQueue;
	/*^block*/id fHandler;
	unsigned _trigger;
	double _duration;

}

@property (assign,nonatomic) double duration;               //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) unsigned trigger;              //@synthesize trigger=_trigger - In the implementation block
+(id)activityAlarmInfo;
+(BOOL)activityAlarmAvailable;
-(id)initWithTrigger:(unsigned)arg1 duration:(double)arg2 onRunLoop:(CFRunLoopRef)arg3 withHandler:(/*^block*/id)arg4 ;
-(void)setTrigger:(unsigned)arg1 ;
-(void)invalidate;
-(void)dealloc;
-(double)duration;
-(BOOL)isValid;
-(void)setDuration:(double)arg1 ;
-(unsigned)trigger;
-(void)fire;
-(id)initWithTrigger:(unsigned)arg1 duration:(double)arg2 onQueue:(id)arg3 withHandler:(/*^block*/id)arg4 ;
@end

