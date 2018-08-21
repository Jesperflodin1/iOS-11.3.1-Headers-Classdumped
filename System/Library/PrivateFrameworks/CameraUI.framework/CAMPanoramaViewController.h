/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/CAMPanoramaViewDelegate.h>
#import <libobjc.A.dylib/CAMPanoramaChangeDelegate.h>

@class CUCaptureController, CMMotionManager, UITapGestureRecognizer, CAMPanoramaView, NSString;

@interface CAMPanoramaViewController : UIViewController <CAMPanoramaViewDelegate, CAMPanoramaChangeDelegate> {

	BOOL _painting;
	long long _layoutStyle;
	CUCaptureController* __captureController;
	CMMotionManager* __motionManager;
	long long __captureOrientation;
	UITapGestureRecognizer* __directionChangeGestureRecognizer;

}

@property (nonatomic,readonly) CUCaptureController * _captureController;                                //@synthesize _captureController=__captureController - In the implementation block
@property (setter=_setMotionManager:,nonatomic,retain) CMMotionManager * _motionManager;                //@synthesize _motionManager=__motionManager - In the implementation block
@property (assign,setter=_setPainting:,getter=isPainting,nonatomic) BOOL painting;                      //@synthesize painting=_painting - In the implementation block
@property (assign,setter=_setCaptureOrientation:,nonatomic) long long _captureOrientation;              //@synthesize _captureOrientation=__captureOrientation - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * _directionChangeGestureRecognizer;              //@synthesize _directionChangeGestureRecognizer=__directionChangeGestureRecognizer - In the implementation block
@property (nonatomic,readonly) CAMPanoramaView * panoramaView; 
@property (assign,nonatomic) long long layoutStyle;                                                     //@synthesize layoutStyle=_layoutStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)layoutStyle;
-(void)setLayoutStyle:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)loadView;
-(CMMotionManager *)_motionManager;
-(void)didChangeToMode:(long long)arg1 device:(long long)arg2 ;
-(long long)_captureOrientation;
-(void)updateToContentSize:(id)arg1 ;
-(CUCaptureController *)_captureController;
-(void)updateWithStatus:(id)arg1 ;
-(void)startProcessingPanorama;
-(void)finishedProcessingPanorama;
-(id)initWithCaptureController:(id)arg1 layoutStyle:(long long)arg2 ;
-(void)startPainting;
-(void)stopPainting;
-(void)didChangeToCaptureOrientation:(long long)arg1 ;
-(void)_handleDirectionChange:(id)arg1 ;
-(CAMPanoramaView *)panoramaView;
-(UITapGestureRecognizer *)_directionChangeGestureRecognizer;
-(void)_createMotionManagerIfNecessary;
-(void)_updateWithAccelerometerData:(id)arg1 captureOrientation:(long long)arg2 ;
-(void)_setMotionManager:(id)arg1 ;
-(void)_setCaptureOrientation:(long long)arg1 ;
-(void)_setPainting:(BOOL)arg1 ;
-(void)panoramaViewDidRequestSynchronizedDirectionChange:(id)arg1 toDirection:(long long)arg2 ;
-(void)panoramaConfigurationDidChangeWithDirection:(long long)arg1 ;
-(BOOL)isPainting;
@end
