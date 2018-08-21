/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:33 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HMCameraControl.h>

@class _HMCameraAudioControl, HMCharacteristic;

@interface HMCameraAudioControl : HMCameraControl {

	_HMCameraAudioControl* _audioControl;

}

@property (nonatomic,retain) _HMCameraAudioControl * audioControl;              //@synthesize audioControl=_audioControl - In the implementation block
@property (nonatomic,readonly) HMCharacteristic * mute; 
@property (nonatomic,readonly) HMCharacteristic * volume; 
-(HMCharacteristic *)volume;
-(HMCharacteristic *)mute;
-(_HMCameraAudioControl *)audioControl;
-(void)setAudioControl:(_HMCameraAudioControl *)arg1 ;
-(id)initWithAudioControl:(id)arg1 ;
@end

