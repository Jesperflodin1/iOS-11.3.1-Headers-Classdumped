/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <libobjc.A.dylib/CAMCaptureService.h>
#import <libobjc.A.dylib/CAMCaptureRequestIntervalometerDelegate.h>

@protocol CAMStillImageCapturingVideoDelegate, CAMPanoramaChangeDelegate, CAMBurstDelegate, CAMConfigurationDelegate, CAMSuggestionDelegate, CAMAvailabilityDelegate, CAMFocusDelegate, CAMExposureDelegate, CAMShallowDepthOfFieldStatusDelegate, CAMFacesDelegate, CAMMachineReadableCodeDelegate, CAMCaptureResultDelegate, CAMZoomDelegate, CAMCaptureRecoveryDelegate, CAMCaptureRunningDelegate, CAMCaptureInterruptionDelegate, OS_dispatch_queue;
@class CAMPanoramaPreviewView, CAMCaptureEngine, NSObject, CAMThumbnailGenerator, CAMVideoCaptureRequest, CAMPanoramaCaptureRequest, CAMCaptureRequestIntervalometer, CAMKeyValueCoalescer, NSCountedSet, NSMutableSet, CAMLocationController, CAMMotionController, CAMBurstController, CAMProtectionController, CAMPowerController, CAMRemoteShutterController, AVCaptureVideoPreviewLayer, NSString;

@interface CUCaptureController : NSObject <CAMCaptureService, CAMCaptureRequestIntervalometerDelegate> {

	CAMPanoramaPreviewView* _panoramaPreviewView;
	Ai _uniqueRequestIDForConfigurationChange;
	BOOL _previewDisabled;
	BOOL _capturingTimelapse;
	BOOL _flashActive;
	BOOL _torchActive;
	BOOL _HDRSuggested;
	BOOL _captureAvailable;
	BOOL _configurationAvailable;
	BOOL _flashAvailable;
	BOOL _torchAvailable;
	BOOL __capturingPairedVideoPaused;
	BOOL __needsInitialPairedVideoUpdate;
	BOOL _failedConfigurationPreventingCapture;
	BOOL __isVideoCaptureAvailable;
	BOOL __shouldResetFocusAndExposureAfterIrisVideoCapture;
	id<CAMStillImageCapturingVideoDelegate> _stillImageCapturingVideoDelegate;
	id<CAMPanoramaChangeDelegate> _panoramaChangeDelegate;
	id<CAMBurstDelegate> _burstDelegate;
	id<CAMConfigurationDelegate> _configurationDelegate;
	id<CAMSuggestionDelegate> _suggestionDelegate;
	id<CAMAvailabilityDelegate> _availabilityDelegate;
	id<CAMFocusDelegate> _focusDelegate;
	id<CAMExposureDelegate> _exposureDelegate;
	id<CAMShallowDepthOfFieldStatusDelegate> _shallowDepthOfFieldStatusDelegate;
	id<CAMFacesDelegate> _facesDelgate;
	id<CAMMachineReadableCodeDelegate> _machineReadableCodeDelegate;
	id<CAMCaptureResultDelegate> _resultDelegate;
	id<CAMZoomDelegate> _zoomDelegate;
	id<CAMCaptureRecoveryDelegate> _recoveryDelegate;
	id<CAMCaptureRunningDelegate> _runningDelegate;
	id<CAMCaptureInterruptionDelegate> _interruptionDelegate;
	CAMCaptureEngine* __captureEngine;
	NSObject*<OS_dispatch_queue> __responseQueue;
	CAMThumbnailGenerator* __responseThumbnailGenerator;
	CAMVideoCaptureRequest* __capturingVideoRequest;
	CAMVideoCaptureRequest* __pendingVideoCaptureRequest;
	CAMPanoramaCaptureRequest* __capturingPanoramaRequest;
	CAMCaptureRequestIntervalometer* _currentBurstIntervalometer;
	CAMKeyValueCoalescer* __focusCoalescer;
	CAMKeyValueCoalescer* __exposureCoalescer;
	NSCountedSet* __numberOfInflightRequestsByType;
	long long __maximumNumberOfStillImageRequests;
	NSMutableSet* __identifiersForShowingLivePhotoIndicatorForStillImageRequests;
	NSMutableSet* __identifiersForRecordingVideoForStillImageRequests;
	CAMLocationController* __locationController;
	CAMMotionController* __motionController;
	CAMBurstController* __burstController;
	CAMProtectionController* __protectionController;
	CAMPowerController* __powerController;
	CAMRemoteShutterController* __remoteShutterController;

}

