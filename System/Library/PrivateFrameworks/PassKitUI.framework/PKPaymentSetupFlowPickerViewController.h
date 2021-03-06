/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKPaymentSetupTableViewController.h>
#import <libobjc.A.dylib/PKPaymentSetupActivitySpinnerProtocol.h>
#import <libobjc.A.dylib/PKPaymentSetupBrowseProductsViewControllerDelegate.h>
#import <libobjc.A.dylib/PKPaymentSetupHideSetupLaterButtonProtocol.h>

@protocol PKPaymentSetupViewControllerDelegate;
@class PKTableHeaderView, PKPaymentSetupFooterView, NSMutableArray, NSArray, PKPaymentProvisioningController, NSString;

@interface PKPaymentSetupFlowPickerViewController : PKPaymentSetupTableViewController <PKPaymentSetupActivitySpinnerProtocol, PKPaymentSetupBrowseProductsViewControllerDelegate, PKPaymentSetupHideSetupLaterButtonProtocol> {

	PKTableHeaderView* _headerView;
	PKPaymentSetupFooterView* _footerView;
	NSMutableArray* _pickerSections;
	NSArray* _betaTransitNetworks;
	BOOL _hideSetupLaterButton;
	BOOL _allowsManualEntry;
	PKPaymentProvisioningController* _provisioningController;
	id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
	long long _setupContext;

}

@property (nonatomic,readonly) PKPaymentProvisioningController * provisioningController;                   //@synthesize provisioningController=_provisioningController - In the implementation block
@property (nonatomic,__weak,readonly) id<PKPaymentSetupViewControllerDelegate> setupDelegate;              //@synthesize setupDelegate=_setupDelegate - In the implementation block
@property (nonatomic,readonly) PKTableHeaderView * headerView; 
@property (nonatomic,readonly) long long setupContext;                                                     //@synthesize setupContext=_setupContext - In the implementation block
@property (assign,nonatomic) BOOL hideSetupLaterButton;                                                    //@synthesize hideSetupLaterButton=_hideSetupLaterButton - In the implementation block
@property (assign,nonatomic) BOOL allowsManualEntry;                                                       //@synthesize allowsManualEntry=_allowsManualEntry - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_filteredPaymentSetupProducts:(id)arg1 localCredential:(id)arg2 setupContext:(long long)arg3 webService:(id)arg4 mobileCarrierRegion:(id)arg5 ;
+(BOOL)_localCredentials:(id)arg1 containProduct:(id)arg2 ;
+(id)paymentSetupFlowPickerWithSetupDelegate:(id)arg1 context:(long long)arg2 provisioningController:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg1 ;
-(PKTableHeaderView *)headerView;
-(id)footerView;
-(void)_setNavigationBarEnabled:(BOOL)arg1 ;
-(void)hideActivitySpinner;
-(void)setAllowsManualEntry:(BOOL)arg1 ;
-(void)_terminateSetupFlow;
-(id<PKPaymentSetupViewControllerDelegate>)setupDelegate;
-(long long)setupContext;
-(BOOL)hideSetupLaterButton;
-(void)setHideSetupLaterButton:(BOOL)arg1 ;
-(BOOL)allowsManualEntry;
-(id)initWithSetupDelegate:(id)arg1 context:(long long)arg2 provisioningController:(id)arg3 ;
-(void)addPickerSection:(id)arg1 ;
-(void)_didSelectProducts:(id)arg1 ;
-(void)addPickerItem:(id)arg1 toSection:(id)arg2 ;
-(void)productSelectionViewController:(id)arg1 didSelectProduct:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_setupLater:(id)arg1 ;
-(void)productSelectionViewController:(id)arg1 pushViewController:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)showActivitySpinner;
-(void)browseProductsViewController:(id)arg1 didSelectProduct:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(PKPaymentProvisioningController *)provisioningController;
@end

