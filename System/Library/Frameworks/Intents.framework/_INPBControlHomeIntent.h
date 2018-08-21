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

@class PBUnknownFields, _INPBHomeAttribute, NSMutableArray, _INPBIntentMetadata;

@interface _INPBControlHomeIntent : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	_INPBHomeAttribute* _attribute;
	NSMutableArray* _entities;
	_INPBIntentMetadata* _intentMetadata;

}

@property (nonatomic,readonly) BOOL hasIntentMetadata; 
@property (nonatomic,retain) _INPBIntentMetadata * intentMetadata;              //@synthesize intentMetadata=_intentMetadata - In the implementation block
@property (nonatomic,retain) NSMutableArray * entities;                         //@synthesize entities=_entities - In the implementation block
@property (nonatomic,readonly) BOOL hasAttribute; 
@property (nonatomic,retain) _INPBHomeAttribute * attribute;                    //@synthesize attribute=_attribute - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)options;
+(Class)entitiesType;
-(void)setEntities:(NSMutableArray *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setIntentMetadata:(_INPBIntentMetadata *)arg1 ;
-(BOOL)hasIntentMetadata;
-(_INPBIntentMetadata *)intentMetadata;
-(void)addEntities:(id)arg1 ;
-(void)clearEntities;
-(unsigned long long)entitiesCount;
-(id)entitiesAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasAttribute;
-(void)setAttribute:(_INPBHomeAttribute *)arg1 ;
-(NSMutableArray *)entities;
-(_INPBHomeAttribute *)attribute;
@end

