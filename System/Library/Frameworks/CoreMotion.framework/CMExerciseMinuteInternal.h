/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject, CMExerciseMinuteData;

@interface CMExerciseMinuteInternal : NSObject {

	CLConnectionClient* fLocationdConnection;
	NSObject*<OS_dispatch_queue> fInternalQueue;
	NSObject*<OS_dispatch_queue> fAppQueue;
	NSObject*<OS_dispatch_source> fWatchdogTimer;
	BOOL fStartedUpdates;
	CMExerciseMinuteData* fMostRecentRecord;
	/*^block*/id fHandler;

}
-(void)_startWatchdogCheckins;
-(void)_stopWatchdogCheckins;
-(void)_startUpdatesFromRecord:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_queryExerciseMinutesFromRecord:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_startUpdatesWithHandler:(/*^block*/id)arg1 ;
-(void)_stopUpdates;
-(id)init;
-(void)dealloc;
-(void)_teardown;
@end

