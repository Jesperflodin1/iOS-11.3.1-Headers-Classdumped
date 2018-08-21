/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/MobileSafariSettings.bundle/MobileSafariSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class PSTextFieldSpecifier, WBSSavedPassword;

@interface SafariSavedPasswordDetailController : PSListController {

	PSTextFieldSpecifier* _websiteSpecifier;
	PSTextFieldSpecifier* _usernameSpecifier;
	PSTextFieldSpecifier* _passwordSpecifier;
	WBSSavedPassword* _savedPassword;
	BOOL _editing;

}
+(void)_setValue:(id)arg1 forSpecifier:(id)arg2 ;
+(id)_valueOfSpecifier:(id)arg1 ;
+(id)_specifierWithName:(id)arg1 placeholder:(id)arg2 keyboardType:(long long)arg3 textChangeHandler:(/*^block*/id)arg4 ;
-(id)init;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setSpecifier:(id)arg1 ;
-(void)willResignActive;
-(void)willBecomeActive;
-(id)specifiers;
-(void)_updateSpecifiers;
-(void)_updateRightBarButtonItem;
-(void)_setEditing:(BOOL)arg1 ;
-(void)_endEditing:(id)arg1 ;
-(void)_edit:(id)arg1 ;
-(void)_cancelEditing:(id)arg1 ;
-(void)_deleteItemsForSpecifiers:(id)arg1 ;
-(void)_updateDoneButtonForWebsite:(id)arg1 user:(id)arg2 password:(id)arg3 ;
-(BOOL)_isSpecifierForAutoFillItem:(id)arg1 ;
@end
