/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:06 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKFaceView.h>
#import <libobjc.A.dylib/NTKActivityFaceViewFactoryDelegate.h>

@class NTKActivityFaceViewFactory, HKRingsView, UILabel, NTKActivityFaceControl, UIView, NTKPolygonCylinderView, NSDate, NTKDigitalTimeLabel, NSString;

@interface NTKActivityDigitalFaceView : NTKFaceView <NTKActivityFaceViewFactoryDelegate> {

	NTKActivityFaceViewFactory* _faceViewFactory;
	HKRingsView* _ringsView;
	UILabel* _energyLabel;
	UILabel* _briskMinutesLabel;
	UILabel* _standHoursLabel;
	NTKActivityFaceControl* _tapToLaunchButton;
	UIView* _timeLabelBackgroundView;
	NTKPolygonCylinderView* _densityEditingPolygonView;
	NSDate* _timeDensityEditingOverrideDate;
	RingLayout _currentRingLayout;
	double _lastEnergyPercentage;
	double _lastBriskPercentage;
	double _lastSedentaryPercentage;
	double _blinkerAndSecondsWidth;
	long long _energyStringMetricWidth;
	long long _briskStringMetricWidth;
	long long _standStringMetricWidth;
	BOOL _useTimeTravelStyleForTimeLabel;
	BOOL _showSeconds;
	double _rightTimeViewInset;

}

@property (assign,nonatomic) BOOL useTimeTravelStyleForTimeLabel;              //@synthesize useTimeTravelStyleForTimeLabel=_useTimeTravelStyleForTimeLabel - In the implementation block
@property (assign,nonatomic) double rightTimeViewInset;                        //@synthesize rightTimeViewInset=_rightTimeViewInset - In the implementation block
@property (nonatomic,retain) NTKDigitalTimeLabel * timeView; 
@property (assign,nonatomic) BOOL showSeconds;                                 //@synthesize showSeconds=_showSeconds - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_prewarm;
+(id)_swatchColorForColorOption:(id)arg1 ;
+(id)_newRingsView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)_configureComplicationView:(id)arg1 forSlot:(id)arg2 ;
-(void)_loadSnapshotContentViews;
-(void)_unloadSnapshotContentViews;
-(void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3 ;
-(void)_prepareWristRaiseAnimation;
-(void)_performWristRaiseAnimation;
-(id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3 ;
-(BOOL)_needsForegroundContainerView;
-(id)_additionalPrelaunchApplicationIdentifiers;
-(void)_loadLayoutRules;
-(BOOL)_supportsTimeScrubbing;
-(void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)_applyShowsCanonicalContent;
-(void)_applyShowsLockedUI;
-(unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1 ;
-(void)_prepareForEditing;
-(void)_cleanupAfterEditing;
-(void)_startScrubbingAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_endScrubbingAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)_layoutForegroundContainerView;
-(unsigned long long)_keylineLabelAlignmentForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)_configureForEditMode:(long long)arg1 ;
-(void)_setZoomFraction:(double)arg1 iconDiameter:(double)arg2 ;
-(void)_cleanupAfterZoom;
-(BOOL)_fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2 ;
-(id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5 ;
-(void)_scrubToDate:(id)arg1 animated:(BOOL)arg2 ;
-(void)setOverrideDate:(id)arg1 duration:(double)arg2 ;
-(BOOL)_wantsTimeTravelStatusModule;
-(CGRect)_keylineFrameForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(BOOL)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1 ;
-(void)_layoutTimeTravelCaptionView:(id)arg1 ;
-(long long)_legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(id)arg2 ;
-(void)setDataMode:(long long)arg1 ;
-(void)_applyEntryModel:(id)arg1 byFraction:(double)arg2 updateLabels:(BOOL)arg3 animated:(BOOL)arg4 ;
-(void)_applyCurrentEntryModelByFraction:(double)arg1 updateLabels:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)_enumerateActivityLabels:(/*^block*/id)arg1 ;
-(void)_launchButtonPressed:(id)arg1 ;
-(double)_ringAlphaForEditMode:(long long)arg1 ;
-(void)applyEntryModel:(id)arg1 animated:(BOOL)arg2 ;
-(void)timeTravelDateEnteredOrExitedTimelineBounds:(BOOL)arg1 ;
-(void)applyEntryModelWithUnfilledRings:(id)arg1 ;
-(void)_renderSynchronouslyWithImageQueueDiscard:(BOOL)arg1 ;
-(void)_layoutTimeTravelStatusModule:(id)arg1 ;
-(double)_timeAlphaForEditMode:(long long)arg1 ;
-(void)_updateTimeViewSecondsDisplayState;
-(void)_applyCurrentRingLayout;
-(void)_recenterTimeView;
-(void)_updateCurrentRingLayoutIfNecessary;
-(CGPoint)_ringCenterForLayout:(RingLayout)arg1 ;
-(id)_ringGroupController;
-(BOOL)showSeconds;
-(void)_setActivityViewsAlpha:(double)arg1 animated:(BOOL)arg2 ;
-(double)_rightTimeViewInsetForEditMode:(long long)arg1 ;
-(void)setRightTimeViewInset:(double)arg1 ;
-(void)_configureForDetailEditing;
-(void)_cleanUpAfterDetailEditing;
-(void)setShowSeconds:(BOOL)arg1 ;
-(long long)_polygonIndexForAccuracy:(unsigned long long)arg1 ;
-(void)setUseTimeTravelStyleForTimeLabel:(BOOL)arg1 ;
-(double)_blinkerAndSecondsWidth;
-(CGRect)_timeViewBackgroundRect;
-(BOOL)useTimeTravelStyleForTimeLabel;
-(double)rightTimeViewInset;
@end

