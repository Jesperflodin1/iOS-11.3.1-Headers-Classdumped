/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:40 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, _INPBCondition, NSMutableArray;

@interface _INPBDistanceList : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	_INPBCondition* _condition;
	NSMutableArray* _distances;

}

@property (nonatomic,retain) NSMutableArray * distances;                     //@synthesize distances=_distances - In the implementation block
@property (nonatomic,readonly) BOOL hasCondition; 
@property (nonatomic,retain) _INPBCondition * condition;                     //@synthesize condition=_condition - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)options;
+(Class)distanceType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(_INPBCondition *)condition;
-(void)setCondition:(_INPBCondition *)arg1 ;
-(BOOL)hasCondition;
-(void)addDistance:(id)arg1 ;
-(void)clearDistances;
-(unsigned long long)distancesCount;
-(id)distanceAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)distances;
-(void)setDistances:(NSMutableArray *)arg1 ;
@end

