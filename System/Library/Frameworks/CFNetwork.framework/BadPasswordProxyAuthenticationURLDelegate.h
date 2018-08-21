/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:52 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/ProxyAuthenticationURLDelegate.h>

@interface BadPasswordProxyAuthenticationURLDelegate : ProxyAuthenticationURLDelegate {

	long long _failureCount;

}

@property (assign) long long failureCount;              //@synthesize failureCount=_failureCount - In the implementation block
-(void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setFailureCount:(long long)arg1 ;
-(long long)failureCount;
@end

