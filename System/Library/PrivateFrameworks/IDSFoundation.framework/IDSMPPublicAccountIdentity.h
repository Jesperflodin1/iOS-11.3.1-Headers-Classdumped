/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:10 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDSFoundation/IDSMPIdentity.h>

@class NSData;

@interface IDSMPPublicAccountIdentity : IDSMPIdentity

@property (nonatomic,readonly) NSData * publicName; 
+(id)publicAccountIdentitywithDataRepresentation:(id)arg1 error:(id*)arg2 ;
-(id)dataRepresentationWithError:(id*)arg1 ;
-(NSData *)publicName;
-(BOOL)verifySignature:(id)arg1 ofData:(id)arg2 error:(id*)arg3 ;
@end

