/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:35 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIPanelControllerDelegate.h>
#import <UIKit/UIDimmingViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UISplitViewControllerImpl.h>

@protocol UISplitViewControllerDelegate;
@class UISplitViewController, UISplitViewControllerPanelImplDisplayModeButtonItem, NSString, UITraitCollection, UISlidingBarStateRequest, UIResponder, UIPanelController, UIPanGestureRecognizer, UIDimmingView, UIViewController, UIImage, UISlidingBarConfiguration, UISlidingBarState, NSArray;

@interface UISplitViewControllerPanelImpl : NSObject <UIPanelControllerDelegate, UIDimmingViewDelegate, UIGestureRecognizerDelegate, UISplitViewControllerImpl> {

	UISplitViewController* _svc;
	UISplitViewControllerPanelImplDisplayModeButtonItem* _displayModeButtonItem;
	NSString* _displayModeButtonItemTitle;
	double _presentationGestureDirection;
	long long _lastNotifiedMode;
	long long _overrideReportedDisplayMode;
	long long _animatingToDisplayMode;
	BOOL _lastShouldAllowChange;
	BOOL _lastNotifiedIsCollapsed;
	UITraitCollection* _transitioningToTraitCollection;
	CGSize _transitioningToSize;
	long long _transitioningToOrientation;
	UITraitCollection* _suspendedTraitCollection;
	CGSize _suspendedSize;
	UISlidingBarStateRequest* _suspendedStateRequest;
	long long _suspendedState;
	UIResponder* _postTransitionResponder;
	long long _primaryEdge;
	struct {
		unsigned usedNewAPI : 1;
		unsigned primaryHidingState : 2;
		unsigned didSetLastShouldAllowChangeDuringUpdate : 1;
		unsigned hasTransitioningSizeAndOrientation : 1;
		unsigned hasPendingPreferredDisplayModeChange : 1;
		unsigned firstResponderChangedFromPostTransitionResponder : 1;
		unsigned firstResponderChangedFromPostTransitionResponderToNil : 1;
	}  _flags;
	double _lastUserInitiatedPrimaryWidth;
	BOOL _presentsWithGesture;
	id<UISplitViewControllerDelegate> _delegate;
	long long _preferredDisplayMode;
	double _preferredPrimaryColumnWidthFraction;
	double _minimumPrimaryColumnWidth;
	double _maximumPrimaryColumnWidth;
	UIPanelController* _panelController;
	UIPanGestureRecognizer* __presentationGestureRecognizer;
	UIDimmingView* __dimmingView;
	UIViewController* __preservedDetailController;
	UIImage* __fullScreenButtonImage;

}

