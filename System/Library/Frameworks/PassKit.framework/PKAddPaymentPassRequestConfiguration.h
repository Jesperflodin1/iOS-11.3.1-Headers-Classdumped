/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface PKAddPaymentPassRequestConfiguration : NSObject <NSSecureCoding> {

	BOOL _requiresFelicaSecureElement;
	NSString* _encryptionScheme;
	NSString* _cardholderName;
	NSString* _primaryAccountSuffix;
	NSArray* _cardDetails;
	NSString* _localizedDescription;
	NSString* _primaryAccountIdentifier;
	NSString* _paymentNetwork;

}

@property (nonatomic,copy,readonly) NSString * encryptionScheme;              //@synthesize encryptionScheme=_encryptionScheme - In the implementation block
@property (nonatomic,copy) NSString * cardholderName;                         //@synthesize cardholderName=_cardholderName - In the implementation block
@property (nonatomic,copy) NSString * primaryAccountSuffix;                   //@synthesize primaryAccountSuffix=_primaryAccountSuffix - In the implementation block
@property (nonatomic,copy) NSArray * cardDetails;                             //@synthesize cardDetails=_cardDetails - In the implementation block
@property (nonatomic,copy) NSString * localizedDescription;                   //@synthesize localizedDescription=_localizedDescription - In the implementation block
@property (nonatomic,copy) NSString * primaryAccountIdentifier;               //@synthesize primaryAccountIdentifier=_primaryAccountIdentifier - In the implementation block
@property (nonatomic,copy) NSString * paymentNetwork;                         //@synthesize paymentNetwork=_paymentNetwork - In the implementation block
@property (assign,nonatomic) BOOL requiresFelicaSecureElement;                //@synthesize requiresFelicaSecureElement=_requiresFelicaSecureElement - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(NSString *)paymentNetwork;
-(void)setPaymentNetwork:(NSString *)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(NSString *)localizedDescription;
-(void)setPrimaryAccountIdentifier:(NSString *)arg1 ;
-(NSString *)primaryAccountIdentifier;
-(NSArray *)cardDetails;
-(NSString *)cardholderName;
-(NSString *)primaryAccountSuffix;
-(NSString *)encryptionScheme;
-(id)initWithEncryptionScheme:(id)arg1 ;
-(void)setCardholderName:(NSString *)arg1 ;
-(void)setPrimaryAccountSuffix:(NSString *)arg1 ;
-(void)setCardDetails:(NSArray *)arg1 ;
-(BOOL)requiresFelicaSecureElement;
-(void)setRequiresFelicaSecureElement:(BOOL)arg1 ;
@end

