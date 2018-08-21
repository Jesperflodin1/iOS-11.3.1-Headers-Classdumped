/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:35 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSMutableArray, GEODirectionsRequest, GEODirectionsResponse, GEOComposedRoute, NSSet;

@interface GEORouteSet : NSObject <NSSecureCoding> {

	NSArray* _waypoints;
	int _mainTransportType;
	NSMutableArray* _pages;
	GEODirectionsRequest* _originalRequest;
	GEODirectionsResponse* _originalResponse;
	GEODirectionsRequest* _lastRerouteRequest;
	GEODirectionsResponse* _lastRerouteResponse;
	NSMutableArray* _routes;
	NSMutableArray* _routesAndContingencies;
	GEOComposedRoute* _preferredRoute;
	NSMutableArray* _advisoryNotices;
	NSMutableArray* _incidentsOffRoute;
	NSSet* _supportedTransportTypesForSubsequentRequests;
	BOOL _lazyLoad;
	long long _selectedRouteIndex;

}

@property (nonatomic,readonly) NSArray * waypoints;                                               //@synthesize waypoints=_waypoints - In the implementation block
@property (nonatomic,readonly) int mainTransportType;                                             //@synthesize mainTransportType=_mainTransportType - In the implementation block
@property (nonatomic,readonly) NSArray * routes;                                                  //@synthesize routes=_routes - In the implementation block
@property (nonatomic,readonly) NSArray * routesAndContingencies;                                  //@synthesize routesAndContingencies=_routesAndContingencies - In the implementation block
@property (nonatomic,readonly) GEOComposedRoute * preferredRoute;                                 //@synthesize preferredRoute=_preferredRoute - In the implementation block
@property (nonatomic,readonly) NSArray * incidentsOffRoute;                                       //@synthesize incidentsOffRoute=_incidentsOffRoute - In the implementation block
@property (nonatomic,readonly) NSSet * supportedTransportTypesForSubsequentRequests; 
@property (nonatomic,readonly) GEODirectionsRequest * originalRequest;                            //@synthesize originalRequest=_originalRequest - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)routes;
-(int)mainTransportType;
-(unsigned long long)indexOfSuggestedRoute:(id)arg1 ;
-(NSArray *)waypoints;
-(id)directionsResponseID:(id)arg1 ;
-(BOOL)isNavigable:(id)arg1 ;
-(id)styleAttributes:(id)arg1 ;
-(id)routeAttributes:(id)arg1 ;
-(GEODirectionsRequest *)originalRequest;
-(id)requestForRoute:(id)arg1 ;
-(id)responseForRoute:(id)arg1 ;
-(void)addRoutesForRequest:(id)arg1 response:(id)arg2 ;
-(NSArray *)routesAndContingencies;
-(GEOComposedRoute *)preferredRoute;
-(id)partialRouteAtIndex:(unsigned long long)arg1 ;
-(double)requestTime:(id)arg1 ;
-(id)initWithWaypoints:(id)arg1 transport:(int)arg2 lazyLoad:(BOOL)arg3 selectedRouteIndex:(long long)arg4 ;
-(void)_clearRoutes;
-(void)addRouteForReroute:(id)arg1 request:(id)arg2 response:(id)arg3 ;
-(void)_updatePage:(id)arg1 ;
-(void)_appendNewPage:(id)arg1 ;
-(void)_prependNewPage:(id)arg1 ;
-(id)_pageForRoute:(id)arg1 ;
-(id)transitOptions:(id)arg1 ;
-(id)fullRouteAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfRouteInLazyRoutes:(id)arg1 ;
-(id)alternateStartRoutesLookup:(id)arg1 ;
-(id)displayHints:(id)arg1 ;
-(NSSet *)supportedTransportTypesForSubsequentRequests;
-(NSArray *)incidentsOffRoute;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

