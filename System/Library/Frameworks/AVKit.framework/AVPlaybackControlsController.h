/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:46 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <AVKit/AVTransportControlsViewDelegate.h>
#import <AVKit/AVRoutePickerViewDelegate.h>
#import <libobjc.A.dylib/_UIScrollViewScrollObserver.h>
#import <AVKit/AVPlayerViewControllerContentViewDelegate.h>

@class AVKeyValueObservationController, AVPlayerController, AVPictureInPictureController, AVVolumeController, AVPlayerViewController, AVPlaybackControlsView, AVPlayerControllerTimeResolver, AVTimeFormatter, UIAlertController, AVRouteDetectorCoordinator, NSTimer, UIViewPropertyAnimator, UIScrollView, NSString;

@interface AVPlaybackControlsController : NSObject <AVTransportControlsViewDelegate, AVRoutePickerViewDelegate, _UIScrollViewScrollObserver, AVPlayerViewControllerContentViewDelegate> {

	BOOL _playerViewControllerIsBeingTransitioned;
	BOOL _playerViewControllerIsPresentingFullScreen;
	BOOL _playerViewControllerIsPresentedFullScreen;
	BOOL _playerViewControllerHasInvalidViewControllerHierarchy;
	BOOL _entersFullScreenWhenPlaybackBegins;
	BOOL _canHideInteractiveContentOverlayView;
	BOOL _allowsEnteringFullScreen;
	BOOL _inlinePlaybackControlsAlwaysShowLargePlayButtonWhenPaused;
	BOOL _showsPictureInPictureButton;
	BOOL _showsPlaybackControls;
	BOOL _requiresLinearPlayback;
	BOOL _showsDoneButtonWhenFullScreen;
	BOOL _prefersAssetInspectionSuspended;
	BOOL _playingOnSecondScreen;
	BOOL _showsLoadingIndicator;
	BOOL _prefersVolumeSliderExpanded;
	BOOL _includesVideoGravityButton;
	BOOL _suspended;
	BOOL _needsTimeResolver;
	BOOL _coveringWindow;
	BOOL _descendantOfTrackingOrAnimatingScrollViewOrScrolledOffscreen;
	BOOL _hasPlaybackBegunSincePlayerControllerBecameReadyToPlay;
	BOOL _multipleRoutesDetected;
	BOOL _resumingUpdates;
	BOOL _playbackSuspendedForScrubbing;
	BOOL _hasSeekableLiveStreamingContent;
	BOOL _scrubbingOrSeeking;
	BOOL _shouldIgnoreTimeResolverUpdates;
	AVKeyValueObservationController* _keyValueObservationController;
	AVPlayerController* _playerController;
	long long _preferredUnobscuredArea;
	AVPictureInPictureController* _pictureInPictureController;
	AVVolumeController* _volumeController;
	AVPlayerViewController* _playerViewController;
	AVPlaybackControlsView* _playbackControlsView;
	AVPlayerControllerTimeResolver* _timeResolver;
	AVTimeFormatter* _elapsedTimeFormatter;
	AVTimeFormatter* _remainingTimeFormatter;
	UIAlertController* _routePickerAlertController;
	AVRouteDetectorCoordinator* _routeDetectorCoordinator;
	id _AVRouteDetectorCoordinatorMultipleRoutesDetectedObserver;
	NSTimer* _loadingIndicatorTimer;
	UIViewPropertyAnimator* _collapseExpandSliderAnimator;
	UIScrollView* _containingScrollView;
	double _timeStampOfPreviousObservedScrollViewDidScroll;
	double _loadingIndicatorTimerDelay;
	long long _timeControlStatus;
	long long _videoGravityButtonType;
	NSString* _videoGravity;
	CGRect _playbackViewFrame;

}

