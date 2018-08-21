/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:05 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIFocusEnginePanGestureTouchObserver.h>

@protocol _UIFocusFastScrollingRecognizerDelegate;
@class _UIFocusEnginePanGestureRecognizer, _UIFocusFastScrollingTouchSequence, NSMapTable, NSTimer, UIScrollView, NSString;

@interface _UIFocusFastScrollingRecognizer : NSObject <_UIFocusEnginePanGestureTouchObserver> {

	_UIFocusEnginePanGestureRecognizer* _panGesture;
	_UIFocusFastScrollingTouchSequence* _currentTouch;
	NSMapTable* _swipeSequences;
	NSTimer* _swipeIntervalTimer;
	UIScrollView* _previewingScrollView;
	NSTimer* _previewingTouchTimer;
	unsigned long long _spatialFocusUpdateCount;
	BOOL _enabled;
	id<_UIFocusFastScrollingRecognizerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_UIFocusFastScrollingRecognizerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                            //@synthesize enabled=_enabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)recognizerWithPanGesture:(id)arg1 ;
-(id<_UIFocusFastScrollingRecognizerDelegate>)delegate;
-(void)setDelegate:(id<_UIFocusFastScrollingRecognizerDelegate>)arg1 ;
-(void)dealloc;
-(void)reset;
-(BOOL)isEnabled;
-(void)setEnabled:(BOOL)arg1 ;
-(void)_handlePanGesture:(id)arg1 ;
-(void)directionalPressWithHeading:(unsigned long long)arg1 didRepeat:(unsigned long long)arg2 ;
-(void)joystickMovementWithHeading:(unsigned long long)arg1 didRepeat:(unsigned long long)arg2 ;
-(id)initWithPanGesture:(id)arg1 ;
-(void)_focusDidUpate:(id)arg1 ;
-(void)_updateActiveSwipeSequencesForScrollViews:(id)arg1 ;
-(id)_deepestEligibleScrollViewContainingFocusedItem:(unsigned long long)arg1 ;
-(void)_notifyDelegateWithScrollView:(id)arg1 scrollingStyle:(long long)arg2 heading:(unsigned long long)arg3 ;
-(void)_stopSwipeIntervalTimer;
-(BOOL)_attemptToImmediatelyRecognizeEdgeGesture;
-(void)_touchSequenceDidEnd:(id)arg1 ;
-(void)_deactivatePreviewingScrollViewIfNecessary;
-(unsigned long long)_bestHeadingForAccumulator:(CGVector)arg1 ;
-(void)_swipeOccuredAlongHeading:(unsigned long long)arg1 ;
-(BOOL)_swipeSequenceCanBeginFastScrolling:(id)arg1 ;
-(BOOL)_scrollViewIsEligibleForFastScrolling:(id)arg1 alongHeading:(unsigned long long)arg2 ;
-(void)_startSwipeIntervalTimer;
-(void)_swipeIntervalElapsed:(id)arg1 ;
-(id)_scrollViewsContainingCurrentlyFocusedItem;
-(void)_activatePreviewingScrollView;
-(void)_activatePreviewingScrollViewAfterDelay;
-(void)focusEnginePanGesture:(id)arg1 touchBeganAtDigitizerLocation:(CGPoint)arg2 ;
-(void)focusEnginePanGesture:(id)arg1 touchMovedToDigitizerLocation:(CGPoint)arg2 ;
-(void)focusEnginePanGesture:(id)arg1 touchEndedAtDigitizerLocation:(CGPoint)arg2 ;
-(void)focusEnginePanGesture:(id)arg1 touchCancelledAtDigitizerLocation:(CGPoint)arg2 ;
@end

