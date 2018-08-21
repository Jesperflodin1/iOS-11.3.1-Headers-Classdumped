/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:02 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKAVFaceBaseView.h>

@protocol NTKAVListing;
@class NTKTaskScheduler, NSTimer, NTKDelayedBlock, UIView;

@interface NTKAVListingFaceBaseView : NTKAVFaceBaseView {

	BOOL _updateWhenUnpausing;
	NTKTaskScheduler* _taskScheduler;
	BOOL _preLoadingVideoOnSleep;
	BOOL _preLoadedVideoOnSleep;
	BOOL _shouldPlayOnWake;
	BOOL _isPauseLockedout;
	BOOL _isPaused;
	BOOL _shouldPause;
	NSTimer* _playOnWakeTimeout;
	NTKDelayedBlock* _playNextVideoDelayBlock;
	NTKDelayedBlock* _pauseLockoutBlock;
	UIView* _blackView;
	long long _previousDataMode;
	BOOL _shouldChangeVariantForScreenWake;
	BOOL _contentUnloadedForFaceSwiping;
	id<NTKAVListing> _currentListing;

}

@property (nonatomic,retain) id<NTKAVListing> currentListing;                    //@synthesize currentListing=_currentListing - In the implementation block
@property (assign,nonatomic) BOOL shouldChangeVariantForScreenWake;              //@synthesize shouldChangeVariantForScreenWake=_shouldChangeVariantForScreenWake - In the implementation block
@property (assign,nonatomic) BOOL contentUnloadedForFaceSwiping;                 //@synthesize contentUnloadedForFaceSwiping=_contentUnloadedForFaceSwiping - In the implementation block
@property (nonatomic,readonly) BOOL paused;                                      //@synthesize isPaused=_isPaused - In the implementation block
@property (nonatomic,readonly) BOOL shouldPause;                                 //@synthesize shouldPause=_shouldPause - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)_reset;
-(BOOL)paused;
-(void)_loadSnapshotContentViews;
-(void)_unloadSnapshotContentViews;
-(void)_applyDataMode;
-(void)_handleWristRaiseScreenWake;
-(void)_handleOrdinaryScreenWake;
-(void)_prepareForEditing;
-(void)_startScrubbingAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_endScrubbingAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_applyFrozen;
-(void)_unpauseFromSwitcher;
-(void)_updatePaused;
-(void)_applySlow;
-(void)_prepareForOrb;
-(void)_cleanupAfterOrb:(BOOL)arg1 ;
-(void)_playVideoForScreenWake:(id)arg1 ;
-(void)_playVideo;
-(void)_hideCurtainView;
-(void)_handleScreenWake;
-(void)_showCurtainView;
-(BOOL)_timeLabelUsesLegibility;
-(BOOL)_curtainViewVisible;
-(void)_fadeToCurtainViewWithDuration:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)_fadeFromCurtainViewWithDuration:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)_updateImageToBlur;
-(id)_nextListing;
-(void)_loadVideoForListing;
-(void)_resetVideoForListing;
-(BOOL)_changeCurrentListing;
-(void)_performPreloadVideoTask;
-(void)_cancelDelayedPlayback;
-(void)_cancelPauseLockout;
-(void)faultInFaceContentSkippedDuringSwiping;
-(void)_queuePreloadVideoTask;
-(id)_onDeckPosterImageView;
-(void)_selectDefaultListing;
-(void)_pauseImmediately;
-(void)_playQueuedUpVideo;
-(void)_playNextVideo;
-(BOOL)_shouldPlayVideoOnScreenWake;
-(void)_activatePauseLockout;
-(void)_transitionToPosterView:(id)arg1 ;
-(void)_backlightWillTurnOff;
-(id)_curtainView;
-(BOOL)_needsVignette;
-(void)_complicationFlickerWorkaroundAnimationWithDuration:(double)arg1 applier:(/*^block*/id)arg2 ;
-(void)_playNextVideoAfterDelay:(double)arg1 ;
-(BOOL)shouldPause;
-(id<NTKAVListing>)currentListing;
-(void)setCurrentListing:(id<NTKAVListing>)arg1 ;
-(BOOL)shouldChangeVariantForScreenWake;
-(void)setShouldChangeVariantForScreenWake:(BOOL)arg1 ;
-(BOOL)contentUnloadedForFaceSwiping;
-(void)setContentUnloadedForFaceSwiping:(BOOL)arg1 ;
@end

