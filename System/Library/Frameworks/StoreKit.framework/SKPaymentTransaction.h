/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:08:55 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSError, SKPayment, NSArray, NSDate, NSData;

@interface SKPaymentTransaction : NSObject {

	id _internal;

}

@property (nonatomic,readonly) NSString * matchingIdentifier; 
@property (nonatomic,readonly) NSString * _transactionIdentifier; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,readonly) SKPaymentTransaction * originalTransaction; 
@property (nonatomic,readonly) SKPayment * payment; 
@property (nonatomic,readonly) NSArray * downloads; 
@property (nonatomic,readonly) NSDate * transactionDate; 
@property (nonatomic,readonly) NSString * transactionIdentifier; 
@property (nonatomic,readonly) NSData * transactionReceipt; 
@property (nonatomic,readonly) long long transactionState; 
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)init;
-(void)dealloc;
-(NSDate *)transactionDate;
-(NSError *)error;
-(void)_setError:(id)arg1 ;
-(id)initWithPayment:(id)arg1 ;
-(long long)transactionState;
-(NSString *)matchingIdentifier;
-(BOOL)canMergeWithTransaction:(id)arg1 ;
-(SKPaymentTransaction *)originalTransaction;
-(NSData *)transactionReceipt;
-(void)_setOriginalTransaction:(id)arg1 ;
-(void)_setTemporaryIdentifier:(id)arg1 ;
-(void)_setTransactionDate:(id)arg1 ;
-(void)_setTransactionIdentifier:(id)arg1 ;
-(void)_setTransactionReceipt:(id)arg1 ;
-(void)_setTransactionState:(long long)arg1 ;
-(void)_setDownloads:(id)arg1 ;
-(NSArray *)downloads;
-(SKPayment *)payment;
-(NSString *)transactionIdentifier;
-(NSString *)_transactionIdentifier;
-(BOOL)mergeWithTransaction:(id)arg1 ;
@end

