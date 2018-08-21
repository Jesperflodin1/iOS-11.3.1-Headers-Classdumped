/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSCacheDelegate;
#import <GeoServices/GeoServices-Structs.h>
@class NSLock, NSArray, NSCache;

@interface GEOMapService : NSObject {

	NSLock* _preferredLanguagesLock;
	NSArray* _preferredLanguages;
	int _overriddenResultProviderID;
	int _additionalEnabledMarketsChangedToken;
	int _experimentsChangedToken;
	NSCache* _handleCache;
	id<NSCacheDelegate> _handleCacheDelegate;

}
+(void)_attributedGeoMapItemsForPlaceDatasWithType:(int)arg1 placeDatas:(id)arg2 disambiguationLabels:(id)arg3 handler:(/*^block*/id)arg4 ;
+(id)sharedService;
-(void)_localeChanged:(id)arg1 ;
-(id)defaultTraits;
-(int)localSearchProviderID;
-(id)ticketForTransitIdentifiers:(id)arg1 endDateForPlacecardSchedulesForThisBatch:(id)arg2 traits:(id)arg3 ;
-(id)_ticketForBatchReverseGeocodeLocations:(id)arg1 shiftLocationsIfNeeded:(BOOL)arg2 additionalPlaceTypes:(int*)arg3 additionalPlaceTypesCount:(unsigned)arg4 traits:(id)arg5 ;
-(id)_preferredLanguages;
-(void)_sendInvalidateDataToSiriAndParSec;
-(int)_loadOverriddenResultProviderID;
-(void)_countryCodeChanged:(id)arg1 ;
-(id)defaultBackgroundTraits;
-(id)ticketForMUIDs:(id)arg1 traits:(id)arg2 ;
-(id)ticketForMUIDs:(id)arg1 includeETA:(BOOL)arg2 traits:(id)arg3 ;
-(id)ticketForIdentifiers:(id)arg1 traits:(id)arg2 ;
-(id)ticketForIdentifiers:(id)arg1 includeETA:(BOOL)arg2 traits:(id)arg3 ;
-(id)ticketForIdentifiers:(id)arg1 resultProviderID:(int)arg2 contentProvider:(id)arg3 traits:(id)arg4 ;
-(id)ticketForMUIDs:(id)arg1 resultProviderID:(int)arg2 contentProvider:(id)arg3 traits:(id)arg4 ;
-(id)ticketForFreshIdentifier:(id)arg1 resultProviderID:(int)arg2 contentProvider:(id)arg3 traits:(id)arg4 ;
-(id)ticketForNonExpiredIdentifier:(id)arg1 resultProviderID:(int)arg2 contentProvider:(id)arg3 traits:(id)arg4 ;
-(id)ticketForFreshComponents:(id)arg1 identifier:(id)arg2 resultProviderID:(int)arg3 contentProvider:(id)arg4 traits:(id)arg5 ;
-(id)ticketForFreshBusinessClaimComponentWithIdentifier:(id)arg1 resultProviderID:(int)arg2 traits:(id)arg3 ;
-(id)ticketForExternalBusinessID:(id)arg1 contentProvider:(id)arg2 traits:(id)arg3 ;
-(id)ticketForPhoneNumbers:(id)arg1 allowCellularDataForLookup:(BOOL)arg2 traits:(id)arg3 ;
-(id)ticketForForwardGeocodeAddress:(id)arg1 maxResults:(unsigned)arg2 traits:(id)arg3 ;
-(id)ticketForForwardGeocodeAddressDictionary:(id)arg1 maxResults:(unsigned)arg2 traits:(id)arg3 ;
-(id)ticketForForwardGeocodeString:(id)arg1 maxResults:(unsigned)arg2 traits:(id)arg3 ;
-(id)_cl_ticketForForwardGeocodeString:(id)arg1 maxResults:(unsigned)arg2 traits:(id)arg3 ;
-(id)_cl_ticketForForwardGeocodeAddressDictionary:(id)arg1 maxResults:(unsigned)arg2 traits:(id)arg3 ;
-(id)ticketForReverseGeocodeCoordinate:(SCD_Struct_GE29)arg1 shiftLocationsIfNeeded:(BOOL)arg2 traits:(id)arg3 ;
-(id)ticketForReverseGeocodeCoordinate:(SCD_Struct_GE29)arg1 includeETA:(BOOL)arg2 shiftLocationsIfNeeded:(BOOL)arg3 traits:(id)arg4 ;
-(id)_searchable_ticketForReverseGeocodeCoordinate:(SCD_Struct_GE29)arg1 includeEntryPoints:(BOOL)arg2 shiftLocationsIfNeeded:(BOOL)arg3 preserveOriginalLocation:(BOOL)arg4 traits:(id)arg5 ;
-(id)ticketForReverseGeocodeCoordinate:(SCD_Struct_GE29)arg1 includeEntryPoints:(BOOL)arg2 shiftLocationsIfNeeded:(BOOL)arg3 traits:(id)arg4 ;
-(id)ticketForReverseGeocodeCoordinate:(SCD_Struct_GE29)arg1 includeEntryPoints:(BOOL)arg2 shiftLocationsIfNeeded:(BOOL)arg3 preserveOriginalLocation:(BOOL)arg4 traits:(id)arg5 ;
-(id)ticketForReverseGeocodeCoordinate:(SCD_Struct_GE29)arg1 floor:(int)arg2 includeEntryPoints:(BOOL)arg3 shiftLocationsIfNeeded:(BOOL)arg4 preserveOriginalLocation:(BOOL)arg5 traits:(id)arg6 ;
-(id)_searchable_ticketForReverseGeocodeCoordinate:(SCD_Struct_GE29)arg1 floor:(int)arg2 includeEntryPoints:(BOOL)arg3 shiftLocationsIfNeeded:(BOOL)arg4 preserveOriginalLocation:(BOOL)arg5 traits:(id)arg6 ;
-(id)_cl_ticketForReverseGeocodeLocation:(id)arg1 traits:(id)arg2 ;
-(id)ticketForBatchReverseGeocodeLocations:(id)arg1 shiftLocationsIfNeeded:(BOOL)arg2 traits:(id)arg3 ;
-(id)ticketForBatchReverseGeocodeLocations:(id)arg1 shiftLocationsIfNeeded:(BOOL)arg2 additionalPlaceTypes:(int*)arg3 additionalPlaceTypesCount:(unsigned)arg4 traits:(id)arg5 ;
-(id)ticketForMerchantCode:(id)arg1 rawMerchantCode:(id)arg2 industryCategory:(id)arg3 industryCode:(id)arg4 paymentNetwork:(id)arg5 transactionDate:(id)arg6 transactionLocation:(id)arg7 traits:(id)arg8 ;
-(id)ticketForExternalTransitStationCodes:(id)arg1 sourceID:(id)arg2 transactionDate:(id)arg3 transactionLocation:(id)arg4 traits:(id)arg5 ;
-(id)ticketForSpatialLookupParameters:(id)arg1 traits:(id)arg2 ;
-(id)ticketForProblem:(id)arg1 placeForProblemContext:(id)arg2 userCredentials:(id)arg3 pushToken:(id)arg4 allowContactBackAtEmailAddress:(id)arg5 traits:(id)arg6 ;
-(id)ticketForProblemResubmission:(id)arg1 traits:(id)arg2 ;
-(id)ticketForSearchPoisForBrandMUID:(unsigned long long)arg1 traits:(id)arg2 ;
-(id)ticketForSearchQuery:(id)arg1 completionItem:(id)arg2 maxResults:(unsigned)arg3 traits:(id)arg4 ;
-(id)ticketForSearchQuery:(id)arg1 completionItem:(id)arg2 retainedSearch:(id)arg3 maxResults:(unsigned)arg4 traits:(id)arg5 ;
-(id)ticketForSearchQuery:(id)arg1 completionItem:(id)arg2 maxResults:(unsigned)arg3 includeETA:(BOOL)arg4 traits:(id)arg5 ;
-(id)ticketForSearchQuery:(id)arg1 completionItem:(id)arg2 relatedSearchSuggestion:(id)arg3 retainedSearch:(id)arg4 maxResults:(unsigned)arg5 traits:(id)arg6 ;
-(id)ticketForSearchQuery:(id)arg1 completionItem:(id)arg2 retainedSearch:(id)arg3 maxResults:(unsigned)arg4 suppressResultsRequiringAttribution:(BOOL)arg5 traits:(id)arg6 ;
-(id)ticketForMapItemToRefine:(id)arg1 traits:(id)arg2 ;
-(id)ticketForPlaceRefinementRequestWithCoordinate:(SCD_Struct_GE29*)arg1 addressLine:(id)arg2 placeName:(id)arg3 traits:(id)arg4 ;
-(id)ticketForPlaceRefinementRequestParameters:(id)arg1 traits:(id)arg2 ;
-(id)ticketForVendorSpecificPlaceRefinementRequestParameters:(id)arg1 traits:(id)arg2 ;
-(id)ticketForCanonicalLocationSearchQueryString:(id)arg1 traits:(id)arg2 ;
-(id)ticketForURLQuery:(id)arg1 identifier:(id)arg2 resultProviderId:(int)arg3 contentProvider:(id)arg4 maxResults:(unsigned)arg5 traits:(id)arg6 ;
-(id)_ticketForAutocompleteFragment:(id)arg1 type:(int)arg2 traits:(id)arg3 categoryFilter:(id)arg4 retainedSearch:(id)arg5 ;
-(id)ticketForInterleavedInstantSearchFragment:(id)arg1 traits:(id)arg2 ;
-(id)ticketForInterleavedAutoCompleteSearchFragment:(id)arg1 traits:(id)arg2 ;
-(id)ticketForInterleavedLocalitiesAndLandmarksSearchFragment:(id)arg1 traits:(id)arg2 ;
-(id)ticketForInterleavedAutoCompleteWithBrowseSearchFragment:(id)arg1 categoryFilter:(id)arg2 retainedSearch:(id)arg3 traits:(id)arg4 ;
-(id)ticketForInterleavedAutoCompletePoiAddressOnly:(id)arg1 traits:(id)arg2 ;
-(id)ticketForSectionedInstantSearchFragment:(id)arg1 traits:(id)arg2 ;
-(id)ticketForSectionedAutoCompleteSearchFragment:(id)arg1 traits:(id)arg2 ;
-(id)ticketForSectionedLocalitiesAndLandmarksSearchFragment:(id)arg1 traits:(id)arg2 ;
-(id)ticketForCategoryListWithTraits:(id)arg1 ;
-(id)ticketForSpotlightCategoryListWithTraits:(id)arg1 ;
-(id)ticketForSearchFieldPlaceholderWithTraits:(id)arg1 ;
-(id)ticketForTransitLines:(id)arg1 withTraits:(id)arg2 ;
-(id)ticketForNearestTransitStation:(id)arg1 coordinate:(SCD_Struct_GE29)arg2 traits:(id)arg3 ;
-(id)ticketForDatasetCheckWithTraits:(id)arg1 ;
-(id)ticketforCategory:(id)arg1 maxResults:(unsigned)arg2 traits:(id)arg3 ;
-(id)ticketForSearchAlongRouteWithCategory:(id)arg1 zilchData:(id)arg2 sessionState:(id)arg3 routeId:(id)arg4 maxResults:(unsigned)arg5 traits:(id)arg6 ;
-(id)ticketForSearchCategory:(id)arg1 searchString:(id)arg2 maxResults:(unsigned)arg3 traits:(id)arg4 ;
-(id)ticketForSearchCategory:(id)arg1 venueIdentifier:(id)arg2 maxResults:(unsigned)arg3 traits:(id)arg4 ;
-(id)ticketForPopularNearbyForSearchCategory:(id)arg1 maxResults:(unsigned)arg2 traits:(id)arg3 ;
-(id)ticketForBatchPopularNearbyForSearchCategories:(id)arg1 maxResults:(unsigned)arg2 traits:(id)arg3 ;
-(id)ticketForBrandLookupWithIMessageUid:(id)arg1 traits:(id)arg2 ;
-(id)ticketForWifiFingerprintWithLocations:(id)arg1 wifiAccessPoints:(id)arg2 maxLabels:(unsigned)arg3 traits:(id)arg4 ;
-(id)ticketForGeoIpLookupForIpAddr:(id)arg1 ;
-(id)_ticketForRefreshingHandle:(id)arg1 traits:(id)arg2 ;
-(void)trackSerializedPlaceData:(id)arg1 ;
-(void)trackMapItem:(id)arg1 ;
-(id)handleForMapItem:(id)arg1 ;
-(id)handleForMapItem:(id)arg1 withSizeLimit:(long long)arg2 ;
-(void)_resolveMapItemFromHandle:(id)arg1 withTraits:(id)arg2 cachePolicy:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)resolveMapItemFromHandle:(id)arg1 withTraits:(id)arg2 useCache:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)resolveMapItemFromHandle:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)resolveMapItemFromHandle:(id)arg1 traits:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)resolveMapItemLocallyFromHandle:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_geoMapItemsForResponseData:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)_geoMapItemForData:(id)arg1 ;
-(id)_geoMapItemForData:(id)arg1 withSource:(unsigned long long)arg2 ;
-(id)_geoMapItemsForPlacesInDetails:(id)arg1 ;
-(id)serializedClientMetadataForTraits:(id)arg1 ;
-(id)serializedClientMetadataForParsec;
-(id)serializedClientMetadataForSiri;
-(id)init;
-(void)dealloc;
@end

