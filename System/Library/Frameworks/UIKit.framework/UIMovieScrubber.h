/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:19 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIControl.h>
#import <UIKit/UIMovieScrubberTrackViewDataSource.h>
#import <UIKit/UIMovieScrubberTrackViewDelegate.h>

@protocol UIMovieScrubberDataSource, UIMovieScrubberDelegate;
@class UIImageView, UIMovieScrubberTrackView, UIMovieScrubberEditingView, UILabel, UIImage, UIPanGestureRecognizer, NSString;

@interface UIMovieScrubber : UIControl <UIMovieScrubberTrackViewDataSource, UIMovieScrubberTrackViewDelegate> {

	UIImageView* _thumbView;
	UIMovieScrubberTrackView* _trackView;
	UIMovieScrubberEditingView* _editingView;
	UILabel* _elapsedLabel;
	UILabel* _remainingLabel;
	int _timeComponents;
	UIImage* _fillImage;
	UIImage* _innerShadowImage;
	UIImage* _maskImage;
	UIImage* _shadowImage;
	id<UIMovieScrubberDataSource> _dataSource;
	id<UIMovieScrubberDelegate> _delegate;
	CGRect _trackRect;
	double _hitOffset;
	double _zoomDelay;
	BOOL _showTimeViews;
	BOOL _editable;
	double _value;
	double _maximumValue;
	double _minimumValue;
	CGPoint _touchLocationWhenTrackPressBegan;
	double _trimStartValue;
	double _trimEndValue;
	double _minTrimmedLength;
	double _maxTrimmedLength;
	double _zoomAnimationDuration;
	double _zoomAnimationDelay;
	struct {
		unsigned continuous : 1;
		unsigned animating : 1;
		unsigned creatingSnapshot : 1;
		unsigned needsReload : 1;
		unsigned layoutTimeViews : 1;
		unsigned computeTrackRect : 1;
		unsigned clampingTrimRange;
		unsigned zoomed : 1;
		unsigned zoomAnimating : 1;
		unsigned trackIsPressed : 1;
		unsigned trackAnimating : 1;
		unsigned thumbIsVisible : 1;
		unsigned handleIsPressed : 1;
		unsigned willBeginEditing : 1;
		unsigned editing : 1;
		unsigned editingHandle;
		unsigned rotationDisabled;
		unsigned isInNavigationBar : 1;
		unsigned delegateValueDidChange : 1;
		unsigned delegateStartValueDidChange : 1;
		unsigned delegateEndValueDidChange : 1;
		unsigned delegateWillBeginRequestingThumbnails : 1;
		unsigned delegateDidFinishRequestingThumbnails : 1;
		unsigned delegateWillBeginEditing : 1;
		unsigned delegateDidBeginEditing : 1;
		unsigned delegateDidCancelEditing : 1;
		unsigned delegateEditingAnimationFinished : 1;
		unsigned delegateWidthDeltaOriginXDelta : 1;
		unsigned delegateDidBeginAnimatingZoom : 1;
		unsigned delegateDidEndAnimatingZoom : 1;
		unsigned delegateWillZoom : 1;
		unsigned dataSourceRequestThumbnailImageIsSummmary : 1;
	}  _sliderFlags;
	UIPanGestureRecognizer* _panGestureRecognizer;
	double _edgeInset;

}

