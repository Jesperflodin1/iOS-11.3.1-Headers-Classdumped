/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:11:36 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/DAVSettings.bundle/DAVSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataAccessUI/DASettingsAccountsUIController.h>

@interface DAVSettingsAccountsUIController : DASettingsAccountsUIController {

	BOOL _isReloadingProperties;
	BOOL _attemptedInitialValidation;

}

@property (assign,nonatomic) BOOL isReloadingProperties;                   //@synthesize isReloadingProperties=_isReloadingProperties - In the implementation block
@property (assign,nonatomic) BOOL attemptedInitialValidation;              //@synthesize attemptedInitialValidation=_attemptedInitialValidation - In the implementation block
-(void)account:(id)arg1 isValid:(BOOL)arg2 validationError:(id)arg3 ;
-(id)accountSpecifiers;
-(void)didConfirmTryWithoutSSL:(BOOL)arg1 ;
-(BOOL)dismissesAfterInitialSetup;
-(void)setAccountBooleanProperty:(id)arg1 withSpecifier:(id)arg2 ;
-(id)accountBooleanPropertyWithSpecifier:(id)arg1 ;
-(id)accountPropertyWithSpecifier:(id)arg1 ;
-(void)setAccountProperty:(id)arg1 withSpecifier:(id)arg2 ;
-(id)localizedValidationFailureTitleString;
-(id)newDefaultAccount;
-(BOOL)validateAccount;
-(id)localizedConfirmSaveUnvalidatedAccountMessageString;
-(id)localizedAccountSetupTitleString;
-(id)acAccountTypeString;
-(long long)defaultDADataclassesToEnable;
-(id)settingsPlistName;
-(BOOL)showDeleteButton;
-(BOOL)attemptedInitialValidation;
-(void)setAttemptedInitialValidation:(BOOL)arg1 ;
-(BOOL)isReloadingProperties;
-(void)setIsReloadingProperties:(BOOL)arg1 ;
-(void)_updateDescriptionFromServer:(id)arg1 ;
-(BOOL)haveEnoughValues;
@end
