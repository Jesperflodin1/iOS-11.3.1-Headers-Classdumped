/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:05 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NEConfigurationValidating.h>
#import <libobjc.A.dylib/NEPrettyDescription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NEProxyServer : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying> {

	BOOL _authenticationRequired;
	NSString* _address;
	long long _port;
	NSString* _username;
	NSString* _password;
	long long _type;

}

@property (assign) long long type;                           //@synthesize type=_type - In the implementation block
@property (readonly) NSString * address;                     //@synthesize address=_address - In the implementation block
@property (readonly) long long port;                         //@synthesize port=_port - In the implementation block
@property (assign) BOOL authenticationRequired;              //@synthesize authenticationRequired=_authenticationRequired - In the implementation block
@property (copy) NSString * username;                        //@synthesize username=_username - In the implementation block
@property (copy) NSString * password;                        //@synthesize password=_password - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAuthenticationRequired:(BOOL)arg1 ;
-(long long)port;
-(NSString *)username;
-(NSString *)password;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(BOOL)needToUpdateKeychain;
-(void)syncWithKeychain;
-(id)copyPassword;
-(id)initWithType:(long long)arg1 address:(id)arg2 port:(long long)arg3 ;
-(BOOL)authenticationRequired;
-(id)copyProtectionSpace;
-(id)initWithAddress:(id)arg1 port:(long long)arg2 ;
-(NSString *)address;
-(void)setUsername:(NSString *)arg1 ;
-(void)removeFromKeychain;
-(void)setPassword:(NSString *)arg1 ;
@end

