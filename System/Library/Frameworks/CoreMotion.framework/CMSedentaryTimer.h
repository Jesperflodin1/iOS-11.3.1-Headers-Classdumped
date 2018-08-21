/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CMSedentaryTimer_Internal;

@interface CMSedentaryTimer : NSObject {

	CMSedentaryTimer_Internal* _internal;

}

@property (nonatomic,readonly) CMSedentaryTimer_Internal * _internal;              //@synthesize internal=_internal - In the implementation block
+(BOOL)isAvailable;
-(void)startTimerWithStartTime:(id)arg1 periodInterval:(double)arg2 reminderInterval:(double)arg3 autoReschedule:(BOOL)arg4 handler:(/*^block*/id)arg5 ;
-(void)stopTimerWithHandler:(/*^block*/id)arg1 ;
-(void)queryAlarmDataSince:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)registerForAlarmsWithHandler:(/*^block*/id)arg1 ;
-(CMSedentaryTimer_Internal *)_internal;
-(id)init;
-(void)dealloc;
-(BOOL)isActive;
@end

