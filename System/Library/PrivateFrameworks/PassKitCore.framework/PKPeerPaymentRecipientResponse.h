/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:27 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPeerPaymentWebServiceResponse.h>

@class PKPeerPaymentRecipient;

@interface PKPeerPaymentRecipientResponse : PKPeerPaymentWebServiceResponse {

	PKPeerPaymentRecipient* _recipient;

}

@property (nonatomic,readonly) PKPeerPaymentRecipient * recipient;              //@synthesize recipient=_recipient - In the implementation block
-(id)initWithData:(id)arg1 ;
-(PKPeerPaymentRecipient *)recipient;
@end
