/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:08 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/KeychainSyncViewControllerDelegate.h>

@class KeychainSyncDevicePINController, PSKeychainSyncSecurityCodeController, KeychainSyncAdvancedSecurityCodeController, KeychainSyncPhoneNumberController, KeychainSyncSMSVerificationController, UIView, NSTimer, NSString, UIViewController, PSSetupController, PSRootController;

@interface PSKeychainSyncManager : NSObject <KeychainSyncViewControllerDelegate> {

	BOOL _joiningCircle;
	BOOL _joiningCircleAfterRecovery;
	int _circleNotificationToken;
	int _flow;
	KeychainSyncDevicePINController* _devicePinController;
	PSKeychainSyncSecurityCodeController* _simpleSecurityCodeController;
	PSKeychainSyncSecurityCodeController* _complexSecurityCodeController;
	KeychainSyncAdvancedSecurityCodeController* _advancedSecurityCodeChoiceController;
	PSKeychainSyncSecurityCodeController* _securityCodeRecoveryController;
	KeychainSyncPhoneNumberController* _phoneNumberController;
	KeychainSyncSMSVerificationController* _smsValidationController;
	UIView* _spinningView;
	unsigned _spinnerCount;
	NSTimer* _credentialExpirationTimer;
	NSTimer* _joinAfterRecoveryTimeoutTimer;
	BOOL _circleWasReset;
	int _stagedSecurityCodeType;
	NSString* _appleIDUsername;
	NSString* _appleIDRawPassword;
	NSString* _appleIDPasswordOrEquivalentToken;
	/*^block*/id _completion;
	/*^block*/id _passwordPromptCompletion;
	/*^block*/id _changeSecurityCodeCompletion;
	/*^block*/id _resetCompletion;
	/*^block*/id _circleJoinCompletion;
	UIViewController* _resetPromptControllerHost;
	UIViewController* _hostViewController;
	PSSetupController* _settingsSetupController;
	PSRootController* _buddyNavigationController;
	NSString* _securityCodeRecoveryAttempt;
	NSString* _stagedSecurityCode;

}

