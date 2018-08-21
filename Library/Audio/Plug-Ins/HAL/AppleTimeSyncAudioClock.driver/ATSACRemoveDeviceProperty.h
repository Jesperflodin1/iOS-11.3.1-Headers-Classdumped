/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:31:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /Library/Audio/Plug-Ins/HAL/AppleTimeSyncAudioClock.driver/AppleTimeSyncAudioClock
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioServerDriver/ASDCustomProperty.h>

@class ATSACCAPlugin;

@interface ATSACRemoveDeviceProperty : ASDCustomProperty {

	ATSACCAPlugin* _plugin;

}

@property (assign,nonatomic,__weak) ATSACCAPlugin * plugin;              //@synthesize plugin=_plugin - In the implementation block
-(ATSACCAPlugin *)plugin;
-(void)setPlugin:(ATSACCAPlugin *)arg1 ;
-(id)initWithPlugin:(id)arg1 ;
-(BOOL)getPropertyWithQualifierSize:(unsigned)arg1 qualifierData:(const void*)arg2 dataSize:(unsigned*)arg3 andData:(void*)arg4 forClient:(int)arg5 ;
@end

