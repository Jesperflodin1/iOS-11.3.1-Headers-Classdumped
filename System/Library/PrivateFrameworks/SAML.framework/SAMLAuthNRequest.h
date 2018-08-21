/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAML/XMLWrapperDoc.h>

@class NSData, SAMLAuthNRequestElement, NSString;

@interface SAMLAuthNRequest : XMLWrapperDoc {

	NSData* _schemaData;
	SAMLAuthNRequestElement* _requestElement;

}

@property (nonatomic,retain) SAMLAuthNRequestElement * requestElement;              //@synthesize requestElement=_requestElement - In the implementation block
@property (nonatomic,retain) NSString * issuer; 
-(void)setProviderName:(id)arg1 ;
-(void)setIssuer:(NSString *)arg1 ;
-(NSString *)issuer;
-(id)initWithData:(id)arg1 schema:(id)arg2 error:(id*)arg3 ;
-(id)initWithElement:(id)arg1 schema:(id)arg2 error:(id*)arg3 ;
-(SAMLAuthNRequestElement *)requestElement;
-(void)setRequestElement:(SAMLAuthNRequestElement *)arg1 ;
-(void)setIsPassive:(BOOL)arg1 ;
-(void)setSubjectFromResponse:(id)arg1 ;
-(void)setForceAuthN:(BOOL)arg1 ;
@end

