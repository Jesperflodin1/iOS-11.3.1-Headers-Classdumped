/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:37 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, _INPBString, _INPBIntentMetadata, NSMutableArray;

@interface _INPBOpenFileIntent : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	_INPBString* _appId;
	_INPBString* _entityName;
	int _entityType;
	_INPBIntentMetadata* _intentMetadata;
	NSMutableArray* _properties;
	int _scope;
	_INPBString* _scopeEntityName;
	SCD_Struct_IN4 _has;

}

@property (nonatomic,readonly) BOOL hasIntentMetadata; 
@property (nonatomic,retain) _INPBIntentMetadata * intentMetadata;              //@synthesize intentMetadata=_intentMetadata - In the implementation block
@property (assign,nonatomic) BOOL hasEntityType; 
@property (assign,nonatomic) int entityType;                                    //@synthesize entityType=_entityType - In the implementation block
@property (nonatomic,readonly) BOOL hasEntityName; 
@property (nonatomic,retain) _INPBString * entityName;                          //@synthesize entityName=_entityName - In the implementation block
@property (nonatomic,readonly) BOOL hasAppId; 
@property (nonatomic,retain) _INPBString * appId;                               //@synthesize appId=_appId - In the implementation block
@property (nonatomic,retain) NSMutableArray * properties;                       //@synthesize properties=_properties - In the implementation block
@property (assign,nonatomic) BOOL hasScope; 
@property (assign,nonatomic) int scope;                                         //@synthesize scope=_scope - In the implementation block
@property (nonatomic,readonly) BOOL hasScopeEntityName; 
@property (nonatomic,retain) _INPBString * scopeEntityName;                     //@synthesize scopeEntityName=_scopeEntityName - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)options;
+(Class)propertiesType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setAppId:(_INPBString *)arg1 ;
-(BOOL)hasAppId;
-(_INPBString *)appId;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setScope:(int)arg1 ;
-(int)scope;
-(id)dictionaryRepresentation;
-(void)setProperties:(NSMutableArray *)arg1 ;
-(NSMutableArray *)properties;
-(void)setIntentMetadata:(_INPBIntentMetadata *)arg1 ;
-(BOOL)hasIntentMetadata;
-(_INPBIntentMetadata *)intentMetadata;
-(id)entityTypeAsString:(int)arg1 ;
-(int)StringAsEntityType:(id)arg1 ;
-(void)setScopeEntityName:(_INPBString *)arg1 ;
-(BOOL)hasEntityName;
-(void)setHasScope:(BOOL)arg1 ;
-(BOOL)hasScope;
-(id)scopeAsString:(int)arg1 ;
-(int)StringAsScope:(id)arg1 ;
-(BOOL)hasScopeEntityName;
-(_INPBString *)scopeEntityName;
-(unsigned long long)propertiesCount;
-(id)propertiesAtIndex:(unsigned long long)arg1 ;
-(_INPBString *)entityName;
-(void)setEntityName:(_INPBString *)arg1 ;
-(int)entityType;
-(void)setEntityType:(int)arg1 ;
-(void)setHasEntityType:(BOOL)arg1 ;
-(BOOL)hasEntityType;
-(void)addProperties:(id)arg1 ;
-(void)clearProperties;
@end

