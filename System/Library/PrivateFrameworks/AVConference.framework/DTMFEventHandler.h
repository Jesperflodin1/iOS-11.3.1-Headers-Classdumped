/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AVConference/AVConference-Structs.h>
@class NSMutableArray, NSObject;

@interface DTMFEventHandler : NSObject {

	NSMutableArray* dtmfEventQueue;
	NSObject*<OS_dispatch_queue> dtmfQueue;
	BOOL currentEventInTransmission;
	BOOL currentEventNeedsEndBlock;
	BOOL currentIsMarker;
	unsigned char currentEvent;
	unsigned char currentVolume;
	unsigned currentStartTimestamp;
	unsigned currentDurationCounter;
	unsigned currentEndTimestamp;

}
-(id)init;
-(void)dealloc;
-(BOOL)shouldTransmitDTMFWithTimestamp:(unsigned)arg1 ;
-(void)sendingDTMFEventWithTimeStamp:(unsigned)arg1 interval:(unsigned)arg2 RTPHandle:(tagHANDLE*)arg3 ;
-(void)sendDTMFEvent:(id)arg1 atTimestamp:(unsigned)arg2 withSampleRate:(unsigned)arg3 ;
-(void)stopDTMFEvent;
-(BOOL)insertStartBlockWithEvent:(unsigned char)arg1 volume:(unsigned char)arg2 timestamp:(unsigned)arg3 ;
-(BOOL)insertStopBlockWithTimestamp:(unsigned)arg1 ;
-(int)constructDTMFEventPacketWithEvent:(unsigned char)arg1 volume:(unsigned char)arg2 durationCounter:(unsigned)arg3 interval:(unsigned)arg4 dataBuffer:(char*)arg5 isEnd:(BOOL)arg6 ;
@end

