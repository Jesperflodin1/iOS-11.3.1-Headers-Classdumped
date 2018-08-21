/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:10 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IDSServerCertificate, NSData;

@interface IDSAuthenticationCertificate : NSObject {

	IDSServerCertificate* _backingCertificate;

}

@property (nonatomic,readonly) IDSServerCertificate * backingCertificate;              //@synthesize backingCertificate=_backingCertificate - In the implementation block
@property (nonatomic,readonly) NSData * dataRepresentation; 
-(id)description;
-(id)initWithBackingCertificate:(id)arg1 ;
-(IDSServerCertificate *)backingCertificate;
-(id)initWithDataRepresentation:(id)arg1 ;
-(NSData *)dataRepresentation;
@end

