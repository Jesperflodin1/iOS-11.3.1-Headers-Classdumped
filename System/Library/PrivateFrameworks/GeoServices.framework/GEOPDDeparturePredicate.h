/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:32 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOPDDeparturePredicate : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOPDTimeRange _timeRange;
	unsigned _numAdditionalDepartures;
	SCD_Struct_GE21 _has;

}

@property (assign,nonatomic) BOOL hasTimeRange; 
@property (assign,nonatomic) GEOPDTimeRange timeRange;                       //@synthesize timeRange=_timeRange - In the implementation block
@property (assign,nonatomic) BOOL hasNumAdditionalDepartures; 
@property (assign,nonatomic) unsigned numAdditionalDepartures;               //@synthesize numAdditionalDepartures=_numAdditionalDepartures - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(GEOPDTimeRange)timeRange;
-(BOOL)hasTimeRange;
-(void)setTimeRange:(GEOPDTimeRange)arg1 ;
-(BOOL)hasNumAdditionalDepartures;
-(void)setNumAdditionalDepartures:(unsigned)arg1 ;
-(void)setHasTimeRange:(BOOL)arg1 ;
-(void)setHasNumAdditionalDepartures:(BOOL)arg1 ;
-(unsigned)numAdditionalDepartures;
-(id)initWithTraitsTransitModeFilter:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end
