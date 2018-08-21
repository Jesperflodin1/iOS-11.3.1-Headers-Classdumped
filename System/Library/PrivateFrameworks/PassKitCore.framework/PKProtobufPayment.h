/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:24 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, PKProtobufShippingMethod, PKProtobufPaymentToken;

@interface PKProtobufPayment : PBCodable <NSCopying> {

	NSData* _billingContact;
	NSData* _shippingContact;
	PKProtobufShippingMethod* _shippingMethod;
	PKProtobufPaymentToken* _token;

}

@property (nonatomic,readonly) BOOL hasToken; 
@property (nonatomic,retain) PKProtobufPaymentToken * token;                         //@synthesize token=_token - In the implementation block
@property (nonatomic,readonly) BOOL hasBillingContact; 
@property (nonatomic,retain) NSData * billingContact;                                //@synthesize billingContact=_billingContact - In the implementation block
@property (nonatomic,readonly) BOOL hasShippingContact; 
@property (nonatomic,retain) NSData * shippingContact;                               //@synthesize shippingContact=_shippingContact - In the implementation block
@property (nonatomic,readonly) BOOL hasShippingMethod; 
@property (nonatomic,retain) PKProtobufShippingMethod * shippingMethod;              //@synthesize shippingMethod=_shippingMethod - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasToken;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(PKProtobufPaymentToken *)token;
-(void)setToken:(PKProtobufPaymentToken *)arg1 ;
-(void)setBillingContact:(NSData *)arg1 ;
-(void)setShippingContact:(NSData *)arg1 ;
-(BOOL)hasBillingContact;
-(BOOL)hasShippingContact;
-(BOOL)hasShippingMethod;
-(NSData *)billingContact;
-(PKProtobufShippingMethod *)shippingMethod;
-(NSData *)shippingContact;
-(void)setShippingMethod:(PKProtobufShippingMethod *)arg1 ;
@end

