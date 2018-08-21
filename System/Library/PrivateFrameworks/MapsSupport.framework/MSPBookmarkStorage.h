/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:55 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString, MSPPlaceBookmark, MSPRegionBookmark, MSPRouteBookmark, MSPTransitLineBookmark;

@interface MSPBookmarkStorage : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	double _position;
	double _timestamp;
	NSString* _identifier;
	MSPPlaceBookmark* _placeBookmark;
	MSPRegionBookmark* _regionBookmark;
	MSPRouteBookmark* _routeBookmark;
	MSPTransitLineBookmark* _transitLineBookmark;
	int _type;
	SCD_Struct_MS4 _has;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                                  //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                                     //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL hasPosition; 
@property (assign,nonatomic) double position;                                           //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp;                                          //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaceBookmark; 
@property (nonatomic,retain) MSPPlaceBookmark * placeBookmark;                          //@synthesize placeBookmark=_placeBookmark - In the implementation block
@property (nonatomic,readonly) BOOL hasRouteBookmark; 
@property (nonatomic,retain) MSPRouteBookmark * routeBookmark;                          //@synthesize routeBookmark=_routeBookmark - In the implementation block
@property (nonatomic,readonly) BOOL hasRegionBookmark; 
@property (nonatomic,retain) MSPRegionBookmark * regionBookmark;                        //@synthesize regionBookmark=_regionBookmark - In the implementation block
@property (nonatomic,readonly) BOOL hasTransitLineBookmark; 
@property (nonatomic,retain) MSPTransitLineBookmark * transitLineBookmark;              //@synthesize transitLineBookmark=_transitLineBookmark - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)hasPosition;
-(BOOL)hasIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)timestamp;
-(NSString *)identifier;
-(void)setType:(int)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(int)type;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPosition:(double)arg1 ;
-(double)position;
-(id)dictionaryRepresentation;
-(void)setHasPosition:(BOOL)arg1 ;
-(MSPTransitLineBookmark *)transitLineBookmark;
-(BOOL)hasPlaceBookmark;
-(BOOL)hasRouteBookmark;
-(BOOL)hasRegionBookmark;
-(BOOL)hasTransitLineBookmark;
-(MSPPlaceBookmark *)placeBookmark;
-(void)setPlaceBookmark:(MSPPlaceBookmark *)arg1 ;
-(MSPRouteBookmark *)routeBookmark;
-(void)setRouteBookmark:(MSPRouteBookmark *)arg1 ;
-(MSPRegionBookmark *)regionBookmark;
-(void)setRegionBookmark:(MSPRegionBookmark *)arg1 ;
-(void)setTransitLineBookmark:(MSPTransitLineBookmark *)arg1 ;
@end

