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

@class PBUnknownFields, NSMutableArray;

@interface _INPBPaymentMethod : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _values;

}

@property (nonatomic,retain) NSMutableArray * values;                        //@synthesize values=_values - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)valueType;
+(id)options;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(unsigned long long)valuesCount;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSMutableArray *)values;
-(void)setValues:(NSMutableArray *)arg1 ;
-(id)dictionaryRepresentation;
-(void)addValue:(id)arg1 ;
-(void)clearValues;
-(id)valueAtIndex:(unsigned long long)arg1 ;
@end

