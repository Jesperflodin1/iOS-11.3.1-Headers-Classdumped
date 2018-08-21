/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:26 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSURL, NSDecimalNumber, NSData, NSDate, PKPeerPaymentRecipient, PKCurrencyAmount;

@interface PKPeerPaymentQuote : NSObject <NSSecureCoding> {

	NSString* _identifier;
	NSArray* _items;
	NSString* _disclosureText;
	NSURL* _disclosureURL;
	NSDecimalNumber* _currentBalance;
	NSString* _currentBalanceCurrency;
	NSData* _appleHash;
	NSData* _externalHash;
	NSDecimalNumber* _totalReceiveAmount;
	NSString* _totalReceiveAmountCurrency;
	NSDecimalNumber* _totalFees;
	NSString* _totalFeesCurrency;
	NSDate* _validUntil;
	PKPeerPaymentRecipient* _recipient;
	NSString* _bankName;
	NSString* _routingNumber;
	NSString* _accountNumber;

}

@property (nonatomic,readonly) PKCurrencyAmount * calculatedTotalAmount; 
@property (nonatomic,readonly) double validityDuration; 
@property (nonatomic,copy,readonly) NSString * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSArray * items;                                         //@synthesize items=_items - In the implementation block
@property (nonatomic,copy,readonly) NSString * disclosureText;                          //@synthesize disclosureText=_disclosureText - In the implementation block
@property (nonatomic,copy,readonly) NSURL * disclosureURL;                              //@synthesize disclosureURL=_disclosureURL - In the implementation block
@property (nonatomic,copy,readonly) NSDecimalNumber * currentBalance;                   //@synthesize currentBalance=_currentBalance - In the implementation block
@property (nonatomic,copy,readonly) NSString * currentBalanceCurrency;                  //@synthesize currentBalanceCurrency=_currentBalanceCurrency - In the implementation block
@property (nonatomic,copy,readonly) NSData * appleHash;                                 //@synthesize appleHash=_appleHash - In the implementation block
@property (nonatomic,copy,readonly) NSData * externalHash;                              //@synthesize externalHash=_externalHash - In the implementation block
@property (nonatomic,copy,readonly) NSDecimalNumber * totalReceiveAmount;               //@synthesize totalReceiveAmount=_totalReceiveAmount - In the implementation block
@property (nonatomic,copy,readonly) NSString * totalReceiveAmountCurrency;              //@synthesize totalReceiveAmountCurrency=_totalReceiveAmountCurrency - In the implementation block
@property (nonatomic,copy,readonly) NSDecimalNumber * totalFees;                        //@synthesize totalFees=_totalFees - In the implementation block
@property (nonatomic,copy,readonly) NSString * totalFeesCurrency;                       //@synthesize totalFeesCurrency=_totalFeesCurrency - In the implementation block
@property (nonatomic,copy,readonly) NSDate * validUntil;                                //@synthesize validUntil=_validUntil - In the implementation block
@property (nonatomic,retain) PKPeerPaymentRecipient * recipient;                        //@synthesize recipient=_recipient - In the implementation block
@property (nonatomic,copy) NSString * bankName;                                         //@synthesize bankName=_bankName - In the implementation block
@property (nonatomic,copy) NSString * routingNumber;                                    //@synthesize routingNumber=_routingNumber - In the implementation block
@property (nonatomic,copy) NSString * accountNumber;                                    //@synthesize accountNumber=_accountNumber - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)identifier;
-(NSArray *)items;
-(id)firstQuoteItemOfType:(unsigned long long)arg1 ;
-(NSData *)appleHash;
-(NSData *)externalHash;
-(NSDecimalNumber *)totalReceiveAmount;
-(NSString *)totalReceiveAmountCurrency;
-(NSDecimalNumber *)totalFees;
-(PKCurrencyAmount *)calculatedTotalAmount;
-(BOOL)hasExpired;
-(NSString *)disclosureText;
-(NSURL *)disclosureURL;
-(NSString *)totalFeesCurrency;
-(NSDate *)validUntil;
-(double)validityDuration;
-(PKPeerPaymentRecipient *)recipient;
-(void)setRecipient:(PKPeerPaymentRecipient *)arg1 ;
-(NSString *)routingNumber;
-(NSString *)accountNumber;
-(NSString *)bankName;
-(void)setRoutingNumber:(NSString *)arg1 ;
-(void)setAccountNumber:(NSString *)arg1 ;
-(void)setBankName:(NSString *)arg1 ;
-(NSDecimalNumber *)currentBalance;
-(NSString *)currentBalanceCurrency;
@end

