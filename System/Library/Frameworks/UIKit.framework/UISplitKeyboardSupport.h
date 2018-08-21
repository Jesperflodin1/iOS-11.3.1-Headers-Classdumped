/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:10 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKeyboardMotionSupport.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIKeyboardKeyplaneTransitionDelegate.h>

@class UIPanGestureRecognizer, CADisplayLink, NSString;

@interface UISplitKeyboardSupport : UIKeyboardMotionSupport <UIGestureRecognizerDelegate, UIKeyboardKeyplaneTransitionDelegate> {

	UIPanGestureRecognizer* _translateRecognizer;
	BOOL _isTranslating;
	BOOL _isSplitting;
	BOOL _splitLockState;
	CGPoint _targetTranslation;
	CGPoint _initialTranslation;
	CGPoint _translationVelocity;
	CADisplayLink* _displayLink;
	double _lastBounceTime;
	double _lastTranslationNotificationTime;
	/*^block*/id _bounceCompletionBlock;

}

@property (nonatomic,readonly) BOOL isTranslating; 
@property (nonatomic,readonly) BOOL isSplitting; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)transitionDidFinish:(BOOL)arg1 ;
-(void)_updatedController;
-(void)_disconnectingController:(id)arg1 ;
-(void)_connectController:(id)arg1 ;
-(void)translateDetected:(id)arg1 ;
-(BOOL)generateSplitNotificationForNewPlacement:(id)arg1 ;
-(void)translateToPlacement:(id)arg1 quietly:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)invalidateDisplayLink;
-(void)_updateBounceAnimation:(id)arg1 ;
-(void)cancelBounceAnimation;
-(void)undock;
-(void)bounceAnimationDidFinish;
-(void)dock;
-(BOOL)isTranslating;
-(void)prepareForTransition;
-(void)updateProgress:(double)arg1 startHeight:(double)arg2 endHeight:(double)arg3 ;
-(void)finishTransitionWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isSplitting;
-(void)updatedControllerApplicator:(id)arg1 ;
-(void)translateToPlacement:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)startedPlacementFrom:(id)arg1 to:(id)arg2 forController:(id)arg3 ;
-(BOOL)completedPlacementFrom:(id)arg1 to:(id)arg2 forController:(id)arg3 ;
@end

