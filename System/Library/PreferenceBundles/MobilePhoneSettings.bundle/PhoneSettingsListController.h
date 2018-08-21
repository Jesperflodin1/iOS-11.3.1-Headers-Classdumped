/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:12 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/MobilePhoneSettings.bundle/MobilePhoneSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobilePhoneSettings/MobilePhoneSettings-Structs.h>
#import <Preferences/PSListController.h>

@interface PhoneSettingsListController : PSListController {

	CTServerConnectionRef _telephonyServerConnection;

}

@property (nonatomic,readonly) CTServerConnectionRef telephonyServerConnection;              //@synthesize telephonyServerConnection=_telephonyServerConnection - In the implementation block
-(id)init;
-(void)dealloc;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)bundle;
-(id)specifiers;
-(void)destroyTelephonyServerConnection;
-(void)updateCellStates;
-(void)pushController:(Class)arg1 specifier:(id)arg2 ;
-(id)sheetSpecifierWithTitle:(id)arg1 controller:(Class)arg2 detail:(Class)arg3 ;
-(id)setControlEnabled:(BOOL)arg1 atIndex:(long long)arg2 ;
-(id)setCellEnabled:(BOOL)arg1 atIndex:(unsigned)arg2 ;
-(id)setCellLoading:(BOOL)arg1 atIndex:(unsigned)arg2 ;
-(CTServerConnectionRef)telephonyServerConnection;
@end

