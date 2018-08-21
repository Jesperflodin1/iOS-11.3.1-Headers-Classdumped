/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:43 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <libobjc.A.dylib/MPAVLightweightRoutingControllerDelegate.h>
#import <libobjc.A.dylib/MPVolumeControllerDelegate.h>
#import <libobjc.A.dylib/MPVideoOverlay.h>
#import <libobjc.A.dylib/MPDetailSliderDelegate.h>

@protocol MPVideoOverlayDelegate, MPVideoControllerProtocol;
@class MPAVController, UINavigationBar, MPAVItem, MPDetailSlider, MPKnockoutButton, UIStatusBar, UIButton, UIActivityIndicatorView, UILabel, MPVolumeSlider, MPAVLightweightRoutingController, MPVolumeController, UIView, MPAudioAndSubtitlesController, NSLayoutConstraint, NSArray, UIViewController, _UIBackdropView, MPVideoView, NSString;

@interface MPVideoPlaybackOverlayView : UIView <UIPopoverPresentationControllerDelegate, MPAVLightweightRoutingControllerDelegate, MPVolumeControllerDelegate, MPVideoOverlay, MPDetailSliderDelegate> {

	MPDetailSlider* _scrubber;
	MPKnockoutButton* _playPauseButton;
	MPKnockoutButton* _fullscreenButton;
	MPKnockoutButton* _pictureInPictureButton;
	MPKnockoutButton* _airplayButton;
	UIStatusBar* _statusBar;
	UIButton* _doneButton;
	UIActivityIndicatorView* _loadingIndicator;
	UILabel* _loadingLabel;
	UIButton* _scaleButton;
	UILabel* _scrubInstructions1;
	UILabel* _scrubInstructions2;
	MPVolumeSlider* _volumeSlider;
	MPKnockoutButton* _leftButton;
	MPKnockoutButton* _rightButton;
	UIButton* _audioAndSubtitlesButton;
	MPAVLightweightRoutingController* _lightweightRoutingController;
	MPVolumeController* _volumeController;
	UIView* _topBarLayoutGuide;
	UIView* _topBarItemsGuide;
	UIView* _bottomBarTopLayoutGuide;
	UIView* _bottomBarBottomLayoutGuide;
	UIView* _bottomBarItemsGuide;
	MPAudioAndSubtitlesController* _audioAndSubtitlesController;
	BOOL _ticking;
	BOOL _ignoreTouchUp;
	BOOL _shouldResumePlayback;
	int _seekDirection;
	NSLayoutConstraint* _topBarBottomConstraint;
	NSLayoutConstraint* _topBarHeightConstraint;
	NSLayoutConstraint* _topBarLayoutGuideHeightConstraint;
	NSLayoutConstraint* _topItemsTopConstraint;
	NSLayoutConstraint* _topItemsTrailingConstraint;
	NSLayoutConstraint* _bottomBarHeightConstraint;
	NSLayoutConstraint* _bottomItemsBottomConstraint;
	NSLayoutConstraint* _bottomItemsLeftConstraint;
	NSLayoutConstraint* _bottomItemsRightConstraint;
	NSLayoutConstraint* _volumeSliderRightConstraint;
	NSLayoutConstraint* _volumeSliderWidthConstraint;
	NSArray* _topItemsConstraints;
	NSArray* _bottomItemsConstraints;
	double _previousTopBarMargin;
	NSArray* _topBarTraitCollectionConstraints;
	NSArray* _topItems;
	NSArray* _bottomItems;
	BOOL _allowsWirelessPlayback;
	BOOL navigationBarHidden;
	BOOL _automaticallyHandleTransportControls;
	BOOL _allowsExitFromFullscreen;
	BOOL _allowsPictureInPicture;
	BOOL _allowsAudioAndSubtitles;
	id<MPVideoOverlayDelegate> _delegate;
	MPAVController* _player;
	MPAVItem* _item;
	unsigned long long disabledParts;
	unsigned long long desiredParts;
	unsigned long long visibleParts;
	id<MPVideoControllerProtocol> videoViewController;
	long long _style;
	UIViewController* _viewControllerForModalPresentationOrientation;
	_UIBackdropView* _topBarBackdropView;
	_UIBackdropView* _bottomBarBackdropView;
	long long _overrideType;
	MPVideoView* _videoView;

}

