/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:41 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
@class CADisplayLink, NSMutableDictionary, NSCalendar;

@interface SBUIPreciseClockTimer : NSObject {

	CADisplayLink* _displayLink;
	NSMutableDictionary* _minuteUpdateHandlers;
	unsigned long long _nextToken;
	NSCalendar* _calendar;
	long long _lastHour;
	long long _lastMinute;

}
+(id)sharedInstance;
+(id)now;
-(id)init;
-(void)dealloc;
-(void)_updateDisplayLink;
-(void)_handleTimePassed;
-(void)_updateDisplayLinkFrameIntervalForSecondsPastMinute:(double)arg1 ;
-(NSNumber*)startMinuteUpdatesWithHandler:(/*^block*/id)arg1 ;
-(void)_onDisplayLink:(id)arg1 ;
-(void)stopMinuteUpdatesForToken:(NSNumber*)arg1 ;
@end
