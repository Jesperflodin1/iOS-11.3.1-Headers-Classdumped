/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:02 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SecurityFoundation/_SFCiphertext.h>

@class _SFECPublicKey, NSData;

@interface _SFIESCiphertext : _SFCiphertext {

	id _iesCiphertextInternal;

}

@property (readonly) _SFECPublicKey * ephemeralSenderPublicKey; 
@property (readonly) NSData * authenticationCode; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSData *)authenticationCode;
-(_SFECPublicKey *)ephemeralSenderPublicKey;
-(id)initWithCiphertext:(id)arg1 ephemeralSenderPublicKey:(id)arg2 authenticationCode:(id)arg3 ;
@end

