//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIViewControllerContextTransitioning-Protocol.h"

@class NSString, UIDocumentBrowserTransitionController, UIDocumentBrowserViewController, UIView;

@interface CbSongTempOpenCloseAnimationHelperViewController : UIViewController <UIViewControllerContextTransitioning>
{
    UIView *_fakeNavBarView;
    UIView *_fakeSongView;
    UIDocumentBrowserViewController *_docBrowser;
    UIDocumentBrowserTransitionController *_transitionController;
    _Bool _isCloseTransition;
    CDUnknownBlockType _transitionCompletionBlock;
    _Bool _animating;
    _Bool _ignoringInteraction;
    _Bool _songOperationMarkedAsCancelled;
}

+ (id)openCloseSongAnimationControllerForDocumentAtURL:(id)arg1 isCloseAnimation:(_Bool)arg2 navBarView:(id)arg3 songView:(id)arg4;
@property(nonatomic) _Bool songOperationMarkedAsCancelled; // @synthesize songOperationMarkedAsCancelled=_songOperationMarkedAsCancelled;
- (void).cxx_destruct;
- (struct CGRect)finalFrameForViewController:(id)arg1;
- (struct CGRect)initialFrameForViewController:(id)arg1;
@property(readonly, nonatomic) struct CGAffineTransform targetTransform;
- (id)viewForKey:(id)arg1;
- (id)viewControllerForKey:(id)arg1;
- (void)completeTransition:(_Bool)arg1;
- (void)pauseInteractiveTransition;
- (void)cancelInteractiveTransition;
- (void)finishInteractiveTransition;
- (void)updateInteractiveTransition:(double)arg1;
@property(readonly, nonatomic) long long presentationStyle;
@property(readonly, nonatomic) _Bool transitionWasCancelled;
- (_Bool)interactive;
@property(readonly, nonatomic, getter=isAnimated) _Bool animated;
@property(readonly, nonatomic) UIView *containerView;
- (_Bool)isAnimating;
- (void)_start;
- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithDocBrowser:(id)arg1 andTransitionController:(id)arg2 isCloseTransition:(_Bool)arg3 navBarView:(id)arg4 songView:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=isInteractive) _Bool interactive; // @dynamic interactive;
@property(readonly) Class superclass;

@end

