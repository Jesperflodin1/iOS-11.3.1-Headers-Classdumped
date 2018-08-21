/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ServerDocsProtocol/ServerDocsProtocol-Structs.h>
@class NSURL, NSURLSession, NSString, PinnedHTTPSSessionDelegate;

@interface HTTPSASLClientSession : NSObject {

	NSURL* _authURL;
	NSURLSession* _authSession;
	NSString* _authUsername;
	NSString* _authPassword;
	/*^block*/id _authCompletionHandler;
	srp_contextRef _srpContext;
	NSString* _authenticatedCookie;
	PinnedHTTPSSessionDelegate* _authenticatedSessionDelegate;
	NSString* _authMechanism;

}

@property (nonatomic,retain) NSString * authenticatedCookie;                                         //@synthesize authenticatedCookie=_authenticatedCookie - In the implementation block
@property (nonatomic,retain) PinnedHTTPSSessionDelegate * authenticatedSessionDelegate;              //@synthesize authenticatedSessionDelegate=_authenticatedSessionDelegate - In the implementation block
@property (retain) NSString * authMechanism;                                                         //@synthesize authMechanism=_authMechanism - In the implementation block
-(void)_startAuthWithURL:(id)arg1 mechanism:(id)arg2 username:(id)arg3 password:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(NSString *)authenticatedCookie;
-(void)setAuthenticatedCookie:(NSString *)arg1 ;
-(void)setAuthenticatedSessionDelegate:(PinnedHTTPSSessionDelegate *)arg1 ;
-(void)setAuthMechanism:(NSString *)arg1 ;
-(void)_authStep:(id)arg1 state:(int)arg2 ;
-(PinnedHTTPSSessionDelegate *)authenticatedSessionDelegate;
-(NSString *)authMechanism;
-(void)_tryAuthFallbackIfAllowed:(id)arg1 ;
-(void)_stepPLAIN:(id)arg1 ;
-(void)_stepSRP:(id)arg1 ;
-(void)_completeSRP:(id)arg1 ;
-(void)startAuthWithURL:(id)arg1 username:(id)arg2 password:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)addAuthenticationToRequest:(id)arg1 ;
-(void)restoreCachedAuthenticatedCookie:(id)arg1 andTrustedCertData:(id)arg2 ;
@end

