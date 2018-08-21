/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:24 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
#import <ClockKit/ClockKit-Structs.h>
@class CADisplayLink, NSMutableDictionary, NSObject;

@interface CLKClockTimer : NSObject {

	CADisplayLink* _displayLink;
	CADisplayLink* _30fpsDisplayLink;
	CADisplayLink* _nativeDisplayLink;
	NSMutableDictionary* _minuteHandlers;
	NSMutableDictionary* _secondHandlers;
	NSMutableDictionary* _subsecondHandlers;
	NSMutableDictionary* _30fpsHandlers;
	NSMutableDictionary* _nativeHandlers;
	unsigned long long _nextToken;
	long long _lastHour;
	long long _lastMinute;
	long long _lastSecond;
	double _lastSubsecondFraction;
	BOOL _permittedToRun;
	NSObject*<OS_dispatch_source> _signalSource;
	NSMutableDictionary* _identificationLogsByToken;

}
+(id)sharedInstance;
+(void)_forceDate:(id)arg1 ;
+(id)now;
-(id)init;
-(void)dealloc;
-(void)_updateDisplayLink;
-(void)_handleTimePassed;
-(NSNumber*)startMinuteUpdatesWithHandler:(/*^block*/id)arg1 ;
-(void)stopSecondUpdatesForToken:(NSNumber*)arg1 ;
-(NSNumber*)startSecondUpdatesWithHandler:(/*^block*/id)arg1 identificationLog:(/*^block*/id)arg2 ;
-(void)_backgrounded:(id)arg1 ;
-(void)_foregrounded:(id)arg1 ;
-(void)_dumpIndentificationLogs;
-(NSNumber*)_nextTokenWithIdentificationLog:(/*^block*/id)arg1 ;
-(void)_removeToken:(NSNumber*)arg1 ;
-(void)_maybeClearLastSeenTimeComponents;
-(NSNumber*)startSubsecondUpdatesWithHandler:(/*^block*/id)arg1 identificationLog:(/*^block*/id)arg2 ;
-(void)_update30fpsDisplayLink;
-(void)_updateNativeDisplayLink;
-(void)_on30fpsDisplayLink:(id)arg1 ;
-(void)_onNativeDisplayLink:(id)arg1 ;
-(void)_updateDisplayLinkFrameIntervalAccuracyIfNecessaryForTimePastMinuteInSeconds:(double)arg1 ;
-(NSNumber*)startSecondUpdatesWithHandler:(/*^block*/id)arg1 ;
-(NSNumber*)startSubsecondUpdatesWithHandler:(/*^block*/id)arg1 ;
-(void)stopSubsecondUpdatesForToken:(id)arg1 ;
-(NSNumber*)startDisplayNativeUpdatesWithHandler:(/*^block*/id)arg1 identificationLog:(/*^block*/id)arg2 ;
-(void)stopDisplayNativeUpdatesForToken:(NSNumber*)arg1 ;
-(void)_onDisplayLink:(id)arg1 ;
-(void)stop30fpsUpdatesForToken:(NSNumber*)arg1 ;
-(NSNumber*)start30fpsUpdatesWithHandler:(/*^block*/id)arg1 identificationLog:(/*^block*/id)arg2 ;
-(NSNumber*)startMinuteUpdatesWithHandler:(/*^block*/id)arg1 identificationLog:(/*^block*/id)arg2 ;
-(void)stopMinuteUpdatesForToken:(NSNumber*)arg1 ;
@end

