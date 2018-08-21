/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:45 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VKCameraControllerDelegate <NSObject>
@required
-(void)cameraControllerDidChangeCameraState:(id)arg1;
-(void)cameraControllerRequestsLayout:(id)arg1;
-(void)cameraController:(id)arg1 willChangeRegionAnimated:(BOOL)arg2;
-(void)cameraController:(id)arg1 didChangeRegionAnimated:(BOOL)arg2;
-(void)cameraControllerDidFinishInitialTrackingAnimation:(id)arg1;
-(void)cameraController:(id)arg1 didBecomePitched:(BOOL)arg2;
-(void)cameraController:(id)arg1 canEnter3DModeDidChange:(BOOL)arg2;
-(id)cameraController:(id)arg1 presentationForAnnotation:(id)arg2;
-(void)cameraController:(id)arg1 canZoomInDidChange:(BOOL)arg2;
-(void)cameraController:(id)arg1 canZoomOutDidChange:(BOOL)arg2;
-(void)cameraControllerHasStartedPanning:(id)arg1;
-(void)cameraControllerHasStoppedPanning:(id)arg1;
-(void)cameraControllerDidLeaveDefaultZoom:(id)arg1;
-(void)cameraControllerDidReturnToDefaultZoom:(id)arg1;
-(void)cameraControllerRequestsUpdateDisplayLinkStatus:(id)arg1;
-(void)cameraController:(id)arg1 requestsDisplayRate:(long long)arg2;
-(void)cameraController:(id)arg1 flyoverModeDidChange:(int)arg2;
-(void)cameraController:(id)arg1 flyoverModeWillChange:(int)arg2;
-(void)runAnimation:(id)arg1;

@end
