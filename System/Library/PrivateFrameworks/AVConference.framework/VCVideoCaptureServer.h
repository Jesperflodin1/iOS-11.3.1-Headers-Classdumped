/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue, VideoCaptureProtocol, AVConferencePreviewDelegate;
#import <AVConference/AVConference-Structs.h>
@class NSObject, NSString, NSMutableArray, VideoAttributes, VCImageQueue;

@interface VCVideoCaptureServer : NSObject {

	int currentWidth;
	int currentHeight;
	int currentFrameRate;
	int _maxFrameRate;
	int previewFrameCount;
	int captureFrameCount;
	NSObject*<OS_dispatch_source> cameraHealthMonitor;
	int pendingWidth;
	int pendingHeight;
	int pendingFrameRate;
	NSString* _currentCameraUniqueID;
	BOOL firstPreviewFrame;
	int snapshotRequestCount;
	NSMutableArray* cameraClients;
	NSMutableArray* screenCaptureClients;
	NSMutableArray* _cameraPreviewClients;
	VideoAttributes* localVideoAttributes;
	CGSize localScreenPortraitAspectRatio;
	CGSize localScreenLandscapeAspectRatio;
	CGSize localExpectedPortraitAspectRatio;
	CGSize localExpectedLandscapeAspectRatio;
	NSObject*<OS_dispatch_queue> captureServerQueue;
	NSObject*<OS_dispatch_queue> captureClientQueue;
	NSObject*<OS_dispatch_queue> captureCameraQueue;
	NSObject*<OS_dispatch_queue> _xpcCommandQueue;
	NSObject*<OS_dispatch_queue> delegateNotificationQueue;
	NSObject*<OS_dispatch_queue> variablesQueue;
	NSObject*<OS_dispatch_queue> snapshotQueue;
	NSObject*<VideoCaptureProtocol> avCapture;
	NSObject*<VideoCaptureProtocol> screenCapture;
	OpaqueVTPixelTransferSessionRef transferSession;
	CVPixelBufferPoolRef bufferPool;
	BOOL resize;
	NSObject*<AVConferencePreviewDelegate> appDelegate;
	double falteredRenderingtimeStamp;
	VCImageQueue* frontQueue;
	VCImageQueue* backQueue;
	int _previewSlot;
	int _thermalNotificationToken;
	int _thermalLevel;
	int _newThermalLevel;
	int _peakPowerNotificationToken;
	int _peakPowerLevel;
	int _newPeakPowerLevel;
	BOOL _isPreviewRunning;

}

