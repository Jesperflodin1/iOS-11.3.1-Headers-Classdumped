/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:34 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOLatLng;

@interface GEORoadAccessPoint : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	int _drivingDirection;
	GEOLatLng* _location;
	int _walkingDirection;
	BOOL _isApproximate;
	SCD_Struct_GE22 _has;

}

@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain) GEOLatLng * location;                           //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) BOOL hasIsApproximate; 
@property (assign,nonatomic) BOOL isApproximate;                             //@synthesize isApproximate=_isApproximate - In the implementation block
@property (assign,nonatomic) BOOL hasWalkingDirection; 
@property (assign,nonatomic) int walkingDirection;                           //@synthesize walkingDirection=_walkingDirection - In the implementation block
@property (assign,nonatomic) BOOL hasDrivingDirection; 
@property (assign,nonatomic) int drivingDirection;                           //@synthesize drivingDirection=_drivingDirection - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasLocation;
-(int)drivingDirection;
-(void)setWalkingDirection:(int)arg1 ;
-(void)setDrivingDirection:(int)arg1 ;
-(void)setIsApproximate:(BOOL)arg1 ;
-(void)setHasIsApproximate:(BOOL)arg1 ;
-(BOOL)hasIsApproximate;
-(int)walkingDirection;
-(void)setHasWalkingDirection:(BOOL)arg1 ;
-(BOOL)hasWalkingDirection;
-(id)walkingDirectionAsString:(int)arg1 ;
-(int)StringAsWalkingDirection:(id)arg1 ;
-(void)setHasDrivingDirection:(BOOL)arg1 ;
-(BOOL)hasDrivingDirection;
-(id)drivingDirectionAsString:(int)arg1 ;
-(int)StringAsDrivingDirection:(id)arg1 ;
-(BOOL)isApproximate;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(GEOLatLng *)location;
-(void)setLocation:(GEOLatLng *)arg1 ;
@end
