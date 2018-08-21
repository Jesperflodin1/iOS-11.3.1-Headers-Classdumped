/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VTUIAudioSession
@required
-(void)setDelegate:(id)arg1;
-(float)averagePower;
-(BOOL)hasAudioRoute;
-(BOOL)isRecording;
-(void)stopRecording;
-(void)setEndpointerDelegate:(id)arg1;
-(BOOL)startRecording;
-(void)updateMeters;
-(void)releaseAudioSession;
-(BOOL)prepareRecord;
-(void)resetEndPointer;
-(BOOL)hasCorrectAudioRoute;
-(int)audioSource;

@end
