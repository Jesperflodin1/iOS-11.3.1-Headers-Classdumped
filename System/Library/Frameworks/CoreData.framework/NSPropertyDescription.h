/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:07 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, NSEntityDescription, NSArray, NSMutableDictionary, NSDictionary;

@interface NSPropertyDescription : NSObject <NSSecureCoding, NSCoding, NSCopying> {

	NSString* _versionHashModifier;
	NSData* _versionHash;
	NSEntityDescription* _entity;
	NSString* _name;
	NSArray* _validationPredicates;
	NSArray* _validationWarnings;
	void* _extraIvars;
	NSMutableDictionary* _userInfo;
	struct {
		unsigned _isReadOnly : 1;
		unsigned _isTransient : 1;
		unsigned _isOptional : 1;
		unsigned _isIndexed : 1;
		unsigned _skipValidation : 1;
		unsigned _isIndexedBySpotlight : 1;
		unsigned _isStoredInExternalRecord : 1;
		unsigned _extraIvarsAreInDataBlob : 1;
		unsigned _isOrdered : 1;
		unsigned _hasMaxValueInExtraIvars : 1;
		unsigned _hasMinValueInExtraIvars : 1;
		unsigned _storeBinaryDataExternally : 1;
		unsigned _preserveValueOnDelete : 1;
		unsigned _reservedAttributeFlagOne : 1;
		unsigned _reservedPropertyDescription : 2;
	}  _propertyDescriptionFlags;
	short _entitysReferenceIDForProperty;

}

@property (nonatomic,readonly) NSEntityDescription * entity; 
@property (nonatomic,copy) NSString * name; 
@property (getter=isOptional) BOOL optional; 
@property (getter=isTransient) BOOL transient; 
@property (readonly) NSArray * validationPredicates; 
@property (readonly) NSArray * validationWarnings; 
@property (nonatomic,retain) NSDictionary * userInfo; 
@property (getter=isIndexed) BOOL indexed; 
@property (copy,readonly) NSData * versionHash; 
@property (copy) NSString * versionHashModifier; 
@property (getter=isIndexedBySpotlight) BOOL indexedBySpotlight; 
@property (getter=isStoredInExternalRecord) BOOL storedInExternalRecord; 
@property (copy) NSString * renamingIdentifier; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
-(unsigned long long)_propertyType;
-(BOOL)_isRelationship;
-(long long)_entitysReferenceID;
-(NSString *)renamingIdentifier;
-(id)_underlyingProperty;
-(BOOL)isIndexed;
-(BOOL)_storeBinaryDataExternally;
-(NSExtraPropertyIVars*)_extraIVars;
-(void)setIndexed:(BOOL)arg1 ;
-(void)_throwIfNotEditable;
-(BOOL)_hasMinValueInExtraIvars;
-(BOOL)_hasMaxValueInExtraIvars;
-(NSArray *)validationPredicates;
-(NSArray *)validationWarnings;
-(BOOL)_preserveValueOnDelete;
-(BOOL)_isTriggerBacked;
-(id)_rawValidationPredicates;
-(id)_rawValidationWarnings;
-(BOOL)_comparePredicatesAndWarnings:(id)arg1 ;
-(void)_createCachesAndOptimizeState;
-(void)_replaceValidationPredicates:(id)arg1 andWarnings:(id)arg2 ;
-(BOOL)_nonPredicateValidateValue:(id*)arg1 forKey:(id)arg2 inObject:(id)arg3 error:(id*)arg4 ;
-(void)_versionHash:(char*)arg1 inStyle:(unsigned long long)arg2 ;
-(void)_appendPropertyFieldsToData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 entitiesSlots:(id)arg6 ;
-(BOOL)_epsilonEquals:(id)arg1 rhs:(id)arg2 withFlags:(int)arg3 ;
-(void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 entitiesSlots:(id)arg6 fetchRequests:(id)arg7 ;
-(BOOL)isIndexedBySpotlight;
-(NSString *)versionHashModifier;
-(void)_setEntity:(id)arg1 ;
-(void)setRenamingIdentifier:(NSString *)arg1 ;
-(void)setVersionHashModifier:(NSString *)arg1 ;
-(void)_setEntityAndMaintainIndices:(id)arg1 ;
-(void)setElementID:(id)arg1 ;
-(BOOL)isStoredInExternalRecord;
-(void)_setEntitysReferenceID:(long long)arg1 ;
-(void)_stripForMigration;
-(void)_restoreValidation;
-(BOOL)_skipValidation;
-(BOOL)_isToManyRelationship;
-(BOOL)_isOrdered;
-(void)_initializeExtraIVars;
-(void)setValidationPredicates:(id)arg1 withValidationWarnings:(id)arg2 ;
-(void)setIndexedBySpotlight:(BOOL)arg1 ;
-(void)setStoredInExternalRecord:(BOOL)arg1 ;
-(void)_setOrdered:(BOOL)arg1 ;
-(BOOL)isSpotlightIndexed;
-(void)setSpotlightIndexed:(BOOL)arg1 ;
-(BOOL)isStoredInTruthFile;
-(void)setStoredInTruthFile:(BOOL)arg1 ;
-(BOOL)isStoredInTruth;
-(void)setStoredInTruth:(BOOL)arg1 ;
-(NSEntityDescription *)entity;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSDictionary *)userInfo;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(BOOL)isTransient;
-(id)_initWithName:(id)arg1 ;
-(NSData *)versionHash;
-(void)setTransient:(BOOL)arg1 ;
-(void)setOptional:(BOOL)arg1 ;
-(id)elementID;
-(BOOL)isOptional;
-(BOOL)isReadOnly;
-(void)setReadOnly:(BOOL)arg1 ;
-(BOOL)_isEditable;
@end

