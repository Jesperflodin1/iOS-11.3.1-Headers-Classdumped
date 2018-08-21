/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <libobjc.A.dylib/TUVideoDeviceControllerProviderDelegate.h>

@protocol OS_dispatch_queue, TUVideoDeviceControllerProvider;
@class NSObject, AVCaptureDevice, NSArray, CALayer;

@interface TUVideoDeviceController : NSObject <TUVideoDeviceControllerProviderDelegate> {

	BOOL _wantsPreview;
	NSObject*<OS_dispatch_queue> _serialQueue;
	id<TUVideoDeviceControllerProvider> _provider;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> serialQueue;                  //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,readonly) id<TUVideoDeviceControllerProvider> provider;              //@synthesize provider=_provider - In the implementation block
@property (assign,nonatomic) BOOL wantsPreview;                                           //@synthesize wantsPreview=_wantsPreview - In the implementation block
@property (nonatomic,retain) AVCaptureDevice * currentInputDevice; 
@property (assign,nonatomic) int currentVideoOrientation; 
@property (nonatomic,copy,readonly) NSArray * inputDevices; 
@property (getter=isPreviewRunning,nonatomic,readonly) BOOL previewRunning; 
@property (nonatomic,retain) CALayer * localFrontLayer; 
@property (nonatomic,retain) CALayer * localBackLayer; 
+(int)_tuOrientationForVideoOrientation:(int)arg1 ;
+(int)_videoOrientationForTUOrientation:(int)arg1 ;
-(id)init;
-(id)debugDescription;
-(id)initWithSerialQueue:(id)arg1 ;
-(id<TUVideoDeviceControllerProvider>)provider;
-(id)initWithProvider:(id)arg1 serialQueue:(id)arg2 ;
-(void)setWantsPreview:(BOOL)arg1 ;
-(BOOL)wantsPreview;
-(void)didStartPreviewForProvider:(id)arg1 ;
-(void)didStopPreviewForProvider:(id)arg1 ;
-(void)captureDevicesChangedForProvider:(id)arg1 ;
-(void)provider:(id)arg1 cameraDidBecomeAvailableForUniqueID:(id)arg2 ;
-(void)provider:(id)arg1 didChangeLocalVideoAttributes:(id)arg2 ;
-(void)provider:(id)arg1 didReceiveErrorFromCameraUniqueID:(id)arg2 error:(id)arg3 ;
-(void)provider:(id)arg1 didReceiveFirstPreviewFrameFromCameraUniqueID:(id)arg2 ;
-(int)currentVideoOrientation;
-(void)setCurrentVideoOrientation:(int)arg1 ;
-(CALayer *)localFrontLayer;
-(void)setLocalFrontLayer:(CALayer *)arg1 ;
-(CALayer *)localBackLayer;
-(void)setLocalBackLayer:(CALayer *)arg1 ;
-(void)noteBeginAnimationToPreview;
-(void)noteEndAnimationToPreview;
-(void)noteBeginAnimationToPIP;
-(void)noteEndAnimationToPIP;
-(void)setLocalPortraitAspectRatio:(CGSize)arg1 localLandscapeAspectRatio:(CGSize)arg2 ;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(void)setCurrentInputDevice:(AVCaptureDevice *)arg1 ;
-(AVCaptureDevice *)currentInputDevice;
-(void)startPreview;
-(BOOL)isPreviewRunning;
-(NSArray *)inputDevices;
-(void)pausePreview;
-(void)stopPreview;
@end
