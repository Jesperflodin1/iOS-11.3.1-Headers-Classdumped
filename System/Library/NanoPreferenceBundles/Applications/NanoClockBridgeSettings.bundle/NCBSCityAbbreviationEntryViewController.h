/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:46 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/NanoPreferenceBundles/Applications/NanoClockBridgeSettings.bundle/NanoClockBridgeSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoClockBridgeSettings/NanoClockBridgeSettings-Structs.h>
#import <Preferences/PSListController.h>
#import <UIKit/UITextFieldDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>

@class UITextField, WorldClockCity, NSString;

@interface NCBSCityAbbreviationEntryViewController : PSListController <UITextFieldDelegate, UIAlertViewDelegate> {

	UITextField* _abbrevEntry;
	WorldClockCity* _worldCity;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCustomAbbreviation:(id)arg1 specifier:(id)arg2 ;
-(id)customAbbreviation:(id)arg1 ;
-(void)_resetAbbrevEntryField;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(BOOL)textFieldShouldEndEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(id)specifiers;
-(void)returnPressedAtEnd;
@end
