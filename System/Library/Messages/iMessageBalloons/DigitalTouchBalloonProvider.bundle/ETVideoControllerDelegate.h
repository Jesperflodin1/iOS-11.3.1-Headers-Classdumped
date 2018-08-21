/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Messages/iMessageBalloons/DigitalTouchBalloonProvider.bundle/DigitalTouchBalloonProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ETVideoControllerDelegate <NSObject>
@required
-(void)videoControllerDidInterruptPreview:(id)arg1 withInterruptionReason:(long long)arg2;
-(void)videoControllerDidStartPreview:(id)arg1;
-(void)videoControllerDidStartRecording:(id)arg1;
-(void)videoControllerWillCancelRecording:(id)arg1;
-(void)videoControllerDidEndRecording:(id)arg1 mediaURL:(id)arg2 withError:(id)arg3;
-(void)videoControllerWillBeginPhotoCapture:(id)arg1;
-(void)videoControllerDidEndPhotoCapture:(id)arg1 photoImage:(id)arg2;
-(void)videoControllerDidStopPreview:(id)arg1;

@end
