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

@class PBUnknownFields, GEOLocalizedString, GEOStyleAttributes, NSData, GEOPDVenueIdentifier;

@interface GEOPDAutocompleteEntryCategory : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOLocalizedString* _displayName;
	GEOStyleAttributes* _styleAttributes;
	NSData* _suggestionEntryMetadata;
	GEOPDVenueIdentifier* _venueIdentifier;

}

@property (nonatomic,readonly) BOOL hasDisplayName; 
@property (nonatomic,retain) GEOLocalizedString * displayName;                    //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) BOOL hasStyleAttributes; 
@property (nonatomic,retain) GEOStyleAttributes * styleAttributes;                //@synthesize styleAttributes=_styleAttributes - In the implementation block
@property (nonatomic,readonly) BOOL hasSuggestionEntryMetadata; 
@property (nonatomic,retain) NSData * suggestionEntryMetadata;                    //@synthesize suggestionEntryMetadata=_suggestionEntryMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasVenueIdentifier; 
@property (nonatomic,retain) GEOPDVenueIdentifier * venueIdentifier;              //@synthesize venueIdentifier=_venueIdentifier - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasStyleAttributes;
-(BOOL)hasSuggestionEntryMetadata;
-(NSData *)suggestionEntryMetadata;
-(void)setSuggestionEntryMetadata:(NSData *)arg1 ;
-(BOOL)hasDisplayName;
-(BOOL)hasVenueIdentifier;
-(void)setDisplayName:(GEOLocalizedString *)arg1 ;
-(GEOPDVenueIdentifier *)venueIdentifier;
-(void)setVenueIdentifier:(GEOPDVenueIdentifier *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(GEOStyleAttributes *)styleAttributes;
-(void)setStyleAttributes:(GEOStyleAttributes *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(GEOLocalizedString *)displayName;
@end

