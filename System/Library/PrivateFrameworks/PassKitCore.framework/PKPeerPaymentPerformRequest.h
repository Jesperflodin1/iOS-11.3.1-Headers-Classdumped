/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPeerPaymentWebServiceRequest.h>

@class NSString, NSData, NSDictionary;

@interface PKPeerPaymentPerformRequest : PKPeerPaymentWebServiceRequest {

	NSString* _quoteIdentifier;
	NSData* _paymentData;
	NSDictionary* _certificates;
	NSString* _recipientPhoneOrEmail;
	NSString* _pushToken;
	NSData* _signedEnrollmentDataSignature;

}

@property (nonatomic,copy) NSString * quoteIdentifier;                          //@synthesize quoteIdentifier=_quoteIdentifier - In the implementation block
@property (nonatomic,copy) NSData * paymentData;                                //@synthesize paymentData=_paymentData - In the implementation block
@property (nonatomic,copy) NSDictionary * certificates;                         //@synthesize certificates=_certificates - In the implementation block
@property (nonatomic,copy) NSString * recipientPhoneOrEmail;                    //@synthesize recipientPhoneOrEmail=_recipientPhoneOrEmail - In the implementation block
@property (nonatomic,copy) NSString * pushToken;                                //@synthesize pushToken=_pushToken - In the implementation block
@property (nonatomic,copy) NSData * signedEnrollmentDataSignature;              //@synthesize signedEnrollmentDataSignature=_signedEnrollmentDataSignature - In the implementation block
+(id)requestWithAuthorizedPeerPaymentQuote:(id)arg1 ;
-(NSData *)signedEnrollmentDataSignature;
-(void)setSignedEnrollmentDataSignature:(NSData *)arg1 ;
-(NSData *)paymentData;
-(void)setPaymentData:(NSData *)arg1 ;
-(void)setPushToken:(NSString *)arg1 ;
-(id)_urlRequestWithServiceURL:(id)arg1 account:(id)arg2 deviceIdentifier:(id)arg3 deviceScore:(id)arg4 deviceMetadata:(id)arg5 ;
-(NSString *)recipientPhoneOrEmail;
-(void)setRecipientPhoneOrEmail:(NSString *)arg1 ;
-(void)setQuoteIdentifier:(NSString *)arg1 ;
-(NSString *)quoteIdentifier;
-(void)setCertificates:(NSDictionary *)arg1 ;
-(NSDictionary *)certificates;
-(NSString *)pushToken;
@end

