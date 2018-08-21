/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MapKit/MapKit-Structs.h>
@class NSMutableDictionary, MKDirections, MKMapItem, GEOAutomobileOptions, GEOTransitOptions;

@interface _MKRouteETAFetcher : NSObject {

	NSMutableDictionary* _etaResults;
	CLLocationCoordinate2D _lastUpdatedETAOriginCoordinate;
	double _lastUpdatedETATime;
	double _lastRequestTime;
	MKDirections* _inProgressETAUpdate;
	BOOL _lastETAUpdateHadError;
	double _staleDistance;
	double _staleTimeInterval;
	BOOL _optionsHaveChangedSinceLastUpdate;
	MKMapItem* _mapItem;
	MKMapItem* _originMapItem;
	GEOAutomobileOptions* _automobileOptions;
	GEOTransitOptions* _transitOptions;

}

@property (nonatomic,copy) GEOAutomobileOptions * automobileOptions;                      //@synthesize automobileOptions=_automobileOptions - In the implementation block
@property (nonatomic,copy) GEOTransitOptions * transitOptions;                            //@synthesize transitOptions=_transitOptions - In the implementation block
@property (nonatomic,retain) MKMapItem * mapItem;                                         //@synthesize mapItem=_mapItem - In the implementation block
@property (nonatomic,retain) MKMapItem * originMapItem;                                   //@synthesize originMapItem=_originMapItem - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * etaResults;                          //@synthesize etaResults=_etaResults - In the implementation block
@property (nonatomic,readonly) CLLocationCoordinate2D originCoordinate; 
@property (nonatomic,readonly) CLLocationCoordinate2D destinationCoordinate; 
-(MKMapItem *)mapItem;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(GEOAutomobileOptions *)automobileOptions;
-(void)setAutomobileOptions:(GEOAutomobileOptions *)arg1 ;
-(GEOTransitOptions *)transitOptions;
-(void)setTransitOptions:(GEOTransitOptions *)arg1 ;
-(NSMutableDictionary *)etaResults;
-(id)init;
-(void)dealloc;
-(void)setOriginMapItem:(MKMapItem *)arg1 ;
-(id)routeETAForTransportType:(unsigned long long)arg1 ;
-(void)requestNewETAForTransportType:(unsigned long long)arg1 additionalTransportTypes:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isUsingCurrentLocationForOrigin;
-(CLLocationCoordinate2D)originCoordinate;
-(CLLocationCoordinate2D)destinationCoordinate;
-(BOOL)shouldUpdateEstimatedTravelTimeForNewOrigin:(CLLocationCoordinate2D)arg1 ;
-(void)expireETAsIfNoLongerValid;
-(BOOL)isValidETA:(id)arg1 ;
-(void)invalidateETAForTransportType:(unsigned long long)arg1 ;
-(void)_didUpdateETAResult;
-(MKMapItem *)originMapItem;
-(void)_resetState;
@end

