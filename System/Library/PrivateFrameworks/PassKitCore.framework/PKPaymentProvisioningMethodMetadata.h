/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:25 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDecimalNumber, NSArray, NSDictionary, PKPaymentDigitalIssuanceMetadata;

@interface PKPaymentProvisioningMethodMetadata : NSObject {

	NSString* _productIdentifier;
	NSString* _currency;
	NSDecimalNumber* _depositAmount;
	NSDecimalNumber* _minLoadedBalance;
	NSDecimalNumber* _maxLoadedBalance;
	NSArray* _requiredFields;
	NSDictionary* _readerModeMetadata;
	PKPaymentDigitalIssuanceMetadata* _digitalIssuanceMetadata;
	NSDictionary* _readerModeResources;

}

@property (nonatomic,copy,readonly) NSString * productIdentifier;                                       //@synthesize productIdentifier=_productIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * currency;                                                //@synthesize currency=_currency - In the implementation block
@property (nonatomic,copy,readonly) NSDecimalNumber * depositAmount;                                    //@synthesize depositAmount=_depositAmount - In the implementation block
@property (nonatomic,copy,readonly) NSDecimalNumber * minLoadedBalance;                                 //@synthesize minLoadedBalance=_minLoadedBalance - In the implementation block
@property (nonatomic,copy,readonly) NSDecimalNumber * maxLoadedBalance;                                 //@synthesize maxLoadedBalance=_maxLoadedBalance - In the implementation block
@property (nonatomic,copy,readonly) NSArray * requiredFields;                                           //@synthesize requiredFields=_requiredFields - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * readerModeMetadata;                                  //@synthesize readerModeMetadata=_readerModeMetadata - In the implementation block
@property (nonatomic,readonly) PKPaymentDigitalIssuanceMetadata * digitalIssuanceMetadata;              //@synthesize digitalIssuanceMetadata=_digitalIssuanceMetadata - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * readerModeResources;                                 //@synthesize readerModeResources=_readerModeResources - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)productIdentifier;
-(NSDictionary *)readerModeMetadata;
-(NSString *)currency;
-(NSDictionary *)readerModeResources;
-(NSDecimalNumber *)depositAmount;
-(PKPaymentDigitalIssuanceMetadata *)digitalIssuanceMetadata;
-(NSDecimalNumber *)minLoadedBalance;
-(NSDecimalNumber *)maxLoadedBalance;
-(NSArray *)requiredFields;
@end

