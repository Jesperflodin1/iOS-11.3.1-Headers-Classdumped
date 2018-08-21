/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:11:34 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/AppleAccountSettings.bundle/AppleAccountSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccountSettings/AppleAccountSettings-Structs.h>
#import <AccountsUI/ACUIDataclassConfigurationViewController.h>
#import <AppleAccountSettings/AAUIAccountManagerDelegate.h>
#import <libobjc.A.dylib/AAUISpecifierProviderDelegate.h>
#import <libobjc.A.dylib/RemoteUIControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <libobjc.A.dylib/AAUIGenericTermsRemoteUIDelegate.h>
#import <libobjc.A.dylib/RUIObjectModelDelegate.h>

@protocol OS_dispatch_queue, AAUISpecifierProvider, AIDAServiceOwnerProtocol;
@class PSSpecifier, UIView, AAAutoAccountVerifier, NSMutableArray, UINavigationController, RUILoader, NSLock, NSOperationQueue, AAUIGenericTermsRemoteUI, AAUIDeviceLocatorService, NSObject, PSListController, AAUIProfilePictureStore, RemoteUIController, ACAccount, NSString, AAGrandSlamSigner, AKAppleIDAuthenticationController, AARequester, AAUIAccountManager;

@interface AAUIMainSettingsViewController : ACUIDataclassConfigurationViewController <AAUIAccountManagerDelegate, AAUISpecifierProviderDelegate, RemoteUIControllerDelegate, UINavigationControllerDelegate, AAUIGenericTermsRemoteUIDelegate, RUIObjectModelDelegate> {