@property (nonatomic,copy) id completion;                                                //@synthesize completion=_completion - In the implementation block
@property (nonatomic,copy) id passwordPromptCompletion;                                  //@synthesize passwordPromptCompletion=_passwordPromptCompletion - In the implementation block
@property (nonatomic,copy) id changeSecurityCodeCompletion;                              //@synthesize changeSecurityCodeCompletion=_changeSecurityCodeCompletion - In the implementation block
@property (nonatomic,copy) id resetCompletion;                                           //@synthesize resetCompletion=_resetCompletion - In the implementation block
@property (nonatomic,copy) id circleJoinCompletion;                                      //@synthesize circleJoinCompletion=_circleJoinCompletion - In the implementation block
@property (nonatomic,retain) UIViewController * resetPromptControllerHost;               //@synthesize resetPromptControllerHost=_resetPromptControllerHost - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * hostViewController;               //@synthesize hostViewController=_hostViewController - In the implementation block
@property (nonatomic,retain) PSSetupController * settingsSetupController;                //@synthesize settingsSetupController=_settingsSetupController - In the implementation block
@property (nonatomic,retain) PSRootController * buddyNavigationController;               //@synthesize buddyNavigationController=_buddyNavigationController - In the implementation block
@property (nonatomic,retain) NSString * securityCodeRecoveryAttempt;                     //@synthesize securityCodeRecoveryAttempt=_securityCodeRecoveryAttempt - In the implementation block
@property (nonatomic,readonly) NSString * stagedSecurityCode;                            //@synthesize stagedSecurityCode=_stagedSecurityCode - In the implementation block
@property (nonatomic,readonly) int stagedSecurityCodeType;                               //@synthesize stagedSecurityCodeType=_stagedSecurityCodeType - In the implementation block
@property (assign,nonatomic) BOOL circleWasReset;                                        //@synthesize circleWasReset=_circleWasReset - In the implementation block
@property (getter=isRunningInBuddy,nonatomic,readonly) BOOL runningInBuddy; 
@property (nonatomic,copy) NSString * appleIDUsername;                                   //@synthesize appleIDUsername=_appleIDUsername - In the implementation block
@property (nonatomic,copy) NSString * appleIDRawPassword;                                //@synthesize appleIDRawPassword=_appleIDRawPassword - In the implementation block
@property (nonatomic,readonly) NSString * appleIDPasswordOrEquivalentToken;              //@synthesize appleIDPasswordOrEquivalentToken=_appleIDPasswordOrEquivalentToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
+(void)getStatusWithCompletion:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)navigationController;
-(void)_cleanup;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(void)keychainSyncControllerCancel:(id)arg1 ;
-(BOOL)isRunningInBuddy;
-(void)keychainSyncController:(id)arg1 didFinishWithResult:(id)arg2 error:(id)arg3 ;
-(void)showEnableSyncFlowWithSpecifier:(id)arg1 overController:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)showRecoveryFlowWithSpecifier:(id)arg1 overController:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_cleanupAppleIDCredentials;
-(void)showNetworkReachabilityError;
-(void)joinCircleWithCompletion:(/*^block*/id)arg1 ;
-(void)makeSettingsSetupControllerWithSpecifier:(id)arg1 parent:(id)arg2 initialController:(id)arg3 ;
-(void)_finishedWithStatus:(int)arg1 error:(id)arg2 ;
-(void)_showResetFlowOverController:(id)arg1 withEnableBackupText:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_preSetupCancelledWithCurrentStatus;
-(void)showAlert:(id)arg1 ;
-(void)showPinChoiceAlert;
-(void)promptForPasswordIfNeededForWritingOverController:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_registerForCircleChangeNotifications;
-(void)setBuddyNavigationController:(PSRootController *)arg1 ;
-(void)setChangeSecurityCodeCompletion:(id)arg1 ;
-(void)setResetPromptControllerHost:(UIViewController *)arg1 ;
-(void)setResetCompletion:(id)arg1 ;
-(void)startNavigationSpinnerInViewController:(id)arg1 ;
-(BOOL)_resetCircleAndDisableBackupWithError:(id*)arg1 ;
-(void)stopNavigationSpinner;
-(void)showResetAcknowledgementIfNeededWithCompletion:(/*^block*/id)arg1 ;
-(void)setCircleWasReset:(BOOL)arg1 ;
-(void)_disableCDPKeychainSyncOverController:(id)arg1 deletingSafariPasswords:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_promptUserToDeleteSafariSavedContentWithCompletion:(/*^block*/id)arg1 ;
-(void)_disableKeychainSyncOverController:(id)arg1 deletingSafariPasswords:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_deleteSafariAutoFillPasswords;
-(BOOL)_errorRequiresPasswordPrompt:(id)arg1 ;
-(void)promptForPasswordOverController:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(NSString *)appleIDRawPassword;
-(NSString *)appleIDPasswordOrEquivalentToken;
-(BOOL)_registerUserCredentialsName:(id)arg1 rawPassword:(id)arg2 error:(id*)arg3 ;
-(void)setAppleIDUsername:(NSString *)arg1 ;
-(void)setAppleIDRawPassword:(id)arg1 equivalentToken:(id)arg2 ;
-(void)_showGenericFlowErrorAlert;
-(void)promptForPasswordIfNeededOverController:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(NSString *)appleIDUsername;
-(void)setSettingsSetupController:(PSSetupController *)arg1 ;
-(void)handleCircleChangedNotification;
-(void)setCircleJoinCompletion:(id)arg1 ;
-(void)pinChoiceAlertDidChooseToUseDevicePasscode:(BOOL)arg1 ;
-(id)preferencesApp;
-(BOOL)_changeSecurityCode:(id)arg1 type:(int)arg2 smsTarget:(id)arg3 smsTargetCountryInfo:(id)arg4 username:(id)arg5 passwordOrEquivalentToken:(id)arg6 error:(id*)arg7 ;
-(void)_showInvalidPhoneNumberAlertWithDigits:(id)arg1 countryInfo:(id)arg2 ;
-(void)setStagedSecurityCode:(id)arg1 type:(int)arg2 ;
-(NSString *)stagedSecurityCode;
-(int)stagedSecurityCodeType;
-(void)_showGenericFlowErrorAlertWithDismissalHandler:(/*^block*/id)arg1 ;
-(void)promptForPasswordIfCredentialsNotCachedOverController:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)circleWasReset;
-(id)viewControllerForPresentingAlerts;
-(void)dismissAppleSupportPane:(id)arg1 ;
-(void)_registerForCircleChangeNotificationsWithCompletion:(/*^block*/id)arg1 ;
-(id)_defaultKeychainViewSet;
-(void)joinCircleAfterRecovery:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)showContactAppleSupportPane;
-(void)_peerApprovalFromRecoveryFlow;
-(void)_resetFromRecoveryFlow;
-(void)_startCircleJoinAfterRecoveryTimer;
-(void)_stopCircleJoinAfterRecoveryTimer;
-(void)_circleJoinAfterRecoveryTimerFired:(id)arg1 ;
-(void)_callCompletionWithStatus:(int)arg1 error:(id)arg2 ;
-(void)setSecurityCodeRecoveryAttempt:(NSString *)arg1 ;
-(void)_autoVetSMSValidationWithToken:(id)arg1 ;
-(void)_recoverWithSecurityCode:(id)arg1 verificationCode:(id)arg2 ;
-(void)_changeToNewSecurityCode:(id)arg1 type:(int)arg2 smsTarget:(id)arg3 smsTargetCountryInfo:(id)arg4 ;
-(void)joinCircleAndEnableSecureBackupWithPhoneNumber:(id)arg1 countryInfo:(id)arg2 ;
-(void)keychainSyncPhoneNumberController:(id)arg1 didCompleteWithPhoneNumber:(id)arg2 countryInfo:(id)arg3 ;
-(NSString *)securityCodeRecoveryAttempt;
-(void)_enableSecureBackupWithPhoneNumber:(id)arg1 countryInfo:(id)arg2 ;
-(void)showEnableEscrowFlowWithSpecifier:(id)arg1 overController:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)showRecoveryFlowWithNavigationController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)showChangeSecurityCodeFlowWithSpecifier:(id)arg1 overController:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)showEnableFlowWithNavigationController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)showResetAndJoinFlowOverController:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)disableKeychainSyncOverController:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)promptForPasswordIfNeededWithCompletion:(/*^block*/id)arg1 ;
-(void)promptForDevicePasscodeChangeToPasscode:(id)arg1 overController:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setAppleIDRawPassword:(NSString *)arg1 ;
-(id)passwordPromptCompletion;
-(void)setPasswordPromptCompletion:(id)arg1 ;
-(id)changeSecurityCodeCompletion;
-(id)resetCompletion;
-(id)circleJoinCompletion;
-(UIViewController *)resetPromptControllerHost;
-(PSSetupController *)settingsSetupController;
-(PSRootController *)buddyNavigationController;
-(void)setHostViewController:(UIViewController *)arg1 ;
-(UIViewController *)hostViewController;
-(void)showController:(id)arg1 ;
@end

