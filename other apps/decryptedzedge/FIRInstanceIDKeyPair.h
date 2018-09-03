//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface FIRInstanceIDKeyPair : NSObject
{
    struct __SecKey *_privateKey;
    struct __SecKey *_publicKey;
    NSData *_publicKeyData;
    NSData *_privateKeyData;
}

+ (id)appIdentityWithKeyPair:(id)arg1;
+ (_Bool)deleteKeyPairWithPrivateTag:(id)arg1 publicTag:(id)arg2 error:(id *)arg3;
+ (struct __SecKey *)cachedKeyRefWithTag:(id)arg1;
+ (id)keyDataWithTag:(id)arg1;
+ (id)queryDictWithTag:(id)arg1 addReturnAttr:(_Bool)arg2 withTypeData:(_Bool)arg3;
+ (id)keyPairForPrivateKeyTag:(id)arg1 publicKeyTag:(id)arg2 error:(id *)arg3;
+ (id)generateRSA2048KeyPairWithPrivateTag:(id)arg1 publicTag:(id)arg2 error:(id *)arg3;
@property(retain, nonatomic) NSData *privateKeyData; // @synthesize privateKeyData=_privateKeyData;
@property(retain, nonatomic) NSData *publicKeyData; // @synthesize publicKeyData=_publicKeyData;
- (void).cxx_destruct;
- (struct __SecKey *)privateKey;
- (struct __SecKey *)publicKey;
- (_Bool)isValid;
- (void)dealloc;
- (id)initWithPrivateKey:(struct __SecKey *)arg1 publicKey:(struct __SecKey *)arg2 publicKeyData:(id)arg3 privateKeyData:(id)arg4;
- (id)init;

@end

