/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:20 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/PassbookSettings.bundle/PassbookSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKPassbookSettingsDelegate <NSObject>
@optional
-(void)settingsController:(id)arg1 requestsAuthenticationChallengeForAccount:(id)arg2 completion:(/*^block*/id)arg3;
-(void)settingsController:(id)arg1 requestsAddLocalCardPreflightWithCompletion:(/*^block*/id)arg2;

@required
-(void)settingsControllerRequestsReloadSpecifiers:(id)arg1;
-(void)settingsController:(id)arg1 requestsReloadSpecifier:(id)arg2;
-(void)settingsController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4;
-(void)settingsController:(id)arg1 requestsAddCardPreflightWithCompletion:(/*^block*/id)arg2;
-(void)settingsController:(id)arg1 requestsDetailViewControllerForPass:(id)arg2 animated:(BOOL)arg3;
-(void)settingsController:(id)arg1 requestsPushViewController:(id)arg2 animated:(BOOL)arg3;
-(void)settingsControllerRequestsPresentPrivacyWithPresenter:(id)arg1;

@end
