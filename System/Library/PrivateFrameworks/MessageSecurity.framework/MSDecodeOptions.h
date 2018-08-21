/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MessageSecurity.framework/MessageSecurity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MessageSecurity/MessageSecurity-Structs.h>
@class NSArray, NSDate, NSData;

@interface MSDecodeOptions : NSObject {

	BOOL _verifySignatures;
	BOOL _verifySigners;
	NSArray* _signerPolicies;
	NSDate* _verifyTime;
	SecIdentityRef _identity;
	NSData* _key;
	NSData* _LAContext;

}

@property (assign) BOOL verifySignatures;                 //@synthesize verifySignatures=_verifySignatures - In the implementation block
@property (assign) BOOL verifySigners;                    //@synthesize verifySigners=_verifySigners - In the implementation block
@property (retain) NSArray * signerPolicies;              //@synthesize signerPolicies=_signerPolicies - In the implementation block
@property (retain) NSDate * verifyTime;                   //@synthesize verifyTime=_verifyTime - In the implementation block
@property (assign) SecIdentityRef identity;               //@synthesize identity=_identity - In the implementation block
@property (retain) NSData * key;                          //@synthesize key=_key - In the implementation block
@property (retain) NSData * LAContext;                    //@synthesize LAContext=_LAContext - In the implementation block
-(id)init;
-(NSData *)key;
-(void)dealloc;
-(SecIdentityRef)identity;
-(void)setKey:(NSData *)arg1 ;
-(void)setIdentity:(SecIdentityRef)arg1 ;
-(void)setLAContext:(NSData *)arg1 ;
-(NSData *)LAContext;
-(BOOL)verifySigners;
-(NSArray *)signerPolicies;
-(NSDate *)verifyTime;
-(BOOL)verifySignatures;
-(id)initWithDecryptionIdentity:(SecIdentityRef)arg1 ;
-(id)initWithDecryptionKey:(id)arg1 ;
-(void)setVerifySignatures:(BOOL)arg1 ;
-(void)setVerifySigners:(BOOL)arg1 ;
-(void)setSignerPolicies:(NSArray *)arg1 ;
-(void)setVerifyTime:(NSDate *)arg1 ;
@end

