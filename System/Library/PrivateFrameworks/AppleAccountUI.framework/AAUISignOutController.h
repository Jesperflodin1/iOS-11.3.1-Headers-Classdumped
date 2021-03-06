/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:38 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccountUI/AppleAccountUI-Structs.h>
#import <UIKit/UINavigationController.h>
#import <libobjc.A.dylib/AAUIDataclassPickerViewControllerDelegate.h>

@class ACAccountStore, NSDictionary, ACAccount, NSString;

@interface AAUISignOutController : UINavigationController <AAUIDataclassPickerViewControllerDelegate> {

	ACAccountStore* _accountStore;
	NSDictionary* _dataclassOptions;
	ACAccount* _account;

}

@property (setter=_setAccountStore:,nonatomic,retain) ACAccountStore * _accountStore;                  //@synthesize accountStore=_accountStore - In the implementation block
@property (setter=_setDataclassOptions:,nonatomic,copy) NSDictionary * _dataclassOptions;              //@synthesize dataclassOptions=_dataclassOptions - In the implementation block
@property (assign,nonatomic,__weak) id<AAUISignOutControllerDelegate> delegate; 
@property (nonatomic,readonly) ACAccount * account;                                                    //@synthesize account=_account - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithAccount:(id)arg1 ;
-(ACAccountStore *)_accountStore;
-(NSDictionary *)_dataclassOptions;
-(id)footerTextForDataclassPickerViewController:(id)arg1 ;
-(void)dataclassPickerViewControllerDidCancel:(id)arg1 ;
-(void)dataclassPickerViewController:(id)arg1 didCompleteWithDataclassActions:(NSDictionary*)arg2 ;
-(void)prepareInViewController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSDictionary*)_actionableDataclassOptions;
-(id)_spinnerViewControllerForActions:(NSDictionary*)arg1 ;
-(id)_dataclassViewController;
-(void)_mainQueue_continueSignOutWithDataclassActions:(NSDictionary*)arg1 ;
-(BOOL)_hasHealthData;
-(BOOL)_hasPaymentPasses;
-(void)_mainQueue_promptForConfirmationInViewController:(id)arg1 simplified:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)_signOutMessageSimplified:(BOOL)arg1 withConfirmation:(BOOL)arg2 ;
-(void)_delegate_signOutControllerDidCompleteWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(void)_delegate_signOutControllerDidCancel;
-(void)_mainQueue_presentSpinnerPageWithDataclassActions:(NSDictionary*)arg1 completion:(/*^block*/id)arg2 ;
-(void)_setAccountStore:(id)arg1 ;
-(void)_setDataclassOptions:(id)arg1 ;
-(ACAccount *)account;
@end

