/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:01:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/ControlCenter/Bundles/DisplayModule.bundle/DisplayModule
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DisplayModule/DisplayModule-Structs.h>
#import <ControlCenterUIKit/CCUISliderModuleBackgroundViewController.h>

@class CBClient, CBAdaptationClient, CBBlueLightClient, UIAlertController, CCUILabeledRoundButtonViewController;

@interface CCUIDisplayBackgroundViewController : CCUISliderModuleBackgroundViewController {

	CBClient* _brightnessClient;
	CBAdaptationClient* _trueToneClient;
	CBBlueLightClient* _nightShiftClient;
	SCD_Struct_CC2 _currentStatus;
	UIAlertController* _presentedAlertController;
	CCUILabeledRoundButtonViewController* _nightShiftButton;
	CCUILabeledRoundButtonViewController* _trueToneButton;

}

@property (nonatomic,retain) CCUILabeledRoundButtonViewController * nightShiftButton;              //@synthesize nightShiftButton=_nightShiftButton - In the implementation block
@property (nonatomic,retain) CCUILabeledRoundButtonViewController * trueToneButton;                //@synthesize trueToneButton=_trueToneButton - In the implementation block
-(void)setNightShiftButton:(CCUILabeledRoundButtonViewController *)arg1 ;
-(void)setTrueToneButton:(CCUILabeledRoundButtonViewController *)arg1 ;
-(CCUILabeledRoundButtonViewController *)trueToneButton;
-(void)_nightShiftButtonPressed:(id)arg1 ;
-(void)_setupNightShift;
-(void)_trueToneButtonPressed:(id)arg1 ;
-(BOOL)_toggleNightShift;
-(void)_toggleTrueTone;
-(CCUILabeledRoundButtonViewController *)nightShiftButton;
-(id)_statusUpdateForBlueLightStatus:(SCD_Struct_CC3)arg1 ;
-(id)_statusUpdateForTrueToneEnabled:(BOOL)arg1 ;
-(void)_getBlueLightStatus:(/*^block*/id)arg1 ;
-(void)_setNightShiftEnabled:(BOOL)arg1 ;
-(id)_alertControllerForDisablingAccessibilityScreenFilter:(/*^block*/id)arg1 cancelBlock:(/*^block*/id)arg2 ;
-(id)_statusUpdateForBlueLightStatus:(SCD_Struct_CC3)arg1 forLocale:(id)arg2 ;
-(id)_statusUpdateFormatStringForBlueLightEnabled:(BOOL)arg1 transitionTime:(SCD_Struct_CC0)arg2 ;
-(id)_timeStringForBlueLightTransitionTime:(SCD_Struct_CC0)arg1 ;
-(id)_timeStringForBlueLightTransitionTime:(SCD_Struct_CC0)arg1 forLocale:(id)arg2 ;
-(id)_timeFormatterForLocale:(id)arg1 ;
-(id)_statusUpdateFormatStringForBlueLightEnabled:(BOOL)arg1 transitionTime:(SCD_Struct_CC0)arg2 forLocale:(id)arg3 ;
-(id)_formatCardinalityForTransitionTime:(SCD_Struct_CC0)arg1 forLocale:(id)arg2 ;
-(BOOL)_uses24HourTimeForLocale:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_updateState;
@end

