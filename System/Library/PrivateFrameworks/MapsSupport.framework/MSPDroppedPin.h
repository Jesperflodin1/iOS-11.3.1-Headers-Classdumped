/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:54 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOLatLng, GEOMapRegion;

@interface MSPDroppedPin : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	double _timestamp;
	int _floorOrdinal;
	GEOLatLng* _latLng;
	GEOMapRegion* _mapRegion;
	SCD_Struct_MS2 _has;

}

@property (nonatomic,readonly) BOOL hasLatLng; 
@property (nonatomic,retain) GEOLatLng * latLng;                             //@synthesize latLng=_latLng - In the implementation block
@property (nonatomic,readonly) BOOL hasMapRegion; 
@property (nonatomic,retain) GEOMapRegion * mapRegion;                       //@synthesize mapRegion=_mapRegion - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp;                               //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasFloorOrdinal; 
@property (assign,nonatomic) int floorOrdinal;                               //@synthesize floorOrdinal=_floorOrdinal - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(GEOLatLng *)latLng;
-(BOOL)hasMapRegion;
-(GEOMapRegion *)mapRegion;
-(void)setMapRegion:(GEOMapRegion *)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setLatLng:(GEOLatLng *)arg1 ;
-(BOOL)hasLatLng;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setFloorOrdinal:(int)arg1 ;
-(void)setHasFloorOrdinal:(BOOL)arg1 ;
-(BOOL)hasFloorOrdinal;
-(int)floorOrdinal;
@end
