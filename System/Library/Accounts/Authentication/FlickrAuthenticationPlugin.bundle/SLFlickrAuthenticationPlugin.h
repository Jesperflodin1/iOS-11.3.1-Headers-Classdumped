/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:00:05 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Accounts/Authentication/FlickrAuthenticationPlugin.bundle/FlickrAuthenticationPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ACDAccountAuthenticationPlugin.h>

@class NSString;

@interface SLFlickrAuthenticationPlugin : NSObject <ACDAccountAuthenticationPlugin>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsAccountType:(id)arg1 ;
-(BOOL)_isClientEntitledToAccessFlickr:(id)arg1 ;
-(void)_requestPWTokenForAccount:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)_errorFromResponseData:(id)arg1 httpResponse:(id)arg2 ;
-(id)_dictionaryWithResponseString:(id)arg1 ;
-(void)_handlePWTokenGetCompletionForAccount:(id)arg1 withResponseData:(id)arg2 HTTPResponse:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_logInToAccount:(id)arg1 withPWToken:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_handleLoginCompletionForAccount:(id)arg1 withResponseData:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_authorizeTCookie:(id)arg1 yCookie:(id)arg2 forAccount:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(id)_unscrambleString:(id)arg1 ;
-(id)_queryDictionaryFromString:(id)arg1 ;
-(void)_handleCookieAuthorizationCompletionForAccount:(id)arg1 withResponseData:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)credentialForAccount:(id)arg1 client:(id)arg2 ;
-(void)verifyCredentialsForAccount:(id)arg1 accountStore:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)renewCredentialsForAccount:(id)arg1 accountStore:(id)arg2 reason:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_urlEncodedString:(id)arg1 ;
-(id)_consumerKey;
-(id)_consumerSecret;
@end

