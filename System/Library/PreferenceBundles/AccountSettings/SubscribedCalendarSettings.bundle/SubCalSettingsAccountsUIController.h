/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:11:40 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/SubscribedCalendarSettings.bundle/SubscribedCalendarSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataAccessUI/DASettingsAccountsUIController.h>

@class NSArray;

@interface SubCalSettingsAccountsUIController : DASettingsAccountsUIController {

	BOOL _broughtUpInitialKeyboard;
	NSArray* _plistSpecifiers;

}

@property (assign,nonatomic) BOOL broughtUpInitialKeyboard;              //@synthesize broughtUpInitialKeyboard=_broughtUpInitialKeyboard - In the implementation block
@property (nonatomic,retain) NSArray * plistSpecifiers;                  //@synthesize plistSpecifiers=_plistSpecifiers - In the implementation block
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)cancelButtonTapped:(id)arg1 ;
-(void)account:(id)arg1 isValid:(BOOL)arg2 validationError:(id)arg3 ;
-(id)accountSpecifiers;
-(void)setAccountBooleanProperty:(id)arg1 withSpecifier:(id)arg2 ;
-(id)accountBooleanPropertyWithSpecifier:(id)arg1 ;
-(void)setAccountProperty:(id)arg1 withSpecifier:(id)arg2 ;
-(id)localizedValidationFailureTitleString;
-(id)newDefaultAccount;
-(BOOL)validateAccount;
-(id)localizedConfirmSaveUnvalidatedAccountTitleString;
-(id)localizedConfirmSaveUnvalidatedAccountMessageString;
-(id)localizedAccountSetupTitleString;
-(NSArray *)plistSpecifiers;
-(void)_setHostKeyboardToDefaultOnTraits:(id)arg1 ;
-(id)_secondarySpecifiers;
-(id)_primarySpecifiers;
-(BOOL)broughtUpInitialKeyboard;
-(void)setBroughtUpInitialKeyboard:(BOOL)arg1 ;
-(void)_setHostKeyboardForLoneSpecifierOnTraits:(id)arg1 ;
-(BOOL)_showingSecondarySpecifiers;
-(void)_insertSecondarySpecifiers;
-(void)_reloadHostDependentSepcifiers;
-(void)setPlistSpecifiers:(NSArray *)arg1 ;
-(BOOL)haveEnoughValues;
@end

