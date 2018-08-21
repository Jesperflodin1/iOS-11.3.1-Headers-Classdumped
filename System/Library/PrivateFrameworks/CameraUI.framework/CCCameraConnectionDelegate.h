/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CCCameraConnectionDelegate <NSObject>
@optional
-(BOOL)cameraConnectionBeginBurstCapture:(id)arg1;
-(BOOL)cameraConnectionEndBurstCapture:(id)arg1;
-(id)cameraConnectionSupportedCaptureModes:(id)arg1;
-(long long)cameraConnectionCaptureMode:(id)arg1;
-(BOOL)cameraConnection:(id)arg1 setCaptureMode:(long long)arg2;
-(BOOL)cameraConnectionStartCapture:(id)arg1;
-(BOOL)cameraConnectionStopCapture:(id)arg1;
-(void)cameraConnection:(id)arg1 setFocusPoint:(CGPoint)arg2;
-(long long)cameraConnectionOrientation:(id)arg1;
-(void)cameraConnectionCancelCountdown:(id)arg1;
-(BOOL)cameraConnectionZoomSupport:(id)arg1;
-(void)cameraConnection:(id)arg1 setZoomAmount:(double)arg2;
-(double)cameraConnectionZoomAmount:(id)arg1;
-(long long)cameraConnectionFlashSupport:(id)arg1;
-(long long)cameraConnectionFlashMode:(id)arg1;
-(void)cameraConnection:(id)arg1 setFlashMode:(long long)arg2;
-(long long)cameraConnectionHDRSupport:(id)arg1;
-(long long)cameraConnectionHDRMode:(id)arg1;
-(void)cameraConnection:(id)arg1 setHDRMode:(long long)arg2;
-(long long)cameraConnectionIrisSupport:(id)arg1;
-(long long)cameraConnectionIrisMode:(id)arg1;
-(void)cameraConnection:(id)arg1 setIrisMode:(long long)arg2;
-(BOOL)cameraConnectionBurstSupport:(id)arg1;
-(BOOL)cameraConnectionToggleCameraDeviceSupport:(id)arg1;
-(void)cameraConnectionToggleCameraDevice:(id)arg1;
-(BOOL)cameraConnectionIsShowingLivePreview:(id)arg1;

@required
-(void)cameraConnection:(id)arg1 takePhotoWithCountdown:(unsigned long long)arg2;

@end

