/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject;

@interface CMSwimTrackerInternal : NSObject {

	CLConnectionClient* fLocationdConnection;
	NSObject*<OS_dispatch_queue> fInternalQueue;
	NSObject*<OS_dispatch_source> fWatchdogTimer;
	BOOL fStartedUpdates;
	/*^block*/id fHandler;
	unsigned long long fStrokeCountOffset;
	double fDistanceOffset;
	unsigned long long fLapCountOffset;
	double fActiveTime;
	unsigned long long fSegmentCountOffset;

}
-(void)_startWatchdogCheckins;
-(void)_stopWatchdogCheckins;
-(void)_startUpdatesFromRecord:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_stopUpdates;
-(void)_querySwimUpdatesFromRecord:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)_handleUpdates:(id)arg1 ;
-(void)_teardown;
@end
