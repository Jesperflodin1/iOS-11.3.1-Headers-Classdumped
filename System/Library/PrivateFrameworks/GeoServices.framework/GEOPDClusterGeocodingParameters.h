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

@class PBUnknownFields, NSMutableArray;

@interface GEOPDClusterGeocodingParameters : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _assetLocations;

}

@property (nonatomic,retain) NSMutableArray * assetLocations;                //@synthesize assetLocations=_assetLocations - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)assetLocationType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(NSMutableArray *)assetLocations;
-(void)clearAssetLocations;
-(void)addAssetLocation:(id)arg1 ;
-(unsigned long long)assetLocationsCount;
-(id)assetLocationAtIndex:(unsigned long long)arg1 ;
-(void)setAssetLocations:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

