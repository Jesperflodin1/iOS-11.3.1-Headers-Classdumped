/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:41 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKit/ARKit-Structs.h>
#import <libobjc.A.dylib/AVCaptureVideoDataOutputSampleBufferDelegate.h>
#import <ARKit/ARSensor.h>

@protocol AVCaptureVideoDataOutputSampleBufferDelegate, OS_dispatch_queue, ARSensorDelegate;
@class NSObject, ARImageSensorSettings, AVCaptureDevice, AVCaptureSession, AVCaptureVideoDataOutput, AVCaptureAudioDataOutput, NSString;

@interface ARImageSensor : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate, ARSensor> {

	BOOL _previouslyRunning;
	id<AVCaptureVideoDataOutputSampleBufferDelegate> _previousOutputDelegate;
	NSObject*<OS_dispatch_queue> _previousOutputCallbackQueue;
	NSObject*<OS_dispatch_queue> _captureQueue;
	BOOL _running;
	BOOL _interrupted;
	float _defaultLensPosition;
	id<ARSensorDelegate> _delegate;
	ARImageSensorSettings* _settings;
	AVCaptureDevice* _captureDevice;
	AVCaptureSession* _captureSession;
	AVCaptureVideoDataOutput* _videoOutput;
	unsigned long long _powerUsage;
	long long _captureFramesPerSecond;
	long long _renderFramesPerSecond;

}

@property (readonly) long long captureFramesPerSecond; 
@property (readonly) long long renderFramesPerSecond; 
@property (nonatomic,retain) AVCaptureAudioDataOutput * audioOutput; 
@property (assign) float defaultLensPosition;                                       //@synthesize defaultLensPosition=_defaultLensPosition - In the implementation block
@property (assign) long long captureFramesPerSecond;                                //@synthesize captureFramesPerSecond=_captureFramesPerSecond - In the implementation block
@property (assign) long long renderFramesPerSecond;                                 //@synthesize renderFramesPerSecond=_renderFramesPerSecond - In the implementation block
@property (assign) BOOL running;                                                    //@synthesize running=_running - In the implementation block
@property (assign) BOOL interrupted;                                                //@synthesize interrupted=_interrupted - In the implementation block
@property (assign,nonatomic,__weak) id<ARSensorDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) ARImageSensorSettings * settings;                    //@synthesize settings=_settings - In the implementation block
@property (nonatomic,readonly) AVCaptureDevice * captureDevice;                     //@synthesize captureDevice=_captureDevice - In the implementation block
@property (nonatomic,readonly) AVCaptureSession * captureSession;                   //@synthesize captureSession=_captureSession - In the implementation block
@property (nonatomic,readonly) AVCaptureVideoDataOutput * videoOutput;              //@synthesize videoOutput=_videoOutput - In the implementation block
@property (assign,nonatomic) unsigned long long powerUsage;                         //@synthesize powerUsage=_powerUsage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)closestFrameRateIn:(id)arg1 target:(double)arg2 preferHigher:(BOOL)arg3 ;
+(float)defaultLensPosition;
-(id)init;
-(id<ARSensorDelegate>)delegate;
-(void)setDelegate:(id<ARSensorDelegate>)arg1 ;
-(void)dealloc;
-(ARImageSensorSettings *)settings;
-(void)stop;
-(void)start;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithSettings:(id)arg1 ;
-(BOOL)running;
-(void)setRunning:(BOOL)arg1 ;
-(AVCaptureVideoDataOutput *)videoOutput;
-(BOOL)interrupted;
-(void)setInterrupted:(BOOL)arg1 ;
-(long long)captureFramesPerSecond;
-(long long)renderFramesPerSecond;
-(void)setCaptureFramesPerSecond:(long long)arg1 ;
-(void)setRenderFramesPerSecond:(long long)arg1 ;
-(id)configureCaptureSession;
-(id)configureCaptureDevice;
-(unsigned long long)powerUsage;
-(unsigned long long)providedDataTypes;
-(void)setPowerUsage:(unsigned long long)arg1 ;
-(long long)preferredRenderFrameRateForPowerUsage:(unsigned long long)arg1 devicePosition:(long long)arg2 ;
-(double)preferredCaptureFrameRateForPowerUsage:(unsigned long long)arg1 devicePosition:(long long)arg2 ;
-(void)_adjustForPowerUsage;
-(AVCaptureAudioDataOutput *)audioOutput;
-(id)_createAudioInput:(id*)arg1 ;
-(void)setAudioOutput:(AVCaptureAudioDataOutput *)arg1 ;
-(float)defaultLensPosition;
-(BOOL)canReconfigure:(id)arg1 ;
-(void)setDefaultLensPosition:(float)arg1 ;
-(void)_configureCameraFocusForDevice:(id)arg1 ;
-(BOOL)_validateCameraAuthorization;
-(void)captureSessionStateChanged:(id)arg1 ;
-(void)_configureCameraExposureForDevice:(id)arg1 ;
-(void)_configureCameraWhiteBalanceForDevice:(id)arg1 ;
-(void)enableAutoFocusForDevice:(id)arg1 ;
-(void)reconfigure:(id)arg1 ;
-(AVCaptureDevice *)captureDevice;
-(void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBufferRef)arg2 fromConnection:(id)arg3 ;
-(AVCaptureSession *)captureSession;
@end

