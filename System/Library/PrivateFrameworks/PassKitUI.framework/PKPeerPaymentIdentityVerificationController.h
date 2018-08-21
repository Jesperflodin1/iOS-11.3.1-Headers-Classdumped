/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKPaymentSetupViewControllerDelegate;
@class NSArray, PKPeerPaymentIdentityVerificationResponse, PKPaymentSetupFieldsModel, UIViewController, PKPeerPaymentWebService, PKPeerPaymentDocumentSubmissionController;

@interface PKPeerPaymentIdentityVerificationController : NSObject {

	id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
	NSArray* _viewControllers;
	unsigned long long _viewControllerIndex;
	PKPeerPaymentIdentityVerificationResponse* _response;
	PKPaymentSetupFieldsModel* _fieldsModel;
	long long _context;
	UIViewController* _firstViewController;
	PKPeerPaymentWebService* _webService;
	PKPeerPaymentDocumentSubmissionController* _captureController;

}

@property (nonatomic,readonly) PKPaymentSetupFieldsModel * fieldsModel;                                    //@synthesize fieldsModel=_fieldsModel - In the implementation block
@property (nonatomic,readonly) long long context;                                                          //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) UIViewController * firstViewController;                                     //@synthesize firstViewController=_firstViewController - In the implementation block
@property (nonatomic,readonly) PKPeerPaymentWebService * webService;                                       //@synthesize webService=_webService - In the implementation block
@property (nonatomic,readonly) PKPeerPaymentIdentityVerificationResponse * response;                       //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) PKPeerPaymentDocumentSubmissionController * captureController;              //@synthesize captureController=_captureController - In the implementation block
-(BOOL)_hasRequiredFields;
-(id)init;
-(PKPeerPaymentIdentityVerificationResponse *)response;
-(long long)context;
-(id)initWithPeerPaymentWebService:(id)arg1 identityVerificationResponse:(id)arg2 setupDelegate:(id)arg3 context:(long long)arg4 ;
-(UIViewController *)firstViewController;
-(PKPeerPaymentWebService *)webService;
-(void)nextViewControllerWithCompletion:(/*^block*/id)arg1 ;
-(PKPaymentSetupFieldsModel *)fieldsModel;
-(void)_formViewControllersWithExplanationView:(BOOL)arg1 ;
-(id)_nextLocalViewController;
-(void)_resetViewControllers;
-(id)_accountRestrictedErrorViewController;
-(id)_accountLockedErrorViewController;
-(id)_verificationErrorViewController;
-(void)_identityVerificationResquestWithCompletion:(/*^block*/id)arg1 ;
-(id)_generateFieldsModel;
-(PKPeerPaymentDocumentSubmissionController *)captureController;
@end

