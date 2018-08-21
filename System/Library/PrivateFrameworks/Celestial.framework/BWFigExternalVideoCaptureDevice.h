/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWFigVideoCaptureDevice.h>
#import <libobjc.A.dylib/FigCaptureExternalEAControlPipeDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSArray, FigCaptureExternalEAControlPipe, EAAccessory, NSNumber, NSString;

@interface BWFigExternalVideoCaptureDevice : BWFigVideoCaptureDevice <FigCaptureExternalEAControlPipeDelegate> {

	NSObject*<OS_dispatch_queue> _bufferServicingQueue;
	NSObject*<OS_dispatch_queue> _stillImageServicingQueue;
	BOOL _streaming;
	long long _activeFormatIndex;
	BOOL _stillImageCaptureEnabled;
	NSMutableDictionary* _observedProperties;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	NSObject*<OS_dispatch_queue> _propQueue;
	NSArray* _stillImageFormats;
	FigCaptureExternalEAControlPipe* _controlPipe;
	id _eaSession;
	EAAccessory* _eaAccessory;
	unsigned _connectionID;
	NSNumber* _cameraID;
	unsigned char _controlPipeMode;
	NSMutableDictionary* _currentExposureModes;
	NSMutableDictionary* _currentFocusModes;
	IAPCameraProperties* _properties;
	IAPCameraProperties* _iapOverEAProperties;
	IAPCameraCapabilities* _iapOverEACapabilities;
	/*^block*/id _stillImageClientCallback;
	/*^block*/id _streamingClientCallback;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)unregisterCallbacksForClient:(int)arg1 ;
