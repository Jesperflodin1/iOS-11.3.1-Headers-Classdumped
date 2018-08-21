/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVAudioDeviceList;

@interface AVAudioClient : NSObject {

	AVAudioDeviceList* deviceList;

}

@property (nonatomic,retain) AVAudioDeviceList * deviceList; 
@property (assign,nonatomic) id changeListener; 
+(void)stopAudioSession;
+(id)currentInputDevice;
+(id)currentOutputDevice;
+(void)startAudioSession;
+(void)startAudioSessionWithCompletionHandler:(/*^block*/id)arg1 ;
+(BOOL)hasActiveAudioSession;
+(BOOL)setInputDevice:(id)arg1 ;
+(id)defaultInputDevice;
+(id)defaultOutputDevice;
+(void)initializeAudioSessionQ;
+(void)resetAudioSessionOutputPortOverride;
+(void)setAudioSessionProperties:(id)arg1 ;
+(void)setMicrophoneMuted:(BOOL)arg1 ;
+(BOOL)isMicrophoneMuted;
+(BOOL)setOutputDevice:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)outputDevices;
-(AVAudioDeviceList *)deviceList;
-(void)setChangeListener:(id)arg1 ;
-(id)changeListener;
-(id)inputDevices;
-(void)setDeviceList:(AVAudioDeviceList *)arg1 ;
-(id)devices;
@end

