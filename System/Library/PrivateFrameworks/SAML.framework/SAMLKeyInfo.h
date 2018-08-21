/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAML/SAMLBaseElement.h>

@class NSString, SAMLSignatureKeyValue, SAMLKeyRetrievalMethod, SAMLX509Data, SAMLPGPData, NSData;

@interface SAMLKeyInfo : SAMLBaseElement

@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * keyName; 
@property (nonatomic,readonly) SAMLSignatureKeyValue * keyValue; 
@property (nonatomic,readonly) SAMLKeyRetrievalMethod * retrievalMethod; 
@property (nonatomic,readonly) SAMLX509Data * x509Data; 
@property (nonatomic,readonly) SAMLPGPData * pgpData; 
@property (nonatomic,readonly) NSData * spkiSexpData; 
@property (nonatomic,readonly) NSString * mgmtData; 
+(id)createElement:(id*)arg1 ;
-(NSString *)keyName;
-(NSString *)identifier;
-(SAMLSignatureKeyValue *)keyValue;
-(SAMLKeyRetrievalMethod *)retrievalMethod;
-(SAMLX509Data *)x509Data;
-(SAMLPGPData *)pgpData;
-(NSData *)spkiSexpData;
-(NSString *)mgmtData;
@end

