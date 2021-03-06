//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CbBasicInputViewController.h"

#import "UIScrollViewDelegate-Protocol.h"

@class APDCoachingTipsManager, CbKeyboardImpl, MSKeyboardView, NSString;

@interface MSKeyboardViewController : CbBasicInputViewController <UIScrollViewDelegate>
{
    CbKeyboardImpl *keyboardImpl;
    _Bool blockUpdateCSTPickerFromNotification;
    _Bool _needsSustainStateRefreshAtNoteOn;
    APDCoachingTipsManager *_apdCoachingTipsManager;
}

+ (_Bool)needsFullSizeFrameOnWidePadForTrack:(id)arg1;
+ (Class)inputMethodSettingsClass;
+ (id)nibName;
@property(nonatomic) _Bool needsSustainStateRefreshAtNoteOn; // @synthesize needsSustainStateRefreshAtNoteOn=_needsSustainStateRefreshAtNoteOn;
@property(retain, nonatomic) APDCoachingTipsManager *apdCoachingTipsManager; // @synthesize apdCoachingTipsManager=_apdCoachingTipsManager;
@property(readonly, nonatomic) CbKeyboardImpl *keyboardImpl; // @synthesize keyboardImpl;
- (void).cxx_destruct;
- (id)switchTIButton;
- (void)_runStandardInputViewControllerSwitchingAnimationToControllerID:(id)arg1 animationCompletionBlock:(CDUnknownBlockType)arg2;
- (void)startInputViewControllerSwitchingAnimationToControllerID:(id)arg1 animationCompletionBlock:(CDUnknownBlockType)arg2;
- (_Bool)inputViewControllerSwitchingSupportsCustomAnimationInTI;
- (id)inputViewControllerSwitchingGetSpecialMovingItemsSnapshotViewFramesForAnimation:(_Bool)arg1;
- (id)inputViewControllerSwitchingGetSpecialMovingItemsSnapshotViewsForAnimation:(_Bool)arg1;
- (id)inputViewControllerSwitchingGetSnapshotViewForAnimation:(_Bool)arg1;
- (_Bool)_needsSpecialHandlingForMorphPadAnimation;
- (double)inputViewControllerSwitchingSimpleMoveAndFadeAnimationOffset;
- (_Bool)inputViewControllerSwitchingSupportsSimpleMoveAndFadeAnimation;
- (void)controllerDidOpenAfterSwitchToFromControllerForSameTrackWithContext:(id)arg1;
- (id)controllerWillCloseAndSwitchToOtherControllerForSameTrack;
- (_Bool)supportsParamEditMode;
- (_Bool)shouldAutorotate;
- (void)skinDidLoad;
- (id)parameterMappingController;
- (void)fixPhoneFrameBugIfNeeded;
- (void)paramEditModeWillChange:(_Bool)arg1 animated:(_Bool)arg2 duration:(double)arg3;
- (void)resetDemoNotes;
- (void)resetCurrentVisibleMidiControllerUI;
- (void)sendCurrentVisibleControllerUIMidiEvents:(_Bool)arg1;
- (void)previewPlayerDidStop;
- (void)stopCurrentPreview;
- (unsigned long long)sequentialDampenedVelocityForInteraction:(id)arg1;
- (unsigned long long)normalizedVelocity:(unsigned long long)arg1;
- (void)didMakeScreenShot:(int)arg1 context:(id)arg2;
- (id)willMakeScreenShot:(int)arg1;
- (void)writeImportantUIStatesToSettings;
@property(readonly, retain, nonatomic) MSKeyboardView *keyboardView;
- (id)cstBrowserPassThroughViews;
- (id)passthroughViews;
- (_Bool)isSkinControlled;
- (void)updateVisibleHelpSets;
- (id)visibleHelpIndices;
- (id)allHelpIndices;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)helpOverlayPageID;
- (void)helpOverlayInitializePage:(id)arg1 forMainID:(id)arg2 pageID:(id)arg3;
- (void)updateHelpOverlay;
- (void)keyboardImplHelpOverlayChanged:(id)arg1;
- (void)trackDidChangeWithOldTrack:(id)arg1;
- (_Bool)channelStripLoadedAndWantsAnimation;
- (void)channelDidLoadChannelStrip:(_Bool)arg1 isUndoRedo:(_Bool)arg2;
- (void)updateCSTPicker;
- (id)sendEventToViewForView:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)didReceiveBackgroundWarning:(id)arg1;
- (void)songWillClose;
- (void)controllerWillClose;
- (void)controllerDidOpen;
- (unsigned long long)supportedInterfaceOrientations;
- (void)dealloc;
- (void)viewDidLoad;
- (id)nibName;
- (void)loadView;
- (Class)keyboardImplClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

