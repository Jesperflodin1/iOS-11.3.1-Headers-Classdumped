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

@class PBUnknownFields;

@interface _INPBLocalDate : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	long long _dayOfMonth;
	long long _month;
	long long _year;
	int _dayOfWeek;
	SCD_Struct_IN8 _has;

}

@property (assign,nonatomic) BOOL hasYear; 
@property (assign,nonatomic) long long year;                                 //@synthesize year=_year - In the implementation block
@property (assign,nonatomic) BOOL hasMonth; 
@property (assign,nonatomic) long long month;                                //@synthesize month=_month - In the implementation block
@property (assign,nonatomic) BOOL hasDayOfMonth; 
@property (assign,nonatomic) long long dayOfMonth;                           //@synthesize dayOfMonth=_dayOfMonth - In the implementation block
@property (assign,nonatomic) BOOL hasDayOfWeek; 
@property (assign,nonatomic) int dayOfWeek;                                  //@synthesize dayOfWeek=_dayOfWeek - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)options;
-(long long)dayOfMonth;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setDayOfWeek:(int)arg1 ;
-(void)setHasDayOfWeek:(BOOL)arg1 ;
-(BOOL)hasDayOfWeek;
-(int)dayOfWeek;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(long long)year;
-(long long)month;
-(void)setYear:(long long)arg1 ;
-(void)setMonth:(long long)arg1 ;
-(BOOL)hasDayOfMonth;
-(void)setDayOfMonth:(long long)arg1 ;
-(void)setHasDayOfMonth:(BOOL)arg1 ;
-(id)dayOfWeekAsString:(int)arg1 ;
-(int)StringAsDayOfWeek:(id)arg1 ;
-(void)setHasYear:(BOOL)arg1 ;
-(BOOL)hasYear;
-(void)setHasMonth:(BOOL)arg1 ;
-(BOOL)hasMonth;
@end