@property (nonatomic,retain) UIPanelController * panelController;                                                                            //@synthesize panelController=_panelController - In the implementation block
@property (setter=_setPresentationGestureRecognizer:,nonatomic,retain) UIPanGestureRecognizer * _presentationGestureRecognizer;              //@synthesize _presentationGestureRecognizer=__presentationGestureRecognizer - In the implementation block
@property (setter=_setDimmingView:,nonatomic,retain) UIDimmingView * _dimmingView;                                                           //@synthesize _dimmingView=__dimmingView - In the implementation block
@property (setter=_setPreservedDetailController:,nonatomic,retain) UIViewController * _preservedDetailController;                            //@synthesize _preservedDetailController=__preservedDetailController - In the implementation block
@property (setter=_setFullScreenButtonImage:,nonatomic,retain) UIImage * _fullScreenButtonImage;                                             //@synthesize _fullScreenButtonImage=__fullScreenButtonImage - In the implementation block
@property (nonatomic,retain) UIViewController * leadingViewController; 
@property (nonatomic,retain) UIViewController * mainViewController; 
@property (nonatomic,retain) UIViewController * trailingViewController; 
@property (nonatomic,copy) UISlidingBarConfiguration * configuration; 
@property (nonatomic,readonly) UISlidingBarState * currentState; 
@property (nonatomic,readonly) NSArray * possibleStates; 
@property (nonatomic,copy) UISlidingBarStateRequest * stateRequest; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * viewControllers; 
@property (assign,nonatomic,__weak) id<UISplitViewControllerDelegate> delegate;                                                              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL presentsWithGesture;                                                                                       //@synthesize presentsWithGesture=_presentsWithGesture - In the implementation block
@property (getter=isCollapsed,nonatomic,readonly) BOOL collapsed; 
@property (assign,nonatomic) long long preferredDisplayMode;                                                                                 //@synthesize preferredDisplayMode=_preferredDisplayMode - In the implementation block
@property (assign,nonatomic) double preferredPrimaryColumnWidthFraction;                                                                     //@synthesize preferredPrimaryColumnWidthFraction=_preferredPrimaryColumnWidthFraction - In the implementation block
@property (assign,nonatomic) double minimumPrimaryColumnWidth;                                                                               //@synthesize minimumPrimaryColumnWidth=_minimumPrimaryColumnWidth - In the implementation block
@property (assign,nonatomic) double maximumPrimaryColumnWidth;                                                                               //@synthesize maximumPrimaryColumnWidth=_maximumPrimaryColumnWidth - In the implementation block
@property (assign,nonatomic) long long primaryEdge; 
@property (assign,nonatomic) float masterColumnWidth; 
@property (assign,nonatomic) float gutterWidth; 
@property (assign,nonatomic) BOOL hidesMasterViewInPortrait; 
@property (setter=_setDisplayModeButtonItemTitle:,nonatomic,copy) NSString * _displayModeButtonItemTitle; 
+(id)_withDisabledAppearanceTransitions:(BOOL)arg1 forVisibleDescendantsOf:(id)arg2 perform:(/*^block*/id)arg3 ;
-(id<UISplitViewControllerDelegate>)delegate;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<UISplitViewControllerDelegate>)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)_gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(UISlidingBarState *)currentState;
-(id)preferredFocusedView;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)_commonInit;
-(id)preferredFocusEnvironments;
-(BOOL)_disableAutomaticKeyboardBehavior;
-(void)_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(BOOL)_gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(BOOL)_gestureRecognizerShouldBegin:(id)arg1 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(CGRect)_frameForChildContentContainer:(id)arg1 ;
-(void)_updateLayoutForStatusBarAndInterfaceOrientation;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(BOOL)_isCollapsed;
-(double)_contentMarginForChildViewController:(id)arg1 ;
-(UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(BOOL*)arg2 ;
-(void)_marginInfoForChild:(id)arg1 leftMargin:(double*)arg2 rightMargin:(double*)arg3 ;
-(void)_updateChildContentMargins;
-(long long)preferredInterfaceOrientationForPresentation;
-(BOOL)_shouldPersistViewWhenCoding;
-(void)unloadViewForced:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)purgeMemoryForReason:(int)arg1 ;
-(void)_descendantWillPresentViewController:(id)arg1 modalSourceViewController:(id)arg2 presentationController:(id)arg3 animated:(BOOL)arg4 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(id)_childViewControllersToSendViewWillTransitionToSize;
-(BOOL)_shouldSynthesizeSupportedOrientations;
-(BOOL)_hasPreferredInterfaceOrientationForPresentation;
-(void)_getRotationContentSettings:(SCD_Struct_UI88*)arg1 ;
-(BOOL)_handlesCounterRotationForPresentation;
-(void)removeChildViewController:(id)arg1 ;
-(void)updateViewConstraints;
-(BOOL)_optsOutOfPopoverControllerHierarchyCheck;
-(void)showViewController:(id)arg1 sender:(id)arg2 ;
-(void)showDetailViewController:(id)arg1 sender:(id)arg2 ;
-(UIDimmingView *)_dimmingView;
-(id)_allContainedViewControllers;
-(id)_additionalViewControllersToCheckForUserActivity;
-(NSArray *)viewControllers;
-(void)setViewControllers:(NSArray *)arg1 ;
-(id)detailViewController;
-(id)_primaryContentResponder;
-(void)_didChangeToFirstResponder:(id)arg1 ;
-(void)setConfiguration:(UISlidingBarConfiguration *)arg1 ;
-(UISlidingBarConfiguration *)configuration;
-(BOOL)isCollapsed;
-(UISlidingBarStateRequest *)stateRequest;
-(void)dimmingViewWasTapped:(id)arg1 ;
-(id)masterViewController;
-(id)initWithSplitViewController:(id)arg1 ;
-(void)_willBeginSnapshotSession;
-(void)_didEndSnapshotSession;
-(void)_initWithCoder:(id)arg1 ;
-(BOOL)presentsWithGesture;
-(void)setPresentsWithGesture:(BOOL)arg1 ;
-(long long)preferredDisplayMode;
-(void)setPreferredDisplayMode:(long long)arg1 ;
-(long long)displayMode;
-(id)displayModeButtonItem;
-(double)preferredPrimaryColumnWidthFraction;
-(void)setPreferredPrimaryColumnWidthFraction:(double)arg1 ;
-(double)minimumPrimaryColumnWidth;
-(void)setMinimumPrimaryColumnWidth:(double)arg1 ;
-(double)maximumPrimaryColumnWidth;
-(void)setMaximumPrimaryColumnWidth:(double)arg1 ;
-(double)primaryColumnWidth;
-(void)setPrimaryEdge:(long long)arg1 ;
-(long long)primaryEdge;
-(float)masterColumnWidth;
-(void)setMasterColumnWidth:(float)arg1 ;
-(float)gutterWidth;
-(void)setGutterWidth:(float)arg1 ;
-(BOOL)hidesMasterViewInPortrait;
-(void)setHidesMasterViewInPortrait:(BOOL)arg1 ;
-(NSString *)_displayModeButtonItemTitle;
-(void)_setDisplayModeButtonItemTitle:(id)arg1 ;
-(id)_primaryDimmingView;
-(BOOL)_isRotating;
-(CGSize)_contentSizeForChildViewController:(id)arg1 inPopoverController:(id)arg2 ;
-(void)_popoverController:(id)arg1 willChangeToVisible:(BOOL)arg2 ;
-(void)_popoverController:(id)arg1 didChangeFromVisible:(BOOL)arg2 ;
-(void)_willShowCollapsedDetailViewController:(id)arg1 inTargetController:(id)arg2 ;
-(void)toggleMasterVisible:(id)arg1 ;
-(UIViewController *)leadingViewController;
-(void)setLeadingViewController:(UIViewController *)arg1 ;
-(UIViewController *)mainViewController;
-(void)setMainViewController:(UIViewController *)arg1 ;
-(UIViewController *)trailingViewController;
-(void)setTrailingViewController:(UIViewController *)arg1 ;
-(NSArray *)possibleStates;
-(void)setStateRequest:(UISlidingBarStateRequest *)arg1 ;
-(void)animateToRequest:(id)arg1 ;
-(void)updateDisplayModeButtonItem;
-(void)_updateDisplayModeButtonItem;
-(long long)_primaryHidingState;
-(long long)_effectiveTargetDisplayMode;
-(BOOL)_layoutPrimaryOnRight;
-(UIViewController *)_preservedDetailController;
-(id)_childContainingSender:(id)arg1 ;
-(void)_setPreservedDetailController:(id)arg1 ;
-(void)_setPrimaryHidingState:(long long)arg1 ;
-(void)_triggerDisplayModeAction:(id)arg1 ;
-(void)setPanelController:(UIPanelController *)arg1 ;
-(UIPanelController *)panelController;
-(void)_updatePresentationGestureRecognizer;
-(BOOL)_isLeadingShown;
-(long long)_displayModeForState:(id)arg1 ;
-(void)_updateDimmingView;
-(BOOL)_iPadShouldUseOverlayInCurrentEnvironment;
-(long long)_effectiveTargetDisplayModeForDisplayMode:(long long)arg1 ;
-(void)_withDisabledAppearanceTransitionsPerform:(/*^block*/id)arg1 ;
-(void)_stopTransitionsInViewController:(id)arg1 ;
-(UIPanGestureRecognizer *)_presentationGestureRecognizer;
-(void)_presentationGestureRecognizerChanged:(id)arg1 ;
-(void)_setPresentationGestureRecognizer:(id)arg1 ;
-(void)_setLeadingShownFromGesture:(BOOL)arg1 ;
-(void)_setDimmingView:(id)arg1 ;
-(UIImage *)_fullScreenButtonImage;
-(void)_setFullScreenButtonImage:(id)arg1 ;
-(long long)_fullScreenStateForOrientation:(long long)arg1 viewWidth:(double)arg2 ;
-(/*^block*/id)panelControllerWillUpdate:(id)arg1 ;
-(void)panelController:(id)arg1 willChangeToState:(id)arg2 ;
-(void)panelController:(id)arg1 didChangeToState:(id)arg2 ;
-(id)primaryViewControllerForCollapsingPanelController:(id)arg1 ;
-(id)primaryViewControllerForExpandingPanelController:(id)arg1 ;
-(BOOL)panelController:(id)arg1 collapseOntoPrimaryViewController:(id)arg2 ;
-(void)panelController:(id)arg1 collapsePrimaryViewController:(id)arg2 withFallbackSecondaryViewController:(id)arg3 transitionCoordinator:(id)arg4 ;
-(id)panelController:(id)arg1 separateSecondaryViewControllerFromPrimaryViewController:(id)arg2 ;
-(void)panelController:(id)arg1 willBeginAnimatedTransitionToStateRequest:(id)arg2 predictedEndState:(id)arg3 ;
-(void)panelController:(id)arg1 didEndAnimatedTransitionToStateRequest:(id)arg2 ;
-(void)panelController:(id)arg1 adjustLeadingViewController:(id)arg2 forKeyboardInfo:(id)arg3 ;
-(void)_displayModeButtonItemWasAddedForFirstTime;
@end

