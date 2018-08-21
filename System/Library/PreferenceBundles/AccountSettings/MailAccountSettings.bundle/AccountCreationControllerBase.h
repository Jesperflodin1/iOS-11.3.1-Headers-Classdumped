/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:11:38 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/MailAccountSettings.bundle/MailAccountSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ACUIAccountCreationControlling.h>

@class ACAccountStore, PSSpecifier, PSViewController, NSString;

@interface AccountCreationControllerBase : NSObject <ACUIAccountCreationControlling> {

	ACAccountStore* _accountStore;
	PSSpecifier* _specifier;
	PSViewController* _viewController;
	/*^block*/id _completion;

}

@property (nonatomic,retain) ACAccountStore * accountStore;                  //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,retain) PSSpecifier * specifier;                        //@synthesize specifier=_specifier - In the implementation block
@property (nonatomic,retain) PSViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,copy) id completion;                                    //@synthesize completion=_completion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)validateUniquenessAndAddAccountWithUsername:(id)arg1 fullUserName:(id)arg2 token:(id)arg3 refreshToken:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)beginAccountCreation;
-(void)_showDuplicateAccountAlertForAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(void)setViewController:(PSViewController *)arg1 ;
-(PSViewController *)viewController;
-(ACAccountStore *)accountStore;
-(Class)accountClass;
-(void)setSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)specifier;
-(void)beginAccountCreationWithSpecifier:(id)arg1 fromViewController:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
@end