@property (nonatomic,__weak,readonly) AVPlayerViewController * playerViewController;                                                                                               //@synthesize playerViewController=_playerViewController - In the implementation block
@property (nonatomic,retain) AVPlaybackControlsView * playbackControlsView;                                                                                                        //@synthesize playbackControlsView=_playbackControlsView - In the implementation block
@property (nonatomic,readonly) AVKeyValueObservationController * keyValueObservationController;                                                                                    //@synthesize keyValueObservationController=_keyValueObservationController - In the implementation block
@property (nonatomic,retain) AVPlayerControllerTimeResolver * timeResolver;                                                                                                        //@synthesize timeResolver=_timeResolver - In the implementation block
@property (nonatomic,readonly) AVTimeFormatter * elapsedTimeFormatter;                                                                                                             //@synthesize elapsedTimeFormatter=_elapsedTimeFormatter - In the implementation block
@property (nonatomic,readonly) AVTimeFormatter * remainingTimeFormatter;                                                                                                           //@synthesize remainingTimeFormatter=_remainingTimeFormatter - In the implementation block
@property (assign,nonatomic,__weak) UIAlertController * routePickerAlertController;                                                                                                //@synthesize routePickerAlertController=_routePickerAlertController - In the implementation block
@property (nonatomic,retain) AVRouteDetectorCoordinator * routeDetectorCoordinator;                                                                                                //@synthesize routeDetectorCoordinator=_routeDetectorCoordinator - In the implementation block
@property (nonatomic,retain) id AVRouteDetectorCoordinatorMultipleRoutesDetectedObserver;                                                                                          //@synthesize AVRouteDetectorCoordinatorMultipleRoutesDetectedObserver=_AVRouteDetectorCoordinatorMultipleRoutesDetectedObserver - In the implementation block
@property (assign,nonatomic,__weak) NSTimer * loadingIndicatorTimer;                                                                                                               //@synthesize loadingIndicatorTimer=_loadingIndicatorTimer - In the implementation block
@property (assign,nonatomic,__weak) UIViewPropertyAnimator * collapseExpandSliderAnimator;                                                                                         //@synthesize collapseExpandSliderAnimator=_collapseExpandSliderAnimator - In the implementation block
@property (assign,nonatomic,__weak) UIScrollView * containingScrollView;                                                                                                           //@synthesize containingScrollView=_containingScrollView - In the implementation block
@property (nonatomic,readonly) BOOL showsMediaSelectionButton; 
@property (nonatomic,readonly) BOOL showsSkipButtons; 
@property (nonatomic,readonly) BOOL showsProminentPlayButton; 
@property (nonatomic,readonly) BOOL playButtonsShowPauseGlyph; 
@property (nonatomic,readonly) BOOL prominentPlayButtonCanShowPauseGlyph; 
@property (nonatomic,readonly) BOOL showsRoutePickerView; 
@property (nonatomic,readonly) BOOL includesDoneButton; 
@property (nonatomic,readonly) BOOL includesFullScreenButton; 
@property (nonatomic,readonly) BOOL showsTransportControls; 
@property (nonatomic,readonly) BOOL canShowLoadingIndicator; 
@property (getter=isSeekingEnabled,nonatomic,readonly) BOOL seekingEnabled; 
@property (assign,nonatomic) BOOL showsLoadingIndicator;                                                                                                                           //@synthesize showsLoadingIndicator=_showsLoadingIndicator - In the implementation block
@property (assign,nonatomic) BOOL prefersVolumeSliderExpanded;                                                                                                                     //@synthesize prefersVolumeSliderExpanded=_prefersVolumeSliderExpanded - In the implementation block
@property (assign,nonatomic) BOOL includesVideoGravityButton;                                                                                                                      //@synthesize includesVideoGravityButton=_includesVideoGravityButton - In the implementation block
@property (assign,getter=isSuspended,nonatomic) BOOL suspended;                                                                                                                    //@synthesize suspended=_suspended - In the implementation block
@property (assign,nonatomic) BOOL needsTimeResolver;                                                                                                                               //@synthesize needsTimeResolver=_needsTimeResolver - In the implementation block
@property (assign,getter=isCoveringWindow,nonatomic) BOOL coveringWindow;                                                                                                          //@synthesize coveringWindow=_coveringWindow - In the implementation block
@property (getter=isFullScreen,nonatomic,readonly) BOOL fullScreen; 
@property (assign,getter=isDescendantOfTrackingOrAnimatingScrollViewOrScrolledOffscreen,nonatomic) BOOL descendantOfTrackingOrAnimatingScrollViewOrScrolledOffscreen;              //@synthesize descendantOfTrackingOrAnimatingScrollViewOrScrolledOffscreen=_descendantOfTrackingOrAnimatingScrollViewOrScrolledOffscreen - In the implementation block
@property (assign,nonatomic) double timeStampOfPreviousObservedScrollViewDidScroll;                                                                                                //@synthesize timeStampOfPreviousObservedScrollViewDidScroll=_timeStampOfPreviousObservedScrollViewDidScroll - In the implementation block
@property (assign,nonatomic) BOOL hasPlaybackBegunSincePlayerControllerBecameReadyToPlay;                                                                                          //@synthesize hasPlaybackBegunSincePlayerControllerBecameReadyToPlay=_hasPlaybackBegunSincePlayerControllerBecameReadyToPlay - In the implementation block
@property (assign,nonatomic) BOOL multipleRoutesDetected;                                                                                                                          //@synthesize multipleRoutesDetected=_multipleRoutesDetected - In the implementation block
@property (nonatomic,readonly) double minimumTime; 
@property (nonatomic,readonly) double maximumTime; 
@property (nonatomic,readonly) double targetTime; 
@property (nonatomic,readonly) double currentTime; 
@property (assign,nonatomic) double loadingIndicatorTimerDelay;                                                                                                                    //@synthesize loadingIndicatorTimerDelay=_loadingIndicatorTimerDelay - In the implementation block
@property (assign,getter=isResumingUpdates,nonatomic) BOOL resumingUpdates;                                                                                                        //@synthesize resumingUpdates=_resumingUpdates - In the implementation block
@property (assign,nonatomic) BOOL prefersAssetInspectionSuspended;                                                                                                                 //@synthesize prefersAssetInspectionSuspended=_prefersAssetInspectionSuspended - In the implementation block
@property (assign,getter=isPlaybackSuspendedForScrubbing,nonatomic) BOOL playbackSuspendedForScrubbing;                                                                            //@synthesize playbackSuspendedForScrubbing=_playbackSuspendedForScrubbing - In the implementation block
@property (assign,nonatomic) long long timeControlStatus;                                                                                                                          //@synthesize timeControlStatus=_timeControlStatus - In the implementation block
@property (assign,nonatomic) BOOL hasSeekableLiveStreamingContent;                                                                                                                 //@synthesize hasSeekableLiveStreamingContent=_hasSeekableLiveStreamingContent - In the implementation block
@property (assign,getter=isScrubbingOrSeeking,nonatomic) BOOL scrubbingOrSeeking;                                                                                                  //@synthesize scrubbingOrSeeking=_scrubbingOrSeeking - In the implementation block
@property (assign,nonatomic) BOOL shouldIgnoreTimeResolverUpdates;                                                                                                                 //@synthesize shouldIgnoreTimeResolverUpdates=_shouldIgnoreTimeResolverUpdates - In the implementation block
@property (assign,nonatomic) long long videoGravityButtonType;                                                                                                                     //@synthesize videoGravityButtonType=_videoGravityButtonType - In the implementation block
@property (nonatomic,copy) NSString * videoGravity;                                                                                                                                //@synthesize videoGravity=_videoGravity - In the implementation block
@property (assign,nonatomic) CGRect playbackViewFrame;                                                                                                                             //@synthesize playbackViewFrame=_playbackViewFrame - In the implementation block
@property (assign,nonatomic,__weak) AVPlayerController * playerController;                                                                                                         //@synthesize playerController=_playerController - In the implementation block
@property (assign,nonatomic) BOOL playerViewControllerIsBeingTransitioned;                                                                                                         //@synthesize playerViewControllerIsBeingTransitioned=_playerViewControllerIsBeingTransitioned - In the implementation block
@property (assign,nonatomic) BOOL playerViewControllerIsPresentingFullScreen;                                                                                                      //@synthesize playerViewControllerIsPresentingFullScreen=_playerViewControllerIsPresentingFullScreen - In the implementation block
@property (assign,nonatomic) BOOL playerViewControllerIsPresentedFullScreen;                                                                                                       //@synthesize playerViewControllerIsPresentedFullScreen=_playerViewControllerIsPresentedFullScreen - In the implementation block
@property (assign,nonatomic) BOOL playerViewControllerHasInvalidViewControllerHierarchy;                                                                                           //@synthesize playerViewControllerHasInvalidViewControllerHierarchy=_playerViewControllerHasInvalidViewControllerHierarchy - In the implementation block
@property (assign,nonatomic) BOOL entersFullScreenWhenPlaybackBegins;                                                                                                              //@synthesize entersFullScreenWhenPlaybackBegins=_entersFullScreenWhenPlaybackBegins - In the implementation block
@property (nonatomic,readonly) BOOL shouldEnterFullScreenWhenPlaybackBegins; 
@property (assign,nonatomic) long long preferredUnobscuredArea;                                                                                                                    //@synthesize preferredUnobscuredArea=_preferredUnobscuredArea - In the implementation block
@property (assign,nonatomic) BOOL canHideInteractiveContentOverlayView;                                                                                                            //@synthesize canHideInteractiveContentOverlayView=_canHideInteractiveContentOverlayView - In the implementation block
@property (assign,nonatomic) BOOL allowsEnteringFullScreen;                                                                                                                        //@synthesize allowsEnteringFullScreen=_allowsEnteringFullScreen - In the implementation block
@property (assign,nonatomic) BOOL inlinePlaybackControlsAlwaysShowLargePlayButtonWhenPaused;                                                                                       //@synthesize inlinePlaybackControlsAlwaysShowLargePlayButtonWhenPaused=_inlinePlaybackControlsAlwaysShowLargePlayButtonWhenPaused - In the implementation block
@property (assign,nonatomic) BOOL showsPictureInPictureButton;                                                                                                                     //@synthesize showsPictureInPictureButton=_showsPictureInPictureButton - In the implementation block
@property (assign,nonatomic) BOOL showsPlaybackControls;                                                                                                                           //@synthesize showsPlaybackControls=_showsPlaybackControls - In the implementation block
@property (assign,nonatomic) BOOL requiresLinearPlayback;                                                                                                                          //@synthesize requiresLinearPlayback=_requiresLinearPlayback - In the implementation block
@property (assign,nonatomic) BOOL showsDoneButtonWhenFullScreen;                                                                                                                   //@synthesize showsDoneButtonWhenFullScreen=_showsDoneButtonWhenFullScreen - In the implementation block
@property (nonatomic,retain) AVPictureInPictureController * pictureInPictureController;                                                                                            //@synthesize pictureInPictureController=_pictureInPictureController - In the implementation block
@property (nonatomic,readonly) AVVolumeController * volumeController;                                                                                                              //@synthesize volumeController=_volumeController - In the implementation block
@property (assign,getter=isPlayingOnSecondScreen,nonatomic) BOOL playingOnSecondScreen;                                                                                            //@synthesize playingOnSecondScreen=_playingOnSecondScreen - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)keyPathsForValuesAffectingFullScreen;
+(id)keyPathsForValuesAffectingIncludesDoneButton;
+(id)keyPathsForValuesAffectingIncludesFullScreenButton;
+(id)keyPathsForValuesAffectingShowsRoutePickerView;
+(id)keyPathsForValuesAffectingShowsProminentPlayButton;
+(id)keyPathsForValuesAffectingProminentPlayButtonCanShowPauseGlyph;
+(id)keyPathsForValuesAffectingShowsTransportControls;
+(id)keyPathsForValuesAffectingShouldEnterFullScreenWhenPlaybackBegins;
+(id)keyPathsForValuesAffectingShowsMediaSelectionButton;
+(id)keyPathsForValuesAffectingCurrentTime;
+(id)keyPathsForValuesAffectingMinimumTime;
+(id)keyPathsForValuesAffectingMaximumTime;
+(id)keyPathsForValuesAffectingSeekingEnabled;
+(id)keyPathsForValuesAffectingShowsSkipButtons;
+(id)keyPathsForValuesAffectingCanShowLoadingIndicator;
+(id)keyPathsForValuesAffectingPlayButtonsShowPauseGlyph;
-(long long)timeControlStatus;
-(BOOL)multipleRoutesDetected;
-(BOOL)isSuspended;
-(void)dealloc;
-(void)_observeScrollViewDidScroll:(id)arg1 ;
-(double)currentTime;
-(void)setSuspended:(BOOL)arg1 ;
-(AVPictureInPictureController *)pictureInPictureController;
-(NSString *)videoGravity;
-(AVVolumeController *)volumeController;
-(void)setMultipleRoutesDetected:(BOOL)arg1 ;
-(id)initWithPlayerViewController:(id)arg1 ;
-(BOOL)requiresLinearPlayback;
-(BOOL)allowsEnteringFullScreen;
-(void)setAllowsEnteringFullScreen:(BOOL)arg1 ;
-(BOOL)canHideInteractiveContentOverlayView;
-(long long)preferredUnobscuredArea;
-(void)setPreferredUnobscuredArea:(long long)arg1 ;
-(void)setEntersFullScreenWhenPlaybackBegins:(BOOL)arg1 ;
-(BOOL)entersFullScreenWhenPlaybackBegins;
-(void)setShowsLoadingIndicator:(BOOL)arg1 ;
-(BOOL)showsLoadingIndicator;
-(double)targetTime;
-(BOOL)playerViewControllerContentViewIsPlayingOnSecondScreen:(id)arg1 ;
-(void)playerViewControllerContentView:(id)arg1 didLoadPlaybackControlsView:(id)arg2 ;
-(void)playerViewControllerContentViewDidLayoutSubviews:(id)arg1 ;
-(void)playerViewControllerContentViewDidMoveToWindow:(id)arg1 ;
-(BOOL)playerViewControllerContentViewShouldApplyAutomaticVideoGravity:(id)arg1 ;
-(void)playerViewControllerContentViewDidChangeVideoGravity:(id)arg1 ;
-(BOOL)playerViewControllerContentViewIsBeingTransitionedToOrFromFullScreen:(id)arg1 ;
-(void)routePickerViewWillBeginPresentingRoutes:(id)arg1 ;
-(void)routePickerViewDidEndPresentingRoutes:(id)arg1 ;
-(void)transportControlsNeedsLayoutIfNeeded:(id)arg1 ;
-(void)transportControls:(id)arg1 scrubberDidBeginScrubbing:(id)arg2 ;
-(void)transportControls:(id)arg1 scrubberDidScrub:(id)arg2 ;
-(void)transportControls:(id)arg1 scrubberDidEndScrubbing:(id)arg2 ;
-(void)setPrefersVolumeSliderExpanded:(BOOL)arg1 ;
-(void)setPlayerViewControllerIsBeingTransitioned:(BOOL)arg1 ;
-(BOOL)includesDoneButton;
-(BOOL)includesFullScreenButton;
-(BOOL)showsRoutePickerView;
-(BOOL)showsProminentPlayButton;
-(BOOL)prominentPlayButtonCanShowPauseGlyph;
-(BOOL)showsTransportControls;
-(BOOL)shouldEnterFullScreenWhenPlaybackBegins;
-(BOOL)showsMediaSelectionButton;
-(double)minimumTime;
-(double)maximumTime;
-(BOOL)isSeekingEnabled;
-(BOOL)showsSkipButtons;
-(BOOL)canShowLoadingIndicator;
-(BOOL)playButtonsShowPauseGlyph;
-(void)playbackControlsViewDidLoad:(id)arg1 ;
-(void)visibilityControllerWillShowView:(id)arg1 ;
-(void)playbackControlsVisibilityDidChange;
-(void)handleVolumeChange:(id)arg1 ;
-(void)handleCurrentRouteSupportsVolumeControlChanged:(id)arg1 ;
-(void)volumeSliderValueDidChange:(id)arg1 ;
-(void)volumeButtonTapTriggered:(id)arg1 ;
-(void)volumeButtonLongPressTriggered:(id)arg1 ;
-(void)volumeButtonPanChanged:(id)arg1 ;
-(BOOL)_prefersVolumeSliderExpandedAutomatically;
-(void)_showOrHideVolumeSlider;
-(void)_updateVolumeButtonGlyph;
-(id)_volumeButtonMicaPackageState;
-(void)_updateVolumeSliderValueWithSystemVolume:(float)arg1 animated:(BOOL)arg2 ;
-(void)_updateContainedInTrackingOrAnimatingScrollView;
-(void)prominentPlayButtonTouchUpInside:(id)arg1 ;
-(void)skipButtonTouchUpInside:(id)arg1 ;
-(void)skipButtonLongPressTriggered:(id)arg1 ;
-(void)skipButtonLongPressEnded:(id)arg1 ;
-(void)skipButtonForcePressChanged:(id)arg1 ;
-(AVKeyValueObservationController *)keyValueObservationController;
-(void)_bindEnabledStateOfControls:(id)arg1 toKeyPath:(id)arg2 ;
-(void)_bindInclusionOfControlItems:(id)arg1 toKeyPath:(id)arg2 ;
-(void)_observeBoolForKeyPath:(id)arg1 observationHandler:(/*^block*/id)arg2 ;
-(void)_seekByTimeInterval:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3 ;
-(void)_startObservingPotentiallyUnimplementedPlayerControllerProperties;
-(void)_startOrUpdateVisibilityControllerManagementOfViewVisibility;
-(void)_stopVisibilityControllerManagementOfViewVisibilityIfNeeded;
-(void)_updateOrCreateTimeResolverIfNeeded;
-(void)_updateScrubberAndTimeLabels;
-(void)_updateVideoGravityButtonType;
-(void)_updateHasPlaybackBegunSincePlayerControllerBecameReadyToPlay:(BOOL)arg1 playing:(BOOL)arg2 userDidEndTappingProminentPlayButton:(BOOL)arg3 ;
-(void)_updateSuspended;
-(BOOL)playerViewControllerIsBeingTransitioned;
-(BOOL)playerViewControllerIsPresentingFullScreen;
-(void)setPlayerViewControllerIsPresentingFullScreen:(BOOL)arg1 ;
-(BOOL)playerViewControllerIsPresentedFullScreen;
-(void)setPlayerViewControllerIsPresentedFullScreen:(BOOL)arg1 ;
-(BOOL)playerViewControllerHasInvalidViewControllerHierarchy;
-(void)setPlayerViewControllerHasInvalidViewControllerHierarchy:(BOOL)arg1 ;
-(BOOL)inlinePlaybackControlsAlwaysShowLargePlayButtonWhenPaused;
-(void)setInlinePlaybackControlsAlwaysShowLargePlayButtonWhenPaused:(BOOL)arg1 ;
-(BOOL)showsPictureInPictureButton;
-(void)setShowsPictureInPictureButton:(BOOL)arg1 ;
-(BOOL)showsDoneButtonWhenFullScreen;
-(void)setShowsDoneButtonWhenFullScreen:(BOOL)arg1 ;
-(void)setPictureInPictureController:(AVPictureInPictureController *)arg1 ;
-(BOOL)prefersAssetInspectionSuspended;
-(void)setPrefersAssetInspectionSuspended:(BOOL)arg1 ;
-(BOOL)isPlayingOnSecondScreen;
-(void)setPlayingOnSecondScreen:(BOOL)arg1 ;
-(AVPlaybackControlsView *)playbackControlsView;
-(void)setPlaybackControlsView:(AVPlaybackControlsView *)arg1 ;
-(AVPlayerControllerTimeResolver *)timeResolver;
-(void)setTimeResolver:(AVPlayerControllerTimeResolver *)arg1 ;
-(AVTimeFormatter *)elapsedTimeFormatter;
-(AVTimeFormatter *)remainingTimeFormatter;
-(UIAlertController *)routePickerAlertController;
-(void)setRoutePickerAlertController:(UIAlertController *)arg1 ;
-(AVRouteDetectorCoordinator *)routeDetectorCoordinator;
-(void)setRouteDetectorCoordinator:(AVRouteDetectorCoordinator *)arg1 ;
-(id)AVRouteDetectorCoordinatorMultipleRoutesDetectedObserver;
-(void)setAVRouteDetectorCoordinatorMultipleRoutesDetectedObserver:(id)arg1 ;
-(NSTimer *)loadingIndicatorTimer;
-(void)setLoadingIndicatorTimer:(NSTimer *)arg1 ;
-(UIViewPropertyAnimator *)collapseExpandSliderAnimator;
-(void)setCollapseExpandSliderAnimator:(UIViewPropertyAnimator *)arg1 ;
-(BOOL)prefersVolumeSliderExpanded;
-(BOOL)includesVideoGravityButton;
-(void)setIncludesVideoGravityButton:(BOOL)arg1 ;
-(BOOL)needsTimeResolver;
-(void)setNeedsTimeResolver:(BOOL)arg1 ;
-(BOOL)isCoveringWindow;
-(void)setCoveringWindow:(BOOL)arg1 ;
-(BOOL)isDescendantOfTrackingOrAnimatingScrollViewOrScrolledOffscreen;
-(void)setDescendantOfTrackingOrAnimatingScrollViewOrScrolledOffscreen:(BOOL)arg1 ;
-(double)timeStampOfPreviousObservedScrollViewDidScroll;
-(void)setTimeStampOfPreviousObservedScrollViewDidScroll:(double)arg1 ;
-(BOOL)hasPlaybackBegunSincePlayerControllerBecameReadyToPlay;
-(void)setHasPlaybackBegunSincePlayerControllerBecameReadyToPlay:(BOOL)arg1 ;
-(double)loadingIndicatorTimerDelay;
-(void)setLoadingIndicatorTimerDelay:(double)arg1 ;
-(BOOL)isResumingUpdates;
-(void)setResumingUpdates:(BOOL)arg1 ;
-(BOOL)isPlaybackSuspendedForScrubbing;
-(void)setPlaybackSuspendedForScrubbing:(BOOL)arg1 ;
-(BOOL)hasSeekableLiveStreamingContent;
-(void)setHasSeekableLiveStreamingContent:(BOOL)arg1 ;
-(BOOL)isScrubbingOrSeeking;
-(void)setScrubbingOrSeeking:(BOOL)arg1 ;
-(BOOL)shouldIgnoreTimeResolverUpdates;
-(void)setShouldIgnoreTimeResolverUpdates:(BOOL)arg1 ;
-(long long)videoGravityButtonType;
-(void)setVideoGravityButtonType:(long long)arg1 ;
-(CGRect)playbackViewFrame;
-(void)setPlaybackViewFrame:(CGRect)arg1 ;
-(AVPlayerViewController *)playerViewController;
-(void)setVideoGravity:(NSString *)arg1 ;
-(void)stopUpdates;
-(void)resumeUpdates;
-(BOOL)showsPlaybackControls;
-(void)setCanHideInteractiveContentOverlayView:(BOOL)arg1 ;
-(void)setRequiresLinearPlayback:(BOOL)arg1 ;
-(void)setContainingScrollView:(UIScrollView *)arg1 ;
-(UIScrollView *)containingScrollView;
-(AVPlayerController *)playerController;
-(void)setPlayerController:(AVPlayerController *)arg1 ;
-(void)setShowsPlaybackControls:(BOOL)arg1 ;
-(BOOL)isFullScreen;
-(void)setTimeControlStatus:(long long)arg1 ;
@end

