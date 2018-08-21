/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:10 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKit/UIControl.h>
#import <libobjc.A.dylib/CAMZoomButtonDelegate.h>

@protocol CAMZoomControlDelegate;
@class CAMZoomButton, CAMZoomDial, UIView, CAMZoomControlButtonMaskView, NSTimer, NSDate, NSString;

@interface CAMZoomControl : UIControl <CAMZoomButtonDelegate> {

	BOOL _zoomDialEnabled;
	BOOL __eligibleForTapInEmptySpace;
	BOOL __eligibleForSwipeDownToDismiss;
	BOOL __shouldShowZoomDial;
	id<CAMZoomControlDelegate> _delegate;
	long long _layoutStyle;
	double _zoomButtonMaxYWhenContracted;
	double _zoomDialRadius;
	long long _orientation;
	CAMZoomButton* __zoomButton;
	CAMZoomDial* __zoomDial;
	UIView* __dialClippingView;
	CAMZoomControlButtonMaskView* __buttonMaskView;
	double __previousTouchTime;
	NSTimer* __zoomDialVisibilityTimer;
	NSDate* __startTimeForHideAnimationInProgress;
	CGPoint __startTouchLocation;
	CGPoint __previousTouchLocation;
	UIEdgeInsets _contentInsets;

}

