/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOPDRoadAccessInfoFilter, GEOPDAddressFilter, GEOPDAddressObjectFilter, GEOPDAmenitiesFilter, GEOPDAssociatedAppFilter, GEOPDBoundsFilter, GEOPDBrowseCategoriesFilter, GEOPDBusinessClaimFilter, GEOPDCaptionedPhotoFilter, GEOPDContainedPlaceFilter, GEOPDEntityFilter, GEOPDETAFilter, GEOPDExternalActionFilter, GEOPDFactoidFilter, GEOPDFlyoverFilter, GEOPDHoursFilter, GEOPDIconFilter, GEOPDLocationEventFilter, GEOPDMessageLinkFilter, GEOPDPhotoFilter, GEOPDPlaceInfoFilter, GEOPDPlacecardURLFilter, GEOPDPriceDescriptionFilter, GEOPDQuickLinkFilter, GEOPDRapFilter, GEOPDRatingFilter, GEOPDRawAttributeFilter, GEOPDRestaurantReservationLinkFilter, GEOPDResultSnippetFilter, GEOPDReviewFilter, GEOPDSimpleRestaurantMenuTextFilter, GEOPDSpatialLookupFilter, GEOPDStyleAttributesFilter, GEOPDTextBlockFilter, GEOPDTipFilter, GEOPDTransitAttributionFilter, GEOPDTransitIncidentFilter, GEOPDTransitInfoFilter, GEOPDTransitInfoSnippetFilter, GEOPDTransitScheduleFilter, GEOPDVenueInfoFilter, GEOPDWifiFingerprintFilter;

@interface GEOPDComponentFilter : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOPDRoadAccessInfoFilter* _accessInfoFilter;
	GEOPDAddressFilter* _addressFilter;
	GEOPDAddressObjectFilter* _addressObjectFilter;
	GEOPDAmenitiesFilter* _amenitiesFilter;
	GEOPDAssociatedAppFilter* _associatedAppFilter;
	GEOPDBoundsFilter* _boundsFilter;
	GEOPDBrowseCategoriesFilter* _browseCategoriesFilter;
	GEOPDBusinessClaimFilter* _businessClaimFilter;
	GEOPDCaptionedPhotoFilter* _captionedPhotoFilter;
	GEOPDContainedPlaceFilter* _containedPlaceFilter;
	GEOPDEntityFilter* _entityFilter;
	GEOPDETAFilter* _etaFilter;
	GEOPDExternalActionFilter* _externalActionFilter;
	GEOPDFactoidFilter* _factoidFilter;
	GEOPDFlyoverFilter* _flyoverFilter;
	GEOPDHoursFilter* _hoursFilter;
	GEOPDIconFilter* _iconFilter;
	GEOPDLocationEventFilter* _locationEventFilter;
	GEOPDMessageLinkFilter* _messageLinkFilter;
	GEOPDPhotoFilter* _photoFilter;
	GEOPDPlaceInfoFilter* _placeInfoFilter;
	GEOPDPlacecardURLFilter* _placecardUrlFilter;
	GEOPDPriceDescriptionFilter* _priceDescriptionFilter;
	GEOPDQuickLinkFilter* _quickLinkFilter;
	GEOPDRapFilter* _rapFilter;
	GEOPDRatingFilter* _ratingFilter;
	GEOPDRawAttributeFilter* _rawAttributeFilter;
	GEOPDRestaurantReservationLinkFilter* _restaurantReservationLinkFilter;
	GEOPDResultSnippetFilter* _resultSnippetFilter;
	GEOPDReviewFilter* _reviewFilter;
	GEOPDSimpleRestaurantMenuTextFilter* _simpleRestaurantMenuTextFilter;
	GEOPDSpatialLookupFilter* _spatialLookupFilter;
	GEOPDStyleAttributesFilter* _styleAttributesFilter;
	GEOPDTextBlockFilter* _textBlockFilter;
	GEOPDTipFilter* _tipFilter;
	GEOPDTransitAttributionFilter* _transitAttributionFilter;
	GEOPDTransitIncidentFilter* _transitIncidentFilter;
	GEOPDTransitInfoFilter* _transitInfoFilter;
	GEOPDTransitInfoSnippetFilter* _transitInfoSnippetFilter;
	GEOPDTransitScheduleFilter* _transitScheduleFilter;
	GEOPDVenueInfoFilter* _venueInfoFilter;
	GEOPDWifiFingerprintFilter* _wifiFingerprintFilter;

}

