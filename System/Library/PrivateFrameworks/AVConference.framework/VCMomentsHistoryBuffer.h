/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:47 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@class NSMutableArray, NSMutableDictionary;

@interface VCMomentsHistoryBuffer : NSObject {

	id _delegate;
	int _bufferLength;
	NSMutableArray* _timestampQueue;
	NSMutableDictionary* _sampleMap;
	unsigned _lastTimestamp;

}
-(id)delegate;
-(void)dealloc;
-(id)initWithDelegate:(id)arg1 bufferLength:(int)arg2 dispatchQueue:(id)arg3 ;
-(opaqueCMSampleBufferRef)getClosestSampleForTimestamp:(unsigned)arg1 ;
-(void)updateBufferWithSample:(opaqueCMSampleBufferRef)arg1 timestamp:(unsigned)arg2 ;
-(void)flushBuffer;
-(void)dequeueOneFrame;
-(unsigned)getUpdatedTimestampWithTimestamp:(unsigned)arg1 ;
-(void)enqueueWithSample:(opaqueCMSampleBufferRef)arg1 timestamp:(unsigned)arg2 ;
-(int)getCount;
@end

