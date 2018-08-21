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

@class PBUnknownFields, NSString, NSMutableArray, GEOLatLng, NSData;

@interface GEOSuggestionEntry : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOHighlight* _textHighlights;
	unsigned long long _textHighlightsCount;
	unsigned long long _textHighlightsSpace;
	NSString* _calloutTitle;
	NSMutableArray* _displayLines;
	NSString* _iconID;
	GEOLatLng* _latlng;
	NSMutableArray* _namedFeatures;
	NSString* _searchQueryDisplayString;
	NSData* _suggestionEntryMetadata;

}

@property (nonatomic,retain) NSMutableArray * displayLines;                         //@synthesize displayLines=_displayLines - In the implementation block
@property (nonatomic,readonly) unsigned long long textHighlightsCount; 
@property (nonatomic,readonly) GEOHighlight* textHighlights; 
@property (nonatomic,readonly) BOOL hasIconID; 
@property (nonatomic,retain) NSString * iconID;                                     //@synthesize iconID=_iconID - In the implementation block
@property (nonatomic,readonly) BOOL hasLatlng; 
@property (nonatomic,retain) GEOLatLng * latlng;                                    //@synthesize latlng=_latlng - In the implementation block
@property (nonatomic,readonly) BOOL hasSuggestionEntryMetadata; 
@property (nonatomic,retain) NSData * suggestionEntryMetadata;                      //@synthesize suggestionEntryMetadata=_suggestionEntryMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasSearchQueryDisplayString; 
@property (nonatomic,retain) NSString * searchQueryDisplayString;                   //@synthesize searchQueryDisplayString=_searchQueryDisplayString - In the implementation block
@property (nonatomic,readonly) BOOL hasCalloutTitle; 
@property (nonatomic,retain) NSString * calloutTitle;                               //@synthesize calloutTitle=_calloutTitle - In the implementation block
@property (nonatomic,retain) NSMutableArray * namedFeatures;                        //@synthesize namedFeatures=_namedFeatures - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)namedFeatureType;
+(Class)displayLineType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(NSString *)calloutTitle;
-(NSMutableArray *)displayLines;
-(void)clearNamedFeatures;
-(void)addNamedFeature:(id)arg1 ;
-(unsigned long long)namedFeaturesCount;
-(id)namedFeatureAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)namedFeatures;
-(void)setNamedFeatures:(NSMutableArray *)arg1 ;
-(BOOL)hasSuggestionEntryMetadata;
-(NSData *)suggestionEntryMetadata;
-(void)setSuggestionEntryMetadata:(NSData *)arg1 ;
-(void)setLatlng:(GEOLatLng *)arg1 ;
-(GEOLatLng *)latlng;
-(void)clearDisplayLines;
-(void)addDisplayLine:(id)arg1 ;
-(unsigned long long)displayLinesCount;
-(id)displayLineAtIndex:(unsigned long long)arg1 ;
-(void)setDisplayLines:(NSMutableArray *)arg1 ;
-(unsigned long long)textHighlightsCount;
-(GEOHighlight*)textHighlights;
-(void)clearTextHighlights;
-(void)addTextHighlights:(GEOHighlight)arg1 ;
-(GEOHighlight)textHighlightsAtIndex:(unsigned long long)arg1 ;
-(void)setTextHighlights:(GEOHighlight*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)hasIconID;
-(BOOL)hasLatlng;
-(BOOL)hasSearchQueryDisplayString;
-(BOOL)hasCalloutTitle;
-(NSString *)iconID;
-(void)setIconID:(NSString *)arg1 ;
-(NSString *)searchQueryDisplayString;
-(void)setSearchQueryDisplayString:(NSString *)arg1 ;
-(void)setCalloutTitle:(NSString *)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

