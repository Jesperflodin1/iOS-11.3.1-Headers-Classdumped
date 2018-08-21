/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:04 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKFaceView.h>

@class NTKUtilityComplicationFactory, UIColor, NTKComplicationDisplayWrapperView;

@interface NTKVictoryDigitalFaceView : NTKFaceView {

	NTKUtilityComplicationFactory* _utilityComplicationFactory;
	UIColor* _complicationForegroundColor;
	UIColor* _complicationPlatterColor;
	NTKComplicationDisplayWrapperView* _logoWrapperView;
	CGPoint _logoPlatterCenter;
	double _currentLogoPlatterXOffset;

}
+(id)_swatchImageForColorOption:(id)arg1 ;
+(id)_swatchForEditModeDependsOnOptions:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)_configureComplicationView:(id)arg1 forSlot:(id)arg2 ;
-(void)_loadSnapshotContentViews;
-(void)_unloadSnapshotContentViews;
-(void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3 ;
-(id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3 ;
-(double)_verticalPaddingForStatusBar;
-(BOOL)_needsForegroundContainerView;
-(id)_additionalPrelaunchApplicationIdentifiers;
-(void)_loadLayoutRules;
-(BOOL)_supportsTimeScrubbing;
-(void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1 ;
-(void)_prepareForEditing;
-(void)_cleanupAfterEditing;
-(void)_endScrubbingAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(long long)_utilitySlotForSlot:(id)arg1 ;
-(unsigned long long)_keylineLabelAlignmentForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5 ;
-(void)_scrubToDate:(id)arg1 animated:(BOOL)arg2 ;
-(CGRect)_keylineFrameForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(BOOL)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1 ;
-(double)_complicationAlphaForEditMode:(long long)arg1 ;
-(id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3 ;
-(void)_layoutTimeTravelCaptionView:(id)arg1 ;
-(double)_keylineEdgeGapForState:(long long)arg1 ;
-(double)_keylinePaddingForState:(long long)arg1 ;
-(double)_timeTravelStatusModuleCaptionConstraintPadding;
-(void)_layoutTimeTravelStatusModule:(id)arg1 ;
-(void)_setupLogoViews;
-(void)_logoTapped;
-(void)_positionLogoPlatterView;
-(void)_applyColor:(id)arg1 platterColor:(id)arg2 toComplicationView:(id)arg3 ;
-(double)_timeAlphaForEditMode:(long long)arg1 ;
-(double)_bottomComplicationAlphaForEditMode:(long long)arg1 ;
-(double)_logoPlatterAlphaForEditMode:(long long)arg1 ;
-(double)_logoPlatterXOffsetForEditMode:(long long)arg1 ;
@end

