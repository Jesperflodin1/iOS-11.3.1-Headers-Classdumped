/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:31:29 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /Library/Audio/Plug-Ins/RemoteInput/RemoteAudioInputPlugin.bundle/RemoteAudioInputPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MRAPRecording <NSObject>
@required
-(void)recordingEndpoint:(id)arg1 inputDeviceWithID:(unsigned)arg2 receivedAudioBuffer:(void*)arg3 withTime:(SCD_Struct_MR0)arg4 gain:(float)arg5;
-(void)recordingEndpoint:(id)arg1 inputDeviceDisconnectedWithID:(unsigned)arg2;
-(void)recordingEndpoint:(id)arg1 inputDeviceConnectedWithID:(unsigned)arg2;

@end

