/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:26 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class PKPaymentMerchantSession, NSString, NSDecimalNumber;

@interface PKPaymentPrepareTransactionDetailsRequest : PKPaymentWebServiceRequest {

	PKPaymentMerchantSession* _merchantSession;
	NSString* _secureElementIdentifier;
	NSDecimalNumber* _amount;
	NSString* _currencyCode;

}

@property (nonatomic,retain) PKPaymentMerchantSession * merchantSession;              //@synthesize merchantSession=_merchantSession - In the implementation block
@property (nonatomic,copy) NSString * secureElementIdentifier;                        //@synthesize secureElementIdentifier=_secureElementIdentifier - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * amount;                                  //@synthesize amount=_amount - In the implementation block
@property (nonatomic,copy) NSString * currencyCode;                                   //@synthesize currencyCode=_currencyCode - In the implementation block
+(id)serverSupportedLanguages;
-(NSString *)currencyCode;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(void)setAmount:(NSDecimalNumber *)arg1 ;
-(NSDecimalNumber *)amount;
-(void)setSecureElementIdentifier:(NSString *)arg1 ;
-(PKPaymentMerchantSession *)merchantSession;
-(void)setMerchantSession:(PKPaymentMerchantSession *)arg1 ;
-(id)_urlRequestWithServiceURL:(id)arg1 account:(id)arg2 ;
-(id)initWithMerchantSession:(id)arg1 secureElementIdentifier:(id)arg2 amount:(id)arg3 currencyCode:(id)arg4 ;
-(NSString *)secureElementIdentifier;
@end

