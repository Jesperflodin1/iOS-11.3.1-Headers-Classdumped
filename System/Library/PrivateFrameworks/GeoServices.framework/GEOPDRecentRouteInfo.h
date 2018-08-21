/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:27 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSData;

@interface GEOPDRecentRouteInfo : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSData* _routeId;
	NSData* _sessionState;
	NSData* _zilchPoints;

}

@property (nonatomic,readonly) BOOL hasZilchPoints; 
@property (nonatomic,retain) NSData * zilchPoints;                           //@synthesize zilchPoints=_zilchPoints - In the implementation block
@property (nonatomic,readonly) BOOL hasSessionState; 
@property (nonatomic,retain) NSData * sessionState;                          //@synthesize sessionState=_sessionState - In the implementation block
@property (nonatomic,readonly) BOOL hasRouteId; 
@property (nonatomic,retain) NSData * routeId;                               //@synthesize routeId=_routeId - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasZilchPoints;
-(NSData *)zilchPoints;
-(void)setZilchPoints:(NSData *)arg1 ;
-(BOOL)hasSessionState;
-(BOOL)hasRouteId;
-(NSData *)routeId;
-(void)setRouteId:(NSData *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSData *)sessionState;
-(void)setSessionState:(NSData *)arg1 ;
@end

