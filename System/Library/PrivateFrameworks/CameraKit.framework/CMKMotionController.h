/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:08 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BKSAccelerometer, CMMotionManager;

@interface CMKMotionController : NSObject {

	long long _dominantPhysicalButton;
	long long _captureOrientation;
	long long _deviceOrientation;
	BKSAccelerometer* __accelerometer;
	long long __numberOfDominantPhysicalButtonObservers;
	CMMotionManager* __physicalButtonMotionManager;

}

@property (assign,setter=_setCaptureOrientation:,nonatomic) long long captureOrientation;                                                         //@synthesize captureOrientation=_captureOrientation - In the implementation block
@property (assign,setter=_setDeviceOrientation:,nonatomic) long long deviceOrientation;                                                           //@synthesize deviceOrientation=_deviceOrientation - In the implementation block
@property (setter=_setAccelerometer:,nonatomic,retain) BKSAccelerometer * _accelerometer;                                                         //@synthesize _accelerometer=__accelerometer - In the implementation block
@property (assign,setter=_setNumberOfDominantPhysicalButtonObservers:,nonatomic) long long _numberOfDominantPhysicalButtonObservers;              //@synthesize _numberOfDominantPhysicalButtonObservers=__numberOfDominantPhysicalButtonObservers - In the implementation block
@property (nonatomic,readonly) CMMotionManager * _physicalButtonMotionManager;                                                                    //@synthesize _physicalButtonMotionManager=__physicalButtonMotionManager - In the implementation block
@property (assign,setter=_setDominantPhysicalButton:,nonatomic) long long dominantPhysicalButton;                                                 //@synthesize dominantPhysicalButton=_dominantPhysicalButton - In the implementation block
+(id)sharedController;
-(id)init;
-(void)dealloc;
-(long long)deviceOrientation;
-(void)_setDeviceOrientation:(long long)arg1 ;
-(long long)captureOrientation;
-(CMMotionManager *)_physicalButtonMotionManager;
-(long long)_numberOfDominantPhysicalButtonObservers;
-(void)_setDominantPhysicalButton:(long long)arg1 ;
-(void)_setNumberOfDominantPhysicalButtonObservers:(long long)arg1 ;
-(void)_updatePhysicalButtonObservation;
-(void)beginGeneratingDominantPhysicalButtonNotifications;
-(void)endGeneratingDominantPhysicalButtonNotifications;
-(long long)dominantPhysicalButton;
-(BKSAccelerometer *)_accelerometer;
-(void)_setAccelerometer:(id)arg1 ;
-(void)_setCaptureOrientation:(long long)arg1 ;
@end

