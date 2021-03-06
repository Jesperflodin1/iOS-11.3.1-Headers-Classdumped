/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:25 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOPDAddressObjectGeocodingResult, GEOPDAutocompleteResult, GEOPDBatchPopularNearbySearchResult, GEOPDBrandLookupResult, GEOPDSearchBrowseCategorySuggestionResult, GEOPDCanonicalLocationSearchResult, GEOPDCategorySearchResult, GEOPDClusterGeocodingResult, GEOPDExternalTransitLookupResult, GEOPDFeatureIdGeocodingResult, GEOPDGeocodingResult, GEOPDIpGeoLookupResult, GEOPDLocationDirectedSearchResult, GEOPDMapsIdentifierPlaceLookupResult, GEOPDMerchantLookupResult, GEOPDNearbySearchResult, GEOPDPlaceLookupResult, GEOPDPlaceRefinementResult, GEOPDPopularNearbySearchResult, GEOPDReverseGeocodingResult, GEOPDSearchFieldPlaceholderResult, GEOPDSearchResult, GEOPDSearchZeroKeywordCategorySuggestionResult, GEOPDSearchZeroKeywordWithSearchResultsSuggestionResult, GEOPDSiriSearchResult, GEOPDVendorSpecificPlaceRefinementResult, GEOPDWifiFingerprintResult;

@interface GEOPDPlaceGlobalResult : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOPDAddressObjectGeocodingResult* _addressObjectGeocodingResult;
	GEOPDAutocompleteResult* _autocompleteResult;
	GEOPDBatchPopularNearbySearchResult* _batchPopularNearbySearchResult;
	GEOPDBrandLookupResult* _brandLookupResult;
	GEOPDSearchBrowseCategorySuggestionResult* _browseCategorySuggestionResult;
	GEOPDCanonicalLocationSearchResult* _canonicalSearchResult;
	GEOPDCategorySearchResult* _categorySearchResult;
	GEOPDClusterGeocodingResult* _clusterGeocodingResult;
	GEOPDExternalTransitLookupResult* _externalTransitLookupResult;
	GEOPDFeatureIdGeocodingResult* _featureIdGeocodingResult;
	GEOPDGeocodingResult* _geocodingResult;
	GEOPDIpGeoLookupResult* _ipGeoLookupResult;
	GEOPDLocationDirectedSearchResult* _locationDirectedSearchResult;
	GEOPDMapsIdentifierPlaceLookupResult* _mapsIdentifierPlaceLookupResult;
	GEOPDMerchantLookupResult* _merchantLookupResult;
	GEOPDNearbySearchResult* _nearbySearchResult;
	GEOPDPlaceLookupResult* _placeLookupResult;
	GEOPDPlaceRefinementResult* _placeRefinementResult;
	GEOPDPopularNearbySearchResult* _popularNearbySearchResult;
	GEOPDReverseGeocodingResult* _reverseGeocodingResult;
	GEOPDSearchFieldPlaceholderResult* _searchFieldPlaceholderResult;
	GEOPDSearchResult* _searchResult;
	GEOPDSearchZeroKeywordCategorySuggestionResult* _searchZeroKeywordCategorySuggestionResult;
	GEOPDSearchZeroKeywordWithSearchResultsSuggestionResult* _searchZeroKeywordWithSearchResultsSuggestionResult;
	GEOPDSiriSearchResult* _siriSearchResult;
	GEOPDVendorSpecificPlaceRefinementResult* _vendorSpecificPlaceRefinementResult;
	GEOPDWifiFingerprintResult* _wifiFingerprintResult;

}