@property (nonatomic,readonly) BOOL hasEntityFilter; 
@property (nonatomic,retain) GEOPDEntityFilter * entityFilter;                                                    //@synthesize entityFilter=_entityFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaceInfoFilter; 
@property (nonatomic,retain) GEOPDPlaceInfoFilter * placeInfoFilter;                                              //@synthesize placeInfoFilter=_placeInfoFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasAccessInfoFilter; 
@property (nonatomic,retain) GEOPDRoadAccessInfoFilter * accessInfoFilter;                                        //@synthesize accessInfoFilter=_accessInfoFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasBoundsFilter; 
@property (nonatomic,retain) GEOPDBoundsFilter * boundsFilter;                                                    //@synthesize boundsFilter=_boundsFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasAddressFilter; 
@property (nonatomic,retain) GEOPDAddressFilter * addressFilter;                                                  //@synthesize addressFilter=_addressFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasRatingFilter; 
@property (nonatomic,retain) GEOPDRatingFilter * ratingFilter;                                                    //@synthesize ratingFilter=_ratingFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasReviewFilter; 
@property (nonatomic,retain) GEOPDReviewFilter * reviewFilter;                                                    //@synthesize reviewFilter=_reviewFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasPhotoFilter; 
@property (nonatomic,retain) GEOPDPhotoFilter * photoFilter;                                                      //@synthesize photoFilter=_photoFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasHoursFilter; 
@property (nonatomic,retain) GEOPDHoursFilter * hoursFilter;                                                      //@synthesize hoursFilter=_hoursFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasTransitInfoFilter; 
@property (nonatomic,retain) GEOPDTransitInfoFilter * transitInfoFilter;                                          //@synthesize transitInfoFilter=_transitInfoFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasTransitScheduleFilter; 
@property (nonatomic,retain) GEOPDTransitScheduleFilter * transitScheduleFilter;                                  //@synthesize transitScheduleFilter=_transitScheduleFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasEtaFilter; 
@property (nonatomic,retain) GEOPDETAFilter * etaFilter;                                                          //@synthesize etaFilter=_etaFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasFlyoverFilter; 
@property (nonatomic,retain) GEOPDFlyoverFilter * flyoverFilter;                                                  //@synthesize flyoverFilter=_flyoverFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasRawAttributeFilter; 
@property (nonatomic,retain) GEOPDRawAttributeFilter * rawAttributeFilter;                                        //@synthesize rawAttributeFilter=_rawAttributeFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasAmenitiesFilter; 
@property (nonatomic,retain) GEOPDAmenitiesFilter * amenitiesFilter;                                              //@synthesize amenitiesFilter=_amenitiesFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasStyleAttributesFilter; 
@property (nonatomic,retain) GEOPDStyleAttributesFilter * styleAttributesFilter;                                  //@synthesize styleAttributesFilter=_styleAttributesFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasTransitIncidentFilter; 
@property (nonatomic,retain) GEOPDTransitIncidentFilter * transitIncidentFilter;                                  //@synthesize transitIncidentFilter=_transitIncidentFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasTextBlockFilter; 
@property (nonatomic,retain) GEOPDTextBlockFilter * textBlockFilter;                                              //@synthesize textBlockFilter=_textBlockFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasFactoidFilter; 
@property (nonatomic,retain) GEOPDFactoidFilter * factoidFilter;                                                  //@synthesize factoidFilter=_factoidFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasTransitAttributionFilter; 
@property (nonatomic,retain) GEOPDTransitAttributionFilter * transitAttributionFilter;                            //@synthesize transitAttributionFilter=_transitAttributionFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasBusinessClaimFilter; 
@property (nonatomic,retain) GEOPDBusinessClaimFilter * businessClaimFilter;                                      //@synthesize businessClaimFilter=_businessClaimFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasCaptionedPhotoFilter; 
@property (nonatomic,retain) GEOPDCaptionedPhotoFilter * captionedPhotoFilter;                                    //@synthesize captionedPhotoFilter=_captionedPhotoFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasTransitInfoSnippetFilter; 
@property (nonatomic,retain) GEOPDTransitInfoSnippetFilter * transitInfoSnippetFilter;                            //@synthesize transitInfoSnippetFilter=_transitInfoSnippetFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasExternalActionFilter; 
@property (nonatomic,retain) GEOPDExternalActionFilter * externalActionFilter;                                    //@synthesize externalActionFilter=_externalActionFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasResultSnippetFilter; 
@property (nonatomic,retain) GEOPDResultSnippetFilter * resultSnippetFilter;                                      //@synthesize resultSnippetFilter=_resultSnippetFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasAddressObjectFilter; 
@property (nonatomic,retain) GEOPDAddressObjectFilter * addressObjectFilter;                                      //@synthesize addressObjectFilter=_addressObjectFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasSimpleRestaurantMenuTextFilter; 
@property (nonatomic,retain) GEOPDSimpleRestaurantMenuTextFilter * simpleRestaurantMenuTextFilter;                //@synthesize simpleRestaurantMenuTextFilter=_simpleRestaurantMenuTextFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasRestaurantReservationLinkFilter; 
@property (nonatomic,retain) GEOPDRestaurantReservationLinkFilter * restaurantReservationLinkFilter;              //@synthesize restaurantReservationLinkFilter=_restaurantReservationLinkFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasSpatialLookupFilter; 
@property (nonatomic,retain) GEOPDSpatialLookupFilter * spatialLookupFilter;                                      //@synthesize spatialLookupFilter=_spatialLookupFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasTipFilter; 
@property (nonatomic,retain) GEOPDTipFilter * tipFilter;                                                          //@synthesize tipFilter=_tipFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasPlacecardUrlFilter; 
@property (nonatomic,retain) GEOPDPlacecardURLFilter * placecardUrlFilter;                                        //@synthesize placecardUrlFilter=_placecardUrlFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasAssociatedAppFilter; 
@property (nonatomic,retain) GEOPDAssociatedAppFilter * associatedAppFilter;                                      //@synthesize associatedAppFilter=_associatedAppFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasMessageLinkFilter; 
@property (nonatomic,retain) GEOPDMessageLinkFilter * messageLinkFilter;                                          //@synthesize messageLinkFilter=_messageLinkFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasQuickLinkFilter; 
@property (nonatomic,retain) GEOPDQuickLinkFilter * quickLinkFilter;                                              //@synthesize quickLinkFilter=_quickLinkFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasRapFilter; 
@property (nonatomic,retain) GEOPDRapFilter * rapFilter;                                                          //@synthesize rapFilter=_rapFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasLocationEventFilter; 
@property (nonatomic,retain) GEOPDLocationEventFilter * locationEventFilter;                                      //@synthesize locationEventFilter=_locationEventFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasVenueInfoFilter; 
@property (nonatomic,retain) GEOPDVenueInfoFilter * venueInfoFilter;                                              //@synthesize venueInfoFilter=_venueInfoFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasContainedPlaceFilter; 
@property (nonatomic,retain) GEOPDContainedPlaceFilter * containedPlaceFilter;                                    //@synthesize containedPlaceFilter=_containedPlaceFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasWifiFingerprintFilter; 
@property (nonatomic,retain) GEOPDWifiFingerprintFilter * wifiFingerprintFilter;                                  //@synthesize wifiFingerprintFilter=_wifiFingerprintFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasIconFilter; 
@property (nonatomic,retain) GEOPDIconFilter * iconFilter;                                                        //@synthesize iconFilter=_iconFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasPriceDescriptionFilter; 
@property (nonatomic,retain) GEOPDPriceDescriptionFilter * priceDescriptionFilter;                                //@synthesize priceDescriptionFilter=_priceDescriptionFilter - In the implementation block
@property (nonatomic,readonly) BOOL hasBrowseCategoriesFilter; 
@property (nonatomic,retain) GEOPDBrowseCategoriesFilter * browseCategoriesFilter;                                //@synthesize browseCategoriesFilter=_browseCategoriesFilter - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(GEOPDTransitScheduleFilter *)transitScheduleFilter;
-(void)setTransitScheduleFilter:(GEOPDTransitScheduleFilter *)arg1 ;
-(BOOL)hasTransitScheduleFilter;
-(BOOL)hasEntityFilter;
-(BOOL)hasPlaceInfoFilter;
-(BOOL)hasAccessInfoFilter;
-(BOOL)hasBoundsFilter;
-(BOOL)hasAddressFilter;
-(BOOL)hasRatingFilter;
-(BOOL)hasReviewFilter;
-(BOOL)hasPhotoFilter;
-(BOOL)hasHoursFilter;
-(BOOL)hasTransitInfoFilter;
-(BOOL)hasEtaFilter;
-(BOOL)hasFlyoverFilter;
-(BOOL)hasRawAttributeFilter;
-(BOOL)hasAmenitiesFilter;
-(BOOL)hasStyleAttributesFilter;
-(BOOL)hasTransitIncidentFilter;
-(BOOL)hasTextBlockFilter;
-(BOOL)hasFactoidFilter;
-(BOOL)hasTransitAttributionFilter;
-(BOOL)hasBusinessClaimFilter;
-(BOOL)hasCaptionedPhotoFilter;
-(BOOL)hasTransitInfoSnippetFilter;
-(BOOL)hasExternalActionFilter;
-(BOOL)hasResultSnippetFilter;
-(BOOL)hasAddressObjectFilter;
-(BOOL)hasSimpleRestaurantMenuTextFilter;
-(BOOL)hasRestaurantReservationLinkFilter;
-(BOOL)hasSpatialLookupFilter;
-(BOOL)hasTipFilter;
-(BOOL)hasPlacecardUrlFilter;
-(BOOL)hasAssociatedAppFilter;
-(BOOL)hasMessageLinkFilter;
-(BOOL)hasQuickLinkFilter;
-(BOOL)hasRapFilter;
-(BOOL)hasLocationEventFilter;
-(BOOL)hasVenueInfoFilter;
-(BOOL)hasContainedPlaceFilter;
-(BOOL)hasWifiFingerprintFilter;
-(BOOL)hasIconFilter;
-(BOOL)hasPriceDescriptionFilter;
-(BOOL)hasBrowseCategoriesFilter;
-(GEOPDEntityFilter *)entityFilter;
-(void)setEntityFilter:(GEOPDEntityFilter *)arg1 ;
-(GEOPDPlaceInfoFilter *)placeInfoFilter;
-(void)setPlaceInfoFilter:(GEOPDPlaceInfoFilter *)arg1 ;
-(GEOPDRoadAccessInfoFilter *)accessInfoFilter;
-(void)setAccessInfoFilter:(GEOPDRoadAccessInfoFilter *)arg1 ;
-(GEOPDBoundsFilter *)boundsFilter;
-(void)setBoundsFilter:(GEOPDBoundsFilter *)arg1 ;
-(GEOPDAddressFilter *)addressFilter;
-(void)setAddressFilter:(GEOPDAddressFilter *)arg1 ;
-(GEOPDRatingFilter *)ratingFilter;
-(void)setRatingFilter:(GEOPDRatingFilter *)arg1 ;
-(GEOPDReviewFilter *)reviewFilter;
-(void)setReviewFilter:(GEOPDReviewFilter *)arg1 ;
-(GEOPDPhotoFilter *)photoFilter;
-(void)setPhotoFilter:(GEOPDPhotoFilter *)arg1 ;
-(GEOPDHoursFilter *)hoursFilter;
-(void)setHoursFilter:(GEOPDHoursFilter *)arg1 ;
-(GEOPDTransitInfoFilter *)transitInfoFilter;
-(void)setTransitInfoFilter:(GEOPDTransitInfoFilter *)arg1 ;
-(GEOPDETAFilter *)etaFilter;
-(void)setEtaFilter:(GEOPDETAFilter *)arg1 ;
-(GEOPDFlyoverFilter *)flyoverFilter;
-(void)setFlyoverFilter:(GEOPDFlyoverFilter *)arg1 ;
-(GEOPDRawAttributeFilter *)rawAttributeFilter;
-(void)setRawAttributeFilter:(GEOPDRawAttributeFilter *)arg1 ;
-(GEOPDAmenitiesFilter *)amenitiesFilter;
-(void)setAmenitiesFilter:(GEOPDAmenitiesFilter *)arg1 ;
-(GEOPDStyleAttributesFilter *)styleAttributesFilter;
-(void)setStyleAttributesFilter:(GEOPDStyleAttributesFilter *)arg1 ;
-(GEOPDTransitIncidentFilter *)transitIncidentFilter;
-(void)setTransitIncidentFilter:(GEOPDTransitIncidentFilter *)arg1 ;
-(GEOPDTextBlockFilter *)textBlockFilter;
-(void)setTextBlockFilter:(GEOPDTextBlockFilter *)arg1 ;
-(GEOPDFactoidFilter *)factoidFilter;
-(void)setFactoidFilter:(GEOPDFactoidFilter *)arg1 ;
-(GEOPDTransitAttributionFilter *)transitAttributionFilter;
-(void)setTransitAttributionFilter:(GEOPDTransitAttributionFilter *)arg1 ;
-(GEOPDBusinessClaimFilter *)businessClaimFilter;
-(void)setBusinessClaimFilter:(GEOPDBusinessClaimFilter *)arg1 ;
-(GEOPDCaptionedPhotoFilter *)captionedPhotoFilter;
-(void)setCaptionedPhotoFilter:(GEOPDCaptionedPhotoFilter *)arg1 ;
-(GEOPDTransitInfoSnippetFilter *)transitInfoSnippetFilter;
-(void)setTransitInfoSnippetFilter:(GEOPDTransitInfoSnippetFilter *)arg1 ;
-(GEOPDExternalActionFilter *)externalActionFilter;
-(void)setExternalActionFilter:(GEOPDExternalActionFilter *)arg1 ;
-(GEOPDResultSnippetFilter *)resultSnippetFilter;
-(void)setResultSnippetFilter:(GEOPDResultSnippetFilter *)arg1 ;
-(GEOPDAddressObjectFilter *)addressObjectFilter;
-(void)setAddressObjectFilter:(GEOPDAddressObjectFilter *)arg1 ;
-(GEOPDSimpleRestaurantMenuTextFilter *)simpleRestaurantMenuTextFilter;
-(void)setSimpleRestaurantMenuTextFilter:(GEOPDSimpleRestaurantMenuTextFilter *)arg1 ;
-(GEOPDRestaurantReservationLinkFilter *)restaurantReservationLinkFilter;
-(void)setRestaurantReservationLinkFilter:(GEOPDRestaurantReservationLinkFilter *)arg1 ;
-(GEOPDSpatialLookupFilter *)spatialLookupFilter;
-(void)setSpatialLookupFilter:(GEOPDSpatialLookupFilter *)arg1 ;
-(GEOPDTipFilter *)tipFilter;
-(void)setTipFilter:(GEOPDTipFilter *)arg1 ;
-(GEOPDPlacecardURLFilter *)placecardUrlFilter;
-(void)setPlacecardUrlFilter:(GEOPDPlacecardURLFilter *)arg1 ;
-(GEOPDAssociatedAppFilter *)associatedAppFilter;
-(void)setAssociatedAppFilter:(GEOPDAssociatedAppFilter *)arg1 ;
-(GEOPDMessageLinkFilter *)messageLinkFilter;
-(void)setMessageLinkFilter:(GEOPDMessageLinkFilter *)arg1 ;
-(GEOPDQuickLinkFilter *)quickLinkFilter;
-(void)setQuickLinkFilter:(GEOPDQuickLinkFilter *)arg1 ;
-(GEOPDRapFilter *)rapFilter;
-(void)setRapFilter:(GEOPDRapFilter *)arg1 ;
-(GEOPDLocationEventFilter *)locationEventFilter;
-(void)setLocationEventFilter:(GEOPDLocationEventFilter *)arg1 ;
-(GEOPDVenueInfoFilter *)venueInfoFilter;
-(void)setVenueInfoFilter:(GEOPDVenueInfoFilter *)arg1 ;
-(GEOPDContainedPlaceFilter *)containedPlaceFilter;
-(void)setContainedPlaceFilter:(GEOPDContainedPlaceFilter *)arg1 ;
-(GEOPDWifiFingerprintFilter *)wifiFingerprintFilter;
-(void)setWifiFingerprintFilter:(GEOPDWifiFingerprintFilter *)arg1 ;
-(GEOPDIconFilter *)iconFilter;
-(void)setIconFilter:(GEOPDIconFilter *)arg1 ;
-(GEOPDPriceDescriptionFilter *)priceDescriptionFilter;
-(void)setPriceDescriptionFilter:(GEOPDPriceDescriptionFilter *)arg1 ;
-(GEOPDBrowseCategoriesFilter *)browseCategoriesFilter;
-(void)setBrowseCategoriesFilter:(GEOPDBrowseCategoriesFilter *)arg1 ;
-(id)initEntityFilterWithSpokenNames;
-(id)initPhotoFilterWithTraits:(id)arg1 ;
-(id)initCaptionedPhotoFilterWithTraits:(id)arg1 ;
-(id)initRestaurantReservationLinkFilterWithTraits:(id)arg1 ;
-(id)initResultSnippetFilterWithTraits:(id)arg1 ;
-(id)initReviewUserPhotoFilterWithTraits:(id)arg1 ;
-(id)initTipUserPhotoFilterWithTraits:(id)arg1 ;
-(id)initTransitScheduleFilterWithTraits:(id)arg1 ;
-(id)initAddressObjectFilterWithLibraryVersion:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

