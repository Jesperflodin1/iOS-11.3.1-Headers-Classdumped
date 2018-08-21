/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:19:41 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CompanionCamera.framework/CompanionCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CCCameraConnectionProtocol.h>

@class CCCameraConnection;

@interface CCCameraConnectionInternal : NSObject <CCCameraConnectionProtocol> {

	CCCameraConnection* _parent;

}

@property (assign,nonatomic,__weak) CCCameraConnection * parent;              //@synthesize parent=_parent - In the implementation block
-(CCCameraConnection *)parent;
-(void)setParent:(CCCameraConnection *)arg1 ;
-(oneway void)xpc_ensureSwitchedToOneOfSupportedCaptureModes:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)takePhotoWithCountdown:(unsigned long long)arg1 ;
-(oneway void)xpc_beginBurstCaptureWithReply:(/*^block*/id)arg1 ;
-(oneway void)xpc_endBurstCaptureWithReply:(/*^block*/id)arg1 ;
-(oneway void)xpc_setCaptureMode:(int)arg1 reply:(/*^block*/id)arg2 ;
-(oneway void)xpc_startCaptureWithMode:(int)arg1 reply:(/*^block*/id)arg2 ;
-(oneway void)xpc_stopCaptureWithReply:(/*^block*/id)arg1 ;
-(oneway void)xpc_setPreviewEndpoint:(id)arg1 ;
-(oneway void)xpc_setFocusPoint:(id)arg1 ;
-(oneway void)xpc_fetchCurrentStateIncludingSupportedCaptureModes:(BOOL)arg1 reply:(/*^block*/id)arg2 ;
-(oneway void)xpc_cancelCountdown;
-(oneway void)xpc_setZoom:(float)arg1 reply:(/*^block*/id)arg2 ;
-(oneway void)xpc_setFlashMode:(int)arg1 ;
-(oneway void)xpc_setHDRMode:(int)arg1 ;
-(oneway void)xpc_setIrisMode:(int)arg1 ;
-(oneway void)xpc_toggleCameraDevice;
@end