@property (nonatomic,readonly) BOOL hasSearchResult; 
@property (nonatomic,retain) GEOPDSearchResult * searchResult;                                                                                          //@synthesize searchResult=_searchResult - In the implementation block
@property (nonatomic,readonly) BOOL hasGeocodingResult; 
@property (nonatomic,retain) GEOPDGeocodingResult * geocodingResult;                                                                                    //@synthesize geocodingResult=_geocodingResult - In the implementation block
@property (nonatomic,readonly) BOOL hasCanonicalSearchResult; 
@property (nonatomic,retain) GEOPDCanonicalLocationSearchResult * canonicalSearchResult;                                                                //@synthesize canonicalSearchResult=_canonicalSearchResult - In the implementation block
@property (nonatomic,readonly) BOOL hasReverseGeocodingResult; 
@property (nonatomic,retain) GEOPDReverseGeocodingResult * reverseGeocodingResult;                                                                      //@synthesize reverseGeocodingResult=_reverseGeocodingResult - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaceLookupResult; 
@property (nonatomic,retain) GEOPDPlaceLookupResult * placeLookupResult;                                                                                //@synthesize placeLookupResult=_placeLookupResult - In the implementation block
@property (nonatomic,readonly) BOOL hasMerchantLookupResult; 
@property (nonatomic,retain) GEOPDMerchantLookupResult * merchantLookupResult;                                                                          //@synthesize merchantLookupResult=_merchantLookupResult - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaceRefinementResult; 
@property (nonatomic,retain) GEOPDPlaceRefinementResult * placeRefinementResult;                                                                        //@synthesize placeRefinementResult=_placeRefinementResult - In the implementation block
@property (nonatomic,readonly) BOOL hasSiriSearchResult; 
@property (nonatomic,retain) GEOPDSiriSearchResult * siriSearchResult;                                                                                  //@synthesize siriSearchResult=_siriSearchResult - In the implementation block
@property (nonatomic,readonly) BOOL hasLocationDirectedSearchResult; 
@property (nonatomic,retain) GEOPDLocationDirectedSearchResult * locationDirectedSearchResult;                                                          //@synthesize locationDirectedSearchResult=_locationDirectedSearchResult - In the implementation block
@property (nonatomic,readonly) BOOL hasAutocompleteResult; 
@property (nonatomic,retain) GEOPDAutocompleteResult * autocompleteResult;                                                                              //@synthesize autocompleteResult=_autocompleteResult - In the implementation block
@property (nonatomic,readonly) BOOL hasBrowseCategorySuggestionResult; 
@property (nonatomic,retain) GEOPDSearchBrowseCategorySuggestionResult * browseCategorySuggestionResult;                                                //@synthesize browseCategorySuggestionResult=_browseCategorySuggestionResult - In the implementation block
@property (nonatomic,readonly) BOOL hasCategorySearchResult; 
@property (nonatomic,retain) GEOPDCategorySearchResult * categorySearchResult;                                                                          //@synthesize categorySearchResult=_categorySearchResult - In the implementation block
@property (nonatomic,readonly) BOOL hasPopularNearbySearchResult; 
@property (nonatomic,retain) GEOPDPopularNearbySearchResult * popularNearbySearchResult;                                                                //@synthesize popularNearbySearchResult=_popularNearbySearchResult - In the implementation block
@property (nonatomic,readonly) BOOL hasSearchZeroKeywordCategorySuggestionResult; 
@property (nonatomic,retain) GEOPDSearchZeroKeywordCategorySuggestionResult * searchZeroKeywordCategorySuggestionResult;                                //@synthesize searchZeroKeywordCategorySuggestionResult=_searchZeroKeywordCategorySuggestionResult - In the implementation block
@property (nonatomic,readonly) BOOL hasSearchFieldPlaceholderResult; 
@property (nonatomic,retain) GEOPDSearchFieldPlaceholderResult * searchFieldPlaceholderResult;                                                          //@synthesize searchFieldPlaceholderResult=_searchFieldPlaceholderResult - In the implementation block
@property (nonatomic,readonly) BOOL hasBatchPopularNearbySearchResult; 
@property (nonatomic,retain) GEOPDBatchPopularNearbySearchResult * batchPopularNearbySearchResult;                                                      //@synthesize batchPopularNearbySearchResult=_batchPopularNearbySearchResult - In the implementation block
@property (nonatomic,readonly) BOOL hasVendorSpecificPlaceRefinementResult; 
@property (nonatomic,retain) GEOPDVendorSpecificPlaceRefinementResult * vendorSpecificPlaceRefinementResult;                                            //@synthesize vendorSpecificPlaceRefinementResult=_vendorSpecificPlaceRefinementResult - In the implementation block
@property (nonatomic,readonly) BOOL hasNearbySearchResult; 
@property (nonatomic,retain) GEOPDNearbySearchResult * nearbySearchResult;                                                                              //@synthesize nearbySearchResult=_nearbySearchResult - In the implementation block
@property (nonatomic,readonly) BOOL hasAddressObjectGeocodingResult; 
@property (nonatomic,retain) GEOPDAddressObjectGeocodingResult * addressObjectGeocodingResult;                                                          //@synthesize addressObjectGeocodingResult=_addressObjectGeocodingResult - In the implementation block
@property (nonatomic,readonly) BOOL hasSearchZeroKeywordWithSearchResultsSuggestionResult; 
@property (nonatomic,retain) GEOPDSearchZeroKeywordWithSearchResultsSuggestionResult * searchZeroKeywordWithSearchResultsSuggestionResult;              //@synthesize searchZeroKeywordWithSearchResultsSuggestionResult=_searchZeroKeywordWithSearchResultsSuggestionResult - In the implementation block
@property (nonatomic,readonly) BOOL hasExternalTransitLookupResult; 
@property (nonatomic,retain) GEOPDExternalTransitLookupResult * externalTransitLookupResult;                                                            //@synthesize externalTransitLookupResult=_externalTransitLookupResult - In the implementation block
@property (nonatomic,readonly) BOOL hasFeatureIdGeocodingResult; 
@property (nonatomic,retain) GEOPDFeatureIdGeocodingResult * featureIdGeocodingResult;                                                                  //@synthesize featureIdGeocodingResult=_featureIdGeocodingResult - In the implementation block
@property (nonatomic,readonly) BOOL hasMapsIdentifierPlaceLookupResult; 
@property (nonatomic,retain) GEOPDMapsIdentifierPlaceLookupResult * mapsIdentifierPlaceLookupResult;                                                    //@synthesize mapsIdentifierPlaceLookupResult=_mapsIdentifierPlaceLookupResult - In the implementation block
@property (nonatomic,readonly) BOOL hasClusterGeocodingResult; 
@property (nonatomic,retain) GEOPDClusterGeocodingResult * clusterGeocodingResult;                                                                      //@synthesize clusterGeocodingResult=_clusterGeocodingResult - In the implementation block
@property (nonatomic,readonly) BOOL hasBrandLookupResult; 
@property (nonatomic,retain) GEOPDBrandLookupResult * brandLookupResult;                                                                                //@synthesize brandLookupResult=_brandLookupResult - In the implementation block
@property (nonatomic,readonly) BOOL hasWifiFingerprintResult; 
@property (nonatomic,retain) GEOPDWifiFingerprintResult * wifiFingerprintResult;                                                                        //@synthesize wifiFingerprintResult=_wifiFingerprintResult - In the implementation block
@property (nonatomic,readonly) BOOL hasIpGeoLookupResult; 
@property (nonatomic,retain) GEOPDIpGeoLookupResult * ipGeoLookupResult;                                                                                //@synthesize ipGeoLookupResult=_ipGeoLookupResult - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasSearchResult;
-(BOOL)hasGeocodingResult;
-(BOOL)hasCanonicalSearchResult;
-(BOOL)hasReverseGeocodingResult;
-(BOOL)hasPlaceLookupResult;
-(BOOL)hasMerchantLookupResult;
-(BOOL)hasPlaceRefinementResult;
-(BOOL)hasSiriSearchResult;
-(BOOL)hasLocationDirectedSearchResult;
-(BOOL)hasAutocompleteResult;
-(BOOL)hasBrowseCategorySuggestionResult;
-(BOOL)hasCategorySearchResult;
-(BOOL)hasPopularNearbySearchResult;
-(BOOL)hasSearchZeroKeywordCategorySuggestionResult;
-(BOOL)hasSearchFieldPlaceholderResult;
-(BOOL)hasBatchPopularNearbySearchResult;
-(BOOL)hasVendorSpecificPlaceRefinementResult;
-(BOOL)hasNearbySearchResult;
-(BOOL)hasAddressObjectGeocodingResult;
-(BOOL)hasSearchZeroKeywordWithSearchResultsSuggestionResult;
-(BOOL)hasExternalTransitLookupResult;
-(BOOL)hasFeatureIdGeocodingResult;
-(BOOL)hasMapsIdentifierPlaceLookupResult;
-(BOOL)hasClusterGeocodingResult;
-(BOOL)hasBrandLookupResult;
-(BOOL)hasWifiFingerprintResult;
-(BOOL)hasIpGeoLookupResult;
-(GEOPDSearchResult *)searchResult;
-(void)setSearchResult:(GEOPDSearchResult *)arg1 ;
-(GEOPDGeocodingResult *)geocodingResult;
-(void)setGeocodingResult:(GEOPDGeocodingResult *)arg1 ;
-(GEOPDCanonicalLocationSearchResult *)canonicalSearchResult;
-(void)setCanonicalSearchResult:(GEOPDCanonicalLocationSearchResult *)arg1 ;
-(GEOPDReverseGeocodingResult *)reverseGeocodingResult;
-(void)setReverseGeocodingResult:(GEOPDReverseGeocodingResult *)arg1 ;
-(GEOPDPlaceLookupResult *)placeLookupResult;
-(void)setPlaceLookupResult:(GEOPDPlaceLookupResult *)arg1 ;
-(GEOPDMerchantLookupResult *)merchantLookupResult;
-(void)setMerchantLookupResult:(GEOPDMerchantLookupResult *)arg1 ;
-(GEOPDPlaceRefinementResult *)placeRefinementResult;
-(void)setPlaceRefinementResult:(GEOPDPlaceRefinementResult *)arg1 ;
-(GEOPDSiriSearchResult *)siriSearchResult;
-(void)setSiriSearchResult:(GEOPDSiriSearchResult *)arg1 ;
-(GEOPDLocationDirectedSearchResult *)locationDirectedSearchResult;
-(void)setLocationDirectedSearchResult:(GEOPDLocationDirectedSearchResult *)arg1 ;
-(GEOPDAutocompleteResult *)autocompleteResult;
-(void)setAutocompleteResult:(GEOPDAutocompleteResult *)arg1 ;
-(GEOPDSearchBrowseCategorySuggestionResult *)browseCategorySuggestionResult;
-(void)setBrowseCategorySuggestionResult:(GEOPDSearchBrowseCategorySuggestionResult *)arg1 ;
-(GEOPDCategorySearchResult *)categorySearchResult;
-(void)setCategorySearchResult:(GEOPDCategorySearchResult *)arg1 ;
-(GEOPDPopularNearbySearchResult *)popularNearbySearchResult;
-(void)setPopularNearbySearchResult:(GEOPDPopularNearbySearchResult *)arg1 ;
-(GEOPDSearchZeroKeywordCategorySuggestionResult *)searchZeroKeywordCategorySuggestionResult;
-(void)setSearchZeroKeywordCategorySuggestionResult:(GEOPDSearchZeroKeywordCategorySuggestionResult *)arg1 ;
-(GEOPDSearchFieldPlaceholderResult *)searchFieldPlaceholderResult;
-(void)setSearchFieldPlaceholderResult:(GEOPDSearchFieldPlaceholderResult *)arg1 ;
-(GEOPDBatchPopularNearbySearchResult *)batchPopularNearbySearchResult;
-(void)setBatchPopularNearbySearchResult:(GEOPDBatchPopularNearbySearchResult *)arg1 ;
-(GEOPDVendorSpecificPlaceRefinementResult *)vendorSpecificPlaceRefinementResult;
-(void)setVendorSpecificPlaceRefinementResult:(GEOPDVendorSpecificPlaceRefinementResult *)arg1 ;
-(GEOPDNearbySearchResult *)nearbySearchResult;
-(void)setNearbySearchResult:(GEOPDNearbySearchResult *)arg1 ;
-(GEOPDAddressObjectGeocodingResult *)addressObjectGeocodingResult;
-(void)setAddressObjectGeocodingResult:(GEOPDAddressObjectGeocodingResult *)arg1 ;
-(GEOPDSearchZeroKeywordWithSearchResultsSuggestionResult *)searchZeroKeywordWithSearchResultsSuggestionResult;
-(void)setSearchZeroKeywordWithSearchResultsSuggestionResult:(GEOPDSearchZeroKeywordWithSearchResultsSuggestionResult *)arg1 ;
-(GEOPDExternalTransitLookupResult *)externalTransitLookupResult;
-(void)setExternalTransitLookupResult:(GEOPDExternalTransitLookupResult *)arg1 ;
-(GEOPDFeatureIdGeocodingResult *)featureIdGeocodingResult;
-(void)setFeatureIdGeocodingResult:(GEOPDFeatureIdGeocodingResult *)arg1 ;
-(GEOPDMapsIdentifierPlaceLookupResult *)mapsIdentifierPlaceLookupResult;
-(void)setMapsIdentifierPlaceLookupResult:(GEOPDMapsIdentifierPlaceLookupResult *)arg1 ;
-(GEOPDClusterGeocodingResult *)clusterGeocodingResult;
-(void)setClusterGeocodingResult:(GEOPDClusterGeocodingResult *)arg1 ;
-(GEOPDBrandLookupResult *)brandLookupResult;
-(void)setBrandLookupResult:(GEOPDBrandLookupResult *)arg1 ;
-(GEOPDWifiFingerprintResult *)wifiFingerprintResult;
-(void)setWifiFingerprintResult:(GEOPDWifiFingerprintResult *)arg1 ;
-(GEOPDIpGeoLookupResult *)ipGeoLookupResult;
-(void)setIpGeoLookupResult:(GEOPDIpGeoLookupResult *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

