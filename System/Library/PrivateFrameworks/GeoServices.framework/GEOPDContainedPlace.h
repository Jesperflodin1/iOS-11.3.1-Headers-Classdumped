/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:33 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray, GEOPDLinkedPlace;

@interface GEOPDContainedPlace : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned long long _featureId;
	NSMutableArray* _childPlaces;
	GEOPDLinkedPlace* _parentPlace;
	NSMutableArray* _siblingPlaces;
	SCD_Struct_GE1 _has;

}

@property (nonatomic,readonly) BOOL hasParentPlace; 
@property (nonatomic,retain) GEOPDLinkedPlace * parentPlace;                 //@synthesize parentPlace=_parentPlace - In the implementation block
@property (nonatomic,retain) NSMutableArray * childPlaces;                   //@synthesize childPlaces=_childPlaces - In the implementation block
@property (assign,nonatomic) BOOL hasFeatureId; 
@property (assign,nonatomic) unsigned long long featureId;                   //@synthesize featureId=_featureId - In the implementation block
@property (nonatomic,retain) NSMutableArray * siblingPlaces;                 //@synthesize siblingPlaces=_siblingPlaces - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)childPlaceType;
+(Class)siblingPlaceType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setFeatureId:(unsigned long long)arg1 ;
-(void)setHasFeatureId:(BOOL)arg1 ;
-(BOOL)hasFeatureId;
-(unsigned long long)featureId;
-(void)clearChildPlaces;
-(void)addChildPlace:(id)arg1 ;
-(unsigned long long)childPlacesCount;
-(id)childPlaceAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)childPlaces;
-(void)setChildPlaces:(NSMutableArray *)arg1 ;
-(GEOPDLinkedPlace *)parentPlace;
-(NSMutableArray *)siblingPlaces;
-(unsigned long long)siblingPlacesCount;
-(BOOL)hasParentPlace;
-(void)clearSiblingPlaces;
-(void)addSiblingPlace:(id)arg1 ;
-(id)siblingPlaceAtIndex:(unsigned long long)arg1 ;
-(void)setParentPlace:(GEOPDLinkedPlace *)arg1 ;
-(void)setSiblingPlaces:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

