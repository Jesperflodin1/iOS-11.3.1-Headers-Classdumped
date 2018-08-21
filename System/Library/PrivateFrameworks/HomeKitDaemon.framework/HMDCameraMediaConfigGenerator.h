/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:52 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@interface HMDCameraMediaConfigGenerator : HMFObject
-(BOOL)extractSelectedConfigFromProtocolParameters:(id)arg1 videoStreamConfig:(id*)arg2 audioStreamConfig:(id*)arg3 ;
-(BOOL)extractReselectedConfigFromVideoTier:(id)arg1 videoStreamConfig:(id*)arg2 ;
-(BOOL)_loadAVCVideoStreamConfig:(id)arg1 protocolParameters:(id)arg2 ;
-(BOOL)_loadAVCAudioStreamConfig:(id)arg1 protocolParameters:(id)arg2 ;
-(BOOL)_loadConfig:(id)arg1 cipherCuite:(id)arg2 ;
-(void)_loadConfig:(id)arg1 sendSrtpParameters:(id)arg2 receiveSrtpParameters:(id)arg3 ;
-(void)_loadMiscConfig:(id)arg1 ;
@end

