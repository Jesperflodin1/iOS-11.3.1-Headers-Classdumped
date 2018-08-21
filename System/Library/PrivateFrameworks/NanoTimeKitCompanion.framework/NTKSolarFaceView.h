/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:06 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKDigitalFaceView.h>
#import <libobjc.A.dylib/NTKTimeView.h>
#import <libobjc.A.dylib/PUICCrownInputSequencerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class NTKDigitalTimeLabel, NTKDigitalTimeLabelStyle, UIView, NTKBezierPathView, NTKSolarDiskView, UIImageView, NTKColorCurve, UILabel, NSDictionary, NTKSolarTimeModel, NTKFloatCurve, NTKSolarPath, UITapGestureRecognizer, NTKComplicationController, NTKDateComplicationLabel, NTKLayoutRule, NSDateComponentsFormatter, NSMutableSet, NSTimer, CLKFont, NSString;

@interface NTKSolarFaceView : NTKDigitalFaceView <NTKTimeView, PUICCrownInputSequencerDelegate, UIGestureRecognizerDelegate> {

	NTKDigitalTimeLabel* _timeLabel;
	NTKDigitalTimeLabelStyle* _timeLabelDefaultStyle;
	NTKDigitalTimeLabelStyle* _timeLabelSmallInUpperRightCornerStyle;
	UIView* _solarPathObjectContainerView;
	NTKBezierPathView* _solarBezierPathView;
	NTKSolarDiskView* _solarDiskView;
	UIView* _solarDiskHaloParentView;
	UIImageView* _solarDiskHaloView;
	UIView* _solarDiskHaloMaskView;
	NTKColorCurve* _preNoonSolarDiskColorCurve;
	NTKColorCurve* _postNoonSolarDiskColorCurve;
	double _solarDiskOverridePercentage;
	UILabel* _waypointLabel;
	NSDictionary* _waypoints;
	NSDictionary* _waypointViews;
	UIView* _horizonView;
	UIImageView* _horizonGradientView;
	UIView* _horizonGradientContainerView;
	NTKColorCurve* _preNoonHorizonGradientColorCurve;
	NTKColorCurve* _postNoonHorizonGradientColorCurve;
	UIView* _belowHorizonView;
	NTKSolarTimeModel* _solarTimeModel;
	BOOL _solarPathNeedsUpdate;
	double _currentSolarDiskPercentage;
	NTKFloatCurve* _preNoonHorizonHeightCurve;
	NTKFloatCurve* _postNoonHorizonHeightCurve;
	NTKSolarPath* _solarPath;
	UITapGestureRecognizer* _viewModeTapGesture;
	long long _previousViewMode;
	NSNumber* _clockTimerToken;
	NSString* _locationManagerToken;
	NTKComplicationController* _dateComplicationController;
	NTKDateComplicationLabel* _dateComplicationLabel;
	NTKLayoutRule* _dateComplicationLayoutRule;
	BOOL _canHandleHardwareEvents;
	NTKDigitalTimeLabel* _timeScrubLabel;
	NTKDigitalTimeLabelStyle* _timeScrubLabelStyle;
	UILabel* _timeScrubNowLabel;
	UILabel* _timeDifferenceScrubLabel;
	NTKLayoutRule* _timeDifferenceScrubLabelLayoutRule;
	NSDateComponentsFormatter* _intervalDateFormatter;
	BOOL _useLocationAwareInteractiveMode;
	/*^block*/id _waypointSettleAnimationBlock;
	UIView* _wristRaiseBackgroundView;
	UIView* _wristRaiseSunView;
	UIView* _wristRaiseSunMaskView;
	UIView* _zoomMaskView;
	CGPoint _timeLabelZoomEndingCenter;
	CGPoint _dateLabelZoomEndingCenter;
	CGPoint _solarDiskViewZoomEndingCenter;
	UIView* _borrowedTimeViewFromClockIcon;
	UIView* _borrowedCircleViewFromClockIcon;
	NSMutableSet* _animatingReasons;
	BOOL _isContentLoaded;
	NSTimer* _wheelDelayTimer;
	NSTimer* _buttonPressTimer;
	CLKFont* _labelFont;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isFrozen,nonatomic) BOOL frozen; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(BOOL)_wheelChangedWithEvent:(id)arg1 ;
