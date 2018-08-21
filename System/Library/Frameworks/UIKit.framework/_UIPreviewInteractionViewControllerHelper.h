/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:34 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>
#import <UIKit/UIPreviewPresentationControllerDelegate.h>

@protocol UIViewControllerContextTransitioning;
@class _UIPreviewInteractionHighlighter, _UIPreviewInteractionViewControllerPresentation, UIWindow, UIViewController, UIView, NSString;

@interface _UIPreviewInteractionViewControllerHelper : NSObject <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, UIPreviewPresentationControllerDelegate> {

	_UIPreviewInteractionHighlighter* _highlighter;
	_UIPreviewInteractionViewControllerPresentation* _viewControllerPresentation;
	UIWindow* _presentingWindow;
	/*^block*/id _presentationCompletion;
	/*^block*/id _dismissalCompletion;
	BOOL _shouldActAsAppearanceAnimationController;
	BOOL _shouldUseDefaultPresentationController;
	UIViewController* _previousParentViewController;
	UIView* _previousSuperview;
	id<UIViewControllerContextTransitioning> _currentTransitionContext;

}

@property (nonatomic,readonly) _UIPreviewInteractionViewControllerPresentation * viewControllerPresentation;              //@synthesize viewControllerPresentation=_viewControllerPresentation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id)initWithViewControllerPresentation:(id)arg1 ;
-(void)presentViewControllerFromViewController:(id)arg1 highlighter:(id)arg2 presentationCompletion:(/*^block*/id)arg3 dismissalCompletion:(/*^block*/id)arg4 ;
-(void)dismissViewController;
-(_UIPreviewInteractionViewControllerPresentation *)viewControllerPresentation;
-(void)previewPresentationController:(id)arg1 shouldDismissViewController:(id)arg2 ;
-(void)_performPresentViewControllerFromViewController:(id)arg1 ;
-(void)_finalizeAfterViewControllerPresentation;
-(void)_performDismissalCompletionIfNeeded;
-(id)defaultPresentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 ;
-(id)customPresentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 ;
@end
