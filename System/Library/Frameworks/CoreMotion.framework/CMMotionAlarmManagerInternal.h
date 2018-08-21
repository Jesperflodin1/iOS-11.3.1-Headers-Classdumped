/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject, NSMutableDictionary;

@interface CMMotionAlarmManagerInternal : NSObject {

	CLConnectionClient* fLocationdConnection;
	NSObject*<OS_dispatch_queue> fInternalQueue;
	NSObject*<OS_dispatch_source> fWatchdogTimer;
	NSMutableDictionary* fAlarms;
	BOOL fListening;

}
+(id)instance;
-(void)_startWatchdogCheckins;
-(void)_stopWatchdogCheckins;
-(void)_startListeners;
-(void)_stopListeners;
-(void)_handleAlarmFire:(id)arg1 ;
-(BOOL)_registerAlarm:(id)arg1 error:(id*)arg2 ;
-(BOOL)_unregisterAlarm:(id)arg1 error:(id*)arg2 ;
-(BOOL)_acknowledgeAlarm:(id)arg1 error:(id*)arg2 ;
-(BOOL)_launchRemoteAppWithError:(id*)arg1 delegate:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)_teardown;
@end

