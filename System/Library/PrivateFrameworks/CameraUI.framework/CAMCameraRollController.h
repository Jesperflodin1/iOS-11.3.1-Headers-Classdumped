/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <libobjc.A.dylib/PXPhotosDataSourceChangeObserver.h>
#import <libobjc.A.dylib/PUOneUpPresentationHelperDelegate.h>
#import <libobjc.A.dylib/PUOneUpPresentationHelperAssetDisplayDelegate.h>
#import <libobjc.A.dylib/PLCameraPreviewWellImageChangeObserver.h>
#import <libobjc.A.dylib/PUBrowsingViewModelChangeObserver.h>
#import <UIKit/UIViewControllerPreviewingDelegate.h>
#import <UIKit/UIViewControllerPreviewingDelegate_Private.h>
#import <UIKit/UIInteractionProgressObserver.h>

@protocol CAMCameraRollControllerSessionDelegate, CAMCameraRollControllerImageWellDelegate, CAMCameraRollControllerPresentationDelegate, OS_dispatch_source;
@class UIGestureRecognizer, PUOneUpPresentationHelper, CAMTransientDataSource, CAMTransientImageManager, PUPhotoKitDataSourceManager, NSMutableSet, NSMutableDictionary, PXPhotosDataSource, NSObject, NSString;

@interface CAMCameraRollController : NSObject <PXPhotosDataSourceChangeObserver, PUOneUpPresentationHelperDelegate, PUOneUpPresentationHelperAssetDisplayDelegate, PLCameraPreviewWellImageChangeObserver, PUBrowsingViewModelChangeObserver, UIViewControllerPreviewingDelegate, UIViewControllerPreviewingDelegate_Private, UIInteractionProgressObserver> {

	struct {
		BOOL respondsToSourceAssetRect;
		BOOL respondsToShouldHideSourceAsset;
		BOOL respondsToPreviewGestureDidBecomeAvailable;
		BOOL respondsToPreviewSourceRect;
		BOOL respondsToImageForReveal;
		BOOL respondsToRevealWillBegin;
		BOOL respondsToRevealDidEnd;
		BOOL respondsToWillPresentCameraRoll;
		BOOL respondsToPrefersPresentingStatusbarHiddenDidChange;
		BOOL respondsToPreferredPresentationOrientation;
	}  _presentationDelegateFlags;
	BOOL _prefersPresentingStatusbarHidden;
	BOOL _shouldPauseAudioSessionUpdatesForCapture;
	BOOL __allowUpdating;
	BOOL __updateIsScheduled;
	BOOL __transientAssetsAreValid;
	BOOL __oneUpVisible;
	BOOL __oneUpFullyPresented;
	BOOL __didSetupMechanismsForStoppingCaptureSession;
	BOOL __didStopCaptureSession;
	BOOL __deferringStagedMediaLoading;
	unsigned short _sessionIdentifier;
	id<CAMCameraRollControllerSessionDelegate> _sessionDelegate;
	id<CAMCameraRollControllerImageWellDelegate> _imageWellDelegate;
	id<CAMCameraRollControllerPresentationDelegate> _presentationDelegate;
	UIGestureRecognizer* _previewGestureRecognizer;
	PUOneUpPresentationHelper* __oneUpPresentationHelper;
	CAMTransientDataSource* __transientDataSource;
	CAMTransientImageManager* __transientImageManager;
	PUPhotoKitDataSourceManager* __photoKitDataSourceManager;
	NSMutableSet* __sessionAssetUUIDs;
	NSMutableSet* __ignoredEV0UUIDs;
	NSMutableDictionary* __HDRUUIDToIgnoredEV0UUIDs;
	PXPhotosDataSource* __photosDataSource;
	PXPhotosDataSource* __stagedDataSource;
	NSObject*<OS_dispatch_source> __memoryWarningSource;

}

