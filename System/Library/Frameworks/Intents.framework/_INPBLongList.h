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

@interface _INPBLongList : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	_INPBCondition* _conditionType;
	NSMutableArray* _dataStrings;

}

@property (nonatomic,retain) NSMutableArray * dataStrings;                   //@synthesize dataStrings=_dataStrings - In the implementation block
@property (nonatomic,readonly) BOOL hasConditionType; 
@property (nonatomic,retain) _INPBCondition * conditionType;                 //@synthesize conditionType=_conditionType - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)options;
+(Class)dataStringType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)addDataString:(id)arg1 ;
-(void)clearDataStrings;
-(unsigned long long)dataStringsCount;
-(id)dataStringAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasConditionType;
-(NSMutableArray *)dataStrings;
-(void)setDataStrings:(NSMutableArray *)arg1 ;
-(_INPBCondition *)conditionType;
-(void)setConditionType:(_INPBCondition *)arg1 ;
@end

