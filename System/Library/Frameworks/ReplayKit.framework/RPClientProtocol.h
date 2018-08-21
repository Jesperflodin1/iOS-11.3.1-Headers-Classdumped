/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:20 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RPClientProtocol <NSObject>
@required
-(oneway void)recordingTimerDidUpdate:(id)arg1;
-(oneway void)recordingLockInterrupted:(id)arg1;
-(oneway void)updateScreenRecordingState:(BOOL)arg1;
-(oneway void)stopRecordingWithError:(id)arg1 movieURL:(id)arg2;
-(oneway void)captureHandlerWithSample:(id)arg1 timingData:(id)arg2;
-(oneway void)captureHandlerWithAudioSample:(id)arg1 absdData:(id)arg2 itemCount:(long long)arg3 bufferType:(long long)arg4 timingData:(id)arg5;
-(oneway void)updateBroadcastURL:(id)arg1;
-(oneway void)updateBroadcastServiceInfo:(id)arg1;

@end

