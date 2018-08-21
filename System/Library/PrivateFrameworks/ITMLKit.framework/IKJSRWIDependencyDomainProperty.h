/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:31 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, IKJSRWIDependencyDomainType;

@interface IKJSRWIDependencyDomainProperty : NSObject {

	NSString* _reference;
	BOOL _required;
	NSString* _name;
	NSString* _purpose;
	NSString* _propertyType;
	IKJSRWIDependencyDomainType* _domainType;

}

@property (nonatomic,readonly) NSString * name;                                              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * purpose;                                           //@synthesize purpose=_purpose - In the implementation block
@property (getter=isRequired,nonatomic,readonly) BOOL required;                              //@synthesize required=_required - In the implementation block
@property (nonatomic,readonly) NSString * propertyType;                                      //@synthesize propertyType=_propertyType - In the implementation block
@property (nonatomic,__weak,readonly) IKJSRWIDependencyDomainType * domainType;              //@synthesize domainType=_domainType - In the implementation block
+(id)propertyNameMapping;
+(id)typeMapping;
-(IKJSRWIDependencyDomainType *)domainType;
-(NSString *)purpose;
-(NSString *)name;
-(id)initWithPropertyDictionary:(id)arg1 forType:(id)arg2 ;
-(id)propertyDefinitionString;
-(id)methodParameterString;
-(BOOL)isRequired;
-(NSString *)propertyType;
@end

