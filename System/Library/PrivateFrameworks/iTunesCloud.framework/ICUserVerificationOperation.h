/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:33 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/ICAsyncOperation.h>

@class ICUserVerificationRequest;

@interface ICUserVerificationOperation : ICAsyncOperation {

	ICUserVerificationRequest* _verificationRequest;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy,readonly) ICUserVerificationRequest * verificationRequest;              //@synthesize verificationRequest=_verificationRequest - In the implementation block
@property (nonatomic,copy) id responseHandler;                                                    //@synthesize responseHandler=_responseHandler - In the implementation block
+(id)operationWithVerificationRequest:(id)arg1 ;
-(ICUserVerificationRequest *)verificationRequest;
-(id)responseHandler;
-(void)setResponseHandler:(id)arg1 ;
-(void)execute;
@end

