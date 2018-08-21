/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:29 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKAuthenticatorDelegate <NSObject>
@optional
-(void)authenticatorDidEncounterMatchMiss:(id)arg1;
-(void)authenticatorWillRestartEvaluation:(id)arg1;
-(void)authenticator:(id)arg1 didTransitionToPearlState:(long long)arg2;
-(void)authenticatorDidEncounterFingerOn:(id)arg1;
-(void)authenticatorDidEncounterFingerOff:(id)arg1;
-(void)authenticator:(id)arg1 didRequestUserAction:(long long)arg2;
-(void)authenticatorDidEncounterBiometricLockout:(id)arg1;
-(UIViewController*)passcodeViewController;
-(void)presentPasscodeViewController:(UIViewController*)arg1 completionHandler:(/*^block*/id)arg2 reply:(/*^block*/id)arg3;
-(void)dismissPasscodeViewController;
-(UIViewController*)passphraseViewController;
-(void)presentPassphraseViewController:(UIViewController*)arg1 completionHandler:(/*^block*/id)arg2 reply:(/*^block*/id)arg3;
-(void)dismissPassphraseViewController;

@end

