//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FIRInstanceIDAuthService, FIRInstanceIDKeyPair, NSDictionary, NSString, NSURLSession, NSURLSessionDataTask;

@interface FIRInstanceIDRegistrationClient : NSObject
{
    NSString *_authorizedEntity;
    NSString *_scope;
    FIRInstanceIDAuthService *_authService;
    FIRInstanceIDKeyPair *_keyPair;
    NSDictionary *_options;
    NSURLSession *_session;
    NSURLSessionDataTask *_task;
}

+ (void)setRegistrationTestBlock:(CDUnknownBlockType)arg1;
+ (id)responseHeadersForResponse:(id)arg1;
+ (unsigned long long)nextRequestID;
+ (id)requestContentSuffixFromOptions:(id)arg1;
+ (id)deleteRequestContentWithDeviceID:(id)arg1 scope:(id)arg2;
+ (id)requestWithAuthHeader:(id)arg1;
+ (CDUnknownBlockType)updateDeleteHandler:(CDUnknownBlockType)arg1;
+ (void)deleteGCMTokenOnAppResetWithDeviceID:(id)arg1 secretToken:(id)arg2 handler:(CDUnknownBlockType)arg3;
+ (id)registrationClientKeyWithAuthorizedEntity:(id)arg1 scope:(id)arg2;
+ (id)newSession;
@property(retain, nonatomic) NSURLSessionDataTask *task; // @synthesize task=_task;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(retain, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(retain, nonatomic) FIRInstanceIDKeyPair *keyPair; // @synthesize keyPair=_keyPair;
@property(retain, nonatomic) FIRInstanceIDAuthService *authService; // @synthesize authService=_authService;
@property(copy, nonatomic) NSString *scope; // @synthesize scope=_scope;
@property(copy, nonatomic) NSString *authorizedEntity; // @synthesize authorizedEntity=_authorizedEntity;
- (void).cxx_destruct;
- (long long)requestID;
- (id)HTTPAuthHeaderForAuthorizedEntity:(id)arg1;
- (id)parseFetchTokenResponse:(id)arg1;
- (void)parseToken:(id)arg1 authToken:(id)arg2 withRequestID:(unsigned long long)arg3 handler:(CDUnknownBlockType)arg4;
- (void)addPublicKeyContentToRequestBody:(id)arg1;
- (void)deleteTokenWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchTokenWithHandler:(CDUnknownBlockType)arg1;
- (_Bool)inProgress;
- (void)setOptionsForFetchingNewToken:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)stopFetching;
- (void)dealloc;
- (id)initWithAuthService:(id)arg1 authorizedEntity:(id)arg2 scope:(id)arg3 keyPair:(id)arg4;
- (id)init;

@end

