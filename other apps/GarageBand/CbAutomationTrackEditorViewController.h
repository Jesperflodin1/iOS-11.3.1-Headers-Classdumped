//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CbBasicTrackEditorViewController.h"

#import "CbTrackEditorModalNavBarControllerDelegate-Protocol.h"

@class CbArrangeTrackAutomationView, CbTrackEditorModalNavBarController, DfTrackEvent, MAUIInfoOverlayViewController, UIButton, UIView;

@interface CbAutomationTrackEditorViewController : CbBasicTrackEditorViewController <CbTrackEditorModalNavBarControllerDelegate>
{
    UIView *_trackBackgroundDimView;
    UIView *_addModeTintView;
    CbArrangeTrackAutomationView *_automationView;
    int _draggingSessionState;
    long long _clockOnDragStart;
    long long _valueOnDragStart;
    DfTrackEvent *_currentMenuTrackEvent;
    MAUIInfoOverlayViewController *_infoOverlayController;
    UIView *_infoOverlayAnchorView;
    CbTrackEditorModalNavBarController *_modalNavBarController;
    UIButton *_automationEnabledButton;
}

- (void).cxx_destruct;
- (void)updateHelpOverlay;
- (void)updateVisibleHelpSets;
- (id)visibleHelpIndices;
- (id)allHelpIndices;
- (void)_hideInfoOverlay;
- (void)_showInfoOverlayForEditorObject:(id)arg1;
- (void)_updateInfoOverlayForEditorObject:(id)arg1;
- (void)closeInfoOverlayImmediatelyAndRelease;
- (void)setAddObjectsModeEnabled:(_Bool)arg1;
- (_Bool)addObjectsModeEnabled;
- (void)updateRulerSelectionIndicator;
- (void)switchToPluginAutomationForSlot:(int)arg1 andParamID:(int)arg2;
- (void)switchToControllerWithInfo:(id)arg1;
- (void)_updateControllerChooser;
- (void)_enableAutomationIfNecessary;
- (void)_automationEnabledButtonAction:(id)arg1;
- (void)_handleTrackSelection:(id)arg1;
- (void)_handleAutomationContentChange:(id)arg1;
- (void)_handleTrackAutomationModeOrActiveChanged:(id)arg1;
- (void)_updateAutomationEnabledButton;
- (void)_handleAddEventsModeEnabledChanged:(id)arg1;
- (void)_updateBackgroundColor;
- (void)menuSelectAll:(id)arg1;
- (void)menuDelete:(id)arg1;
- (void)menuPaste:(id)arg1;
- (void)menuCut:(id)arg1;
- (void)menuCopy:(id)arg1;
- (id)currentMenuEditorObject;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)openEditorContextMenuForEditorObject:(id)arg1 tapPoint:(struct CGPoint)arg2 wasAlreadyOpen:(_Bool)arg3;
- (_Bool)canBecomeFirstResponder;
- (void)handleRubberBandSelectionAction:(id)arg1;
- (void)getRubberBandFixedY:(double *)arg1 andFixedHeight:(double *)arg2;
- (_Bool)allowObjectEditingInEditorObjectsSelectionDisabledMode;
- (_Bool)supportsRubberBandSelection;
- (void)handleNonSelectionTouchAtPoint:(struct CGPoint)arg1 forTouch:(id)arg2 createdEditorObject:(id *)arg3;
- (struct CGPoint)pointOffsetForAddingNewEditorObjectAtPoint:(struct CGPoint)arg1 forTouch:(id)arg2;
- (void)handleNonSelectionSimpleTapOnEditorObject:(id)arg1;
- (void)_deleteTrackEvent:(id)arg1;
- (void)touchUpInEditorObjectHandle:(id)arg1 forEditorObject:(id)arg2;
- (void)touchDownInEditorObjectHandle:(id)arg1 forEditorObject:(id)arg2 handleWasCreatedWithLongTap:(_Bool)arg3 handleWasCreatedForAlreadySelectObject:(_Bool)arg4;
- (void)_deferredStartDraggingSessionWithInfoDict:(id)arg1;
- (void)_startDraggingSessionForTrackEvent:(id)arg1 handleView:(id)arg2;
- (void)editorObjectHandle:(id)arg1 actionWithNewFrame:(struct CGRect)arg2 forHandle:(long long)arg3 editorObject:(id)arg4;
- (CDStruct_7934c616)getCurrentSelectedObjectsEditingLimits;
- (void)updateTrackArea;
- (void)setEditorObjectHandle:(id)arg1 forEditorObject:(id)arg2;
- (_Bool)hasInvisibleHandle;
- (id)editorObjectHandleAssetSetPathForEditorObject:(id)arg1;
- (_Bool)shouldAllowVerticalAutoScrollingForHandleWithEditorObject:(id)arg1;
- (unsigned long long)countOfSelectedEditorObjects;
- (_Bool)hasEditableEditorObjects;
- (void)deselectAllEditorObjects;
- (long long)endClockForEditorObject:(id)arg1;
- (long long)startClockForEditorObject:(id)arg1;
- (struct CGRect)frameForEditorObject:(id)arg1;
- (_Bool)isEditorObjectSelected:(id)arg1;
- (void)setSelected:(_Bool)arg1 forEditorObject:(id)arg2;
- (id)getEditorObjectForSpecialCurveHitTestAtPoint:(struct CGPoint)arg1 pSecondEditorObject:(id *)arg2;
- (id)getEditorObjectAtPointForMultipleSelectionGesture:(struct CGPoint)arg1;
- (_Bool)editorObjectsSelectionEnabledAtPoint:(struct CGPoint)arg1;
- (void)editorDidOpenAnimated:(_Bool)arg1;
- (void)editorWillOpenAnimated:(_Bool)arg1;
- (void)editorWillCloseAnimated:(_Bool)arg1;
- (void)editorDidCloseAnimated:(_Bool)arg1;
- (_Bool)_shouldJustBeDisabledUISpecialCase;
- (void)dealloc;
- (void)viewDidUnload;
- (void)cleanUp;
- (void)initializeNavigationBarWithNavBarView:(id)arg1 centerLabel:(id)arg2 centerLabelContainer:(id)arg3 initializationNumber:(long long)arg4;
- (void)initializeSpecialViews;
- (void)removeHelperViewsAddedToArrangeTrackViews;
- (void)loadView;
- (_Bool)needsViewAboveRegionContainerView;
- (struct CGSize)minimumObjectHandleTouchZoneSize;
- (double)bottomInsetInTrack;
- (double)topInsetInTrack;
- (double)maxHeight;
- (double)minHeight;
- (double)initialEditorHeight;

@end
