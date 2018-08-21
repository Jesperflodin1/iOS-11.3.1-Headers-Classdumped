/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NFECommercePaymentRequest, NFPeerPaymentTransferRequest;

@interface NFPeerPaymentRequest : NSObject <NSSecureCoding> {

	NFECommercePaymentRequest* _topUpRequest;
	NFPeerPaymentTransferRequest* _transferRequest;

}

@property (nonatomic,retain) NFECommercePaymentRequest * topUpRequest;                    //@synthesize topUpRequest=_topUpRequest - In the implementation block
@property (nonatomic,retain) NFPeerPaymentTransferRequest * transferRequest;              //@synthesize transferRequest=_transferRequest - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)initWithDictionary:(id)arg1 ;
-(void)setTransferRequest:(NFPeerPaymentTransferRequest *)arg1 ;
-(void)setTopUpRequest:(NFECommercePaymentRequest *)arg1 ;
-(NFECommercePaymentRequest *)topUpRequest;
-(NFPeerPaymentTransferRequest *)transferRequest;
@end