@property (nonatomic,readonly) CAMCaptureEngine * _captureEngine;                                                                                                                    //@synthesize _captureEngine=__captureEngine - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _responseQueue;                                                                                                          //@synthesize _responseQueue=__responseQueue - In the implementation block
@property (nonatomic,readonly) CAMThumbnailGenerator * _responseThumbnailGenerator;                                                                                                  //@synthesize _responseThumbnailGenerator=__responseThumbnailGenerator - In the implementation block
@property (assign,setter=_setCapturingPairedVideoPaused:,getter=_isCapturingPairedVideoPaused,nonatomic) BOOL _capturingPairedVideoPaused;                                           //@synthesize _capturingPairedVideoPaused=__capturingPairedVideoPaused - In the implementation block
@property (assign,setter=_setNeedsInitialPairedVideoUpdate:,nonatomic) BOOL _needsInitialPairedVideoUpdate;                                                                          //@synthesize _needsInitialPairedVideoUpdate=__needsInitialPairedVideoUpdate - In the implementation block
@property (setter=_setCapturingVideoRequest:,nonatomic,retain) CAMVideoCaptureRequest * _capturingVideoRequest;                                                                      //@synthesize _capturingVideoRequest=__capturingVideoRequest - In the implementation block
@property (setter=_setPendingVideoCaptureRequest:,nonatomic,retain) CAMVideoCaptureRequest * _pendingVideoCaptureRequest;                                                            //@synthesize _pendingVideoCaptureRequest=__pendingVideoCaptureRequest - In the implementation block
@property (setter=_setCapturingPanoramaRequest:,nonatomic,retain) CAMPanoramaCaptureRequest * _capturingPanoramaRequest;                                                             //@synthesize _capturingPanoramaRequest=__capturingPanoramaRequest - In the implementation block
@property (setter=_setCurrentBurstIntervalometer:,nonatomic,retain) CAMCaptureRequestIntervalometer * currentBurstIntervalometer;                                                    //@synthesize currentBurstIntervalometer=_currentBurstIntervalometer - In the implementation block
@property (nonatomic,readonly) CAMKeyValueCoalescer * _focusCoalescer;                                                                                                               //@synthesize _focusCoalescer=__focusCoalescer - In the implementation block
@property (nonatomic,readonly) CAMKeyValueCoalescer * _exposureCoalescer;                                                                                                            //@synthesize _exposureCoalescer=__exposureCoalescer - In the implementation block
@property (assign,setter=_setFlashActive:,getter=isFlashActive,nonatomic) BOOL flashActive;                                                                                          //@synthesize flashActive=_flashActive - In the implementation block
@property (assign,setter=_setTorchActive:,getter=isTorchActive,nonatomic) BOOL torchActive;                                                                                          //@synthesize torchActive=_torchActive - In the implementation block
@property (assign,setter=_setHDRSuggested:,getter=isHDRSuggested,nonatomic) BOOL HDRSuggested;                                                                                       //@synthesize HDRSuggested=_HDRSuggested - In the implementation block
@property (nonatomic,readonly) NSCountedSet * _numberOfInflightRequestsByType;                                                                                                       //@synthesize _numberOfInflightRequestsByType=__numberOfInflightRequestsByType - In the implementation block
@property (assign,setter=_setMaximumNumberOfStillImageRequests:,nonatomic) long long _maximumNumberOfStillImageRequests;                                                             //@synthesize _maximumNumberOfStillImageRequests=__maximumNumberOfStillImageRequests - In the implementation block
@property (assign,setter=_setCaptureAvailable:,getter=isCaptureAvailable,nonatomic) BOOL captureAvailable;                                                                           //@synthesize captureAvailable=_captureAvailable - In the implementation block
@property (assign,setter=_setFailedConfigurationPreventingCapture:,getter=_isFailedConfigurationPreventingCapture,nonatomic) BOOL failedConfigurationPreventingCapture;              //@synthesize failedConfigurationPreventingCapture=_failedConfigurationPreventingCapture - In the implementation block
@property (assign,setter=_setVideoCaptureAvailable:,getter=_isVideoCaptureAvailable,nonatomic) BOOL _isVideoCaptureAvailable;                                                        //@synthesize _isVideoCaptureAvailable=__isVideoCaptureAvailable - In the implementation block
@property (assign,setter=_setConfigurationAvailable:,getter=isConfigurationAvailable,nonatomic) BOOL configurationAvailable;                                                         //@synthesize configurationAvailable=_configurationAvailable - In the implementation block
@property (assign,setter=_setFlashAvailable:,getter=isFlashAvailable,nonatomic) BOOL flashAvailable;                                                                                 //@synthesize flashAvailable=_flashAvailable - In the implementation block
@property (assign,setter=_setTorchAvailable:,getter=isTorchAvailable,nonatomic) BOOL torchAvailable;                                                                                 //@synthesize torchAvailable=_torchAvailable - In the implementation block
@property (nonatomic,readonly) NSMutableSet * _identifiersForShowingLivePhotoIndicatorForStillImageRequests;                                                                         //@synthesize _identifiersForShowingLivePhotoIndicatorForStillImageRequests=__identifiersForShowingLivePhotoIndicatorForStillImageRequests - In the implementation block
@property (nonatomic,readonly) NSMutableSet * _identifiersForRecordingVideoForStillImageRequests;                                                                                    //@synthesize _identifiersForRecordingVideoForStillImageRequests=__identifiersForRecordingVideoForStillImageRequests - In the implementation block
@property (assign,setter=_setShouldResetFocusAndExposureAfterIrisVideoCapture:,nonatomic) BOOL _shouldResetFocusAndExposureAfterIrisVideoCapture;                                    //@synthesize _shouldResetFocusAndExposureAfterIrisVideoCapture=__shouldResetFocusAndExposureAfterIrisVideoCapture - In the implementation block
@property (nonatomic,readonly) CAMLocationController * _locationController;                                                                                                          //@synthesize _locationController=__locationController - In the implementation block
@property (nonatomic,readonly) CAMMotionController * _motionController;                                                                                                              //@synthesize _motionController=__motionController - In the implementation block
@property (nonatomic,readonly) CAMBurstController * _burstController;                                                                                                                //@synthesize _burstController=__burstController - In the implementation block
@property (nonatomic,readonly) CAMProtectionController * _protectionController;                                                                                                      //@synthesize _protectionController=__protectionController - In the implementation block
@property (nonatomic,readonly) CAMPowerController * _powerController;                                                                                                                //@synthesize _powerController=__powerController - In the implementation block
@property (nonatomic,readonly) CAMRemoteShutterController * _remoteShutterController;                                                                                                //@synthesize _remoteShutterController=__remoteShutterController - In the implementation block
@property (getter=isPreviewDisabled,nonatomic,readonly) BOOL previewDisabled;                                                                                                        //@synthesize previewDisabled=_previewDisabled - In the implementation block
@property (nonatomic,readonly) AVCaptureVideoPreviewLayer * videoPreviewLayer; 
@property (nonatomic,readonly) CAMPanoramaPreviewView * panoramaPreviewView; 
@property (assign,nonatomic,__weak) id<CAMStillImageCapturingVideoDelegate> stillImageCapturingVideoDelegate;                                                                        //@synthesize stillImageCapturingVideoDelegate=_stillImageCapturingVideoDelegate - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowLivePhotoIndicator; 
@property (getter=isCapturingStillImagePairedVideo,nonatomic,readonly) BOOL capturingStillImagePairedVideo; 
@property (getter=isCapturingVideo,nonatomic,readonly) BOOL capturingVideo; 
@property (getter=isCapturingPanorama,nonatomic,readonly) BOOL capturingPanorama; 
@property (assign,nonatomic,__weak) id<CAMPanoramaChangeDelegate> panoramaChangeDelegate;                                                                                            //@synthesize panoramaChangeDelegate=_panoramaChangeDelegate - In the implementation block
@property (getter=isCapturingBurst,nonatomic,readonly) BOOL capturingBurst; 
@property (nonatomic,readonly) unsigned long long currentBurstCount; 
@property (assign,nonatomic,__weak) id<CAMBurstDelegate> burstDelegate;                                                                                                              //@synthesize burstDelegate=_burstDelegate - In the implementation block
@property (assign,getter=isCapturingTimelapse,nonatomic) BOOL capturingTimelapse;                                                                                                    //@synthesize capturingTimelapse=_capturingTimelapse - In the implementation block
@property (assign,nonatomic,__weak) id<CAMConfigurationDelegate> configurationDelegate;                                                                                              //@synthesize configurationDelegate=_configurationDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<CAMSuggestionDelegate> suggestionDelegate;                                                                                                    //@synthesize suggestionDelegate=_suggestionDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<CAMAvailabilityDelegate> availabilityDelegate;                                                                                                //@synthesize availabilityDelegate=_availabilityDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<CAMFocusDelegate> focusDelegate;                                                                                                              //@synthesize focusDelegate=_focusDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<CAMExposureDelegate> exposureDelegate;                                                                                                        //@synthesize exposureDelegate=_exposureDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<CAMShallowDepthOfFieldStatusDelegate> shallowDepthOfFieldStatusDelegate;                                                                      //@synthesize shallowDepthOfFieldStatusDelegate=_shallowDepthOfFieldStatusDelegate - In the implementation block
@property (nonatomic,readonly) BOOL shouldAllowUserToChangeFocusAndExposure; 
@property (assign,nonatomic,__weak) id<CAMFacesDelegate> facesDelgate;                                                                                                               //@synthesize facesDelgate=_facesDelgate - In the implementation block
@property (assign,nonatomic,__weak) id<CAMMachineReadableCodeDelegate> machineReadableCodeDelegate;                                                                                  //@synthesize machineReadableCodeDelegate=_machineReadableCodeDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<CAMCaptureResultDelegate> resultDelegate;                                                                                                     //@synthesize resultDelegate=_resultDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<CAMZoomDelegate> zoomDelegate;                                                                                                                //@synthesize zoomDelegate=_zoomDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<CAMCaptureRecoveryDelegate> recoveryDelegate;                                                                                                 //@synthesize recoveryDelegate=_recoveryDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<CAMCaptureRunningDelegate> runningDelegate;                                                                                                   //@synthesize runningDelegate=_runningDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<CAMCaptureInterruptionDelegate> interruptionDelegate;                                                                                         //@synthesize interruptionDelegate=_interruptionDelegate - In the implementation block
@property (getter=isInterrupted,nonatomic,readonly) BOOL interrupted; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)focusLensPositionCurrentSentinel;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)stillImageRequestWillStartCapturingVideo:(id)arg1 ;
-(void)stillImageRequestDidStartCapturing:(id)arg1 resolvedSettings:(id)arg2 ;
-(void)stillImageRequestDidStopCapturing:(id)arg1 ;
-(void)stillImageRequestDidCompleteCapture:(id)arg1 error:(id)arg2 ;
-(void)videoRequestDidStartCapturing:(id)arg1 ;
-(void)videoRequestDidStopCapturing:(id)arg1 ;
-(void)panoramaRequestDidStartCapturing:(id)arg1 ;
-(void)panoramaRequestDidStopCapturing:(id)arg1 ;
-(CAMCaptureEngine *)_captureEngine;
-(void)setFacesDelgate:(id<CAMFacesDelegate>)arg1 ;
-(void)setMachineReadableCodeDelegate:(id<CAMMachineReadableCodeDelegate>)arg1 ;
-(void)setConfigurationDelegate:(id<CAMConfigurationDelegate>)arg1 ;
-(void)setSuggestionDelegate:(id<CAMSuggestionDelegate>)arg1 ;
-(void)setAvailabilityDelegate:(id<CAMAvailabilityDelegate>)arg1 ;
-(void)setBurstDelegate:(id<CAMBurstDelegate>)arg1 ;
-(void)setRecoveryDelegate:(id<CAMCaptureRecoveryDelegate>)arg1 ;
-(void)setInterruptionDelegate:(id<CAMCaptureInterruptionDelegate>)arg1 ;
-(void)setRunningDelegate:(id<CAMCaptureRunningDelegate>)arg1 ;
-(void)setZoomDelegate:(id<CAMZoomDelegate>)arg1 ;
-(void)setStillImageCapturingVideoDelegate:(id<CAMStillImageCapturingVideoDelegate>)arg1 ;
-(void)setShallowDepthOfFieldStatusDelegate:(id<CAMShallowDepthOfFieldStatusDelegate>)arg1 ;
-(void)invalidateController;
-(void)changeToPreviewFilters:(id)arg1 ;
-(AVCaptureVideoPreviewLayer *)videoPreviewLayer;
-(CAMRemoteShutterController *)_remoteShutterController;
-(BOOL)isCapturingVideo;
-(BOOL)isCapturingBurst;
-(BOOL)captureStillImageWithRequest:(id)arg1 error:(id*)arg2 ;
-(BOOL)isCaptureAvailable;
-(CAMMotionController *)_motionController;
-(BOOL)isHDRSuggested;
-(CAMLocationController *)_locationController;
-(BOOL)startCapturingVideoWithRequest:(id)arg1 error:(id*)arg2 ;
-(BOOL)stopCapturingVideo;
-(BOOL)isTorchActive;
-(BOOL)startCapturingPanoramaWithRequest:(id)arg1 error:(id*)arg2 ;
-(BOOL)stopCapturingPanorama;
-(BOOL)isCapturingPanorama;
-(BOOL)isFlashActive;
-(id<CAMConfigurationDelegate>)configurationDelegate;
-(BOOL)isCapturingTimelapse;
-(void)registerVideoThumbnailContentsDelegate:(id)arg1 ;
-(void)unregisterVideoThumbnailContentsDelegate:(id)arg1 ;
-(BOOL)shouldShowLivePhotoIndicator;
-(BOOL)isConfigurationAvailable;
-(BOOL)isInterrupted;
-(void)changeToPreviewDisabled;
-(void)changeToPreviewEnabledWithConfiguration:(unsigned long long)arg1 ;
-(BOOL)isTorchAvailable;
-(void)changeToTorchMode:(long long)arg1 ;
-(CAMPowerController *)_powerController;
-(void)startMonitoringForHDRSuggestions;
-(void)stopMonitoringForHDRSuggestions;
-(BOOL)isFlashAvailable;
-(void)changeToFlashMode:(long long)arg1 ;
-(void)pauseCapturingStillImagePairedVideo;
-(void)resumeCapturingStillImagePairedVideo;
-(void)attemptToEndInterruptions;
-(void)prepareToCaptureStillImageAtSystemTime:(long long)arg1 ;
-(BOOL)startCapturingBurstWithRequest:(id)arg1 error:(id*)arg2 ;
-(void)stopCapturingBurst;
-(void)changeToVideoRecordingCaptureOrientation:(long long)arg1 ;
-(BOOL)isCapturingStillImagePairedVideo;
-(int)changeToGraphConfiguration:(id)arg1 resetZoom:(BOOL)arg2 minimumExecutionTime:(double)arg3 ;
-(void)changeToPreviewConfiguration:(unsigned long long)arg1 ;
-(void)startRampToVideoZoomFactor:(double)arg1 withDuration:(double)arg2 ;
-(void)changeToVideoZoomFactor:(double)arg1 ;
-(void)startRampToVideoZoomFactor:(double)arg1 withRate:(float)arg2 ;
-(void)stopRampToVideoZoomFactor;
-(void)focusAtCenterForVideoRecording;
-(void)startCaptureSession;
-(int)applyCaptureConfiguration:(id)arg1 ;
-(void)updateRealtimeMetadataConfigurationForGraphConfiguration:(id)arg1 isCapturing:(BOOL)arg2 ;
-(void)changeToPanoramaEncodingBehavior:(long long)arg1 ;
-(void)stopCaptureSession;
-(void)setPanoramaChangeDelegate:(id<CAMPanoramaChangeDelegate>)arg1 ;
-(CAMPanoramaPreviewView *)panoramaPreviewView;
-(void)changeToPanoramaDirection:(long long)arg1 ;
-(BOOL)isPreviewDisabled;
-(void)setCapturingTimelapse:(BOOL)arg1 ;
-(void)stillImageRequest:(id)arg1 didCompleteVideoCaptureWithResult:(id)arg2 ;
-(id<CAMCaptureResultDelegate>)resultDelegate;
-(CAMBurstController *)_burstController;
-(CAMProtectionController *)_protectionController;
-(void)stillImageRequest:(id)arg1 didCompleteStillImageCaptureWithResult:(id)arg2 ;
-(void)stillImageRequestDidStopCapturingVideo:(id)arg1 ;
-(void)videoRequest:(id)arg1 didCompleteCaptureWithResult:(id)arg2 ;
-(void)panoramaRequest:(id)arg1 didCompleteCaptureWithResult:(id)arg2 ;
-(void)panoramaRequest:(id)arg1 didReceiveNotification:(long long)arg2 ;
-(void)panoramaConfigurationDidChangeWithImageQueue:(CAImageQueueRef)arg1 direction:(long long)arg2 ;
-(void)metadataWasRecognized:(id)arg1 ;
-(void)willPerformRecoveryFromRuntimeError:(id)arg1 ;
-(void)handleSessionDidStartRunning;
-(void)handleSessionDidStopRunning;
-(void)handleSessionInterruptionForReason:(long long)arg1 ;
-(void)handleSessionInterruptionEnded;
-(void)setResultDelegate:(id<CAMCaptureResultDelegate>)arg1 ;
-(void)registerCaptureService:(id)arg1 ;
-(void)_setupFocusAndExposureMonitoring;
-(void)_setupSuggestionMonitoring;
-(void)_setupAvailabilityMonitoring;
-(void)_setupZoomMonitoring;
-(void)_setupShallowDepthOfFieldMonitoring;
-(void)_setupSystemPressureStateMonitoring;
-(void)_handleCaptureEngineExecutionNotification:(id)arg1 ;
-(id)_commandForConfiguration:(id)arg1 outRequestID:(int*)arg2 ;
-(void)_setVideoCaptureAvailable:(BOOL)arg1 ;
-(id)initWithCaptureConfiguration:(id)arg1 engineOptions:(long long)arg2 locationController:(id)arg3 motionController:(id)arg4 burstController:(id)arg5 protectionController:(id)arg6 powerController:(id)arg7 remoteShutterController:(id)arg8 ;
-(void)_teardownFocusAndExposureMonitoring;
-(void)_teardownSuggestionMonitoring;
-(void)_teardownAvailabilityMonitoring;
-(void)_teardownZoomMonitoring;
-(void)_teardownShallowDepthOfFieldMonitoring;
-(void)_teardownSystemPressureStateMonitoring;
-(CAMThumbnailGenerator *)_responseThumbnailGenerator;
-(BOOL)_isFailedConfigurationPreventingCapture;
-(id)_sanitizeStillImageRequest:(id)arg1 ;
-(void)_updateMaximumNumberOfStillImageRequestsAfterEnqueuingRequestWithFlashMode:(long long)arg1 HDRMode:(long long)arg2 burstIdentifier:(id)arg3 wantsPortraitEffect:(BOOL)arg4 ;
-(void)_updateAvailabilityAfterEnqueuedRequest:(id)arg1 ;
-(BOOL)_needsInitialPairedVideoUpdate;
-(BOOL)_isCapturingPairedVideoPaused;
-(void)_setCapturingPairedVideoPaused:(BOOL)arg1 ;
-(void)_setNeedsInitialPairedVideoUpdate:(BOOL)arg1 ;
-(void)_beginTrackingVideoRecordingForStillImageRequest:(id)arg1 ;
-(void)_setShouldResetFocusAndExposureAfterIrisVideoCapture:(BOOL)arg1 ;
-(void)_scheduleFocusAndExposureResetAfterCaptureIfNecessary;
-(void)_processCapturedBurstRequest:(id)arg1 withResult:(id)arg2 ;
-(void)_updateAvailabilityAfterCapturedRequest:(id)arg1 ;
-(void)_updateMaximumNumberOfStillImageRequestsAfterCapturedRequestIfNecessary:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)_responseQueue;
-(id)_thumbnailImageFromStillImageCaptureResult:(id)arg1 imageOrientation:(long long)arg2 ;
-(void)_stopShowingLivePhotoIndicatorForStillImageRequest:(id)arg1 ;
-(void)_endTrackingVideoRecordingForStillImageRequest:(id)arg1 ;
-(BOOL)_shouldResetFocusAndExposureAfterIrisVideoCapture;
-(void)_resetFocusAndExposureAfterCapture;
-(void)_startShowingLivePhotoIndicatorForStillImageRequest:(id)arg1 ;
-(NSMutableSet *)_identifiersForRecordingVideoForStillImageRequests;
-(id)_identifierForPendingVideoForStillImageRequest:(id)arg1 ;
-(id<CAMStillImageCapturingVideoDelegate>)stillImageCapturingVideoDelegate;
-(NSMutableSet *)_identifiersForShowingLivePhotoIndicatorForStillImageRequests;
-(CAMVideoCaptureRequest *)_capturingVideoRequest;
-(id)_realtimeMetadataCommandsForMode:(long long)arg1 capturing:(BOOL)arg2 wantsMachineReadableCodes:(BOOL)arg3 ;
-(void)_setPendingVideoCaptureRequest:(id)arg1 ;
-(id)_sanitizeVideoRequest:(id)arg1 ;
-(void)_setCapturingVideoRequest:(id)arg1 ;
-(void)_didPlayBeginVideoRecordingSound;
-(void)_updateAvailabilityWhenPreparingToStopCapturingForRequest:(id)arg1 ;
-(CAMVideoCaptureRequest *)_pendingVideoCaptureRequest;
-(void)_processPendingVideoCaptureRequest:(id)arg1 ;
-(void)_updateAvailabilityAfterStopCapturingForRequest:(id)arg1 ;
-(CAMPanoramaCaptureRequest *)_capturingPanoramaRequest;
-(id)_sanitizePanoramaRequest:(id)arg1 ;
-(void)_setCapturingPanoramaRequest:(id)arg1 ;
-(id)_updateFocusAndExposureForStartPanorama;
-(void)_cancelDelayedFocusAndExposureReset;
-(id<CAMPanoramaChangeDelegate>)panoramaChangeDelegate;
-(CAMCaptureRequestIntervalometer *)currentBurstIntervalometer;
-(unsigned long long)currentBurstCount;
-(id)_updateFocusAndExposureForStartBurstCapture;
-(void)_setCurrentBurstIntervalometer:(id)arg1 ;
-(id<CAMBurstDelegate>)burstDelegate;
-(BOOL)_captureStillImageWithRequest:(id)arg1 ;
-(id)_commandForChangeToGraphConfiguration:(id)arg1 resetZoom:(BOOL)arg2 minimumExecutionTime:(double)arg3 outRequestID:(int*)arg4 ;
-(int)_uniqueRequestIDForChangeToModeAndDevice;
-(BOOL)_wantsMachineReadableCodesForGraphConfiguration:(id)arg1 ;
-(void)_setFailedConfigurationPreventingCapture:(BOOL)arg1 ;
-(id)_commandForResetFocus:(BOOL)arg1 resetExposure:(BOOL)arg2 resetExposureTargetBias:(BOOL)arg3 ;
-(id<CAMFocusDelegate>)focusDelegate;
-(BOOL)_useSmoothFocus;
-(void)_resetFocusAndExposureIfAppropriateForReason:(long long)arg1 ;
-(void)_setupFocusMonitoring;
-(void)_setupExposureMonitoring;
-(void)_subjectAreaDidChange:(id)arg1 ;
-(id)_focusKVOKeyPaths;
-(id<CAMExposureDelegate>)exposureDelegate;
-(id)_exposureKVOKeyPaths;
-(CAMKeyValueCoalescer *)_focusCoalescer;
-(BOOL)_kvoDidStartForChange:(id)arg1 ;
-(BOOL)_kvoDidEndForChange:(id)arg1 ;
-(CAMKeyValueCoalescer *)_exposureCoalescer;
-(id)_suggestionKeyPaths;
-(void)_setHDRSuggested:(BOOL)arg1 ;
-(id<CAMSuggestionDelegate>)suggestionDelegate;
-(void)_setFlashActive:(BOOL)arg1 ;
-(void)_setTorchActive:(BOOL)arg1 ;
-(id)_availabilityKeyPaths;
-(void)_setFlashAvailable:(BOOL)arg1 ;
-(id<CAMAvailabilityDelegate>)availabilityDelegate;
-(void)_setTorchAvailable:(BOOL)arg1 ;
-(long long)_maximumNumberOfStillImageRequests;
-(unsigned long long)_maximumNumberOfStillImageRequestsDuringBurst;
-(void)_setMaximumNumberOfStillImageRequests:(long long)arg1 ;
-(NSCountedSet *)_numberOfInflightRequestsByType;
-(BOOL)_isVideoCaptureAvailable;
-(void)_setCaptureAvailable:(BOOL)arg1 ;
-(void)_setConfigurationAvailable:(BOOL)arg1 ;
-(void)_notifyDelegateOfCaptureAvailabilityChanged:(BOOL)arg1 ;
-(void)_notifyDelegateOfConfigurationAvailabilityChanged:(BOOL)arg1 ;
-(void)_updateAvailabilityForRequestType:(long long)arg1 ;
-(id<CAMFacesDelegate>)facesDelgate;
-(id<CAMMachineReadableCodeDelegate>)machineReadableCodeDelegate;
-(id<CAMCaptureRecoveryDelegate>)recoveryDelegate;
-(id<CAMCaptureRunningDelegate>)runningDelegate;
-(id<CAMCaptureInterruptionDelegate>)interruptionDelegate;
-(void)unregisterCaptureService:(id)arg1 ;
-(void)registerEffectsPreviewSampleBufferDelegate:(id)arg1 ;
-(void)unregisterEffectsPreviewSampleBufferDelegate:(id)arg1 ;
-(id)_zoomMonitoringKeyPaths;
-(id)_shallowDepthOfFieldMonitoringKeyPaths;
-(id<CAMShallowDepthOfFieldStatusDelegate>)shallowDepthOfFieldStatusDelegate;
-(BOOL)_shouldMonitorSystemPressureState;
-(id)_systemPressureStateMonitoringKeyPaths;
-(void)_handleSystemPressureStateChanged;
-(void)_focusResultChangedForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 ;
-(void)_exposureResultChangedForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 ;
-(void)_suggestionResultChangedForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 ;
-(void)_availabilityResultChangedForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 ;
-(void)_zoomResultChangedForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 ;
-(void)_shallowDepthOfFieldMonitoringChangedForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 ;
-(void)_systemPressureStateMonitoringChangedForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 ;
-(BOOL)intervalometer:(id)arg1 didGenerateCaptureRequest:(id)arg2 ;
-(void)intervalometerDidReachMaximumCount:(id)arg1 ;
-(void)notifyTimelapseControllerFinishedUpdatingWithLocation;
-(void)changeToTorchLevel:(float)arg1 ;
-(BOOL)shouldAllowUserToChangeFocusAndExposure;
-(void)focusAndExposeAtPoint:(CGPoint)arg1 lockFocus:(BOOL)arg2 resetExposureTargetBias:(BOOL)arg3 ;
-(void)changeToLockedExposure;
-(void)forceDisableSubjectAreaChangeMonitoring;
-(void)lockFocusAtLensPosition:(float)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)cancelDelayedFocusAndExposureReset;
-(void)changeExposureTargetBias:(float)arg1 ;
-(void)_updateMaximumNumberOfStillImageRequestsAfterBurst;
-(void)queryVideoDimensionsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)queryTimelapseDimensionsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setFocusDelegate:(id<CAMFocusDelegate>)arg1 ;
-(void)setExposureDelegate:(id<CAMExposureDelegate>)arg1 ;
-(id<CAMZoomDelegate>)zoomDelegate;
@end

