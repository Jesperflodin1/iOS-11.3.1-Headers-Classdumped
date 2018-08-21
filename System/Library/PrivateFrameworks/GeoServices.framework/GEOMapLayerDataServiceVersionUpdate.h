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

@class GEOMapLayerDataServiceLayerIndex, GEOMapLayerDataServiceLayer, GEOMapLayerDataServiceVersion;

@interface GEOMapLayerDataServiceVersionUpdate : PBCodable <NSCopying> {

	GEOMapLayerDataServiceLayerIndex* _index;
	GEOMapLayerDataServiceLayer* _layer;
	GEOMapLayerDataServiceVersion* _sourceVersion;
	GEOMapLayerDataServiceVersion* _targetVersion;

}

@property (nonatomic,readonly) BOOL hasLayer; 
@property (nonatomic,retain) GEOMapLayerDataServiceLayer * layer;                        //@synthesize layer=_layer - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceVersion; 
@property (nonatomic,retain) GEOMapLayerDataServiceVersion * sourceVersion;              //@synthesize sourceVersion=_sourceVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasTargetVersion; 
@property (nonatomic,retain) GEOMapLayerDataServiceVersion * targetVersion;              //@synthesize targetVersion=_targetVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasIndex; 
@property (nonatomic,retain) GEOMapLayerDataServiceLayerIndex * index;                   //@synthesize index=_index - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasLayer;
-(BOOL)hasIndex;
-(BOOL)hasSourceVersion;
-(BOOL)hasTargetVersion;
-(GEOMapLayerDataServiceVersion *)sourceVersion;
-(void)setSourceVersion:(GEOMapLayerDataServiceVersion *)arg1 ;
-(GEOMapLayerDataServiceVersion *)targetVersion;
-(void)setTargetVersion:(GEOMapLayerDataServiceVersion *)arg1 ;
-(GEOMapLayerDataServiceLayer *)layer;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLayer:(GEOMapLayerDataServiceLayer *)arg1 ;
-(void)setIndex:(GEOMapLayerDataServiceLayerIndex *)arg1 ;
-(GEOMapLayerDataServiceLayerIndex *)index;
-(id)dictionaryRepresentation;
@end

