/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:09 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKit/UISlider.h>

@protocol CAMZoomSliderDelegate;
@class NSTimer, UIView;

@interface CAMZoomSlider : UISlider {

	BOOL _minimumAutozooming;
	BOOL _maximumAutozooming;
	BOOL _visibilityTimerSuspended;
	BOOL __autozooming;
	long long _layoutStyle;
	id<CAMZoomSliderDelegate> _delegate;
	long long _orientation;
	NSTimer* __visibilityTimer;
	UIView* __minTrackMaskView;
	UIView* __maxTrackMaskView;
	UIEdgeInsets _alignmentRectInsets;

}

@property (nonatomic,readonly) NSTimer * _visibilityTimer;                                                                    //@synthesize _visibilityTimer=__visibilityTimer - In the implementation block
@property (assign,setter=_setAutozooming:,getter=_isAutozooming,nonatomic) BOOL _autozooming;                                 //@synthesize _autozooming=__autozooming - In the implementation block
@property (assign,setter=_setMinimumAutozooming:,getter=isMinimumAutozooming,nonatomic) BOOL minimumAutozooming;              //@synthesize minimumAutozooming=_minimumAutozooming - In the implementation block
@property (assign,setter=_setMaximumAutozooming:,getter=isMaximumAutozooming,nonatomic) BOOL maximumAutozooming;              //@synthesize maximumAutozooming=_maximumAutozooming - In the implementation block
@property (nonatomic,readonly) UIView * _minTrackMaskView;                                                                    //@synthesize _minTrackMaskView=__minTrackMaskView - In the implementation block
@property (nonatomic,readonly) UIView * _maxTrackMaskView;                                                                    //@synthesize _maxTrackMaskView=__maxTrackMaskView - In the implementation block
@property (assign,nonatomic) long long layoutStyle;                                                                           //@synthesize layoutStyle=_layoutStyle - In the implementation block
@property (assign,nonatomic,__weak) id<CAMZoomSliderDelegate> delegate;                                                       //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) UIEdgeInsets alignmentRectInsets;                                                                //@synthesize alignmentRectInsets=_alignmentRectInsets - In the implementation block
@property (assign,getter=isVisibilityTimerSuspended,nonatomic) BOOL visibilityTimerSuspended;                                 //@synthesize visibilityTimerSuspended=_visibilityTimerSuspended - In the implementation block
@property (assign,nonatomic) long long orientation;                                                                           //@synthesize orientation=_orientation - In the implementation block
+(BOOL)shouldFadeOutZoomSliderForLayoutStyle:(long long)arg1 ;
-(long long)layoutStyle;
-(void)setLayoutStyle:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id<CAMZoomSliderDelegate>)delegate;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<CAMZoomSliderDelegate>)arg1 ;
-(void)dealloc;
-(CGSize)intrinsicContentSize;
-(void)setOrientation:(long long)arg1 animated:(BOOL)arg2 ;
-(long long)orientation;
-(UIEdgeInsets)alignmentRectInsets;
-(void)setAlignmentRectInsets:(UIEdgeInsets)arg1 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(CGRect)trackRectForBounds:(CGRect)arg1 ;
-(CGRect)thumbRectForBounds:(CGRect)arg1 trackRect:(CGRect)arg2 value:(float)arg3 ;
-(CGRect)minimumValueImageRectForBounds:(CGRect)arg1 ;
-(CGRect)maximumValueImageRectForBounds:(CGRect)arg1 ;
-(void)setOrientation:(long long)arg1 ;
-(id)initWithLayoutStyle:(long long)arg1 ;
-(void)_handleTouchUpInside:(id)arg1 ;
-(UIView *)_minTrackMaskView;
-(UIView *)_maxTrackMaskView;
-(void)_updateForLayoutStyle;
-(void)_commonCAMZoomSliderInitializationWithLayoutStyle:(long long)arg1 ;
-(double)_thumbCenterXForValue:(float)arg1 trackRect:(CGRect)arg2 ;
-(double)_thumbCenterMinimumXForTrackRect:(CGRect)arg1 ;
-(double)_thumbCenterMaximumXForTrackRect:(CGRect)arg1 ;
-(long long)locationOfTouch:(id)arg1 ;
-(void)_setMinimumAutozooming:(BOOL)arg1 ;
-(void)_setMaximumAutozooming:(BOOL)arg1 ;
-(void)setVisibilityTimerSuspended:(BOOL)arg1 ;
-(void)_startVisibilityTimer;
-(BOOL)_isMinimumOrMaximumAutozooming;
-(BOOL)isMinimumAutozooming;
-(BOOL)isMaximumAutozooming;
-(void)_updateAutozooming;
-(void)_beginAutozooming;
-(void)_endAutozooming;
-(BOOL)isVisibilityTimerSuspended;
-(void)_stopVisibilityTimer;
-(void)_hideZoomSlider:(id)arg1 ;
-(void)_makeInvisibleAnimationDuration:(double)arg1 ;
-(float)_valueForThumbCenterX:(double)arg1 trackRect:(CGRect)arg2 ;
-(BOOL)shouldHideForExpiredVisibilityTimer;
-(void)makeVisibleAnimated:(BOOL)arg1 ;
-(void)makeInvisibleAnimated:(BOOL)arg1 ;
-(NSTimer *)_visibilityTimer;
-(BOOL)_isAutozooming;
-(void)_setAutozooming:(BOOL)arg1 ;
@end

