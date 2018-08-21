/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:39 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray, _INPBInteger, _INPBString;

@interface _INPBSearchForFilesIntentResponse : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _entities;
	_INPBInteger* _numResults;
	_INPBString* _query;
	BOOL _success;
	SCD_Struct_IN1 _has;

}

@property (assign,nonatomic) BOOL hasSuccess; 
@property (assign,nonatomic) BOOL success;                                   //@synthesize success=_success - In the implementation block
@property (nonatomic,retain) NSMutableArray * entities;                      //@synthesize entities=_entities - In the implementation block
@property (nonatomic,readonly) BOOL hasNumResults; 
@property (nonatomic,retain) _INPBInteger * numResults;                      //@synthesize numResults=_numResults - In the implementation block
@property (nonatomic,readonly) BOOL hasQuery; 
@property (nonatomic,retain) _INPBString * query;                            //@synthesize query=_query - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)options;
+(Class)entitiesType;
-(void)setEntities:(NSMutableArray *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasQuery;
-(void)setQuery:(_INPBString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(_INPBString *)query;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)addEntities:(id)arg1 ;
-(void)clearEntities;
-(unsigned long long)entitiesCount;
-(id)entitiesAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasNumResults;
-(_INPBInteger *)numResults;
-(void)setNumResults:(_INPBInteger *)arg1 ;
-(NSMutableArray *)entities;
-(BOOL)success;
-(void)setSuccess:(BOOL)arg1 ;
-(void)setHasSuccess:(BOOL)arg1 ;
-(BOOL)hasSuccess;
@end

