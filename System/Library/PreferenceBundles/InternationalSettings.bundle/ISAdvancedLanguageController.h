/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:07 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/InternationalSettings.bundle/InternationalSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListItemsController.h>

@class PSSpecifier;

@interface ISAdvancedLanguageController : PSListItemsController {

	PSSpecifier* _checkedSpecifier;

}
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)updateChecked:(id)arg1 ;
-(id)specifiers;
@end