	PSSpecifier* _findMyiPhoneSwitchSpecifier;
	PSSpecifier* _cloudDriveSwitchSpecifier;
	PSSpecifier* _keychainSyncSpecifier;
	UIView* _accountDowngradeConfirmation;
	AAAutoAccountVerifier* _accountVerifier;
	PSSpecifier* _checkMailSpecifier;
	NSMutableArray* _headerSpecifiers;
	UINavigationController* _addEmailNavController;
	RUILoader* _addEmailLoader;
	NSMutableArray* _addEmailObjectModels;
	PSSpecifier* _mailDataclassSpecifier;
	int _keychainStatus;
	int _keychainSyncNotificationToken;
	int _iCloudRestoreToken;
	BOOL _isPresentingUpdateSheet;
	BOOL _shouldAuthenticateAfterUpdate;
	BOOL _loadedViaURL;
	BOOL _monitoringReachability;
	BOOL _allowAccountRevalidation;
	BOOL _performedUpdate;
	BOOL _performingUpdate;
	BOOL _appearedBefore;
	BOOL _topLevelSettings;
	BOOL _shouldPresentLocationWarning;
	BOOL _accountWasPromoted;
	BOOL _shouldAttemptToEnableDataclasses;
	BOOL _userCanceledLastUpdate;
	BOOL _didShowDeletionConfirmation;
	NSLock* _accountValidationLock;
	NSLock* _saveCurrentStateLock;
	NSOperationQueue* _networkActivityQueue;
	AAUIGenericTermsRemoteUI* _genericTermsRemoteUI;
	AAUIDeviceLocatorService* _deviceLocatorService;
	/*^block*/id _deviceLocatorOperationCompletionHandler;
	id _restrictionChangeNotificationObserver;
	NSObject*<OS_dispatch_queue> _accountWorkQueue;
	id _accountStoreDidChangeObserver;
	id _deviceLocatorStateDidChangeObserver;
	PSListController* _photoStreamSettingsController;
	PSListController* _backupSettingsController;
	PSListController* _storageSettingsController;
	AAUIProfilePictureStore* _profilePictureStore;
	RemoteUIController* _secondaryAuthRemoteUIController;
	BOOL _hasCachedAvailableQuota;
	float _cachedAvailableQuota;
	PSSpecifier* _profileCellSpecifier;
	ACAccount* _grandSlamAccount;
	BOOL _hasShownSecondaryAuthFirstPage;
	/*^block*/id _secondaryAuthCompletion;
	NSString* _secondaryToken;
	NSMutableArray* _cellsActivelyLoadingDetailView;
	BOOL _isHandlingURLForInvite;
	NSObject* _profilePictureStoreDidChangeObserver;
	AAGrandSlamSigner* _grandSlamSigner;
	AKAppleIDAuthenticationController* _authController;
	AARequester* _secondaryAppleIDTokenFetchRequest;
	id<AAUISpecifierProvider> _familySpecifierProvider;
	AAUIAccountManager* _accountManager;
	id<AIDAServiceOwnerProtocol> _serviceOwnersManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_stopListeningForKeychainSyncStatusChangeNotification;
-(void)_registerForKeychainSyncStatusChangeNotification;
-(void)_loadMailSettingsBundleIfNeeded;
-(void)setShouldAttemptToEnableDataclasses:(BOOL)arg1 ;
-(void)_handleiForgotActionURL:(id)arg1 ;
-(void)_startObservingAccountStoreChanges;
-(void)_stopObservingAccountStoreChanges;
-(id)_valueForStorageSpecifier:(id)arg1 ;
-(void)_storageSpecifierWasTapped:(id)arg1 ;
-(BOOL)_isAccountInGrayMode;
-(id)_specifierForFindMyiPhone;
-(id)_specifierForBackup;
-(id)_isBackupEnabledForSpecifier:(id)arg1 ;
-(void)_backupSpecifierWasTapped:(id)arg1 ;
-(id)_isFindMyiPhoneEnabledForSpecifier:(id)arg1 ;
-(void)_findMyiPhoneSpecifierWasTapped:(id)arg1 ;
-(BOOL)_shouldEnableFMIPSpecifier;
-(BOOL)_isMultiUserMode;
-(id)_specifierForLocationSharing;
-(id)_specifierForMailSettings;
-(id)_specifiersForServerProvidedFooter;
-(void)_footerButtonTapped:(id)arg1 ;
-(void)_presentMailSettingsViewControllerForSpecifier:(id)arg1 ;
-(void)_loadCloudKitSettingsBundleIfNeeded;
-(BOOL)_shouldShowLocationSharingSpecifier;
-(BOOL)_locationServicesDisabledByRestrictions;
-(id)_specifierForShoebox;
-(id)_specifierForHealth;
-(id)_specifierForPhotoStream;
-(id)_specifierForKeychainSync;
-(void)_loadiCloudDriveSettingsBundleIfNeeded;
-(void)_shoeboxStateDidChange:(id)arg1 withSpecifier:(id)arg2 ;
-(id)_isShoeboxEnabledForSpecifier:(id)arg1 ;
-(id)_isPhotoStreamEnabledString:(id)arg1 ;
-(void)_photoStreamSpecifierWasTapped:(id)arg1 ;
-(id)_keychainSyncStateForSpecifier:(id)arg1 ;
-(void)_updateAccount:(id)arg1 withQuotaResponse:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_refreshKeychainState;
-(BOOL)shouldContinueDataclassChangeForSpecifier:(id)arg1 ;
-(void)_beginChangingDataclasses;
-(void)_endChangingDataclasses;
-(void)_configureEmailAccount;
-(void)_presentCreateFreeEmailPromptWithCompletion:(/*^block*/id)arg1 isForNotes:(BOOL)arg2 ;
-(void)_keychainSyncStateDidChange;
-(void)_handleSecondaryAuthenticationResponse:(id)arg1 baseURL:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_cancelSecondaryAuthenticationWasTapped:(id)arg1 ;
-(void)_beginObservingiCloudRestoreStatus;
-(void)_startObservingDeviceLocatorStateChanges;
-(void)_endObservingiCloudRestoreStatus;
-(void)_stopObservingDeviceLocatorStateChanges;
-(void)_cleanupFromNetworkActivity;
-(void)_deviceLocatorStateDidChange:(id)arg1 ;
-(void)_accountEmailBecameVerified;
-(void)_promptForEmailAccountConfiguration;
-(void)_promptUserToEnableFindMyiPhoneIfPossible;
-(void)_enableAllProvisionedDataclasses;
-(void)_presentFirstAlertIfNecessary;
-(void)_checkNetworkReachabilityAndValidateAccount;
-(void)_handleAuthActionURL:(id)arg1 ;
-(void)_handleChangePasswordActionURL:(id)arg1 ;
-(void)_handleCDPActionURL:(id)arg1 ;
-(void)_handleOONAddressVettingActionURL:(id)arg1 ;
-(BOOL)_isRestoringFromiCloud;
-(id)_specifiersForUnverifiedAccountHeader;
-(id)_specifiersForServiceUnavailableHeader;
-(id)_specifiersForGrayModeHeader;
-(id)_specifierForProfileCell;
-(id)_specifiersForFamily;
-(id)_specifierForStorageCell;
-(id)_deviceSpecificLocalizedStringKey:(id)arg1 ;
-(void)_didUpdateProfilePhotoWithLikeness:(id)arg1 ;
-(void)_profileCellWasTapped:(id)arg1 ;
-(void)_checkMailButtonTapped:(id)arg1 ;
-(void)_openServiceUnavailableInfoLink;
-(void)_showTermsAndConditionsButtonTapped:(id)arg1 ;
-(id)_specifierForCloudDrive;
-(id)_isCloudDriveEnabledString:(id)arg1 ;
-(void)_cloudDriveSpecifierWasTapped:(id)arg1 ;
-(void)_updateCloudDriveSpinnerState;
-(BOOL)_isCloudDriveEnabled;
-(void)_setDataclasses:(id)arg1 toState:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_finishDataclassChangeWithState:(id)arg1 withSpecifier:(id)arg2 ;
-(void)_authenticateAndPushAppleIDManagementViewControllerWithSpecifier:(id)arg1 ;
-(void)_showAccountDetailsUnavailableAlert;
-(void)_startSpinnerInCellForSpecifier:(id)arg1 ;
-(void)_stopSpinnerInCellForSpecifier:(id)arg1 ;
-(void)_pushAppleIDManagementViewControllerWithSecondaryToken:(id)arg1 specifier:(id)arg2 ;
-(void)_requestSecondaryTokenWithAppleIDSettingsGrandSlamToken:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_requestAppleIDSettingsGrandSlamTokenWithAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_presentSecondaryAuthenticationRemoteUI:(id)arg1 baseURL:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_generateLoginCode;
-(void)_performNetworkValidation;
-(void)_registerAccount;
-(void)_revalidateAccount;
-(BOOL)_setupForNetworkActivity;
-(void)_handleAccountRegistrationCompletionWithResult:(BOOL)arg1 error:(id)arg2 ;
-(void)_updateAccountInformation;
-(void)_presentValidationErrorAlert:(id)arg1 account:(id)arg2 ;
-(BOOL)_isPasswordRequiredToValidateAppleAccount:(id)arg1 ;
-(void)_clearCachedSpecifierValues;
-(void)_beginValidationForAccount:(id)arg1 ;
-(void)_handleAccountRevalidationCompletionWithValidatedAccount:(id)arg1 success:(BOOL)arg2 error:(id)arg3 ;
-(void)_removeHeaderSpecifiers;
-(void)_autoVerifyAccount;
-(id)_accountAutoVerifier;
-(void)_handleAccountAutoVerificationCompletionWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(BOOL)_isRunningInMail;
-(void)_showGenericTermsUI;
-(BOOL)_isAnotherAccountSyncingDataclass:(id)arg1 ;
-(BOOL)_isDataclassSycningOnlyUsingExchange:(id)arg1 ;
-(BOOL)_localCalendarStoreHasReadOnlyCalendars;
-(void)_issueFindMyiPhonePromptWithTitle:(id)arg1 andMessage:(id)arg2 ;
-(void)_restoreFromiCloudStatusChange;
-(id)_enabledDataclassesThatNeedConfirmation;
-(void)_confirmAccountDeletionWithWarningAboutDataclasses:(id)arg1 ;
-(void)_handleAccountDeletionConfirmed;
-(void)setAccountWasPromoted:(BOOL)arg1 ;
-(void)_reachabilityChanged:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1 ;
-(id)displayedAccountTypeString;
-(void)_accountStoreChanged:(id)arg1 ;
-(BOOL)_isPhotoStreamEnabled;
-(void)genericTermsRemoteUI:(id)arg1 didFinishWithSuccess:(BOOL)arg2 ;
-(void)setSpecifier:(id)arg1 ;
-(void)handleURL:(id)arg1 ;
-(void)willBecomeActive;
-(void)confirmationView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(id)accountChangeObserver;
-(id)specifierForAccountSummaryCell;
-(BOOL)shouldShowOtherSpecifiersDuringFirstSetup;
-(id)otherSpecifiers;
-(id)titleForDeleteButton;
-(BOOL)shouldEnableDeleteAccountButton;
-(Class)accountInfoControllerClass;
-(BOOL)shouldEnableAccountSummaryCell;
-(BOOL)shouldShowSpecifierForDataclass:(id)arg1 ;
-(id)specifierForDataclass:(id)arg1 ;
-(void)dataclassSwitchStateDidChange:(id)arg1 withSpecifier:(id)arg2 ;
-(BOOL)shouldAutomaticallyTryEnablingDataclassDuringSetup:(id)arg1 ;
-(id)messageForAccountDeletionProgressUI;
-(void)reloadDynamicSpecifiersWithAnimation:(BOOL)arg1 ;
-(id)_titleForError:(id)arg1 account:(id)arg2 ;
-(id)_messageForError:(id)arg1 account:(id)arg2 ;
-(NSDictionary*)accountsForAccountManager:(id)arg1 ;
-(BOOL)_carrierBundleSaysHideFindMyiPhone;
-(void)operationsHelper:(id)arg1 willSaveAccount:(id)arg2 ;
-(void)operationsHelper:(id)arg1 didSaveAccount:(id)arg2 withSuccess:(BOOL)arg3 error:(id)arg4 ;
-(void)operationsHelper:(id)arg1 didRemoveAccount:(id)arg2 withSuccess:(BOOL)arg3 error:(id)arg4 ;
-(id)operationsHelper:(id)arg1 desiredDataclassActionFromPicker:(id)arg2 ;
-(BOOL)operationsHelper:(id)arg1 shouldRemoveAccount:(id)arg2 ;
-(void)_cleanupLoader;
-(void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2 ;
-(void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(BOOL)arg3 ;
-(void)remoteUIControllerDidDismiss:(id)arg1 ;
-(void)remoteUIController:(id)arg1 willLoadRequest:(id)arg2 ;
-(id)specifiers;
-(BOOL)_shouldEnableLocationSharingSpecifier;
-(void)_locationSharingSpecifierWasTapped:(id)arg1 ;
-(void)reloadSpecifiersForProvider:(id)arg1 oldSpecifiers:(id)arg2 animated:(BOOL)arg3 ;
-(id)_grandSlamAccount;
-(id)_grandSlamSigner;
-(void)_showUnderageAlertWithEligibilityResponse:(id)arg1 ;
-(void)loader:(id)arg1 didFailWithError:(id)arg2 ;
-(void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(unsigned long long)arg3 ;
-(id)parentViewControllerForObjectModel:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientationsForObjectModel:(id)arg1 page:(id)arg2 ;
-(void)objectModelPressedBack:(id)arg1 ;
-(void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3 ;
-(void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3 ;
-(void)deleteButtonTapped:(id)arg1 ;
-(void)_startMonitoringReachability;
-(void)_stopMonitoringReachability;
@end