@property (nonatomic,retain) NSObject*<AVConferencePreviewDelegate> appDelegate; 
@property (retain) NSString * currentCameraUniqueID;                                          //@synthesize currentCameraUniqueID=_currentCameraUniqueID - In the implementation block
+(id)VCVideoCaptureServerSingleton;
-(id)init;
-(oneway void)release;
-(id)autorelease;
-(id)retain;
-(void)dealloc;
-(unsigned long long)retainCount;
-(id)allocWithZone:(NSZone*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)localScreenAttributesForVideoAttributes:(id)arg1 ;
-(BOOL)setLocalScreenAttributes:(id)arg1 ;
-(BOOL)registerForVideoFramesFromSource:(int)arg1 withClient:(id)arg2 width:(int)arg3 height:(int)arg4 frameRate:(int)arg5 unpausing:(BOOL)arg6 ;
-(BOOL)deregisterForVideoFramesFromSource:(int)arg1 withClient:(id)arg2 ;
-(BOOL)cameraSupportsWidth:(int)arg1 height:(int)arg2 ;
-(CGSize)localScreenRatioForScreenOrientation:(int)arg1 ;
-(CGSize)localExpectedRatioForScreenOrientation:(int)arg1 ;
-(void)setCaptureWidth:(int)arg1 height:(int)arg2 rate:(int)arg3 ;
-(void)registerBlocksForServer;
-(id)localVideoAttributes;
-(NSString *)currentCameraUniqueID;
-(BOOL)captureVideoWidth:(int*)arg1 height:(int*)arg2 frameRate:(int*)arg3 ;
-(void)startCaptureWithWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3 unpausing:(BOOL)arg4 ;
-(void)pausePreview;
-(BOOL)canStopPreview;
-(void)stopPreview;
-(BOOL)setCaptureCameraWithUID:(id)arg1 ;
-(BOOL)setLocalVideoAttributes:(id)arg1 ;
-(unsigned)setLocalVideoDestination:(id)arg1 facing:(BOOL)arg2 ;
-(void)beginPreviewToPIPAnimation;
-(void)endPreviewToPIPAnimation;
-(void)beginPIPToPreviewAnimation;
-(void)endPIPToPreviewAnimation;
-(void)setCurrentCameraUniqueID:(NSString *)arg1 ;
-(void)handleAVCaptureError:(int)arg1 error:(id)arg2 ;
-(void)stopCapture;
-(void)sendSnapshotFromFrame:(CVBufferRef)arg1 ;
-(CVBufferRef)resizeFrame:(CVBufferRef)arg1 ;
-(BOOL)enqueueFrameToQueueFront:(BOOL)arg1 frame:(CVBufferRef)arg2 frameTime:(SCD_Struct_VC33)arg3 ;
-(void)applyPressureLevelChanges;
-(int)getFrameRateForThermalLevel:(int)arg1 peakPowerPressure:(int)arg2 ;
-(void)setCaptureFrameRate:(int)arg1 ;
-(void)notifyThermalChangeForClients:(id)arg1 ;
-(int)getFrameRateForPeakPowerLevel:(int)arg1 ;
-(int)getFrameRateForThermalLevel:(int)arg1 ;
-(void)previewVideoWidth:(int*)arg1 height:(int*)arg2 frameRate:(int*)arg3 ;
-(void)updateImageQueueFrameRate:(int)arg1 ;
-(void)changeCameraToPendingSettingsWithReset:(BOOL)arg1 ;
-(void)resetCameraToPreviewSettingsForced:(BOOL)arg1 ;
-(void)reconnectClientLayerFront:(BOOL)arg1 ;
-(int)createVideoCaptureWithWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3 useBackFacingCamera:(BOOL)arg4 ;
-(void)setCurrentFrameRate:(int)arg1 ;
-(void)startPreviewUnpausing:(BOOL)arg1 ;
-(void)setCaptureWidth:(int)arg1 height:(int)arg2 rate:(int)arg3 forced:(BOOL)arg4 ;
-(void)handleVideoCaptureEvent:(id)arg1 ;
-(void)handleScreenCaptureEvent:(id)arg1 ;
-(BOOL)onCaptureFrame:(opaqueCMSampleBufferRef)arg1 frameTime:(SCD_Struct_VC33)arg2 preview:(BOOL)arg3 droppedFrames:(int)arg4 isSwitching:(BOOL)arg5 camera:(int)arg6 ;
-(BOOL)screenCaptureFrame:(opaqueCMSampleBufferRef)arg1 frameTime:(SCD_Struct_VC33)arg2 droppedFrames:(int)arg3 orientation:(int)arg4 ;
-(CFDictionaryRef)copyCameraColorInfo;
-(BOOL)registerForFrames:(id)arg1 unpausing:(BOOL)arg2 ;
-(BOOL)isClientRegisteredForVideoFrames:(id)arg1 fromSource:(int)arg2 ;
-(id)copyLocalVideoAttributes;
-(id)copyLocalScreenAttributesForVideoAttributes:(id)arg1 ;
-(NSObject*<AVConferencePreviewDelegate>)appDelegate;
-(void)setAppDelegate:(NSObject*<AVConferencePreviewDelegate>)arg1 ;
@end

