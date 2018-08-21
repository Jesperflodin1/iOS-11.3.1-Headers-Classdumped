/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:31 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKPeerPaymentAccountResolutionControllerDelegate.h>

@protocol PKPeerPaymentDocumentSubmissionControllerDelegate, PKPaymentSetupViewControllerDelegate;
@class PKPeerPaymentWebService, PKPeerPaymentIdentityVerificationResponse, PKPeerPaymentAccountResolutionController, UIImage, NSString;

@interface PKPeerPaymentDocumentSubmissionController : NSObject <PKPeerPaymentAccountResolutionControllerDelegate> {

	BOOL _supportsBackID;
	BOOL _supportsPassport;
	long long _state;
	id<PKPeerPaymentDocumentSubmissionControllerDelegate> _delegate;
	long long _side;
	unsigned long long _type;
	PKPeerPaymentWebService* _webService;
	PKPeerPaymentIdentityVerificationResponse* _identityVerificationResponse;
	id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
	long long _context;
	PKPeerPaymentAccountResolutionController* _accountResolutionController;
	UIImage* _frontID;
	UIImage* _backID;
	NSString* _selectedCountryCode;

}

@property (nonatomic,retain) PKPeerPaymentWebService * webService;                                                  //@synthesize webService=_webService - In the implementation block
@property (nonatomic,retain) PKPeerPaymentIdentityVerificationResponse * identityVerificationResponse;              //@synthesize identityVerificationResponse=_identityVerificationResponse - In the implementation block
@property (nonatomic,retain) id<PKPaymentSetupViewControllerDelegate> setupDelegate;                                //@synthesize setupDelegate=_setupDelegate - In the implementation block
@property (assign,nonatomic) long long context;                                                                     //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) PKPeerPaymentAccountResolutionController * accountResolutionController;                //@synthesize accountResolutionController=_accountResolutionController - In the implementation block
@property (nonatomic,retain) UIImage * frontID;                                                                     //@synthesize frontID=_frontID - In the implementation block
@property (nonatomic,retain) UIImage * backID;                                                                      //@synthesize backID=_backID - In the implementation block
@property (assign,nonatomic) BOOL supportsBackID;                                                                   //@synthesize supportsBackID=_supportsBackID - In the implementation block
@property (assign,nonatomic) BOOL supportsPassport;                                                                 //@synthesize supportsPassport=_supportsPassport - In the implementation block
@property (nonatomic,retain) NSString * selectedCountryCode;                                                        //@synthesize selectedCountryCode=_selectedCountryCode - In the implementation block
@property (assign,nonatomic) long long state;                                                                       //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) long long side;                                                                        //@synthesize side=_side - In the implementation block
@property (assign,nonatomic) unsigned long long type;                                                               //@synthesize type=_type - In the implementation block
@property (assign,nonatomic,__weak) id<PKPeerPaymentDocumentSubmissionControllerDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<PKPeerPaymentDocumentSubmissionControllerDelegate>)delegate;
-(void)setDelegate:(id<PKPeerPaymentDocumentSubmissionControllerDelegate>)arg1 ;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(long long)context;
-(void)setContext:(long long)arg1 ;
-(void)_dismissViewController;
-(id)nextViewController;
-(void)_presentViewController:(id)arg1 ;
-(id)initWithPeerPaymentWebService:(id)arg1 identityVerificationResponse:(id)arg2 setupDelegate:(id)arg3 context:(long long)arg4 ;
-(PKPeerPaymentWebService *)webService;
-(void)peerPaymentAccountResolutionController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)peerPaymentAccountResolutionController:(id)arg1 requestsDismissCurrentViewControllerAnimated:(BOOL)arg2 ;
-(void)setSetupDelegate:(id<PKPaymentSetupViewControllerDelegate>)arg1 ;
-(id<PKPaymentSetupViewControllerDelegate>)setupDelegate;
-(long long)side;
-(void)userWantsToCancelFromViewController:(id)arg1 ;
-(void)finishPressedFromViewController:(id)arg1 ;
-(void)capturedImage:(id)arg1 ;
-(void)captureFailedWithError:(id)arg1 ;
-(UIImage *)frontID;
-(UIImage *)backID;
-(void)userWantsToContinue;
-(void)contactApplePressed;
-(void)userApprovedCapturedID;
-(void)tryUploadAgain;
-(void)scanAgain;
-(void)userRejectedCapturedID;
-(void)setWebService:(PKPeerPaymentWebService *)arg1 ;
-(void)uploadID;
-(void)setSide:(long long)arg1 ;
-(PKPeerPaymentIdentityVerificationResponse *)identityVerificationResponse;
-(void)setIdentityVerificationResponse:(PKPeerPaymentIdentityVerificationResponse *)arg1 ;
-(PKPeerPaymentAccountResolutionController *)accountResolutionController;
-(void)setAccountResolutionController:(PKPeerPaymentAccountResolutionController *)arg1 ;
-(void)setFrontID:(UIImage *)arg1 ;
-(void)setBackID:(UIImage *)arg1 ;
-(BOOL)supportsBackID;
-(void)setSupportsBackID:(BOOL)arg1 ;
-(BOOL)supportsPassport;
-(void)setSupportsPassport:(BOOL)arg1 ;
-(NSString *)selectedCountryCode;
-(void)setSelectedCountryCode:(NSString *)arg1 ;
-(void)stateChanged;
@end