@property (nonatomic,readonly) CAMZoomButton * _zoomButton;                                                                                                      //@synthesize _zoomButton=__zoomButton - In the implementation block
@property (nonatomic,readonly) CAMZoomDial * _zoomDial;                                                                                                          //@synthesize _zoomDial=__zoomDial - In the implementation block
@property (nonatomic,readonly) UIView * _dialClippingView;                                                                                                       //@synthesize _dialClippingView=__dialClippingView - In the implementation block
@property (nonatomic,readonly) CAMZoomControlButtonMaskView * _buttonMaskView;                                                                                   //@synthesize _buttonMaskView=__buttonMaskView - In the implementation block
@property (assign,setter=_setStartTouchLocation:,nonatomic) CGPoint _startTouchLocation;                                                                         //@synthesize _startTouchLocation=__startTouchLocation - In the implementation block
@property (assign,setter=_setPreviousTouchLocation:,nonatomic) CGPoint _previousTouchLocation;                                                                   //@synthesize _previousTouchLocation=__previousTouchLocation - In the implementation block
@property (assign,setter=_setPreviousTouchTime:,nonatomic) double _previousTouchTime;                                                                            //@synthesize _previousTouchTime=__previousTouchTime - In the implementation block
@property (assign,setter=_setEligibleForTapInEmptySpace:,getter=_isEligibleForTapInEmptySpace,nonatomic) BOOL _eligibleForTapInEmptySpace;                       //@synthesize _eligibleForTapInEmptySpace=__eligibleForTapInEmptySpace - In the implementation block
@property (assign,setter=_setEligibleForSwipeDownToDismiss:,getter=_isEligibleForSwipeDownToDismiss,nonatomic) BOOL _eligibleForSwipeDownToDismiss;              //@synthesize _eligibleForSwipeDownToDismiss=__eligibleForSwipeDownToDismiss - In the implementation block
@property (setter=_setZoomDialVisibilityTimer:,nonatomic,retain) NSTimer * _zoomDialVisibilityTimer;                                                             //@synthesize _zoomDialVisibilityTimer=__zoomDialVisibilityTimer - In the implementation block
@property (assign,setter=_setShouldShowZoomDial:,nonatomic) BOOL _shouldShowZoomDial;                                                                            //@synthesize _shouldShowZoomDial=__shouldShowZoomDial - In the implementation block
@property (setter=_setStartTimeForHideAnimationInProgress:,nonatomic,retain) NSDate * _startTimeForHideAnimationInProgress;                                      //@synthesize _startTimeForHideAnimationInProgress=__startTimeForHideAnimationInProgress - In the implementation block
@property (assign,nonatomic,__weak) id<CAMZoomControlDelegate> delegate;                                                                                         //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long layoutStyle;                                                                                                              //@synthesize layoutStyle=_layoutStyle - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                                                                                                         //@synthesize contentInsets=_contentInsets - In the implementation block
@property (assign,nonatomic) double zoomButtonMaxYWhenContracted;                                                                                                //@synthesize zoomButtonMaxYWhenContracted=_zoomButtonMaxYWhenContracted - In the implementation block
@property (nonatomic,readonly) double zoomDialBorderWidth; 
@property (assign,nonatomic) double zoomDialRadius;                                                                                                              //@synthesize zoomDialRadius=_zoomDialRadius - In the implementation block
@property (assign,nonatomic) double minimumZoomFactor; 
@property (assign,nonatomic) double maximumZoomFactor; 
@property (assign,nonatomic) double dualCameraSwitchOverZoomFactor; 
@property (assign,nonatomic) double zoomFactor; 
@property (assign,nonatomic) BOOL shouldShowLabelAtDualCameraSwitchOver; 
@property (assign,nonatomic) BOOL shouldDisableValuesBelowDualCameraSwitchOver; 
@property (assign,getter=isZoomDialEnabled,nonatomic) BOOL zoomDialEnabled;                                                                                      //@synthesize zoomDialEnabled=_zoomDialEnabled - In the implementation block
@property (assign,nonatomic) long long orientation;                                                                                                              //@synthesize orientation=_orientation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)layoutStyle;
-(void)setLayoutStyle:(long long)arg1 ;
-(void)layoutSubviews;
-(id<CAMZoomControlDelegate>)delegate;
-(void)setDelegate:(id<CAMZoomControlDelegate>)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setOrientation:(long long)arg1 animated:(BOOL)arg2 ;
-(long long)orientation;
-(UIEdgeInsets)alignmentRectInsets;
-(UIEdgeInsets)contentInsets;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)setOrientation:(long long)arg1 ;
-(id)initWithLayoutStyle:(long long)arg1 ;
-(CAMZoomDial *)_zoomDial;
-(double)minimumZoomFactor;
-(void)setMinimumZoomFactor:(double)arg1 ;
-(double)maximumZoomFactor;
-(void)setMaximumZoomFactor:(double)arg1 ;
-(double)dualCameraSwitchOverZoomFactor;
-(void)setDualCameraSwitchOverZoomFactor:(double)arg1 ;
-(void)_setZoomFactor:(double)arg1 shouldNotifyDelegate:(BOOL)arg2 ;
-(BOOL)shouldDisableValuesBelowDualCameraSwitchOver;
-(CAMZoomButton *)_zoomButton;
-(BOOL)shouldShowLabelAtDualCameraSwitchOver;
-(void)setShouldShowLabelAtDualCameraSwitchOver:(BOOL)arg1 ;
-(void)setShouldDisableValuesBelowDualCameraSwitchOver:(BOOL)arg1 ;
-(void)setZoomDialEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_setShouldShowZoomDial:(BOOL)arg1 animationSpeed:(double)arg2 ;
-(void)_cancelDelayedZoomDialVisibilityChange;
-(void)_setStartTimeForHideAnimationInProgress:(id)arg1 ;
-(CAMZoomControlButtonMaskView *)_buttonMaskView;
-(void)_setEligibleForTapInEmptySpace:(BOOL)arg1 ;
-(void)_setEligibleForSwipeDownToDismiss:(BOOL)arg1 ;
-(BOOL)isZoomDialEnabled;
-(void)_setShouldShowZoomDial:(BOOL)arg1 animationSpeed:(double)arg2 afterDelay:(double)arg3 ;
-(void)_handleZoomDialVisibilityTimerFiredWithUserInfo:(id)arg1 ;
-(UIView *)_dialClippingView;
-(double)zoomButtonMaxYWhenContracted;
-(double)zoomDialRadius;
-(void)_updateMaskViewForZoomButtonHighlightingTransform;
-(double)_distanceFromDialClippingViewToPoint:(CGPoint)arg1 ;
-(double)_dampingFactorForDistanceFromDialForPoint:(CGPoint)arg1 ;
-(double)_dampingFactorForPerpendicularityFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 ;
-(double)_normalizeValue:(double)arg1 betweenMinimumValue:(double)arg2 maximumValue:(double)arg3 ;
-(double)_additionalAccelerationForMovementFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 deltaX:(double)arg3 ;
-(NSDate *)_startTimeForHideAnimationInProgress;
-(BOOL)_shouldShowZoomDial;
-(BOOL)_shouldInterceptTouchesForHidingZoomDial;
-(void)_setStartTouchLocation:(CGPoint)arg1 ;
-(void)_setPreviousTouchLocation:(CGPoint)arg1 ;
-(void)_setPreviousTouchTime:(double)arg1 ;
-(BOOL)_isWithinZoomButtonBoundsWithTouch:(id)arg1 ;
-(CGPoint)_startTouchLocation;
-(CGPoint)_previousTouchLocation;
-(double)_previousTouchTime;
-(BOOL)_isEligibleForSwipeDownToDismiss;
-(double)_dampingFactorForMovementFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 ;
-(double)_accelerationForMovementFromPointFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 elapsedTime:(double)arg3 ;
-(BOOL)_isEligibleForTapInEmptySpace;
-(void)_cleanupForCancelTracking;
-(void)zoomButtonDidLayout;
-(void)setZoomDialRadius:(double)arg1 ;
-(double)zoomDialBorderWidth;
-(void)setZoomButtonMaxYWhenContracted:(double)arg1 ;
-(void)updateToContentSize:(id)arg1 ;
-(void)setZoomDialEnabled:(BOOL)arg1 ;
-(void)_setShouldShowZoomDial:(BOOL)arg1 ;
-(void)setShouldShowZoomDial:(BOOL)arg1 animationSpeed:(double)arg2 afterDelay:(double)arg3 ;
-(NSTimer *)_zoomDialVisibilityTimer;
-(void)_setZoomDialVisibilityTimer:(id)arg1 ;
-(void)setZoomFactor:(double)arg1 ;
-(double)zoomFactor;
@end

