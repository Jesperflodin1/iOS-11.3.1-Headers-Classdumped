/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:19 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TVRCVoiceRecorderDelegate <NSObject>
@optional
-(void)voiceRecorder:(id)arg1 isAboutToBeginRecording:(/*^block*/id)arg2;
-(void)voidRecorderDidStop:(id)arg1;
-(id)createBufferWithSettings:(id)arg1 packetCapacity:(unsigned long long)arg2 maxPacketSize:(unsigned long long)arg3;
-(void)voiceRecorder:(id)arg1 bufferAvailable:(id)arg2;

@end

