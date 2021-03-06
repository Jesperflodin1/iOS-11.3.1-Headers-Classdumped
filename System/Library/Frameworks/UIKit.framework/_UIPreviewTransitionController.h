/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:09 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIPercentDrivenInteractiveTransition.h>
#import <UIKit/UIInteractionProgressObserver.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>
#import <UIKit/UIForceInteractionController.h>

@protocol UIViewControllerContextTransitioning;
@class UIInteractionProgress, NSDictionary, _UIStatesFeedbackGenerator, NSMutableDictionary, NSString;

@interface _UIPreviewTransitionController : UIPercentDrivenInteractiveTransition <UIInteractionProgressObserver, UIViewControllerAnimatedTransitioning, UIForceInteractionController> {

	UIInteractionProgress* _interactionProgress;
	unsigned long long _targetPresentationPhase;
	NSDictionary* _viewsParticipatingInCommitTransition;
	_UIStatesFeedbackGenerator* _feedbackGenerator;
	NSMutableDictionary* _animationsByPresentationPhase;
	id<UIViewControllerContextTransitioning> _transitionContext;

}

@property (nonatomic,retain) UIInteractionProgress * interactionProgress;                                    //@synthesize interactionProgress=_interactionProgress - In the implementation block
@property (assign,nonatomic) unsigned long long targetPresentationPhase;                                     //@synthesize targetPresentationPhase=_targetPresentationPhase - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * animationsByPresentationPhase;                            //@synthesize animationsByPresentationPhase=_animationsByPresentationPhase - In the implementation block
@property (assign,nonatomic,__weak) id<UIViewControllerContextTransitioning> transitionContext;              //@synthesize transitionContext=_transitionContext - In the implementation block
@property (nonatomic,retain) NSDictionary * viewsParticipatingInCommitTransition;                            //@synthesize viewsParticipatingInCommitTransition=_viewsParticipatingInCommitTransition - In the implementation block
@property (nonatomic,retain) _UIStatesFeedbackGenerator * feedbackGenerator;                                 //@synthesize feedbackGenerator=_feedbackGenerator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double completionSpeed; 
@property (nonatomic,readonly) long long completionCurve; 
@property (nonatomic,readonly) BOOL wantsInteractiveStart; 
+(id)performCommitTransitionWithDelegate:(id)arg1 forViewController:(id)arg2 previewViewController:(id)arg3 previewInteractionController:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)init;
-(void)setTransitionContext:(id<UIViewControllerContextTransitioning>)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(void)cancelInteractiveTransition;
-(void)animateTransition:(id)arg1 ;
-(void)animationEnded:(BOOL)arg1 ;
-(id<UIViewControllerContextTransitioning>)transitionContext;
-(void)finishInteractiveTransition;
-(void)startInteractiveTransition:(id)arg1 ;
-(void)updateInteractiveTransition:(double)arg1 ;
-(void)interactionProgressDidUpdate:(id)arg1 ;
-(void)interactionProgress:(id)arg1 didEnd:(BOOL)arg2 ;
-(_UIStatesFeedbackGenerator *)feedbackGenerator;
-(void)setFeedbackGenerator:(_UIStatesFeedbackGenerator *)arg1 ;
-(void)setAnimationsByPresentationPhase:(NSMutableDictionary *)arg1 ;
-(void)setInteractionProgress:(UIInteractionProgress *)arg1 ;
-(void)setTargetPresentationPhase:(unsigned long long)arg1 ;
-(NSMutableDictionary *)animationsByPresentationPhase;
-(unsigned long long)targetPresentationPhase;
-(UIInteractionProgress *)interactionProgress;
-(void)_layoutForPresentationPhase:(unsigned long long)arg1 ;
-(void)_completeAnimationWithPresentationPhase:(unsigned long long)arg1 finished:(BOOL)arg2 ;
-(void)_animateRevealTransition:(id)arg1 ;
-(void)_animateCommitTransition:(id)arg1 ;
-(void)_animateDismissTransition:(id)arg1 ;
-(void)_animatePreviewTransition:(id)arg1 ;
-(NSDictionary *)viewsParticipatingInCommitTransition;
-(id)initWithInteractionProgress:(id)arg1 targetPresentationPhase:(unsigned long long)arg2 ;
-(void)setAnimations:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 forPresentationPhase:(unsigned long long)arg3 ;
-(void)setViewsParticipatingInCommitTransition:(NSDictionary *)arg1 ;
@end

