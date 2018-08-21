/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAObjects-Structs.h>
#import <libobjc.A.dylib/AceObject.h>

@protocol AceObject <NSObject,NSCopying,NSMutableCopying,NSSecureCoding>
@required
-(id)groupIdentifier;
-(id)init;
-(id)initWithDictionary:(id)arg1;
-(id)dictionary;
-(id)copyWithZone:(NSZone*)arg1;
-(id)mutableCopyWithZone:(NSZone*)arg1;
-(id)properties;
-(id)encodedClassName;
-(id)initWithDictionary:(id)arg1 context:(id)arg2;

@end


@class NSNumber, NSString, NSData, NSMutableDictionary;

@interface AceObject : NSObject <AceObject> {

	NSNumber* _deserializationDuration;
	BOOL _mutatingCommand;
	NSString* _aceId;
	NSString* _refId;
	NSNumber* _usefulnessScore;
	NSData* _plistData;
	NSMutableDictionary* _dict;

}

@property (nonatomic,readonly) NSData * plistData;                      //@synthesize plistData=_plistData - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * dict;              //@synthesize dict=_dict - In the implementation block
@property (nonatomic,copy) NSString * aceId;                            //@synthesize aceId=_aceId - In the implementation block
@property (nonatomic,copy) NSString * refId;                            //@synthesize refId=_refId - In the implementation block
@property (nonatomic,copy) NSNumber * usefulnessScore;                  //@synthesize usefulnessScore=_usefulnessScore - In the implementation block
@property (assign,nonatomic) BOOL mutatingCommand;                      //@synthesize mutatingCommand=_mutatingCommand - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)newAceObjectWithGenericCommand:(id)arg1 context:(id)arg2 ;
+(id)newAceObjectWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)_newAceObjectWithMutableDictionary:(id)arg1 ;
+(id)_filteredDictionaryForKeySet:(CFSetRef)arg1 plistData:(id)arg2 ;
+(id)aceObjectWithGenericCommand:(id)arg1 context:(id)arg2 ;
+(id)_aceObjectWithMutableDictionary:(id)arg1 context:(id)arg2 ;
+(id)aceObjectArrayWithDictionaryArray:(id)arg1 baseClass:(Class)arg2 context:(id)arg3 ;
+(id)aceObjectDictionaryWithDictionary:(id)arg1 baseClass:(Class)arg2 context:(id)arg3 ;
+(id)aceObjectArrayWithDictionaryArray:(id)arg1 baseProtocol:(id)arg2 context:(id)arg3 ;
+(id)aceObjectDictionaryWithDictionary:(id)arg1 baseProtocol:(id)arg2 context:(id)arg3 ;
+(id)dictionaryArrayWithAceObjectArray:(id)arg1 ;
+(id)dictionaryWithAceObjectDictionary:(id)arg1 ;
+(id)aceObjectWithPlistData:(id)arg1 ;
+(id)aceObjectWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSMutableDictionary *)dict;
-(id)groupIdentifier;
-(id)fullDescription;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionary;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_serializedData;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)propertyForKey:(id)arg1 ;
-(void)setProperty:(id)arg1 forKey:(id)arg2 ;
-(id)properties;
-(id)encodedClassName;
-(void)setAceId:(NSString *)arg1 ;
-(NSString *)refId;
-(void)setRefId:(NSString *)arg1 ;
-(id)_initWithPlistData:(id)arg1 aceId:(id)arg2 refId:(id)arg3 ;
-(id)_initWithMutableDictionary:(id)arg1 ;
-(id)_initWithPlistData:(id)arg1 aceId:(id)arg2 refId:(id)arg3 usefulnessScore:(id)arg4 mutatingCommand:(id)arg5 ;
-(void)_deserializeFromPlistData;
-(id)topLevelPropertyForKey:(id)arg1 ;
-(id)_dict;
-(void)setTopLevelProperty:(id)arg1 forKey:(id)arg2 ;
-(id)forceEagerDeserialization;
-(id)_descriptionHint;
-(void)_appendDescriptionOfObject:(id)arg1 toString:(id)arg2 atDepth:(unsigned long long)arg3 withPrefixes:(id)arg4 hint:(id)arg5 ;
-(id)propertyForKeyWithoutDeserializing:(id)arg1 ;
-(BOOL)hasArrayForPropertyForKey:(id)arg1 ;
-(id)deserializationDuration;
-(void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3 ;
-(NSNumber *)usefulnessScore;
-(void)setUsefulnessScore:(NSNumber *)arg1 ;
-(BOOL)mutatingCommand;
-(void)setMutatingCommand:(BOOL)arg1 ;
-(NSData *)plistData;
-(id)initWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)aceId;
@end

