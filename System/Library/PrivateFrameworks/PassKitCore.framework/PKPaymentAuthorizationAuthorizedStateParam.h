/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:26 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentAuthorizationStateParam.h>

@class PKPaymentToken, PKPayment, PKServiceProviderPurchase, NSString, PKAuthorizedPeerPaymentQuote;

@interface PKPaymentAuthorizationAuthorizedStateParam : PKPaymentAuthorizationStateParam {

	PKPaymentToken* _paymentToken;
	PKPayment* _payment;
	PKServiceProviderPurchase* _purchase;
	NSString* _purchaseTransactionIdentifier;
	PKAuthorizedPeerPaymentQuote* _authorizedPeerPaymentQuote;

}

@property (nonatomic,retain) PKPaymentToken * paymentToken;                                            //@synthesize paymentToken=_paymentToken - In the implementation block
@property (nonatomic,retain) PKPayment * payment;                                                      //@synthesize payment=_payment - In the implementation block
@property (nonatomic,retain) PKServiceProviderPurchase * purchase;                                     //@synthesize purchase=_purchase - In the implementation block
@property (nonatomic,copy) NSString * purchaseTransactionIdentifier;                                   //@synthesize purchaseTransactionIdentifier=_purchaseTransactionIdentifier - In the implementation block
@property (nonatomic,readonly) PKAuthorizedPeerPaymentQuote * authorizedPeerPaymentQuote;              //@synthesize authorizedPeerPaymentQuote=_authorizedPeerPaymentQuote - In the implementation block
+(id)paramWithPayment:(id)arg1 ;
+(id)paramWithPaymentToken:(id)arg1 ;
+(id)paramWithPurchase:(id)arg1 purchaseTransactionIdentifier:(id)arg2 ;
+(id)paramWithAuthorizedPeerPaymentQuote:(id)arg1 ;
-(id)description;
-(void)setPayment:(PKPayment *)arg1 ;
-(NSString *)purchaseTransactionIdentifier;
-(PKPaymentToken *)paymentToken;
-(void)setPaymentToken:(PKPaymentToken *)arg1 ;
-(void)setPurchaseTransactionIdentifier:(NSString *)arg1 ;
-(PKServiceProviderPurchase *)purchase;
-(PKPayment *)payment;
-(void)setPurchase:(PKServiceProviderPurchase *)arg1 ;
-(PKAuthorizedPeerPaymentQuote *)authorizedPeerPaymentQuote;
@end
