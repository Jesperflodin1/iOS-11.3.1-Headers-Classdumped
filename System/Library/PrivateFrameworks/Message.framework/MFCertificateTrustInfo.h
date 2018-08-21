/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Message/Message-Structs.h>
@class NSString;

@interface MFCertificateTrustInfo : NSObject {

	NSString* _uncommentedSender;
	unsigned long long _certificateType;
	NSString* _sender;
	SecTrustRef _trust;

}

@property (nonatomic,readonly) unsigned long long certificateType;              //@synthesize certificateType=_certificateType - In the implementation block
@property (nonatomic,copy,readonly) NSString * sender;                          //@synthesize sender=_sender - In the implementation block
@property (nonatomic,copy,readonly) NSString * commonName; 
@property (nonatomic,copy,readonly) NSString * emailAddress; 
@property (nonatomic,readonly) SecTrustRef trust;                               //@synthesize trust=_trust - In the implementation block
@property (nonatomic,readonly) SecCertificateRef certificate; 
@property (nonatomic,readonly) int action; 
@property (nonatomic,readonly) unsigned long long keychainStatus; 
@property (nonatomic,readonly) BOOL canSaveCertificateToKeychain; 
@property (nonatomic,readonly) BOOL hasTrustException; 
-(void)dealloc;
-(int)action;
-(NSString *)sender;
-(id)initWithCertificateType:(unsigned long long)arg1 trust:(SecTrustRef)arg2 sender:(id)arg3 ;
-(SecTrustRef)trust;
-(NSString *)commonName;
-(BOOL)hasTrustException;
-(void)addTrustException;
-(void)removeTrustException;
-(BOOL)canSaveCertificateToKeychain;
-(unsigned long long)keychainStatus;
-(void)saveCertificateToKeychain;
-(void)removeCertificateFromKeychain;
-(unsigned long long)certificateType;
-(SecCertificateRef)certificate;
-(NSString *)emailAddress;
@end

