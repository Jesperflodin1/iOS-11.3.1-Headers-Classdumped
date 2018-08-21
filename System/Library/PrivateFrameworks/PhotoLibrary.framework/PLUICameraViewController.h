/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <CameraKit/CMKCameraViewController.h>
#import <UIKit/UIImagePickerCameraViewController.h>

@class NSString;

@interface PLUICameraViewController : CMKCameraViewController <UIImagePickerCameraViewController> {

	long long _previousStatusBarStyle;
	long long _newStatusBarStyle;
	CGAffineTransform _previewViewTransform;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(long long)preferredStatusBarStyle;
-(long long)preferredStatusBarUpdateAnimation;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(long long)_preferredWhitePointAdaptivityStyle;
-(BOOL)prefersStatusBarHidden;
-(BOOL)_showsCameraControls;
-(void)_setShowsCameraControls:(BOOL)arg1 ;
-(id)_cameraOverlayView;
-(void)_setCameraOverlayView:(id)arg1 ;
-(CGAffineTransform)_cameraViewTransform;
-(void)_setCameraViewTransform:(CGAffineTransform)arg1 ;
-(void)_takePicture;
-(BOOL)_startVideoCapture;
-(void)_stopVideoCapture;
-(long long)_cameraDevice;
-(void)_setCameraDevice:(long long)arg1 ;
-(long long)_cameraCaptureMode;
-(void)_setCameraCaptureMode:(long long)arg1 ;
-(long long)_cameraFlashMode;
-(void)_setCameraFlashMode:(long long)arg1 ;
-(long long)_imagePickerStatusBarStyle;
-(void)_setImagePickerMediaTypes:(id)arg1 ;
-(id)initWithInitialImagePickerProperties:(id)arg1 ;
-(BOOL)_displaysFullScreen;
-(void)setAllowsEditing:(BOOL)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(BOOL)cameraViewShouldShowPreviewAfterSelection:(id)arg1 ;
-(void)_editabilityChanged:(id)arg1 ;
-(id)_cameraView;
-(void)setWantsImageData:(BOOL)arg1 ;
-(void)_setCameraCaptureMode:(long long)arg1 device:(long long)arg2 ;
-(void)_setAllowsStillFromVideoMode:(BOOL)arg1 ;
-(void)_windowOrientationWillChange:(id)arg1 ;
-(void)_adjustContentSizeForOrientation:(long long)arg1 ;
-(void)_updateCameraViewForPopover;
-(void)cameraViewCancelled:(id)arg1 ;
-(void)cameraViewWillRetakePhoto:(id)arg1 ;
-(void)cameraViewWillPreviewPhoto:(id)arg1 ;
-(void)cameraView:(id)arg1 photoSaved:(id)arg2 ;
-(void)cameraView:(id)arg1 videoSavedToPath:(id)arg2 editingInfo:(id)arg3 ;
@end

