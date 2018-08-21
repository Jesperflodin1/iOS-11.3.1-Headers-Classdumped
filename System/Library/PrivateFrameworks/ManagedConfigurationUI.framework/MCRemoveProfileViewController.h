/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfigurationUI/ManagedConfigurationUI-Structs.h>
#import <ManagedConfigurationUI/MCInstallProfileViewController.h>
#import <libobjc.A.dylib/MCInteractionDelegate.h>
#import <libobjc.A.dylib/MCProfileViewControllerDelegate.h>
#import <libobjc.A.dylib/PSStateRestoration.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@class UIAlertView, MCProfile, UITextField, NSString;

@interface MCRemoveProfileViewController : MCInstallProfileViewController <MCInteractionDelegate, MCProfileViewControllerDelegate, PSStateRestoration, UIActionSheetDelegate, UITextFieldDelegate> {

	BOOL _profileWantsToReEnroll;
	BOOL _actionButtonHidden;
	UIAlertView* _activeAlert;
	struct {
		unsigned installedThisLaunch : 1;
		unsigned profileSuggestsReboot : 1;
	}  _configurationFlags;
	MCProfile* _updatingProfile;
	UITextField* _passwordField;

}

@property (nonatomic,retain) MCProfile * updatingProfile;              //@synthesize updatingProfile=_updatingProfile - In the implementation block
@property (nonatomic,retain) UITextField * passwordField;              //@synthesize passwordField=_passwordField - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didReceiveMemoryWarning;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)alertViewCancel:(id)arg1 ;
-(UITextField *)passwordField;
-(void)didAcceptEnteredPIN:(id)arg1 ;
-(void)didCancelEnteringPIN;
-(void)_resetWithMode:(int)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(void)_cancelActiveAlertController:(BOOL)arg1 ;
-(void)setInstallState:(int)arg1 animated:(BOOL)arg2 ;
-(void)updateTitleForProfileInstallationState:(int)arg1 ;
-(void)updateBarButtonItemsForProfileInstallationState:(int)arg1 animated:(BOOL)arg2 ;
-(void)_showProgressIndicator;
-(BOOL)_signatureForProfile:(id)arg1 matchesProfileB:(id)arg2 ;
-(void)_profileListChanged:(id)arg1 ;
-(MCProfile *)updatingProfile;
-(void)setUpdatingProfile:(MCProfile *)arg1 ;
-(void)_removeProfile;
-(void)_updateProfile;
-(void)_hideProgressIndicatorWithSuccess:(BOOL)arg1 showButtons:(BOOL)arg2 ;
-(void)_profileRemovalDidFinish;
-(void)_showRemovalWarningAfterPINVerification;
-(void)_showLeaveRemoteManagementAlert;
-(void)_showRemovalWarningAlert;
-(void)_showRemovalWarningActionSheet;
-(void)_performReEnroll;
-(void)_performReEnrollAfterPINVerification;
-(void)performRemoveAfterFinalVerification;
-(void)_showWrongRemovalPasswordAlert;
-(void)_showEraseDeviceAlert;
-(void)_leaveRemoteManagementAndErase;
-(id)_mdmProfileRemovalAlertBody;
-(void)profileViewControllerDidSelectRemoveProfile:(id)arg1 ;
-(void)profileViewControllerDidSelectUpdateProfile:(id)arg1 ;
-(void)_clearCachedTableCells;
-(void)_cancelActiveAlert:(BOOL)arg1 ;
-(void)setPasswordField:(UITextField *)arg1 ;
@end

