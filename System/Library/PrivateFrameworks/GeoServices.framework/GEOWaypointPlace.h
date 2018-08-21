/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:24 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOLatLng, NSMutableArray;

@interface GEOWaypointPlace : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOLatLng* _center;
	NSMutableArray* _roadAccessPoints;

}

@property (nonatomic,readonly) BOOL hasCenter; 
@property (nonatomic,retain) GEOLatLng * center;                             //@synthesize center=_center - In the implementation block
@property (nonatomic,retain) NSMutableArray * roadAccessPoints;              //@synthesize roadAccessPoints=_roadAccessPoints - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)roadAccessPointType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasCenter;
-(void)clearRoadAccessPoints;
-(void)addRoadAccessPoint:(id)arg1 ;
-(unsigned long long)roadAccessPointsCount;
-(id)roadAccessPointAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)roadAccessPoints;
-(void)setRoadAccessPoints:(NSMutableArray *)arg1 ;
-(GEOLatLng *)center;
-(void)setCenter:(GEOLatLng *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end
