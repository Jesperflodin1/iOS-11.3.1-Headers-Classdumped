/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:16 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CSSpeechManagerDelegate <NSObject>
@optional
-(id)speechManagerRecordingContext;
-(void)speechManagerRecordHardwareConfigurationDidChange:(id)arg1 toConfiguration:(long long)arg2;
-(void)speechManagerDetectedSystemVolumeChange:(id)arg1 withVolume:(float)arg2 forReason:(unsigned long long)arg3;
-(void)speechManagerBeginRecordInterruption:(id)arg1;
-(void)speechManagerBeginRecordInterruption:(id)arg1 withContext:(id)arg2;
-(void)speechManagerEndRecordInterruption:(id)arg1;
-(void)speechManager:(id)arg1 willSetAudioSessionActive:(BOOL)arg2;
-(void)speechManager:(id)arg1 didSetAudioSessionActive:(BOOL)arg2;

@required
-(void)speechManagerRecordBufferAvailable:(id)arg1 buffer:(id)arg2;
-(void)speechManagerLPCMRecordBufferAvailable:(id)arg1 chunk:(id)arg2;
-(void)speechManagerDidStartForwarding:(id)arg1 successfully:(BOOL)arg2 error:(id)arg3;
-(void)speechManagerDidStopForwarding:(id)arg1 forReason:(long long)arg2;

@end
