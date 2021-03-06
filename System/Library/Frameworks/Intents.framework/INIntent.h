/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:41 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INIntentExport.h>
#import <libobjc.A.dylib/INGenericIntent.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class PBCodable, NSString, NSDictionary;

@interface INIntent : NSObject <INIntentExport, INGenericIntent, NSCopying, NSSecureCoding> {

	NSString* _identifier;
	PBCodable* _backingStore;

}

@property (nonatomic,copy) PBCodable * backingStore;                           //@synthesize backingStore=_backingStore - In the implementation block
@property (nonatomic,readonly) NSString * utteranceString; 
@property (nonatomic,readonly) NSString * launchId; 
@property (nonatomic,copy) NSString * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * intentId; 
@property (nonatomic,readonly) NSString * extensionBundleId; 
@property (nonatomic,readonly) long long triggerMethod; 
@property (nonatomic,readonly) NSString * typeName; 
@property (nonatomic,copy,readonly) NSString * intentDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * domain; 
@property (nonatomic,copy) NSString * verb; 
@property (nonatomic,copy) NSDictionary * parametersByName; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(id)intentDescription;
+(id)typeName;
-(id)_dictionaryRepresentation;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)identifier;
-(NSString *)domain;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_typedBackingStore;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(NSDictionary *)parametersByName;
-(void)setParametersByName:(NSDictionary *)arg1 ;
-(NSString *)intentDescription;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(long long)triggerMethod;
-(NSString *)intentId;
-(id)initWithIdentifier:(id)arg1 backingStore:(id)arg2 ;
-(void)trimDataAgainstTCCForAuditToken:(SCD_Struct_IN7)arg1 bundle:(id)arg2 ;
-(NSString *)utteranceString;
-(BOOL)isGenericIntent;
-(NSString *)extensionBundleId;
-(id)protoData;
-(void)setVerb:(NSString *)arg1 ;
-(NSString *)launchId;
-(id)initWithDomain:(id)arg1 verb:(id)arg2 parametersByName:(id)arg3 ;
-(NSString *)verb;
-(id)_metadata;
-(void)setDomain:(NSString *)arg1 ;
-(PBCodable *)backingStore;
-(void)setBackingStore:(PBCodable *)arg1 ;
-(id)_impl;
-(NSString *)typeName;
@end

