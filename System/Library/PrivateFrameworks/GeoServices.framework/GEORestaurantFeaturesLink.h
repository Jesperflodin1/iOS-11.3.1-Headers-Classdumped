/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:27 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOPDRestaurantReservationLink, NSMapTable, NSArray;

@interface GEORestaurantFeaturesLink : NSObject {

	GEOPDRestaurantReservationLink* _restaurantReservationLink;
	NSMapTable* _attributionMap;

}

@property (nonatomic,retain) GEOPDRestaurantReservationLink * restaurantReservationLink;              //@synthesize restaurantReservationLink=_restaurantReservationLink - In the implementation block
@property (nonatomic,readonly) BOOL hasFeatures; 
@property (nonatomic,readonly) NSArray * featureProviders; 
@property (nonatomic,readonly) NSArray * featureTypes; 
-(id)initWithRestaurantReservationLink:(id)arg1 attributionMap:(id)arg2 ;
-(BOOL)hasFeatures;
-(NSArray *)featureProviders;
-(id)applicationsForVendorID:(id)arg1 ;
-(id)displayNameForVendorID:(id)arg1 ;
-(unsigned long long)extensionModeForVendorID:(id)arg1 ;
-(NSArray *)featureTypes;
-(GEOPDRestaurantReservationLink *)restaurantReservationLink;
-(void)setRestaurantReservationLink:(GEOPDRestaurantReservationLink *)arg1 ;
@end