@property (assign,nonatomic) double value; 
@property (assign,nonatomic) double duration; 
@property (assign,nonatomic) double minimumTrimLength;                                 //@synthesize minTrimmedLength=_minTrimmedLength - In the implementation block
@property (assign,nonatomic) double maximumTrimLength;                                 //@synthesize maxTrimmedLength=_maxTrimmedLength - In the implementation block
@property (assign,nonatomic) double trimStartValue; 
@property (assign,nonatomic) double trimEndValue; 
@property (nonatomic,readonly) double zoomMinimumValue; 
@property (nonatomic,readonly) double zoomMaximumValue; 
@property (getter=isZoomAnimating,nonatomic,readonly) BOOL zoomAnimating; 
@property (assign,nonatomic) BOOL thumbIsVisible; 
@property (assign,getter=isEditable,nonatomic) BOOL editable; 
@property (assign,getter=isContinuous,nonatomic) BOOL continuous; 
@property (assign,nonatomic) id<UIMovieScrubberDataSource> dataSource; 
@property (assign,nonatomic) id<UIMovieScrubberDelegate> delegate; 
@property (assign,nonatomic) double zoomDelay;                                         //@synthesize zoomDelay=_zoomDelay - In the implementation block
@property (assign,nonatomic) BOOL showTimeViews;                                       //@synthesize showTimeViews=_showTimeViews - In the implementation block
@property (nonatomic,readonly) BOOL isInsideNavigationBar; 
@property (assign,nonatomic) double edgeInset;                                         //@synthesize edgeInset=_edgeInset - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets alignmentMargins; 
@property (assign,getter=isEditing,nonatomic) BOOL editing; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_allowActionsToQueue;
+(id)timeStringForSeconds:(int)arg1 forceFullWidthComponents:(BOOL)arg2 isElapsed:(BOOL)arg3 ;
-(id)init;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id<UIMovieScrubberDelegate>)delegate;
-(void)setDataSource:(id<UIMovieScrubberDataSource>)arg1 ;
-(void)setDelegate:(id<UIMovieScrubberDelegate>)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)reloadData;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<UIMovieScrubberDataSource>)dataSource;
-(double)duration;
-(CGSize)intrinsicContentSize;
-(void)setDuration:(double)arg1 ;
-(BOOL)isEditable;
-(void)_handlePanGesture:(id)arg1 ;
-(void)setValue:(double)arg1 ;
-(BOOL)cancelTouchTracking;
-(double)value;
-(void)didMoveToSuperview;
-(BOOL)_alwaysHandleScrollerMouseEvent;
-(BOOL)isEditing;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setEditing:(BOOL)arg1 ;
-(void)_controlTouchBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)_controlTouchMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)_controlTouchEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)_sendDelayedActions;
-(void)setEditable:(BOOL)arg1 ;
-(void)_initSubviews;
-(void)setValue:(double)arg1 animated:(BOOL)arg2 ;
-(void)_sliderAnimationWillStart:(id)arg1 context:(id)arg2 ;
-(void)_sliderAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3 ;
-(void)_setValue:(double)arg1 andSendAction:(BOOL)arg2 ;
-(BOOL)isContinuous;
-(void)setContinuous:(BOOL)arg1 ;
-(BOOL)isAnimatingValueChange;
-(void)movieScrubberTrackView:(id)arg1 clampedSizeWidthDelta:(double)arg2 actualSizeWidthDelta:(double)arg3 originXDelta:(double)arg4 minimumVisibleValue:(double)arg5 maximumVisibleValue:(double)arg6 ;
-(void)movieScrubberTrackViewDidExpand:(id)arg1 ;
-(void)movieScrubberTrackViewDidCollapse:(id)arg1 ;
-(void)movieScrubberTrackViewWillBeginRequestingThumbnails:(id)arg1 ;
-(void)movieScrubberTrackViewDidFinishRequestingThumbnails:(id)arg1 ;
-(double)movieScrubberTrackViewZoomAnimationDuration:(id)arg1 ;
-(double)movieScrubberTrackViewZoomAnimationDelay:(id)arg1 ;
-(void)movieScrubberTrackView:(id)arg1 requestThumbnailImageForTimestamp:(id)arg2 isSummaryThumbnail:(BOOL)arg3 ;
-(double)movieScrubberTrackViewThumbnailAspectRatio:(id)arg1 ;
-(double)movieScrubberTrackViewDuration:(id)arg1 ;
-(id)movieScrubberTrackView:(id)arg1 evenlySpacedTimestamps:(int)arg2 startingAt:(id)arg3 endingAt:(id)arg4 ;
-(BOOL)isInsideNavigationBar;
-(void)setThumbnailImage:(CGImageRef)arg1 forTimestamp:(id)arg2 ;
-(void)setZoomAnimationDuration:(double)arg1 ;
-(void)_sliderValueDidChange:(id)arg1 ;
-(CGRect)_editingRect;
-(void)setEdgeInset:(double)arg1 ;
-(void)_trimAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3 ;
-(void)setThumbIsVisible:(BOOL)arg1 ;
-(CGRect)_editingRectForStartTime:(double)arg1 endTime:(double)arg2 ;
-(void)_cancelTrackPress:(BOOL)arg1 ;
-(void)animateCancelEdit;
-(void)_animateAfterEdit:(BOOL)arg1 ;
-(void)_computeTrackRectForBounds:(CGRect)arg1 ;
-(CGRect)trackRect;
-(void)_updateTimes;
-(void)_updateThumbLocation;
-(CGRect)thumbRectForValue:(double)arg1 ;
-(void)setTrimEndValue:(double)arg1 ;
-(void)setTrimStartValue:(double)arg1 ;
-(void)_trackPressWasHeld;
-(void)_setZoomAnimating:(BOOL)arg1 ;
-(void)setRotationDisabled:(BOOL)arg1 ;
-(void)beginTrackingWithLocatable:(id)arg1 ;
-(void)endTrackingWithLocatable:(id)arg1 ;
-(void)continueTrackingWithLocatable:(id)arg1 ;
-(BOOL)pointInsideThumb:(CGPoint)arg1 withEvent:(id)arg2 ;
-(int)_editingHandleWithLocatable:(id)arg1 ;
-(double)_valueForLocatable:(id)arg1 ;
-(void)_beginTrackPressWithLocatable:(id)arg1 touchesBegan:(BOOL)arg2 ;
-(void)_cancelTrackPressIfNeccessaryWithLocatable:(id)arg1 ;
-(BOOL)thumbIsVisible;
-(void)animateAfterEdit;
-(UIEdgeInsets)alignmentMargins;
-(double)trimStartValue;
-(double)trimEndValue;
-(BOOL)forceZoom;
-(void)forceUnzoom;
-(double)zoomMinimumValue;
-(double)zoomMaximumValue;
-(BOOL)isZoomAnimating;
-(double)zoomDelay;
-(void)setZoomDelay:(double)arg1 ;
-(BOOL)showTimeViews;
-(void)setShowTimeViews:(BOOL)arg1 ;
-(double)maximumTrimLength;
-(void)setMaximumTrimLength:(double)arg1 ;
-(double)minimumTrimLength;
-(void)setMinimumTrimLength:(double)arg1 ;
-(double)edgeInset;
@end

