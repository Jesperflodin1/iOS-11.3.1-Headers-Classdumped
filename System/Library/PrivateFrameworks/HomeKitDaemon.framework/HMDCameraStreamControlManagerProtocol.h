/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:52 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class HMDCameraStreamMetrics;


@protocol HMDCameraStreamControlManagerProtocol <NSObject>
@property (nonatomic,readonly) HMDCameraStreamMetrics * streamMetrics; 
@required
-(void)startStream:(id)arg1;
-(void)updateAudioSetting:(unsigned long long)arg1;
-(void)negotiateStream;
-(void)reconfigureStream:(id)arg1;
-(void)stopStream:(id)arg1;
-(void)remoteSetup:(id)arg1;
-(HMDCameraStreamMetrics *)streamMetrics;

@end

