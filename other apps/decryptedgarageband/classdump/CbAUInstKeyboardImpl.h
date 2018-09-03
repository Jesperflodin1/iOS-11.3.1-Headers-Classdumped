//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CbKeyboardImpl.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class CbAUInstParameterViewController, MAUIProgressViewController, NSString, UIButton, UIView, UIViewController, UIVisualEffectView;

@interface CbAUInstKeyboardImpl : CbKeyboardImpl <UIGestureRecognizerDelegate>
{
    CbAUInstParameterViewController *_auParameterViewController;
    int _currentSizeClass;
    UIVisualEffectView *_parameterContainerView;
    UIView *_audioUnitView;
    UIView *_audioUnitParentView;
    UIVisualEffectView *_extraWheelContainerView;
    UIView *_genericContainer;
    UIView *_customContainer;
    UIView *_waitingContainer;
    UIView *_notFoundView;
    _Bool _hasNativeUI;
    _Bool _customUIVisibleBeforeScreenshot;
    _Bool _scalePropertiesObserverRegistered;
    _Bool _supportsZoomedMode;
    _Bool _supportsSmallFullWidthMode;
    _Bool _supportsSmallNarrowMode;
    _Bool _supportsZoomedModeOnly;
    _Bool _showAudioUnitCustomUIOnReload;
    struct CGSize _zoomedViewViewConfigurationSize;
    _Bool _internalZoomModeVisible;
    _Bool _showWheelsOnFullScreeenClose;
    MAUIProgressViewController *_progressViewController;
    UIButton *_toggleCustomUIButton;
    UIButton *_toggleExtraWheelsButton;
    UIButton *_toggleFullSizeButton;
    UIButton *_presetsButton;
    UIViewController *_customViewController;
}

@property(retain, nonatomic) UIViewController *customViewController; // @synthesize customViewController=_customViewController;
@property(retain, nonatomic) UIButton *presetsButton; // @synthesize presetsButton=_presetsButton;
@property(retain, nonatomic) UIButton *toggleFullSizeButton; // @synthesize toggleFullSizeButton=_toggleFullSizeButton;
@property(retain, nonatomic) UIButton *toggleExtraWheelsButton; // @synthesize toggleExtraWheelsButton=_toggleExtraWheelsButton;
@property(retain, nonatomic) UIButton *toggleCustomUIButton; // @synthesize toggleCustomUIButton=_toggleCustomUIButton;
- (void).cxx_destruct;
- (void)navBarZoomButtonPressed;
- (_Bool)navBarShouldShowZoomButton;
- (void)externalFullScreenModeWillCloseAnimated:(_Bool)arg1 targetViewSize:(struct CGSize)arg2;
- (void)externalFullScreenModeWillOpenAnimated:(_Bool)arg1 targetViewSize:(struct CGSize)arg2;
- (void)_notifyAUViewControllerForSizeChangeWithSize:(struct CGSize)arg1 zoomedMode:(_Bool)arg2;
- (void)externalFullScreenModeDidCloseAnimated:(_Bool)arg1;
- (void)externalFullScreenModeDidOpenAnimated:(_Bool)arg1;
- (struct CGRect)externalFullScreenModeViewOriginalFrameInSuperview;
- (id)externalFullScreenModeSuperview;
- (id)externalFullScreenModeView;
- (void)didMakeScreenShot:(int)arg1 context:(id)arg2;
- (id)willMakeScreenShot:(int)arg1;
- (void)_hideIfNotHidden:(id)arg1 hiddenViewArray:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)audioUnitDisabledAfterCrashHandler:(id)arg1;
- (void)audioUnitReloadedAfterCrashHandler:(id)arg1;
- (void)audioUnitWillUnloadHandler:(id)arg1;
- (void)plugInSettingChangedHandler:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_updatePropertyGroupButtonPositions;
- (void)setShowExtraWheels:(_Bool)arg1 adjustAudioUnitParentViewIfNeeded:(_Bool)arg2 animated:(_Bool)arg3;
- (void)setShowExtraWheels:(_Bool)arg1;
- (void)presetsButtonAction:(id)arg1;
- (void)toggleExtraWheelsVisibilityAction:(id)arg1;
- (void)toggleCustomUIVisibilityAction:(id)arg1;
- (void)toggleFullSizeAction:(id)arg1;
- (void)handleResize:(id)arg1;
- (void)addAudioUnitNotFoundPlaceholders;
- (void)addSmallViewPlaceholders;
- (_Bool)customUIVisible;
- (void)setCustomUIVisible:(_Bool)arg1 animated:(_Bool)arg2 saveState:(_Bool)arg3;
- (void)setCustomUIVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setCustomUIVisible:(_Bool)arg1;
- (void)setInternalZoomedModeActive:(_Bool)arg1 animated:(_Bool)arg2;
- (struct CGRect)_internalFullScreenModeFrame;
- (void)_insertCustomViewController:(id)arg1;
- (_Bool)isZoomedModeVisible;
@property(nonatomic) int sizeClass;
- (void)reloadCSTSelector;
- (void)updatePresetsButton;
- (void)updateControlBarButtons;
- (void)updateParameterViewForSizeClass:(int)arg1;
- (void)reloadParametersFromPlugin:(_Bool)arg1;
- (void)updateParametersFromPlugin;
- (void)updateParameter:(long long)arg1 withValueDict:(id)arg2;
- (struct CGRect)frameForSizeClass:(int)arg1 controlsView:(_Bool)arg2;
- (struct CGRect)frameForSizeClass:(int)arg1;
- (_Bool)audioUnitHasCustomUi;
- (_Bool)skinSupportsFaceTrackingButtonForSkinID:(id)arg1;
- (id)currentIconOfSize:(double)arg1;
- (void)loadAUViews;
- (void)hideProgressView;
- (void)audioUnitLoadTimeout;
- (void)showProgressView;
- (void)loadView;
- (void)deorganize;
- (void)setVelocityHidden:(_Bool)arg1;
- (id)coachingTipPlaceholderLabels;
- (_Bool)shouldShowDoubleKeyboardInKeyboardProperties;
- (struct CGRect)defaultWheelsViewFrame;
- (void)initializePrimaryKeyboardFrame;
- (void)initializeControlFrames;
- (void)loadedCSTWithName:(id)arg1 andSkinID:(id)arg2 andImage:(id)arg3 layoutImmediately:(_Bool)arg4;
- (struct CGRect)containerFrame;
- (void)dealloc;
- (void)willCloseUI;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

