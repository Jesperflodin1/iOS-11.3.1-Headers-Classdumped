/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:29 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOPDAutocompleteEntryClientResolved : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	int _resolvedItemType;
	SCD_Struct_GE1 _has;

}

@property (assign,nonatomic) BOOL hasResolvedItemType; 
@property (assign,nonatomic) int resolvedItemType;                           //@synthesize resolvedItemType=_resolvedItemType - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(int)resolvedItemType;
-(BOOL)hasResolvedItemType;
-(void)setResolvedItemType:(int)arg1 ;
-(void)setHasResolvedItemType:(BOOL)arg1 ;
-(id)resolvedItemTypeAsString:(int)arg1 ;
-(int)StringAsResolvedItemType:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end