@property (assign,setter=_setSessionIdentifier:,nonatomic) unsigned short sessionIdentifier;                                                               //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,readonly) PUOneUpPresentationHelper * _oneUpPresentationHelper;                                                                       //@synthesize _oneUpPresentationHelper=__oneUpPresentationHelper - In the implementation block
@property (nonatomic,readonly) CAMTransientDataSource * _transientDataSource;                                                                              //@synthesize _transientDataSource=__transientDataSource - In the implementation block
@property (nonatomic,readonly) CAMTransientImageManager * _transientImageManager;                                                                          //@synthesize _transientImageManager=__transientImageManager - In the implementation block
@property (nonatomic,readonly) PUPhotoKitDataSourceManager * _photoKitDataSourceManager;                                                                   //@synthesize _photoKitDataSourceManager=__photoKitDataSourceManager - In the implementation block
@property (nonatomic,readonly) NSMutableSet * _sessionAssetUUIDs;                                                                                          //@synthesize _sessionAssetUUIDs=__sessionAssetUUIDs - In the implementation block
@property (nonatomic,readonly) NSMutableSet * _ignoredEV0UUIDs;                                                                                            //@synthesize _ignoredEV0UUIDs=__ignoredEV0UUIDs - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _HDRUUIDToIgnoredEV0UUIDs;                                                                            //@synthesize _HDRUUIDToIgnoredEV0UUIDs=__HDRUUIDToIgnoredEV0UUIDs - In the implementation block
@property (setter=_setPhotosDataSource:,nonatomic,retain) PXPhotosDataSource * _photosDataSource;                                                          //@synthesize _photosDataSource=__photosDataSource - In the implementation block
@property (setter=_setStagedDataSource:,nonatomic,retain) PXPhotosDataSource * _stagedDataSource;                                                          //@synthesize _stagedDataSource=__stagedDataSource - In the implementation block
@property (setter=_setPreviewGestureRecognizer:,nonatomic,retain) UIGestureRecognizer * previewGestureRecognizer;                                          //@synthesize previewGestureRecognizer=_previewGestureRecognizer - In the implementation block
@property (assign,setter=_setAllowUpdating:,nonatomic) BOOL _allowUpdating;                                                                                //@synthesize _allowUpdating=__allowUpdating - In the implementation block
@property (assign,setter=_setUpdateIsScheduled:,nonatomic) BOOL _updateIsScheduled;                                                                        //@synthesize _updateIsScheduled=__updateIsScheduled - In the implementation block
@property (assign,setter=_setTransientAssetsAreValid:,nonatomic) BOOL _transientAssetsAreValid;                                                            //@synthesize _transientAssetsAreValid=__transientAssetsAreValid - In the implementation block
@property (assign,setter=_setOneUpVisible:,getter=_isOneUpVisible,nonatomic) BOOL _oneUpVisible;                                                           //@synthesize _oneUpVisible=__oneUpVisible - In the implementation block
@property (assign,setter=_setOneUpFullyPresented:,getter=_isOneUpFullyPresented,nonatomic) BOOL _oneUpFullyPresented;                                      //@synthesize _oneUpFullyPresented=__oneUpFullyPresented - In the implementation block
@property (assign,setter=_setDidSetupMechanismsForStoppingCaptureSession:,nonatomic) BOOL _didSetupMechanismsForStoppingCaptureSession;                    //@synthesize _didSetupMechanismsForStoppingCaptureSession=__didSetupMechanismsForStoppingCaptureSession - In the implementation block
@property (assign,setter=_setDidStopCaptureSession:,nonatomic) BOOL _didStopCaptureSession;                                                                //@synthesize _didStopCaptureSession=__didStopCaptureSession - In the implementation block
@property (assign,setter=_setPrefersPresentingStatusbarHidden:,nonatomic) BOOL prefersPresentingStatusbarHidden;                                           //@synthesize prefersPresentingStatusbarHidden=_prefersPresentingStatusbarHidden - In the implementation block
@property (assign,setter=_setDeferringStagedMediaLoading:,getter=_isDeferringStagedMediaLoading,nonatomic) BOOL _deferringStagedMediaLoading;              //@synthesize _deferringStagedMediaLoading=__deferringStagedMediaLoading - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_source> _memoryWarningSource;                                                                         //@synthesize _memoryWarningSource=__memoryWarningSource - In the implementation block
@property (assign,nonatomic,__weak) id<CAMCameraRollControllerSessionDelegate> sessionDelegate;                                                            //@synthesize sessionDelegate=_sessionDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<CAMCameraRollControllerImageWellDelegate> imageWellDelegate;                                                        //@synthesize imageWellDelegate=_imageWellDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<CAMCameraRollControllerPresentationDelegate> presentationDelegate;                                                  //@synthesize presentationDelegate=_presentationDelegate - In the implementation block
@property (nonatomic,readonly) BOOL canPresentCameraRollViewController; 
@property (assign,nonatomic) BOOL shouldPauseAudioSessionUpdatesForCapture;                                                                                //@synthesize shouldPauseAudioSessionUpdatesForCapture=_shouldPauseAudioSessionUpdatesForCapture - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(unsigned short)sessionIdentifier;
-(void)interactionProgress:(id)arg1 didEnd:(BOOL)arg2 ;
-(void)_update;
-(id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2 ;
-(void)willPresentPreviewViewController:(id)arg1 forLocation:(CGPoint)arg2 inSourceView:(id)arg3 ;
-(void)didDismissPreviewViewController:(id)arg1 committing:(BOOL)arg2 ;
-(void)previewingContext:(id)arg1 commitViewController:(id)arg2 ;
-(void)animateRevealWithInteractionProgress:(id)arg1 forPreviewingAtLocation:(CGPoint)arg2 inSourceView:(id)arg3 containerView:(id)arg4 ;
-(id)previewPresentationTransitioningDelegateForPosition:(CGPoint)arg1 inSourceView:(id)arg2 ;
-(BOOL)shouldStartPreviewingSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(UIGestureRecognizer *)previewGestureRecognizer;
-(void)cameraPreviewWellImageDidChange:(id)arg1 ;
-(PXPhotosDataSource *)_photosDataSource;
-(void)_setPhotosDataSource:(id)arg1 ;
-(void)viewModel:(id)arg1 didChange:(id)arg2 ;
-(void)presentingViewControllerViewWillAppear:(BOOL)arg1 ;
-(void)presentingViewControllerViewDidAppear:(BOOL)arg1 ;
-(void)presentingViewControllerViewWillDisappear:(BOOL)arg1 ;
-(void)presentingViewControllerViewDidDisappear:(BOOL)arg1 ;
-(void)photosDataSource:(id)arg1 didChange:(id)arg2 ;
-(id)oneUpPresentationHelperViewController:(id)arg1 ;
-(void)oneUpPresentationHelper:(id)arg1 willPresentOneUpViewController:(id)arg2 ;
-(long long)oneUpPresentationHelperPreferredBarStyle:(id)arg1 ;
-(BOOL)oneUpPresentationHelperShouldLeaveContentOnSecondScreen:(id)arg1 ;
-(BOOL)oneUpPresentationHelperEnableFreezeLayoutOnOrientationChange:(id)arg1 ;
-(void)oneUpPresentationHelper:(id)arg1 previewScrubberDidBecomeAvailable:(id)arg2 ;
-(long long)oneUpPresentationHelperPreferredPresentationOrientation:(id)arg1 ;
-(PUOneUpPresentationHelper *)_oneUpPresentationHelper;
-(void)oneUpPresentationHelper:(id)arg1 shouldHideAssetReferences:(id)arg2 ;
-(CGRect)oneUpPresentationHelper:(id)arg1 rectForAssetReference:(id)arg2 cropInsets:(UIEdgeInsets*)arg3 contentsRect:(CGRect*)arg4 ;
-(void)handlePresentingPanGestureRecognizer:(id)arg1 ;
-(CAMTransientImageManager *)_transientImageManager;
-(CAMTransientDataSource *)_transientDataSource;
-(void)setPresentationDelegate:(id<CAMCameraRollControllerPresentationDelegate>)arg1 ;
-(PUPhotoKitDataSourceManager *)_photoKitDataSourceManager;
-(void)setSessionDelegate:(id<CAMCameraRollControllerSessionDelegate>)arg1 ;
-(void)_performPreload;
-(void)ppt_preload;
-(void)setImageWellDelegate:(id<CAMCameraRollControllerImageWellDelegate>)arg1 ;
-(BOOL)prefersPresentingStatusbarHidden;
-(void)ignoreImageWellChangeNotificationForEV0UUID:(id)arg1 withHDRUUID:(id)arg2 ;
-(void)processTransientAssetUpdate:(id)arg1 preventingInsertion:(BOOL)arg2 ;
-(void)processTransientPairedVideoUpdate:(id)arg1 filterType:(long long)arg2 ;
-(void)didPersistAssetWithUUID:(id)arg1 captureSession:(unsigned short)arg2 ;
-(BOOL)isCaptureSessionCurrent:(unsigned short)arg1 ;
-(void)willPersistAssetWithUUID:(id)arg1 captureSession:(unsigned short)arg2 ;
-(void)preload;
-(void)processPendingBursts;
-(BOOL)isCameraRollViewControllerPresented;
-(BOOL)canPresentCameraRollViewController;
-(void)resetNavigation;
-(void)presentCameraRollViewControllerAnimated:(BOOL)arg1 interactive:(BOOL)arg2 deferringStagedMediaLoading:(BOOL)arg3 ;
-(void)setShouldPauseAudioSessionUpdatesForCapture:(BOOL)arg1 ;
-(id)persistedThumbnailImage;
-(void)beginAllowingStagedMediaLoading;
-(BOOL)dismissCameraRollViewControllerForced:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)applicationResumed:(id)arg1 ;
-(void)_teardownMechanismsForStoppingCaptureSession;
-(BOOL)_isPasscodeLocked;
-(NSMutableSet *)_sessionAssetUUIDs;
-(void)_scheduleUpdateIfOneUpIsActive;
-(BOOL)_updateIsScheduled;
-(void)_setUpdateIsScheduled:(BOOL)arg1 ;
-(void)_ensureCameraRollViewController;
-(id<CAMCameraRollControllerImageWellDelegate>)imageWellDelegate;
-(NSMutableSet *)_ignoredEV0UUIDs;
-(NSMutableDictionary *)_HDRUUIDToIgnoredEV0UUIDs;
-(void)_startNewSession;
-(PXPhotosDataSource *)_stagedDataSource;
-(void)_invalidateTransientAssets;
-(void)_updateTransientDataSourceIfNeeded;
-(void)_setDeferringStagedMediaLoading:(BOOL)arg1 ;
-(BOOL)_isDeferringStagedMediaLoading;
-(BOOL)_didStopCaptureSession;
-(void)_setDidStopCaptureSession:(BOOL)arg1 ;
-(BOOL)_isOneUpVisible;
-(id<CAMCameraRollControllerPresentationDelegate>)presentationDelegate;
-(void)_setPrefersPresentingStatusbarHidden:(BOOL)arg1 ;
-(BOOL)_isOneUpFullyPresented;
-(void)_setOneUpFullyPresented:(BOOL)arg1 ;
-(void)_setOneUpVisible:(BOOL)arg1 ;
-(void)clearIgnoredImageWellUUIDs;
-(void)_setupMechanismsForStoppingCaptureSessionIfNecessary;
-(BOOL)_didSetupMechanismsForStoppingCaptureSession;
-(void)_setDidSetupMechanismsForStoppingCaptureSession:(BOOL)arg1 ;
-(void)_stopCaptureSessionIfNecessary;
-(void)_scheduleStopCaptureSessionAfterDelay:(double)arg1 ;
-(void)_setupMemoryWarningNotificationsIfNecessary;
-(void)_registerBrowsingViewModelChangeObserver;
-(void)_stopCaptureSessionIfNecessaryForViewModelCurrentState;
-(void)_unregisterBrowsingViewModelChangeObserver;
-(void)_cancelDelayedStopCaptureSession;
-(void)_tearDownMemoryWarningNotifications;
-(void)_stopCaptureSessionIfNecessaryFromTimeout;
-(NSObject*<OS_dispatch_source>)_memoryWarningSource;
-(BOOL)_shouldStopCaptureSessionForVideoPlayerOfAssetViewModel:(id)arg1 ;
-(BOOL)_shouldStopCaptureSessionForIrisPlayerOfAssetViewModel:(id)arg1 ;
-(void)_setSessionIdentifier:(unsigned short)arg1 ;
-(void)_setAllowUpdating:(BOOL)arg1 ;
-(id<CAMCameraRollControllerSessionDelegate>)sessionDelegate;
-(BOOL)_allowUpdating;
-(void)_setStagedDataSource:(id)arg1 ;
-(void)_setTransientAssetsAreValid:(BOOL)arg1 ;
-(BOOL)_transientAssetsAreValid;
-(void)_setPreviewGestureRecognizer:(id)arg1 ;
-(void)_stopCaptureSessionIfNecessaryForViewModel:(id)arg1 didChange:(id)arg2 ;
-(BOOL)shouldPauseAudioSessionUpdatesForCapture;
@end

