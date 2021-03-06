/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:45 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFAudio/AVAudioNode.h>
#import <AVFAudio/AVAudioMixing.h>

@class NSString;

@interface AVAudioMixerNode : AVAudioNode <AVAudioMixing>

@property (assign,nonatomic) float outputVolume; 
@property (nonatomic,readonly) unsigned long long nextAvailableInputBus; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) float volume; 
-(void)didAttachToEngine:(id)arg1 ;
-(void)setInputVolume:(float)arg1 bus:(unsigned long long)arg2 ;
-(void)setInputPan:(float)arg1 bus:(unsigned long long)arg2 ;
-(void)inputConnected:(unsigned long long)arg1 ;
-(id)init;
-(void)setOutputVolume:(float)arg1 ;
-(unsigned long long)nextAvailableInputBus;
-(float)outputVolume;
@end

