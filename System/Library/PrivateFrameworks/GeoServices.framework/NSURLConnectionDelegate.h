/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSURLConnectionDelegate <NSObject>
@optional
-(BOOL)connectionShouldUseCredentialStorage:(id)arg1;
-(void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
-(BOOL)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
-(void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
-(void)connection:(id)arg1 didCancelAuthenticationChallenge:(id)arg2;
-(void)connection:(id)arg1 didFailWithError:(id)arg2;

@end

