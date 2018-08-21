/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:11:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySettings/SCATTimerPickerViewController.h>

@class PSSpecifier;

@interface SCATActionLongPressPickerViewController : SCATTimerPickerViewController {

	PSSpecifier* _pauseScanningGroupSpecifier;
	PSSpecifier* _pauseScanningSpecifier;

}
-(BOOL)userCanDisableNumericalPreference;
-(id)localizedFooterText;
-(void)setNumericalPreferenceEnabledFromUser:(BOOL)arg1 ;
-(void)setNumericalPreferenceValueFromUser:(double)arg1 ;
-(double)stepAmount;
-(double)numericalPreferenceValue;
-(id)_pauseScanningSpecifier;
-(id)_pauseScanningGroupSpecifier;
-(BOOL)numericalPreferenceEnabled;
-(void)setPauseScanningEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)pauseScanningEnabled:(id)arg1 ;
-(double)minimumValue;
-(double)maximumValue;
-(id)localizedTitle;
-(id)specifiers;
@end

