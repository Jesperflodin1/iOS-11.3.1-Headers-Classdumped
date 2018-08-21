/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:26 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Messages/iMessageBalloons/ASMessagesProvider.bundle/ASMessagesProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ASMessagesProvider/ASMessagesProvider-Structs.h>
#import <UIKit/UIPresentationController.h>
#import <libobjc.A.dylib/_UIScrollViewScrollObserver.h>

@class UIView;

@interface ASMessagesProvider.ArticlePagePresentationController : UIPresentationController <_UIScrollViewScrollObserver> {

	 overlayView;
	 shadowView;
	 presentedContainerView;
	 dismissTapGestureRecognizer;
	 dismissSwipeGestureRecognizer;
	 closeButton;
	 interactiveDismissal;
	 dismissalScrollView;
	 dismissCompleted;
	 scrollDismissInitialTranslationY;
	 isScrollDismissActive;

}

@property (readonly,nonatomic) long long presentationStyle; 
@property (readonly,nonatomic) long long adaptivePresentationStyle; 
@property (readonly,nonatomic) BOOL shouldPresentInFullscreen; 
@property (readonly,nonatomic) BOOL shouldRemovePresentersView; 
@property (readonly,nonatomic) CGRect frameOfPresentedViewInContainerView; 
@property (readonly,nonatomic) UIView * presentedView; 
+(UIEdgeInsets)presentationInsets;
+(id)of:(id)arg1 ;
+(long long)closeButtonTag;
-(void)finalizeInteractiveDismissal;
-(void)dismissTapDidChange:(id)arg1 ;
-(void)scrollPanDidChange:(id)arg1 ;
-(void)edgePanDidChange:(id)arg1 ;
-(long long)presentationStyle;
-(CGRect)frameOfPresentedViewInContainerView;
-(void)_observeScrollViewDidScroll:(id)arg1 ;
-(BOOL)shouldRemovePresentersView;
-(BOOL)shouldPresentInFullscreen;
-(UIView *)presentedView;
-(void)presentationTransitionDidEnd:(BOOL)arg1 ;
-(void)dismissalTransitionDidEnd:(BOOL)arg1 ;
-(void)presentationTransitionWillBegin;
-(void)dismissalTransitionWillBegin;
-(void)containerViewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(long long)adaptivePresentationStyle;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
@end
