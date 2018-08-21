/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/NotesSettings.bundle/NotesSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class UINavigationController;

@interface ICSettingsPasswordViewController : PSListController {

	BOOL _initialPasswordIsSetCheckComplete;
	long long _incorrectPasswordAttempts;
	UINavigationController* _initialPasswordViewNavigationController;

}

@property (assign,nonatomic) long long incorrectPasswordAttempts;                                                  //@synthesize incorrectPasswordAttempts=_incorrectPasswordAttempts - In the implementation block
@property (assign,nonatomic) BOOL initialPasswordIsSetCheckComplete;                                               //@synthesize initialPasswordIsSetCheckComplete=_initialPasswordIsSetCheckComplete - In the implementation block
@property (assign,nonatomic,__weak) UINavigationController * initialPasswordViewNavigationController;              //@synthesize initialPasswordViewNavigationController=_initialPasswordViewNavigationController - In the implementation block
-(UINavigationController *)initialPasswordViewNavigationController;
-(BOOL)initialPasswordIsSetCheckComplete;
-(void)showInitialPasswordViewController;
-(void)setInitialPasswordIsSetCheckComplete:(BOOL)arg1 ;
-(void)setBiometricIDSwitchValue:(id)arg1 fromSpecifier:(id)arg2 ;
-(id)getBiometricIDSwitchValue:(id)arg1 ;
-(void)changePasswordPressed:(id)arg1 ;
-(id)buttonSpecifierWithTitle:(id)arg1 action:(SEL)arg2 ;
-(void)resetPasswordPressed:(id)arg1 ;
-(void)authenticateNotesPasswordForBiometricIDWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)showResetAlertSheet;
-(void)setInitialPasswordViewNavigationController:(UINavigationController *)arg1 ;
-(void)dealloc;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)specifiers;
-(long long)incorrectPasswordAttempts;
-(void)setIncorrectPasswordAttempts:(long long)arg1 ;
@end

