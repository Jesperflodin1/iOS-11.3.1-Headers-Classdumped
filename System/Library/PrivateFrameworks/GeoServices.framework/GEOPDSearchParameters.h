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

@class PBUnknownFields, GEOPDRecentRouteInfo, GEOPDRetainedSearchMetadata, GEOPDSearchFilter, GEOPDSearchLocationParameters, NSString, GEOPDSearchStructureIntentRequestType, GEOPDAutocompleteEntry, NSData, GEOPDViewportInfo;

@interface GEOPDSearchParameters : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned _maxResults;
	GEOPDRecentRouteInfo* _recentRouteInfo;
	GEOPDRetainedSearchMetadata* _retainedSearch;
	GEOPDSearchFilter* _searchFilter;
	GEOPDSearchLocationParameters* _searchLocationParameters;
	NSString* _searchString;
	GEOPDSearchStructureIntentRequestType* _searchStructureIntentType;
	int _searchType;
	int _sortOrder;
	GEOPDAutocompleteEntry* _suggestionEntry;
	NSData* _suggestionEntryMetadata;
	NSData* _suggestionMetadata;
	GEOPDViewportInfo* _viewportInfo;
	BOOL _supportDirectionIntentSearch;
	BOOL _supportDymSuggestion;
	BOOL _supportUnresolvedDirectionIntent;
	SCD_Struct_GE39 _has;

}

