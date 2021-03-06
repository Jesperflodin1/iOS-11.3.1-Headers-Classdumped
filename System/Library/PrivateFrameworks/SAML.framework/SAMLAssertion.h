/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAML/SAMLBaseElement.h>

@class NSDate, NSString, NSArray, SAMLAuthNStatement, SAMLSignature, SAMLSubject, SAMLConditions, SAMLAdvice;

@interface SAMLAssertion : SAMLBaseElement

@property (nonatomic,readonly) NSDate * issueInstant; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSArray * samlAttributes; 
@property (nonatomic,readonly) SAMLAuthNStatement * authentication; 
@property (nonatomic,readonly) NSArray * authorizations; 
@property (nonatomic,readonly) NSString * issuer; 
@property (nonatomic,readonly) SAMLSignature * signature; 
@property (nonatomic,readonly) SAMLSubject * subject; 
@property (nonatomic,readonly) SAMLConditions * conditions; 
@property (nonatomic,readonly) SAMLAdvice * advice; 
+(id)createElement:(id*)arg1 ;
-(NSString *)identifier;
-(SAMLSubject *)subject;
-(SAMLSignature *)signature;
-(SAMLAuthNStatement *)authentication;
-(NSArray *)authorizations;
-(SAMLConditions *)conditions;
-(NSString *)issuer;
-(BOOL)isValid:(id*)arg1 ;
-(NSDate *)issueInstant;
-(NSArray *)samlAttributes;
-(id)authorizationForResource:(id)arg1 ;
-(BOOL)meetsConditions:(id*)arg1 ;
-(BOOL)isValidForRequestor:(id)arg1 ;
-(SAMLAdvice *)advice;
@end

