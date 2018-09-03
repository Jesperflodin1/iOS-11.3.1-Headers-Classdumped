//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FIRInstanceIDRegistrar, FIRInstanceIDStore;

@interface FIRInstanceIDTokenManager : NSObject
{
    _Bool _allowMissingAPNSToken;
    FIRInstanceIDRegistrar *_registrar;
    FIRInstanceIDStore *_instanceIDStore;
}

@property(retain, nonatomic) FIRInstanceIDStore *instanceIDStore; // @synthesize instanceIDStore=_instanceIDStore;
@property(nonatomic) _Bool allowMissingAPNSToken; // @synthesize allowMissingAPNSToken=_allowMissingAPNSToken;
@property(retain, nonatomic) FIRInstanceIDRegistrar *registrar; // @synthesize registrar=_registrar;
- (void).cxx_destruct;
- (_Bool)invalidateCachedToken:(id)arg1 withAuthorizedEntity:(id)arg2 scope:(id)arg3 options:(id)arg4;
- (_Bool)shouldResetTokenOnAPNSToken:(id)arg1 isSandbox:(_Bool)arg2;
- (_Bool)shouldResetTokenOnAppVersion;
- (_Bool)deleteAllTokensLocallyWithError:(id *)arg1;
- (void)deleteAllTokensWithKeyPair:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)deleteTokenWithAuthorizedEntity:(id)arg1 scope:(id)arg2 keyPair:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (id)tokenWithAuthorizedEntity:(id)arg1 scope:(id)arg2 options:(id)arg3;
- (void)fetchNewTokenWithAuthorizedEntity:(id)arg1 scope:(id)arg2 keyPair:(id)arg3 options:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (id)init;

@end

