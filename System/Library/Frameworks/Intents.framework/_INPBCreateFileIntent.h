/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:38 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, _INPBString, _INPBIntentMetadata;

@interface _INPBCreateFileIntent : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	_INPBString* _destinationName;
	int _destinationType;
	_INPBString* _entityName;
	int _entityType;
	_INPBIntentMetadata* _intentMetadata;
	SCD_Struct_IN4 _has;

}

@property (nonatomic,readonly) BOOL hasIntentMetadata; 
@property (nonatomic,retain) _INPBIntentMetadata * intentMetadata;              //@synthesize intentMetadata=_intentMetadata - In the implementation block
@property (assign,nonatomic) BOOL hasEntityType; 
@property (assign,nonatomic) int entityType;                                    //@synthesize entityType=_entityType - In the implementation block
@property (nonatomic,readonly) BOOL hasEntityName; 
@property (nonatomic,retain) _INPBString * entityName;                          //@synthesize entityName=_entityName - In the implementation block
@property (assign,nonatomic) BOOL hasDestinationType; 
@property (assign,nonatomic) int destinationType;                               //@synthesize destinationType=_destinationType - In the implementation block
@property (nonatomic,readonly) BOOL hasDestinationName; 
@property (nonatomic,retain) _INPBString * destinationName;                     //@synthesize destinationName=_destinationName - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)options;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setDestinationType:(int)arg1 ;
-(void)setDestinationName:(_INPBString *)arg1 ;
-(BOOL)hasDestinationName;
-(_INPBString *)destinationName;
-(int)destinationType;
-(void)setHasDestinationType:(BOOL)arg1 ;
-(BOOL)hasDestinationType;
-(id)destinationTypeAsString:(int)arg1 ;
-(int)StringAsDestinationType:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setIntentMetadata:(_INPBIntentMetadata *)arg1 ;
-(BOOL)hasIntentMetadata;
-(_INPBIntentMetadata *)intentMetadata;
-(id)entityTypeAsString:(int)arg1 ;
-(int)StringAsEntityType:(id)arg1 ;
-(BOOL)hasEntityName;
-(_INPBString *)entityName;
-(void)setEntityName:(_INPBString *)arg1 ;
-(int)entityType;
-(void)setEntityType:(int)arg1 ;
-(void)setHasEntityType:(BOOL)arg1 ;
-(BOOL)hasEntityType;
@end

