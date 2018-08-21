/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:12 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MSCLTwitterAuthenticationRequest : NSObject {

	NSString* _password;
	/*^block*/id _responseBlock;
	NSString* _username;

}
-(id)initWithUsername:(id)arg1 password:(id)arg2 ;
-(void)startWithResponseBlock:(/*^block*/id)arg1 ;
-(void)_finishWithAuthenticatedAccount:(id)arg1 error:(id)arg2 ;
-(void)_authenticateUsername:(id)arg1 password:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(id)_consumerKey;
-(id)_consumerSecret;
@end