@property (assign,nonatomic,__weak) UIViewController * viewControllerForModalPresentationOrientation;              //@synthesize viewControllerForModalPresentationOrientation=_viewControllerForModalPresentationOrientation - In the implementation block
@property (nonatomic,readonly) _UIBackdropView * topBarBackdropView;                                               //@synthesize topBarBackdropView=_topBarBackdropView - In the implementation block
@property (nonatomic,readonly) _UIBackdropView * bottomBarBackdropView;                                            //@synthesize bottomBarBackdropView=_bottomBarBackdropView - In the implementation block
@property (nonatomic,readonly) UIView * contentView; 
@property (assign,setter=_setOverrideType:,nonatomic) long long overrideType;                                      //@synthesize overrideType=_overrideType - In the implementation block
@property (assign,nonatomic,__weak) MPVideoView * videoView;                                                       //@synthesize videoView=_videoView - In the implementation block
@property (assign,nonatomic) long long style;                                                                      //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) BOOL automaticallyHandleTransportControls;                                            //@synthesize automaticallyHandleTransportControls=_automaticallyHandleTransportControls - In the implementation block
@property (assign,nonatomic) BOOL allowsScrubbing; 
@property (assign,nonatomic) BOOL allowsDetailScrubbing; 
@property (assign,nonatomic) BOOL allowsExitFromFullscreen;                                                        //@synthesize allowsExitFromFullscreen=_allowsExitFromFullscreen - In the implementation block
@property (assign,nonatomic) BOOL allowsPictureInPicture;                                                          //@synthesize allowsPictureInPicture=_allowsPictureInPicture - In the implementation block
@property (assign,nonatomic) BOOL allowsAudioAndSubtitles;                                                         //@synthesize allowsAudioAndSubtitles=_allowsAudioAndSubtitles - In the implementation block
@property (nonatomic,readonly) double bottomBarHeight; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MPVideoControllerProtocol> videoViewController; 
@property (assign,nonatomic) BOOL allowsWirelessPlayback;                                                          //@synthesize allowsWirelessPlayback=_allowsWirelessPlayback - In the implementation block
@property (assign,nonatomic) BOOL navigationBarHidden; 
@property (nonatomic,retain) MPAVController * player;                                                              //@synthesize player=_player - In the implementation block
@property (nonatomic,retain,readonly) UINavigationBar * navigationBar; 
@property (assign,nonatomic,__weak) id<MPVideoOverlayDelegate> delegate;                                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MPAVItem * item;                                                                      //@synthesize item=_item - In the implementation block
@property (assign,nonatomic) unsigned long long desiredParts; 
@property (assign,nonatomic) unsigned long long visibleParts; 
@property (assign,nonatomic) unsigned long long disabledParts; 
-(void)setHidden:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)removeFromSuperview;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIView *)contentView;
-(MPAVItem *)item;
-(id<MPVideoOverlayDelegate>)delegate;
-(void)setDelegate:(id<MPVideoOverlayDelegate>)arg1 ;
-(void)dealloc;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)didMoveToWindow;
-(void)setBounds:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UINavigationBar *)navigationBar;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(void)updateConstraints;
-(void)setItem:(MPAVItem *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 ;
-(void)presentationController:(id)arg1 willPresentWithAdaptiveStyle:(long long)arg2 transitionCoordinator:(id)arg3 ;
-(void)setNavigationBarHidden:(BOOL)arg1 ;
-(void)_tick:(id)arg1 ;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)_shouldHideStatusBar;
-(void)setHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setAllowsWirelessPlayback:(BOOL)arg1 ;
-(BOOL)allowsWirelessPlayback;
-(MPVideoView *)videoView;
-(BOOL)navigationBarHidden;
-(unsigned long long)visibleParts;
-(unsigned long long)desiredParts;
-(void)setDesiredParts:(unsigned long long)arg1 ;
-(void)setVisibleParts:(unsigned long long)arg1 ;
-(void)setDisabledParts:(unsigned long long)arg1 ;
-(void)_itemReadyToPlay:(id)arg1 ;
-(void)setDesiredParts:(unsigned long long)arg1 animate:(BOOL)arg2 ;
-(void)setVisibleParts:(unsigned long long)arg1 animate:(BOOL)arg2 ;
-(void)setVideoView:(MPVideoView *)arg1 ;
-(unsigned long long)disabledParts;
-(BOOL)allowsDetailScrubbing;
-(void)setAllowsDetailScrubbing:(BOOL)arg1 ;
-(void)stopTicking;
-(void)startTicking;
-(void)lightweightRoutingController:(id)arg1 didChangeDevicePresenceDetected:(BOOL)arg2 ;
-(void)lightweightRoutingController:(id)arg1 didChangePickedRoutes:(id)arg2 ;
-(void)_activeAudioRouteDidChange:(id)arg1 ;
-(void)_unregisterForItemNotifications:(id)arg1 ;
-(void)_unregisterForPlayerNotifications:(id)arg1 ;
-(void)_updateTopBarBoundsBasedConstraints;
-(void)_updateScaleButton;
-(BOOL)allowsScrubbing;
-(void)setAllowsScrubbing:(BOOL)arg1 ;
-(void)_configureAuxiliaryButtons:(BOOL)arg1 ;
-(void)_itemChanged:(id)arg1 ;
-(void)_updateVolumeSlider;
-(void)_configureTransportControls;
-(void)_registerForPlayerNotifications:(id)arg1 ;
-(BOOL)updateTimeBasedValues;
-(void)setHidden:(BOOL)arg1 animated:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)setHidden:(BOOL)arg1 animated:(BOOL)arg2 animateAlongside:(/*^block*/id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)_newFrostedGlassBackdropView;
-(void)_playPauseButtonTapped:(id)arg1 ;
-(void)_observeControl:(id)arg1 ;
-(void)_fullscreenButtonTapped:(id)arg1 ;
-(id)_imageNamed:(id)arg1 forControlState:(unsigned long long)arg2 ;
-(void)_pictureInPictureButtonTapped:(id)arg1 ;
-(void)_scaleButtonTapped:(id)arg1 ;
-(void)_updateVolumeImage:(float)arg1 ;
-(void)_skipButtonTouchDown:(id)arg1 ;
-(void)_skipButtonTouchCancel:(id)arg1 ;
-(void)_skipButtonTouchUpInside:(id)arg1 ;
-(void)_skipButtonTouchUpOutside:(id)arg1 ;
-(void)_audioAndSubtitlesButtonTapped:(id)arg1 ;
-(void)_showScrubInstructions;
-(void)_notifyDelegateOfUserEventBegin:(unsigned long long)arg1 ;
-(void)_hideScrubInstructions;
-(void)_notifyDelegateOfUserEventEnd:(unsigned long long)arg1 ;
-(void)_handleDismissAudioAndSubtitlesController;
-(void)_notifyDelegateOfUserEventCancel:(unsigned long long)arg1 ;
-(void)_notifyDelegateOfUserEvent:(unsigned long long)arg1 ;
-(void)_buttonInteractionBegan:(id)arg1 ;
-(void)_buttonInteractionCanceled:(id)arg1 ;
-(void)_buttonInteractionEnded:(id)arg1 ;
-(void)_startSeeking;
-(void)_registerForItemNotifications:(id)arg1 ;
-(void)_updateLoadingIndicator;
-(void)_setButtons:(id)arg1 inBar:(id)arg2 animated:(BOOL)arg3 ;
-(BOOL)allowsAudioAndSubtitles;
-(id)_imageNamed:(id)arg1 ;
-(void)_alternateTracksAvailable:(id)arg1 ;
-(void)_durationAvailable:(id)arg1 ;
-(void)_seekabilityChanged:(id)arg1 ;
-(void)_effectiveScaleModeDidChange:(id)arg1 ;
-(void)_videoViewDidMoveToWindow:(id)arg1 ;
-(void)volumeController:(id)arg1 volumeControlAvailableDidChange:(BOOL)arg2 ;
-(void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2 ;
-(void)showAlternateTracks;
-(void)hideAlternateTracks;
-(id<MPVideoControllerProtocol>)videoViewController;
-(void)setVideoViewController:(id<MPVideoControllerProtocol>)arg1 ;
-(void)detailSliderTrackingDidBegin:(id)arg1 ;
-(void)detailSliderTrackingDidEnd:(id)arg1 ;
-(void)detailSliderTrackingDidCancel:(id)arg1 ;
-(void)detailSlider:(id)arg1 didChangeValue:(float)arg2 ;
-(void)detailSlider:(id)arg1 didChangeScrubSpeed:(long long)arg2 ;
-(void)setAllowsExitFromFullscreen:(BOOL)arg1 ;
-(void)setAllowsPictureInPicture:(BOOL)arg1 ;
-(double)bottomBarHeight;
-(void)_setScrubberDuration:(double)arg1 ;
-(void)_setOverrideType:(long long)arg1 ;
-(void)_setScrubberValue:(double)arg1 ;
-(BOOL)automaticallyHandleTransportControls;
-(void)setAutomaticallyHandleTransportControls:(BOOL)arg1 ;
-(BOOL)allowsExitFromFullscreen;
-(BOOL)allowsPictureInPicture;
-(void)setAllowsAudioAndSubtitles:(BOOL)arg1 ;
-(UIViewController *)viewControllerForModalPresentationOrientation;
-(void)setViewControllerForModalPresentationOrientation:(UIViewController *)arg1 ;
-(_UIBackdropView *)topBarBackdropView;
-(_UIBackdropView *)bottomBarBackdropView;
-(long long)overrideType;
-(MPAVController *)player;
-(void)_doneButtonTapped:(id)arg1 ;
-(void)_airplayButtonTapped:(id)arg1 ;
-(void)_updateAirplayButton;
-(void)setPlayer:(MPAVController *)arg1 ;
-(void)_playbackStateChanged:(id)arg1 ;
-(void)_applicationDidEnterBackgroundNotification:(id)arg1 ;
-(void)_applicationWillEnterForegroundNotification:(id)arg1 ;
@end

