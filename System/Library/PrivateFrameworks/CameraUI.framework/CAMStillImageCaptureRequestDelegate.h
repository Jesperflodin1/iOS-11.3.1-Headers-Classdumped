/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:09 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CAMStillImageCaptureRequestDelegate <NSObject>
@optional
-(void)stillImageRequestWillStartCapturingVideo:(id)arg1;
-(void)stillImageRequestDidStartCapturing:(id)arg1 resolvedSettings:(id)arg2;
-(void)stillImageRequestDidStopCapturing:(id)arg1;
-(void)stillImageRequestDidCompleteStillImageCapture:(id)arg1 withResponse:(id)arg2 error:(id)arg3;
-(void)stillImageRequestDidCompleteVideoCapture:(id)arg1 withResponse:(id)arg2 error:(id)arg3;
-(void)stillImageRequestDidCompleteCapture:(id)arg1 error:(id)arg2;
-(void)stillImageRequestDidCompleteStillImageLocalPersistence:(id)arg1 withResponse:(id)arg2 error:(id)arg3;
-(void)stillImageRequestDidCompleteVideoLocalPersistence:(id)arg1 withResponse:(id)arg2 error:(id)arg3;
-(void)stillImageRequestDidCompleteStillImageRemotePersistence:(id)arg1 withResponse:(id)arg2 error:(id)arg3;
-(void)stillImageRequestDidCompleteVideoRemotePersistence:(id)arg1 withResponse:(id)arg2 error:(id)arg3;

@end

