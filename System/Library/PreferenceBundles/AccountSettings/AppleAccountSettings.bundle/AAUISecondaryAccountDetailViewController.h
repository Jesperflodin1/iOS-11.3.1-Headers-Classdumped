/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:11:33 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/AppleAccountSettings.bundle/AppleAccountSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccountsUI/ACUIViewController.h>
#import <libobjc.A.dylib/AAUIGenericTermsRemoteUIDelegate.h>
#import <libobjc.A.dylib/AAUIAccountRepairRemoteUIDelegate.h>

@class NSOperationQueue, ACAccount, ACAccountType, NSString, AAUIAccountRepairRemoteUI, AAUIGenericTermsRemoteUI, NSMutableArray, NSMutableDictionary;

@interface AAUISecondaryAccountDetailViewController : ACUIViewController <AAUIGenericTermsRemoteUIDelegate, AAUIAccountRepairRemoteUIDelegate> {

	NSOperationQueue* _networkingOperationQueue;
	ACAccount* _account;
	ACAccountType* _appleAccountType;
	ACAccount* _appleAccount;
	BOOL _isPasswordDirty;
	BOOL _isAccountDirty;
	BOOL _shouldHideBackButton;
	NSString* _initialTitle;
	AAUIAccountRepairRemoteUI* _accountRepairRemoteUI;
	AAUIGenericTermsRemoteUI* _genericTermsRemoteUI;
	NSMutableArray* _pendingCompletionBundles;
	NSMutableDictionary* _assistantDelegates;
	id _textFieldTextDidChangeObserver;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_verifyUpdatedAccount;
-(void)_processUserInfoDictionary;
-(id)_specifiersForEditingExistingAccount;
-(id)_displayedAccountType;
-(void)_setAccountDescription:(id)arg1 withSpecifier:(id)arg2 ;
-(id)_accountDescriptionForSpecifier:(id)arg1 ;
-(void)_loadMailSettingsBundleIfNeeded;
-(id)_mailAccountUsername:(id)arg1 ;
-(void)_didFinishAccountVerificationWithResult:(BOOL)arg1 error:(id)arg2 ;
-(void)_updateAccountInformation:(id)arg1 ;
-(void)_attemptHSALoginForAccount:(id)arg1 ;
-(void)_presentValidationErrorAlert:(id)arg1 forAccount:(id)arg2 ;
-(void)_saveExistingAccountAndDismiss;
-(id)_learnMoreURLForErrorCode:(id)arg1 ;
-(void)_showGenericTermsUIforAccount:(id)arg1 ;
-(void)_loadAccountRepairRemoteUIWithAccount:(id)arg1 ;
-(void)_accountRepairDidFail;
-(void)_presentNoMailServiceWhileInMailAlert;
-(id)descriptionPlaceholder;
-(id)init;
-(void)dealloc;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)_specifiersForLoginForm;
-(void)_setUsername:(id)arg1 withSpecifier:(id)arg2 ;
-(id)_usernameForSpecifier:(id)arg1 ;
-(void)_setPassword:(id)arg1 withSpecifier:(id)arg2 ;
-(id)_passwordForSpecifier:(id)arg1 ;
-(void)_textFieldValueDidChange:(id)arg1 ;
-(void)_presentInvalidUsernameAlert;
-(void)genericTermsRemoteUI:(id)arg1 didFinishWithSuccess:(BOOL)arg2 ;
-(void)cancelButtonTapped:(id)arg1 ;
-(void)confirmationView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(id)_titleForError:(id)arg1 account:(id)arg2 ;
-(id)_appleAccountType;
-(void)_presentUnableToSaveAccountAlert;
-(void)accountRepairRemoteUI:(id)arg1 account:(id)arg2 didFinishWithSuccess:(BOOL)arg3 ;
-(void)doneButtonTapped:(id)arg1 ;
-(void)_updateDoneButton;
-(id)specifiers;
@end
