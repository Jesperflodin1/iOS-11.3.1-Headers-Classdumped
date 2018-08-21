/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:31 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOLatLng;

@interface GEOPDSearchZeroKeywordCategorySuggestionParameters : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	double _requestLocalTimestamp;
	unsigned _maxNumCategoriesPerEntry;
	GEOLatLng* _significantLocation;
	int _userPreferredTransportType;
	SCD_Struct_GE22 _has;

}

@property (assign,nonatomic) BOOL hasRequestLocalTimestamp; 
@property (assign,nonatomic) double requestLocalTimestamp;                    //@synthesize requestLocalTimestamp=_requestLocalTimestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasSignificantLocation; 
@property (nonatomic,retain) GEOLatLng * significantLocation;                 //@synthesize significantLocation=_significantLocation - In the implementation block
@property (assign,nonatomic) BOOL hasMaxNumCategoriesPerEntry; 
@property (assign,nonatomic) unsigned maxNumCategoriesPerEntry;               //@synthesize maxNumCategoriesPerEntry=_maxNumCategoriesPerEntry - In the implementation block
@property (assign,nonatomic) BOOL hasUserPreferredTransportType; 
@property (assign,nonatomic) int userPreferredTransportType;                  //@synthesize userPreferredTransportType=_userPreferredTransportType - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setRequestLocalTimestamp:(double)arg1 ;
-(void)setHasRequestLocalTimestamp:(BOOL)arg1 ;
-(BOOL)hasRequestLocalTimestamp;
-(double)requestLocalTimestamp;
-(GEOLatLng *)significantLocation;
-(BOOL)hasSignificantLocation;
-(unsigned)maxNumCategoriesPerEntry;
-(void)setMaxNumCategoriesPerEntry:(unsigned)arg1 ;
-(void)setHasMaxNumCategoriesPerEntry:(BOOL)arg1 ;
-(BOOL)hasMaxNumCategoriesPerEntry;
-(int)userPreferredTransportType;
-(void)setUserPreferredTransportType:(int)arg1 ;
-(void)setHasUserPreferredTransportType:(BOOL)arg1 ;
-(BOOL)hasUserPreferredTransportType;
-(id)userPreferredTransportTypeAsString:(int)arg1 ;
-(int)StringAsUserPreferredTransportType:(id)arg1 ;
-(void)setSignificantLocation:(GEOLatLng *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