+(void)initialize;
-(float)maximumFrameRate;
-(void)setMaximumFrameRate:(float)arg1 ;
-(int)captureStillImageNowWithSettings:(id)arg1 ;
-(void)_cameraInfoUpdated:(id)arg1 ;
-(void)_sendStopLivePreview;
-(void)_sendStartLivePreview;
-(void)_sendCameraProperties:(id)arg1 ;
-(void)_sendCaptureStillImage;
-(void)_parseCameraInformation:(IAPPacket*)arg1 ;
-(void)_updateCameraPropertiesAndNotify:(id)arg1 ;
-(void)_updateCameraCapabililtiesAndNotify:(id)arg1 ;
-(void)_postNotificationWithPayload:(id)arg1 notificationPayload:(id)arg2 ;
-(BOOL)isPropertyObserved:(id)arg1 ;
-(void)_constructJPEGAndSendToHandler:(id)arg1 ;
-(void)_constructJPEGForStillImageAndSendToHandler:(id)arg1 ;
-(void)_sendStartCameraInfo;
-(void)_sendStopCameraInfo;
-(void)_sendIAPOverEAWithMessage:(unsigned short)arg1 ;
-(void)streamsReady;
-(void)handleIncomingIAPOverEAPacket:(IAPPacket*)arg1 ;
-(void)handleIncomingVideoBufferPacket:(id)arg1 msgID:(unsigned short)arg2 ;
-(id)initWithAttributes:(id)arg1 synchronizedStreamsAttributes:(id)arg2 forPID:(int)arg3 clientIDOut:(int*)arg4 errOut:(int*)arg5 deviceAvailabilityChangedHandler:(/*^block*/id)arg6 ;
-(id)supportedFormats;
-(float)minimumFrameRate;
-(void)setMinimumFrameRate:(float)arg1 ;
-(id)cameraTuningParametersDictionary;
-(id)moduleInfoByPortType;
-(id)sensorIDDictionaryByPortType;
-(id)cameraInfoByPortTypeForSBPs;
-(id)activePortTypes;
-(void)registerForAEMatrixMetadata;
-(void)unregisterForAEMatrixMetadata;
-(void)startupFaceDetectionIfNeeded;
-(void)drainNotifications;
-(id)bufferServicingQueue;
-(void)disposeFigCaptureDevice;
-(BOOL)startStreamingToSampleBufferHandler:(/*^block*/id)arg1 error:(id*)arg2 ;
-(BOOL)stopStreamingToSampleBufferHandler:(/*^block*/id)arg1 error:(id*)arg2 ;
-(long long)activeFormatIndex;
-(void)setActiveFormatIndex:(long long)arg1 ;
-(BOOL)registerStillImageBufferHandler:(/*^block*/id)arg1 error:(id*)arg2 ;
-(BOOL)unregisterStillImageBufferHandler:(/*^block*/id)arg1 error:(id*)arg2 ;
-(BOOL)stillImageCaptureEnabled;
-(void)setStillImageCaptureEnabled:(BOOL)arg1 ;
-(id)stillImageCaptureSettingsWithID:(long long)arg1 captureType:(int)arg2 deliverProcessedImage:(BOOL)arg3 deliverOriginalImage:(BOOL)arg4 deliverSushiRaw:(BOOL)arg5 deliverBravoDualPhoto:(BOOL)arg6 includePreBracketedEV0ForProcessing:(BOOL)arg7 clientBracketSettings:(id)arg8 captureFlags:(unsigned long long)arg9 userInitiatedRequestPTS:(SCD_Struct_BW2)arg10 ;
-(BOOL)providesPreBracketedEV0;
-(int)setFocusModeAutoWithRect:(CGRect)arg1 continuous:(BOOL)arg2 smooth:(BOOL)arg3 rangeRestrictionNear:(float)arg4 rangeRestrictionFar:(float)arg5 ;
-(int)setFocusModeManualWithLensPosition:(float)arg1 requestID:(int)arg2 ;
-(int)setExposureModeAutoWithRect:(CGRect)arg1 ;
-(int)_updateExposureRectIfNeededForZoomFactor:(float)arg1 ;
-(int)setExposureModeLocked;
-(int)setExposureTargetBias:(float)arg1 requestID:(int)arg2 ;
-(int)setExposureModeCustomWithExposureDuration:(SCD_Struct_BW2)arg1 minFrameRate:(double)arg2 maxFrameRate:(double)arg3 ISO:(float)arg4 requestID:(int)arg5 ;
-(int)_attachMetadataFlatDictionaryToSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(int)autoImageControlMode;
-(int)setAutoImageControlMode:(int)arg1 ;
-(int)setWhiteBalanceModeAuto;
-(int)setWhiteBalanceModeLockedWithGains:(SCD_Struct_BW26)arg1 requestID:(int)arg2 ;
-(int)setFaceDetectionDrivenImageProcessingMode:(int)arg1 ;
-(int)setTorchLevel:(float)arg1 ;
-(int)setAutomaticallyAdjustsTorch:(BOOL)arg1 ;
-(void)setMaxTorchLevel:(float)arg1 ;
-(BOOL)setAutoFlashEnabled:(BOOL)arg1 error:(id*)arg2 ;
-(id)zoomCommandHandler;
-(void)rampToVideoZoomFactor:(float)arg1 withRampType:(int)arg2 rate:(float)arg3 duration:(double)arg4 commandID:(int)arg5 ;
-(void)setISPZoomFactor:(float)arg1 ;
-(void)setOverscanPercentage:(CGSize)arg1 ;
-(void)zoomCommandHandler:(id)arg1 didApplyZoomFactor:(float)arg2 rampComplete:(BOOL)arg3 rampCommandID:(int)arg4 ;
-(void)setProperty:(id)arg1 isObserved:(BOOL)arg2 ;
-(BOOL)setHDRSceneDetectionEnabled:(BOOL)arg1 error:(id*)arg2 ;
-(int)setLowLightBoostAutomaticallyEnabled:(BOOL)arg1 supportedForFormat:(BOOL)arg2 ;
-(void)setStillImageStabilizationAutomaticallyEnabled:(BOOL)arg1 ;
-(int)resolveStillImageCaptureTypeFromStatistics:(SCD_Struct_BW27*)arg1 flashMode:(int)arg2 hdrMode:(int)arg3 sisMode:(int)arg4 depthDataDeliveryEnabled:(BOOL)arg5 bravoDualPhotoDeliveryEnabled:(BOOL)arg6 burstQualityCaptureEnabled:(BOOL)arg7 clientBracketMode:(int)arg8 forSceneMonitoring:(BOOL)arg9 captureFlags:(unsigned long long*)arg10 ;
-(void)startCameraInfo;
-(void)stopCameraInfo;
-(void)_sendCameraProperty:(id)arg1 _value:(id)arg2 ;
-(OpaqueCMClockRef)clock;
-(int)setProvidesStortorgetMetadata:(BOOL)arg1 ;
-(SCD_Struct_BW2)exposureDuration;
-(float)ISO;
-(float)exposureTargetOffset;
-(SCD_Struct_BW26)deviceWhiteBalanceGains;
-(SCD_Struct_BW26)grayWorldDeviceWhiteBalanceGains;
-(void)setFaceDetectionConfiguration:(id)arg1 ;
-(void)dealloc;
-(float)exposureTargetBias;
-(int)setAutomaticallyAdjustsImageControlMode:(BOOL)arg1 ;
-(int)setImageControlMode:(int)arg1 ;
-(float)lensPosition;
-(int)setSubjectAreaChangeMonitoringEnabled:(BOOL)arg1 ;
-(void)setZoomFactor:(float)arg1 ;
-(float)zoomFactor;
@end

