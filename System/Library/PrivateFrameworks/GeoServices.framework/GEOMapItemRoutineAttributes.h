/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:26 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString, NSUUID;

@interface GEOMapItemRoutineAttributes : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	double _eventDate;
	NSString* _eventName;
	NSString* _loiIdentifierString;
	int _loiType;
	BOOL _isEventAllDay;
	SCD_Struct_GE22 _has;

}

@property (nonatomic,retain) NSUUID * loiIdentifier; 
@property (assign,nonatomic) BOOL hasLoiType; 
@property (assign,nonatomic) int loiType;                                    //@synthesize loiType=_loiType - In the implementation block
@property (nonatomic,readonly) BOOL hasEventName; 
@property (nonatomic,retain) NSString * eventName;                           //@synthesize eventName=_eventName - In the implementation block
@property (assign,nonatomic) BOOL hasEventDate; 
@property (assign,nonatomic) double eventDate;                               //@synthesize eventDate=_eventDate - In the implementation block
@property (assign,nonatomic) BOOL hasIsEventAllDay; 
@property (assign,nonatomic) BOOL isEventAllDay;                             //@synthesize isEventAllDay=_isEventAllDay - In the implementation block
@property (nonatomic,readonly) BOOL hasLoiIdentifierString; 
@property (nonatomic,retain) NSString * loiIdentifierString;                 //@synthesize loiIdentifierString=_loiIdentifierString - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(int)loiType;
-(void)setLoiType:(int)arg1 ;
-(void)setHasLoiType:(BOOL)arg1 ;
-(BOOL)hasLoiType;
-(id)loiTypeAsString:(int)arg1 ;
-(int)StringAsLoiType:(id)arg1 ;
-(BOOL)hasEventName;
-(void)setEventDate:(double)arg1 ;
-(void)setHasEventDate:(BOOL)arg1 ;
-(BOOL)hasEventDate;
-(void)setIsEventAllDay:(BOOL)arg1 ;
-(void)setHasIsEventAllDay:(BOOL)arg1 ;
-(BOOL)hasIsEventAllDay;
-(BOOL)hasLoiIdentifierString;
-(NSString *)eventName;
-(void)setEventName:(NSString *)arg1 ;
-(double)eventDate;
-(BOOL)isEventAllDay;
-(NSString *)loiIdentifierString;
-(void)setLoiIdentifierString:(NSString *)arg1 ;
-(void)setLoiIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)loiIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end