-(void)setTimeOffset:(double)arg1 ;
-(BOOL)_isAnimating;
-(void)_layoutTimeLabelForViewMode:(long long)arg1 ;
-(void)_loadSnapshotContentViews;
-(void)_handleViewModeTapGesture:(id)arg1 ;
-(void)_unloadSnapshotContentViews;
-(void)_prepareWristRaiseAnimation;
-(void)_performWristRaiseAnimation;
-(void)setViewMode:(long long)arg1 ;
-(id)_timeLabelStyleForViewMode:(long long)arg1 ;
-(void)_loadLayoutRules;
-(BOOL)_usesCustomZoom;
-(void)_applyDataMode;
-(void)_becameActiveFace;
-(void)_becameInactiveFace;
-(void)_applyShowContentForUnadornedSnapshot;
-(void)_prepareToZoomWithIconView:(id)arg1 minDiameter:(double)arg2 maxDiameter:(double)arg3 ;
-(void)_setZoomFraction:(double)arg1 iconDiameter:(double)arg2 ;
-(void)_cleanupAfterZoom;
-(void)setOverrideDate:(id)arg1 duration:(double)arg2 ;
-(BOOL)_handlePhysicalButton:(unsigned long long)arg1 event:(unsigned long long)arg2 ;
-(void)_localeChanged;
-(id)_formatDateStringForIntervalBetweenReferenceDate:(id)arg1 andOverrideDate:(id)arg2 ;
-(void)_disableCrown;
-(void)_startClockUpdates;
-(void)_stopClockUpdates;
-(BOOL)_canEnterInteractiveMode;
-(void)_updateWaypoints;
-(void)_timeZoneChanged:(id)arg1 ;
-(void)_updateColorCurves;
-(double)_solarDiskRestPercentage;
-(void)_updateSolarHaloWithPercentage:(double)arg1 ;
-(void)_updateSolarHorizonGradientAlphaWithPercentage:(double)arg1 ;
-(void)_updateSolarHorizonGradientColorWithPercentage:(double)arg1 ;
-(void)_setViewMode:(long long)arg1 animated:(BOOL)arg2 ;
-(id)_createSolarBezierPath;
-(void)_setSolarBezierPath:(id)arg1 animated:(BOOL)arg2 ;
-(void)_layoutDateComplicationForViewMode:(long long)arg1 ;
-(void)_layoutCrownLabelsForViewMode:(long long)arg1 ;
-(void)_layoutHorizonForViewMode:(long long)arg1 ;
-(void)_layoutSolarPathAndContainerForViewMode:(long long)arg1 ;
-(void)_layoutSolarDiskViewForViewMode:(long long)arg1 ;
-(void)_updateWaypointLabelForCrownMovement;
-(double)_solarDiskIdealizedDatePercentage;
-(void)_solarDiskPercentageChanged:(double)arg1 ;
-(void)_updateSolarPathForChangedDate:(id)arg1 ;
-(void)_updateTimeScrubbingContent;
-(void)_animateSolarDiskFromPercentage:(double)arg1 toPercentage:(double)arg2 reason:(id)arg3 ;
-(void)_enableCrown;
-(BOOL)_solarPathRequiresUpdateForChangedLocation:(id)arg1 ;
-(void)_updateSolarPathForChangedLocation:(id)arg1 ;
-(void)_makeLocationAwareInteractiveModeUIVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(double)_percentageForWaypoint:(long long)arg1 ;
-(long long)_waypointForPercentage:(double)arg1 withSmallThreshold:(double)arg2 largeThreshold:(double)arg3 ;
-(CGPoint)_pointOnSolarPathForPercentage:(double)arg1 ;
-(void)_updateSolarHorizonGradientAlphaWithSolarDiskCenter:(CGPoint)arg1 ;
-(void)_updateSolarDiskHaloViewPosition;
-(void)_beginAnimatingForReason:(id)arg1 ;
-(void)_endAnimatingForReason:(id)arg1 ;
-(void)_animateSolarDiskToRestPercentageIfNeeded;
-(id)_createWaypointView;
-(void)_prepareForSettingViewMode:(long long)arg1 ;
-(void)_cleanupAfterSettingViewMode:(long long)arg1 ;
-(void)_adjustUIForBoundsChange;
-(void)_wheelDelayTimerFired;
-(void)_buttonPressTimerFired;
-(void)_sharedLocationManagerUpdatedLocation:(id)arg1 error:(id)arg2 ;
-(id)_waypointLabelTextForPercentage:(double)arg1 ;
-(BOOL)_isAnimatingForReason:(id)arg1 ;
@end
