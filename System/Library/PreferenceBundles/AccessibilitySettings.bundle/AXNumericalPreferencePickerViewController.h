/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:11:31 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <AccessibilitySettings/AXUISettingsEditableTableCellWithStepperDelegate.h>

@class NSString;

@interface AXNumericalPreferencePickerViewController : PSListController <AXUISettingsEditableTableCellWithStepperDelegate> {

	double _cachedNumericalValue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)userCanDisableNumericalPreference;
-(BOOL)shouldDisablePreferenceEntirely;
-(id)localizedFooterText;
-(void)setDelayEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)delayEnabled:(id)arg1 ;
-(id)localizedPickerFooterText;
-(id)_delayPickerSpecifier;
-(void)setNumericalPreferenceEnabledFromUser:(BOOL)arg1 ;
-(BOOL)shouldSaveOnExit;
-(id)_delayPickerFooterSpecifier;
-(void)setNumericalPreferenceValueFromUser:(double)arg1 ;
-(double)stepAmount;
-(double)numericalPreferenceValue;
-(BOOL)numericalPreferenceEnabled;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(double)minimumValue;
-(double)maximumValue;
-(id)localizedTitle;
-(double)minimumValueForSpecifier:(id)arg1 ;
-(double)maximumValueForSpecifier:(id)arg1 ;
-(double)stepValueForSpecifier:(id)arg1 ;
-(void)specifier:(id)arg1 setValue:(double)arg2 ;
-(id)stringValueForSpecifier:(id)arg1 ;
-(id)specifiers;
-(double)valueForSpecifier:(id)arg1 ;
@end

