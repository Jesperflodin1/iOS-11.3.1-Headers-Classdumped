/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:24 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSDate, NSDecimalNumber, NSData, NSString;

@interface PKTransitAppletHistoryRecord : NSObject <NSCopying, NSSecureCoding> {

	NSNumber* _historySequenceNumber;
	unsigned long long _type;
	unsigned long long _subtype;
	unsigned long long _detail;
	NSDate* _time;
	NSDecimalNumber* _balance;
	NSNumber* _loyaltyBalance;
	NSDecimalNumber* _amount;
	NSNumber* _loyaltyAmount;
	NSData* _startStation;
	NSData* _endStation;
	NSString* _transitDetail;
	long long _paymentTransactionType;
	long long _recordType;

}

@property (nonatomic,readonly) long long paymentTransactionType; 
@property (nonatomic,readonly) long long transitTransactionSubtype; 
@property (nonatomic,readonly) unsigned long long transitTransactionModifier; 
@property (nonatomic,copy) NSNumber * historySequenceNumber;                               //@synthesize historySequenceNumber=_historySequenceNumber - In the implementation block
@property (nonatomic,copy) NSString * transitDetail;                                       //@synthesize transitDetail=_transitDetail - In the implementation block
@property (assign,nonatomic) unsigned long long type;                                      //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long subtype;                                   //@synthesize subtype=_subtype - In the implementation block
@property (assign,nonatomic) unsigned long long detail;                                    //@synthesize detail=_detail - In the implementation block
@property (nonatomic,copy) NSDate * time;                                                  //@synthesize time=_time - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * balance;                                      //@synthesize balance=_balance - In the implementation block
@property (nonatomic,copy) NSNumber * loyaltyBalance;                                      //@synthesize loyaltyBalance=_loyaltyBalance - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * amount;                                       //@synthesize amount=_amount - In the implementation block
@property (nonatomic,copy) NSNumber * loyaltyAmount;                                       //@synthesize loyaltyAmount=_loyaltyAmount - In the implementation block
@property (nonatomic,copy) NSData * startStation;                                          //@synthesize startStation=_startStation - In the implementation block
@property (nonatomic,copy) NSData * endStation;                                            //@synthesize endStation=_endStation - In the implementation block
@property (nonatomic,readonly) long long paymentTransactionType;                           //@synthesize paymentTransactionType=_paymentTransactionType - In the implementation block
@property (assign,nonatomic) long long recordType;                                         //@synthesize recordType=_recordType - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDate *)time;
-(void)setTime:(NSDate *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)initWithDictionary:(id)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(unsigned long long)subtype;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSubtype:(unsigned long long)arg1 ;
-(void)setDetail:(unsigned long long)arg1 ;
-(void)setAmount:(NSDecimalNumber *)arg1 ;
-(NSDecimalNumber *)amount;
-(unsigned long long)detail;
-(id)felicaHistoryRecord;
-(NSNumber *)historySequenceNumber;
-(void)setHistorySequenceNumber:(NSNumber *)arg1 ;
-(NSNumber *)loyaltyBalance;
-(void)setLoyaltyBalance:(NSNumber *)arg1 ;
-(id)concreteTransactionWithCurrency:(id)arg1 ;
-(void)_setTransactionHistoryDetailsFromString:(id)arg1 ;
-(long long)transitTransactionSubtype;
-(unsigned long long)transitTransactionModifier;
-(NSNumber *)loyaltyAmount;
-(void)setLoyaltyAmount:(NSNumber *)arg1 ;
-(void)setStartStation:(NSData *)arg1 ;
-(void)setEndStation:(NSData *)arg1 ;
-(NSString *)transitDetail;
-(void)setTransitDetail:(NSString *)arg1 ;
-(long long)paymentTransactionType;
-(NSDecimalNumber *)balance;
-(void)setBalance:(NSDecimalNumber *)arg1 ;
-(void)setRecordType:(long long)arg1 ;
-(NSData *)startStation;
-(NSData *)endStation;
-(long long)recordType;
@end

