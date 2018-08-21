/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber;

@interface PKPaymentAvailableDevicesResponseCardItem : NSObject {

	BOOL _supportsInApp;
	NSString* _cardType;
	NSNumber* _cardTypeCode;
	NSString* _currentStatus;

}

@property (nonatomic,copy) NSString * cardType;                   //@synthesize cardType=_cardType - In the implementation block
@property (nonatomic,copy) NSNumber * cardTypeCode;               //@synthesize cardTypeCode=_cardTypeCode - In the implementation block
@property (nonatomic,copy) NSString * currentStatus;              //@synthesize currentStatus=_currentStatus - In the implementation block
@property (assign,nonatomic) BOOL supportsInApp;                  //@synthesize supportsInApp=_supportsInApp - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(void)setCardType:(NSString *)arg1 ;
-(NSNumber *)cardTypeCode;
-(void)setCardTypeCode:(NSNumber *)arg1 ;
-(BOOL)supportsInApp;
-(void)setSupportsInApp:(BOOL)arg1 ;
-(NSString *)cardType;
-(void)setCurrentStatus:(NSString *)arg1 ;
-(NSString *)currentStatus;
@end

