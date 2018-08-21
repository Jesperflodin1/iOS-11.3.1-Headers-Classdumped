//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SBUIPasscodeLockViewDelegate.h"
#import "SUSUIRemoteEmergencyCallViewControllerDelegate.h"

@class NSString, PSSoftwareUpdateTermsManager, SUAutoInstallOperation, SUDownload, SUManagerClient, SUSUIPasscodeEntryView, SUSUIRemoteEmergencyCallViewController;

@interface SUSUISoftwareUpdateAuthenticationViewController : UIViewController <SBUIPasscodeLockViewDelegate, SUSUIRemoteEmergencyCallViewControllerDelegate>
{
    id <SUSUISoftwareUpdateAuthenticationViewControllerDelegate> _delegate;
    UIViewController *_termsAndConditionsController;
    SUSUIPasscodeEntryView *_view;
    PSSoftwareUpdateTermsManager *_preferencesSUManager;
    SUAutoInstallOperation *_installOperation;
    SUDownload *_download;
    _Bool _forInstallTonight;
    NSString *_passcode;
    _Bool _attemptingUnlock;
    _Bool _showingTermsAndConditions;
    _Bool _responseSent;
    _Bool _canDeferInstallation;
    SUManagerClient *_suManagerClient;
    SUSUIRemoteEmergencyCallViewController *_emergencyVC;
}

@property(nonatomic) __weak id <SUSUISoftwareUpdateAuthenticationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_setChildViewController:(id)arg1;
- (void)_termsDisagree;
- (void)_termsAgree;
- (void)_dismissSelf:(_Bool)arg1;
- (void)_sendDeactivationResponseFailureIfNecessary;
- (_Bool)_createKeybagForPasscode:(id)arg1 forInstallTonight:(_Bool)arg2;
- (void)_dismissAndSendCompletionResponse:(_Bool)arg1;
- (void)_dismissTermsAndConditionsIfNecessaryAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_presentTermsAndConditionsWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_shouldShowPasscodeView;
- (void)_authenticationSuccess:(id)arg1 fromMesa:(_Bool)arg2;
- (void)_authenticationFailure:(id)arg1 fromMesa:(_Bool)arg2;
- (void)_authenticationCancelled;
- (void)_passcodeLockViewPasscodeEntered:(id)arg1 viaMesa:(_Bool)arg2;
- (void)_attemptUnlock:(id)arg1 passcode:(id)arg2;
- (void)_setVisible:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)emergencyCallViewController:(id)arg1 didExitWithError:(id)arg2;
- (void)dismissEmergencyCallViewController:(id)arg1;
- (void)passcodeLockViewEmergencyCallButtonPressed:(id)arg1;
- (void)passcodeLockViewCancelButtonPressed:(id)arg1;
- (void)passcodeLockViewPasscodeEnteredViaMesa:(id)arg1;
- (void)passcodeLockViewPasscodeEntered:(id)arg1;
- (void)passcodeLockViewPasscodeDidChange:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithDownload:(id)arg1 forInstallTonight:(_Bool)arg2 withInstallOperation:(id)arg3 canDeferInstallation:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
