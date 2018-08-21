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

@class PBUnknownFields;

@interface GEOTileSetVersion : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOTileSetRegion* _availableTiles;
	unsigned long long _availableTilesCount;
	unsigned long long _availableTilesSpace;
	GEOGenericTile* _genericTiles;
	unsigned long long _genericTilesCount;
	unsigned long long _genericTilesSpace;
	unsigned _identifier;
	unsigned _supportedLanguagesVersion;
	unsigned _timeToLiveSeconds;
	SCD_Struct_GE21 _has;

}

@property (assign,nonatomic) unsigned identifier;                                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned long long availableTilesCount; 
@property (nonatomic,readonly) GEOTileSetRegion* availableTiles; 
@property (assign,nonatomic) BOOL hasTimeToLiveSeconds; 
@property (assign,nonatomic) unsigned timeToLiveSeconds;                            //@synthesize timeToLiveSeconds=_timeToLiveSeconds - In the implementation block
@property (nonatomic,readonly) unsigned long long genericTilesCount; 
@property (nonatomic,readonly) GEOGenericTile* genericTiles; 
@property (assign,nonatomic) BOOL hasSupportedLanguagesVersion; 
@property (assign,nonatomic) unsigned supportedLanguagesVersion;                    //@synthesize supportedLanguagesVersion=_supportedLanguagesVersion - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(unsigned long long)availableTilesCount;
-(GEOTileSetRegion*)availableTiles;
-(void)clearAvailableTiles;
-(void)addAvailableTiles:(GEOTileSetRegion)arg1 ;
-(GEOTileSetRegion)availableTilesAtIndex:(unsigned long long)arg1 ;
-(void)setAvailableTiles:(GEOTileSetRegion*)arg1 count:(unsigned long long)arg2 ;
-(void)setTimeToLiveSeconds:(unsigned)arg1 ;
-(void)setHasTimeToLiveSeconds:(BOOL)arg1 ;
-(BOOL)hasTimeToLiveSeconds;
-(unsigned long long)genericTilesCount;
-(GEOGenericTile*)genericTiles;
-(void)clearGenericTiles;
-(void)addGenericTile:(GEOGenericTile)arg1 ;
-(GEOGenericTile)genericTileAtIndex:(unsigned long long)arg1 ;
-(void)setGenericTiles:(GEOGenericTile*)arg1 count:(unsigned long long)arg2 ;
-(void)setSupportedLanguagesVersion:(unsigned)arg1 ;
-(void)setHasSupportedLanguagesVersion:(BOOL)arg1 ;
-(BOOL)hasSupportedLanguagesVersion;
-(unsigned)timeToLiveSeconds;
-(unsigned)supportedLanguagesVersion;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned)identifier;
-(void)setIdentifier:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

