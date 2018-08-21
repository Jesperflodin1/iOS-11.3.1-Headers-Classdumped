/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:26 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class PKPaymentPass, PKPaymentPassAction;

@interface PKPaymentRemoteContentPassActionRequest : PKPaymentWebServiceRequest {

	PKPaymentPass* _pass;
	PKPaymentPassAction* _action;

}

@property (nonatomic,retain) PKPaymentPass * pass;                      //@synthesize pass=_pass - In the implementation block
@property (nonatomic,retain) PKPaymentPassAction * action;              //@synthesize action=_action - In the implementation block
-(PKPaymentPassAction *)action;
-(void)setAction:(PKPaymentPassAction *)arg1 ;
-(id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 account:(id)arg3 ;
-(PKPaymentPass *)pass;
-(void)setPass:(PKPaymentPass *)arg1 ;
@end

