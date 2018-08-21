/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:41 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOMapItemStorage, GEOPDPlace, _INPBValueMetadata;

@interface _INPBLocationValue : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOMapItemStorage* _mapItemStorage;
	GEOPDPlace* _place;
	_INPBValueMetadata* _valueMetadata;

}

@property (nonatomic,readonly) BOOL hasValueMetadata; 
@property (nonatomic,retain) _INPBValueMetadata * valueMetadata;              //@synthesize valueMetadata=_valueMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasPlace; 
@property (nonatomic,retain) GEOPDPlace * place;                              //@synthesize place=_place - In the implementation block
@property (nonatomic,readonly) BOOL hasMapItemStorage; 
@property (nonatomic,retain) GEOMapItemStorage * mapItemStorage;              //@synthesize mapItemStorage=_mapItemStorage - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)options;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(GEOPDPlace *)place;
-(void)setPlace:(GEOPDPlace *)arg1 ;
-(BOOL)hasPlace;
-(BOOL)hasMapItemStorage;
-(GEOMapItemStorage *)mapItemStorage;
-(void)setMapItemStorage:(GEOMapItemStorage *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setValueMetadata:(_INPBValueMetadata *)arg1 ;
-(BOOL)hasValueMetadata;
-(_INPBValueMetadata *)valueMetadata;
@end
