/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDecimalNumber, NSString, NSDate, NSData;

@interface NFPeerPaymentTransferRequest : NSObject <NSSecureCoding> {

	NSDecimalNumber* _transactionAmount;
	NSString* _appleTransactionHash;
	NSString* _publicTransactionHash;
	NSDate* _transactionDate;
	NSString* _transactionCurrency;
	NSString* _transactionCountry;
	NSData* _nonce;

}

@property (nonatomic,copy) NSDecimalNumber * transactionAmount;              //@synthesize transactionAmount=_transactionAmount - In the implementation block
@property (nonatomic,copy) NSString * appleTransactionHash;                  //@synthesize appleTransactionHash=_appleTransactionHash - In the implementation block
@property (nonatomic,copy) NSString * publicTransactionHash;                 //@synthesize publicTransactionHash=_publicTransactionHash - In the implementation block
@property (nonatomic,copy) NSDate * transactionDate;                         //@synthesize transactionDate=_transactionDate - In the implementation block
@property (nonatomic,copy) NSString * transactionCurrency;                   //@synthesize transactionCurrency=_transactionCurrency - In the implementation block
@property (nonatomic,copy) NSString * transactionCountry;                    //@synthesize transactionCountry=_transactionCountry - In the implementation block
@property (nonatomic,copy) NSData * nonce;                                   //@synthesize nonce=_nonce - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)initWithDictionary:(id)arg1 ;
-(NSDate *)transactionDate;
-(void)setTransactionDate:(NSDate *)arg1 ;
-(void)setAppleTransactionHash:(NSString *)arg1 ;
-(void)setPublicTransactionHash:(NSString *)arg1 ;
-(void)setTransactionAmount:(NSDecimalNumber *)arg1 ;
-(void)setTransactionCurrency:(NSString *)arg1 ;
-(void)setTransactionCountry:(NSString *)arg1 ;
-(NSDecimalNumber *)transactionAmount;
-(NSString *)transactionCurrency;
-(NSData *)nonce;
-(void)setNonce:(NSData *)arg1 ;
-(NSString *)appleTransactionHash;
-(NSString *)publicTransactionHash;
-(NSString *)transactionCountry;
@end

