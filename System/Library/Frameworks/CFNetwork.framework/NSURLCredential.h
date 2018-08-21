/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:52 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURLCredentialInternal;

@interface NSURLCredential : NSObject <NSSecureCoding, NSCopying> {

	NSURLCredentialInternal* _internal;

}

@property (readonly) unsigned long long persistence; 
+(id)credentialWithIdentity:(SecIdentityRef)arg1 certificates:(id)arg2 persistence:(unsigned long long)arg3 ;
+(BOOL)supportsSecureCoding;
+(id)credentialWithUser:(id)arg1 password:(id)arg2 persistence:(unsigned long long)arg3 ;
+(id)credentialForTrust:(SecTrustRef)arg1 ;
-(id)_initWithCFURLCredential:(CFURLCredentialRef)arg1 ;
-(const CFURLCredentialRef)_cfurlcredential;
-(id)initWithTrust:(SecTrustRef)arg1 ;
-(const CFURLCredentialRef)_CFURLCredential;
-(void)_removeSWCACreatorAttribute;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(SecIdentityRef)identity;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)password;
-(unsigned long long)persistence;
-(id)initWithIdentity:(SecIdentityRef)arg1 certificates:(id)arg2 persistence:(unsigned long long)arg3 ;
-(BOOL)hasPassword;
-(BOOL)_hasSWCACreatorAttribute;
-(id)certificates;
-(id)initWithUser:(id)arg1 password:(id)arg2 persistence:(unsigned long long)arg3 ;
-(id)user;
@end

