/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:11:32 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/ActiveSyncSettings.bundle/ActiveSyncSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActiveSyncSettings/ASSettingsAccountsUIController.h>
#import <libobjc.A.dylib/ACUIAccountCreationControlling.h>

@class DAEASOAuthWebViewController, UIViewController, NSString;

@interface ASSettingsHotmailAccountsUIController : ASSettingsAccountsUIController <ACUIAccountCreationControlling> {

	DAEASOAuthWebViewController* _webAuthController;
	/*^block*/id _completion;
	UIViewController* _settingsViewController;

}

@property (nonatomic,retain) DAEASOAuthWebViewController * webAuthController;              //@synthesize webAuthController=_webAuthController - In the implementation block
@property (nonatomic,copy) id completion;                                                  //@synthesize completion=_completion - In the implementation block
@property (nonatomic,retain) UIViewController * settingsViewController;                    //@synthesize settingsViewController=_settingsViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isHotmailAccount;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(UIViewController *)settingsViewController;
-(void)beginAccountCreationWithSpecifier:(id)arg1 fromViewController:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)account:(id)arg1 isValid:(BOOL)arg2 validationError:(id)arg3 ;
-(id)accountSpecifiers;
-(void)setSettingsViewController:(UIViewController *)arg1 ;
-(DAEASOAuthWebViewController *)webAuthController;
-(void)setWebAuthController:(DAEASOAuthWebViewController *)arg1 ;
@end

