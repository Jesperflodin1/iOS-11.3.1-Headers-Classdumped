/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:19:46 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ContactsDonation.framework/ContactsDonation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DonationAgentProtocol;
@class CNPromise;

@interface _CNDonationAgentXPCMethodScope : NSObject {

	id<DonationAgentProtocol> _proxy;
	CNPromise* _promise;

}

@property (nonatomic,readonly) id<DonationAgentProtocol> proxy;              //@synthesize proxy=_proxy - In the implementation block
@property (nonatomic,readonly) CNPromise * promise;                          //@synthesize promise=_promise - In the implementation block
-(id)init;
-(id<DonationAgentProtocol>)proxy;
-(id)initWithPromise:(id)arg1 proxy:(id)arg2 ;
-(CNPromise *)promise;
@end

