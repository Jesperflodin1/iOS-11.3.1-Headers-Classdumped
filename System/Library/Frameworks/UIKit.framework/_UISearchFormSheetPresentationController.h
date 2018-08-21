/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:12 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIPresentationController.h>
#import <UIKit/_UISearchControllerPresenting.h>

@class UIView, _UISearchPresentationAssistant, NSString;

@interface _UISearchFormSheetPresentationController : UIPresentationController <_UISearchControllerPresenting> {

	_UISearchPresentationAssistant* _assistant;
	UIView* _wrapperView;
	CGRect finalFrameForContainerView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain,readonly) UIView * searchBarContainerView; 
@property (nonatomic,readonly) BOOL shouldAccountForStatusBar; 
@property (nonatomic,readonly) double statusBarAdjustment; 
@property (nonatomic,readonly) BOOL searchBarToBecomeTopAttached; 
@property (nonatomic,readonly) BOOL resultsUnderlapsSearchBar; 
@property (nonatomic,readonly) BOOL searchBarCanContainScopeBar; 
@property (nonatomic,readonly) BOOL searchBarShouldClipToBounds; 
@property (nonatomic,readonly) double resultsControllerContentOffset; 
@property (nonatomic,readonly) UIPresentationController*<_UISearchControllerPresenting> adaptivePresentationController; 
@property (nonatomic,readonly) CGRect finalFrameForContainerView; 
@property (nonatomic,readonly) BOOL animatorShouldLayoutPresentationViews; 
@property (nonatomic,readonly) BOOL forceObeyNavigationBarInsets; 
@property (nonatomic,readonly) unsigned long long edgeForHidingNavigationBar; 
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGRect)frameOfPresentedViewInContainerView;
-(BOOL)shouldRemovePresentersView;
-(BOOL)_shouldRespectDefinesPresentationContext;
-(id)presentedView;
-(CGRect)_frameOfPresentedViewControllerViewInSuperview;
-(void)presentationTransitionDidEnd:(BOOL)arg1 ;
-(void)dismissalTransitionDidEnd:(BOOL)arg1 ;
-(void)_transitionToDidEnd;
-(void)_transitionFromDidEnd;
-(void)presentationTransitionWillBegin;
-(void)dismissalTransitionWillBegin;
-(void)_transitionFromWillBegin;
-(void)_transitionToWillBegin;
-(long long)adaptivePresentationStyle;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(BOOL)_shouldKeepCurrentFirstResponder;
-(void)_transitionToPresentationController:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)_presentationControllerForTraitCollection:(id)arg1 ;
-(id)_presentedViewControllerForPresentationController:(id)arg1 traitCollection:(id)arg2 ;
-(UIView *)searchBarContainerView;
-(BOOL)searchBarToBecomeTopAttached;
-(double)statusBarAdjustment;
-(void)_presentedView:(id)arg1 enableFormSheetAccoutrements:(BOOL)arg2 ;
-(void)setContentVisible:(BOOL)arg1 ;
-(BOOL)_shouldSubscribeToKeyboardNotifications;
-(double)resultsControllerContentOffset;
-(BOOL)shouldAccountForStatusBar;
-(UIPresentationController*<_UISearchControllerPresenting>)adaptivePresentationController;
-(BOOL)resultsUnderlapsSearchBar;
-(BOOL)searchBarCanContainScopeBar;
-(BOOL)searchBarShouldClipToBounds;
-(CGRect)finalFrameForContainerView;
-(BOOL)animatorShouldLayoutPresentationViews;
-(BOOL)forceObeyNavigationBarInsets;
-(unsigned long long)edgeForHidingNavigationBar;
@end
