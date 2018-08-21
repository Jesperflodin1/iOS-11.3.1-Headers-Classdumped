/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:04 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKFaceView.h>

@class UIView, NTKAnalogHandsView;

@interface NTKAnalogFaceView : NTKFaceView {

	BOOL __contentViewsOpaque;
	BOOL __timeViewBehindContentView;
	UIView* _contentView;
	UIView* _zoomingClippingView;
	UIView* _borrowedCircleView;
	UIView* _borrowedHandsView;
	double _maxZoomingIconDiameter;

}

@property (nonatomic,retain) UIView * zoomingClippingView;                                                                       //@synthesize zoomingClippingView=_zoomingClippingView - In the implementation block
@property (assign,nonatomic,__weak) UIView * borrowedCircleView;                                                                 //@synthesize borrowedCircleView=_borrowedCircleView - In the implementation block
@property (assign,nonatomic,__weak) UIView * borrowedHandsView;                                                                  //@synthesize borrowedHandsView=_borrowedHandsView - In the implementation block
@property (assign,nonatomic) double maxZoomingIconDiameter;                                                                      //@synthesize maxZoomingIconDiameter=_maxZoomingIconDiameter - In the implementation block
@property (assign,setter=_setContentViewsOpaque:,getter=_contentViewsAreOpaque,nonatomic) BOOL _contentViewsOpaque;              //@synthesize _contentViewsOpaque=__contentViewsOpaque - In the implementation block
@property (assign,setter=_setTimeViewBehindContentView:,nonatomic) BOOL _timeViewBehindContentView;                              //@synthesize _timeViewBehindContentView=__timeViewBehindContentView - In the implementation block
@property (nonatomic,readonly) UIView * contentView;                                                                             //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) NTKAnalogHandsView * timeView; 
+(void)_prewarm;
+(Class)_timeViewClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIView *)contentView;
-(void)dealloc;
-(void)_loadSnapshotContentViews;
-(void)_unloadSnapshotContentViews;
-(void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3 ;
-(BOOL)_needsForegroundContainerView;
-(BOOL)_supportsTimeScrubbing;
-(BOOL)_usesCustomZoom;
-(void)_applyDataMode;
-(void)_applyShowContentForUnadornedSnapshot;
-(void)_prepareForEditing;
-(void)_cleanupAfterEditing;
-(void)_startScrubbingAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_endScrubbingAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_configureForEditMode:(long long)arg1 ;
-(void)_prepareToZoomWithIconView:(id)arg1 minDiameter:(double)arg2 maxDiameter:(double)arg3 ;
-(void)_setZoomFraction:(double)arg1 iconDiameter:(double)arg2 ;
-(void)_cleanupAfterZoom;
-(void)_scrubToDate:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)_canStartTimeScrubbing;
-(CGPoint)_contentCenterOffset;
-(double)_timeTravelCaptionLabelMaxWidth;
-(void)_prepareTimeViewForReuse:(id)arg1 ;
-(CGPoint)_dateComplicationCenterOffset;
-(CGPoint)_dateComplicationRightAlignment;
-(void)_updateDateComplicationPositionIfNecessary;
-(void)_configureReusableTimeView:(id)arg1 ;
-(void)applyToForegroundZoomFraction:(double)arg1 faceScale:(double)arg2 ;
-(void)setBorrowedCircleView:(UIView *)arg1 ;
-(UIView *)borrowedCircleView;
-(void)_bringForegroundViewsToFront;
-(void)_setContentViewsOpaque:(BOOL)arg1 ;
-(void)_reuseTimeView;
-(void)_handleLocaleDidChange;
-(id)_timeTravelCaptionFontSizeOverrides;
-(void)_loadContentToReplaceUnadornedSnapshot;
-(BOOL)_timeViewBehindContentForEditMode:(long long)arg1 ;
-(void)_setTimeViewBehindContentView:(BOOL)arg1 ;
-(BOOL)_shouldRasterizeForegroundContainerViewForEditMode:(long long)arg1 ;
-(void)setMaxZoomingIconDiameter:(double)arg1 ;
-(double)maxZoomingIconDiameter;
-(long long)_backgroundedTimeViewEditModes;
-(UIView *)zoomingClippingView;
-(void)setZoomingClippingView:(UIView *)arg1 ;
-(UIView *)borrowedHandsView;
-(void)setBorrowedHandsView:(UIView *)arg1 ;
-(BOOL)_contentViewsAreOpaque;
-(BOOL)_timeViewBehindContentView;
@end

