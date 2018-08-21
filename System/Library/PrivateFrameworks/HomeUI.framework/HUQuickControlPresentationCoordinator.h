/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:04 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <libobjc.A.dylib/HUQuickControlContainerViewControllerDelegate.h>
#import <libobjc.A.dylib/HUPresentationDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UITraitEnvironment.h>

@protocol HUQuickControlPresentationCoordinatorDelegate, NACancelable;
@class UITraitCollection, HUQuickControlPresentationContext, HUQuickControlContainerViewController, UIView, HUForceInterpolatedPressGestureRecognizer, NSMutableSet, NSMapTable, UIViewController, HUPressedItemContext, NSString;

@interface HUQuickControlPresentationCoordinator : NSObject <HUQuickControlContainerViewControllerDelegate, HUPresentationDelegate, UIGestureRecognizerDelegate, UITraitEnvironment> {

	HUQuickControlPresentationContext* _presentationContext;
	HUQuickControlContainerViewController* _quickControlViewController;
	UIView* _targetView;
	id<HUQuickControlPresentationCoordinatorDelegate> _delegate;
	HUForceInterpolatedPressGestureRecognizer* _pressGestureRecognizer;
	NSMutableSet* _mutuallyExclusiveGestureRecognizers;
	id<NACancelable> _pressGestureActiveTimerCancellationToken;
	NSMapTable* _pressedItemContexts;

}

@property (nonatomic,retain) HUQuickControlPresentationContext * presentationContext;                         //@synthesize presentationContext=_presentationContext - In the implementation block
@property (nonatomic,retain) HUQuickControlContainerViewController * quickControlViewController;              //@synthesize quickControlViewController=_quickControlViewController - In the implementation block
@property (nonatomic,readonly) UIViewController * presentingViewController; 
@property (nonatomic,retain) HUForceInterpolatedPressGestureRecognizer * pressGestureRecognizer;              //@synthesize pressGestureRecognizer=_pressGestureRecognizer - In the implementation block
@property (nonatomic,readonly) NSMutableSet * mutuallyExclusiveGestureRecognizers;                            //@synthesize mutuallyExclusiveGestureRecognizers=_mutuallyExclusiveGestureRecognizers - In the implementation block
@property (nonatomic,retain) id<NACancelable> pressGestureActiveTimerCancellationToken;                       //@synthesize pressGestureActiveTimerCancellationToken=_pressGestureActiveTimerCancellationToken - In the implementation block
@property (nonatomic,readonly) NSMapTable * pressedItemContexts;                                              //@synthesize pressedItemContexts=_pressedItemContexts - In the implementation block
@property (nonatomic,readonly) HUPressedItemContext * activePressedItemContext; 
@property (nonatomic,__weak,readonly) UIView * targetView;                                                    //@synthesize targetView=_targetView - In the implementation block
@property (assign,nonatomic,__weak) id<HUQuickControlPresentationCoordinatorDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (getter=isQuickControlPresented,nonatomic,readonly) BOOL quickControlIsPresented; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UITraitCollection * traitCollection; 
-(id<HUQuickControlPresentationCoordinatorDelegate>)delegate;
-(UITraitCollection *)traitCollection;
-(void)setDelegate:(id<HUQuickControlPresentationCoordinatorDelegate>)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(UIViewController *)presentingViewController;
-(void)_handlePressGesture:(id)arg1 ;
-(UIView *)targetView;
-(id)initWithTargetView:(id)arg1 delegate:(id)arg2 ;
-(void)addMutuallyExclusiveGestureRecognizer:(id)arg1 ;
-(id)finishPresentation:(id)arg1 animated:(BOOL)arg2 ;
-(id)dismissQuickControlAnimated:(BOOL)arg1 wasDismissed:(BOOL*)arg2 ;
-(BOOL)isQuickControlPresented;
-(id)presentQuickControlWithContext:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)hasDetailsActionForQuickControlViewController:(id)arg1 item:(id)arg2 ;
-(double)quickControlViewController:(id)arg1 sourceViewInitialScaleForPresentation:(BOOL)arg2 ;
-(id)quickControlViewController:(id)arg1 applierForSourceViewTransitionWithAnimationSettings:(id)arg2 presenting:(BOOL)arg3 ;
-(id)detailsViewControllerForQuickControlViewController:(id)arg1 item:(id)arg2 ;
-(void)quickControlViewControllerWillDismissDetailsViewController:(id)arg1 shouldDismissQuickControl:(BOOL)arg2 ;
-(void)_installGestureRecognizer;
-(HUQuickControlPresentationContext *)presentationContext;
-(NSMapTable *)pressedItemContexts;
-(void)_validatePresentationContext:(id)arg1 ;
-(NSMutableSet *)mutuallyExclusiveGestureRecognizers;
-(void)_handleMutuallyExclusiveGesture:(id)arg1 ;
-(void)_configureInitialStateForPressedItemContext:(id)arg1 userInitiated:(BOOL)arg2 ;
-(id)_createPressedContextForItem:(id)arg1 userInitiated:(BOOL)arg2 ;
-(HUForceInterpolatedPressGestureRecognizer *)pressGestureRecognizer;
-(void)setPressGestureRecognizer:(HUForceInterpolatedPressGestureRecognizer *)arg1 ;
-(id)_gestureInstallationView;
-(void)_pressGestureDidBeginWithLocation:(CGPoint)arg1 ;
-(void)_pressGestureDidEnd:(BOOL)arg1 ;
-(void)setPresentationContext:(HUQuickControlPresentationContext *)arg1 ;
-(void)_preparePressedItemContextForPresentationContext:(id)arg1 startApplier:(BOOL)arg2 ;
-(void)_pressGestureDidBecomeActive;
-(void)setPressGestureActiveTimerCancellationToken:(id<NACancelable>)arg1 ;
-(void)_prepareForTapticFeedbackIfAvailable;
-(id<NACancelable>)pressGestureActiveTimerCancellationToken;
-(HUPressedItemContext *)activePressedItemContext;
-(HUQuickControlContainerViewController *)quickControlViewController;
-(void)_endUsingTapticFeedbackIfAvailable;
-(void)_updateOverrideAttributesWithScale:(double)arg1 forItem:(id)arg2 ;
-(id)_beginControlPresentationAnimated:(BOOL)arg1 ;
-(void)_pressedStateDidEndForItem:(id)arg1 clearPresentationContext:(BOOL)arg2 ;
-(void)_updateOverrideAttributesWithTransform:(CGAffineTransform)arg1 alpha:(double)arg2 forItem:(id)arg3 ;
-(void)_actuateTapticFeedbackIfAvailable;
-(void)_logUserMetricsAfterPress;
-(void)setQuickControlViewController:(HUQuickControlContainerViewController *)arg1 ;
-(id)dismissQuickControlAnimated:(BOOL)arg1 ;
-(id)_dismissQuickControlViewControllerAnimated:(BOOL)arg1 ;
-(void)_cleanupForQuickControlDismissal;
-(void)removeMutuallyExclusiveGestureRecognizer:(id)arg1 ;
-(void)playBounceForItem:(id)arg1 ;
@end

