/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:25 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIPanGestureRecognizer.h>

@class UIScrollView, UIScrollViewDirectionalPressGestureRecognizer;

@interface UIScrollViewPanGestureRecognizer : UIPanGestureRecognizer {

	UIScrollView* _scrollView;
	SEL _scrollViewAction;
	CGPoint _reconsideredLockingLocation;
	unsigned _lastLockingAxis : 2;
	unsigned _lockingAxis : 2;
	unsigned _hasParentScrollView : 1;
	unsigned _caughtDeceleratingScrollView : 1;
	unsigned _directionalLockEnabled : 1;
	unsigned _transfersTrackingFromParentScrollView : 1;
	unsigned _movedAfterCaughtDeceleratingScrollViewButBeganNotYetDelivered : 1;
	long long _indirectScrollingState;
	double _translationScaleFactor;
	UIScrollViewDirectionalPressGestureRecognizer* _directionalPressGestureRecognizer;

}

@property (assign,nonatomic,__weak) UIScrollView * scrollView;                                                                                //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,getter=isDirectionalLockEnabled,nonatomic) BOOL directionalLockEnabled; 
@property (getter=_caughtDeceleratingScrollView,nonatomic,readonly) BOOL caughtDeceleratingScrollView; 
@property (getter=_beganCaughtDeceleratingScrollViewAndMoved,nonatomic,readonly) BOOL beganCaughtDeceleratingScrollViewAndMoved; 
@property (assign,nonatomic) double translationScaleFactor;                                                                                   //@synthesize translationScaleFactor=_translationScaleFactor - In the implementation block
@property (assign,nonatomic,__weak) UIScrollViewDirectionalPressGestureRecognizer * directionalPressGestureRecognizer;                        //@synthesize directionalPressGestureRecognizer=_directionalPressGestureRecognizer - In the implementation block
-(void)setDelegate:(id)arg1 ;
-(CGPoint)translationInView:(id)arg1 ;
-(CGPoint)velocityInView:(id)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(double)_hysteresis;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setView:(id)arg1 ;
-(void)setAllowedTouchTypes:(id)arg1 ;
-(UIScrollView *)scrollView;
-(void)setDirectionalLockEnabled:(BOOL)arg1 ;
-(BOOL)isDirectionalLockEnabled;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(void)removeTarget:(id)arg1 action:(SEL)arg2 ;
-(BOOL)_beganCaughtDeceleratingScrollViewAndMoved;
-(BOOL)_caughtDeceleratingScrollView;
-(void)_scrollViewDidEndZooming;
-(UIScrollViewDirectionalPressGestureRecognizer *)directionalPressGestureRecognizer;
-(CGPoint)_convertPoint:(CGPoint)arg1 fromSceneReferenceCoordinatesToView:(id)arg2 ;
-(CGPoint)_convertPoint:(CGPoint)arg1 toSceneReferenceCoordinatesFromView:(id)arg2 ;
-(CGPoint)_adjustSceneReferenceLocation:(CGPoint)arg1 ;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg1 ;
-(void)_resetGestureRecognizer;
-(BOOL)delaysTouchesBegan;
-(void)_centroidMovedTo:(CGPoint)arg1 atTime:(double)arg2 ;
-(BOOL)_shouldTryToBeginWithEvent:(id)arg1 ;
-(void)setTranslationScaleFactor:(double)arg1 ;
-(BOOL)_canTransferTrackingFromParentPagingScrollView;
-(BOOL)_shouldTransferTrackingFromParentScrollViewForCurrentOffset;
-(BOOL)_shouldContinueToWaitToTransferTrackingFromParentScrollView;
-(double)translationScaleFactor;
-(void)setDirectionalPressGestureRecognizer:(UIScrollViewDirectionalPressGestureRecognizer *)arg1 ;
@end