@property (assign,nonatomic) BOOL hasSortOrder; 
@property (assign,nonatomic) int sortOrder;                                                                  //@synthesize sortOrder=_sortOrder - In the implementation block
@property (assign,nonatomic) BOOL hasMaxResults; 
@property (assign,nonatomic) unsigned maxResults;                                                            //@synthesize maxResults=_maxResults - In the implementation block
@property (nonatomic,readonly) BOOL hasSearchString; 
@property (nonatomic,retain) NSString * searchString;                                                        //@synthesize searchString=_searchString - In the implementation block
@property (nonatomic,readonly) BOOL hasViewportInfo; 
@property (nonatomic,retain) GEOPDViewportInfo * viewportInfo;                                               //@synthesize viewportInfo=_viewportInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasSuggestionMetadata; 
@property (nonatomic,retain) NSData * suggestionMetadata;                                                    //@synthesize suggestionMetadata=_suggestionMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasSuggestionEntryMetadata; 
@property (nonatomic,retain) NSData * suggestionEntryMetadata;                                               //@synthesize suggestionEntryMetadata=_suggestionEntryMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasSuggestionEntry; 
@property (nonatomic,retain) GEOPDAutocompleteEntry * suggestionEntry;                                       //@synthesize suggestionEntry=_suggestionEntry - In the implementation block
@property (assign,nonatomic) BOOL hasSearchType; 
@property (assign,nonatomic) int searchType;                                                                 //@synthesize searchType=_searchType - In the implementation block
@property (nonatomic,readonly) BOOL hasSearchStructureIntentType; 
@property (nonatomic,retain) GEOPDSearchStructureIntentRequestType * searchStructureIntentType;              //@synthesize searchStructureIntentType=_searchStructureIntentType - In the implementation block
@property (nonatomic,readonly) BOOL hasSearchLocationParameters; 
@property (nonatomic,retain) GEOPDSearchLocationParameters * searchLocationParameters;                       //@synthesize searchLocationParameters=_searchLocationParameters - In the implementation block
@property (nonatomic,readonly) BOOL hasRecentRouteInfo; 
@property (nonatomic,retain) GEOPDRecentRouteInfo * recentRouteInfo;                                         //@synthesize recentRouteInfo=_recentRouteInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasSearchFilter; 
@property (nonatomic,retain) GEOPDSearchFilter * searchFilter;                                               //@synthesize searchFilter=_searchFilter - In the implementation block
@property (assign,nonatomic) BOOL hasSupportDymSuggestion; 
@property (assign,nonatomic) BOOL supportDymSuggestion;                                                      //@synthesize supportDymSuggestion=_supportDymSuggestion - In the implementation block
@property (assign,nonatomic) BOOL hasSupportDirectionIntentSearch; 
@property (assign,nonatomic) BOOL supportDirectionIntentSearch;                                              //@synthesize supportDirectionIntentSearch=_supportDirectionIntentSearch - In the implementation block
@property (nonatomic,readonly) BOOL hasRetainedSearch; 
@property (nonatomic,retain) GEOPDRetainedSearchMetadata * retainedSearch;                                   //@synthesize retainedSearch=_retainedSearch - In the implementation block
@property (assign,nonatomic) BOOL hasSupportUnresolvedDirectionIntent; 
@property (assign,nonatomic) BOOL supportUnresolvedDirectionIntent;                                          //@synthesize supportUnresolvedDirectionIntent=_supportUnresolvedDirectionIntent - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setSearchType:(int)arg1 ;
-(BOOL)hasViewportInfo;
-(unsigned)maxResults;
-(void)setMaxResults:(unsigned)arg1 ;
-(void)setHasMaxResults:(BOOL)arg1 ;
-(BOOL)hasMaxResults;
-(GEOPDViewportInfo *)viewportInfo;
-(void)setViewportInfo:(GEOPDViewportInfo *)arg1 ;
-(int)sortOrder;
-(void)setSortOrder:(int)arg1 ;
-(void)setHasSortOrder:(BOOL)arg1 ;
-(BOOL)hasSortOrder;
-(id)sortOrderAsString:(int)arg1 ;
-(int)StringAsSortOrder:(id)arg1 ;
-(BOOL)hasSearchString;
-(int)searchType;
-(void)setHasSearchType:(BOOL)arg1 ;
-(BOOL)hasSearchType;
-(id)searchTypeAsString:(int)arg1 ;
-(int)StringAsSearchType:(id)arg1 ;
-(BOOL)hasSuggestionMetadata;
-(NSData *)suggestionMetadata;
-(void)setSuggestionMetadata:(NSData *)arg1 ;
-(BOOL)hasSuggestionEntryMetadata;
-(BOOL)hasSuggestionEntry;
-(NSData *)suggestionEntryMetadata;
-(void)setSuggestionEntryMetadata:(NSData *)arg1 ;
-(GEOPDAutocompleteEntry *)suggestionEntry;
-(void)setSuggestionEntry:(GEOPDAutocompleteEntry *)arg1 ;
-(BOOL)hasRecentRouteInfo;
-(GEOPDRecentRouteInfo *)recentRouteInfo;
-(void)setRecentRouteInfo:(GEOPDRecentRouteInfo *)arg1 ;
-(void)setSupportDirectionIntentSearch:(BOOL)arg1 ;
-(void)setHasSupportDirectionIntentSearch:(BOOL)arg1 ;
-(BOOL)hasSupportDirectionIntentSearch;
-(void)setSupportDymSuggestion:(BOOL)arg1 ;
-(void)setHasSupportDymSuggestion:(BOOL)arg1 ;
-(BOOL)hasSupportDymSuggestion;
-(void)setSupportUnresolvedDirectionIntent:(BOOL)arg1 ;
-(void)setHasSupportUnresolvedDirectionIntent:(BOOL)arg1 ;
-(BOOL)hasSupportUnresolvedDirectionIntent;
-(BOOL)supportDirectionIntentSearch;
-(BOOL)supportDymSuggestion;
-(BOOL)supportUnresolvedDirectionIntent;
-(BOOL)hasRetainedSearch;
-(GEOPDRetainedSearchMetadata *)retainedSearch;
-(void)setRetainedSearch:(GEOPDRetainedSearchMetadata *)arg1 ;
-(id)initWithSearchQuery:(id)arg1 entryMetadata:(id)arg2 metadata:(id)arg3 autocompleteEntry:(id)arg4 retainedSearch:(id)arg5 maxResults:(unsigned)arg6 traits:(id)arg7 ;
-(void)setSearchFilter:(GEOPDSearchFilter *)arg1 ;
-(BOOL)hasSearchStructureIntentType;
-(BOOL)hasSearchLocationParameters;
-(BOOL)hasSearchFilter;
-(GEOPDSearchStructureIntentRequestType *)searchStructureIntentType;
-(void)setSearchStructureIntentType:(GEOPDSearchStructureIntentRequestType *)arg1 ;
-(GEOPDSearchLocationParameters *)searchLocationParameters;
-(void)setSearchLocationParameters:(GEOPDSearchLocationParameters *)arg1 ;
-(GEOPDSearchFilter *)searchFilter;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)searchString;
-(id)dictionaryRepresentation;
-(void)setSearchString:(NSString *)arg1 ;
@end

