/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:32 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEODirectionsRequest, GEODirectionsResponse, GEORouteSet, NSArray, NSMutableDictionary, NSMutableArray, GEOComposedRoute, NSDictionary;

@interface GEORouteSetPage : NSObject {

	GEODirectionsRequest* _request;
	GEODirectionsResponse* _response;
	GEORouteSet* _routeSet;
	NSArray* _routes;
	NSArray* _routesAndContingencies;
	NSMutableDictionary* _composedRoutesDict;
	NSMutableDictionary* _routesDict;
	NSMutableDictionary* _constructedRouteDict;
	NSMutableDictionary* _routeConnectionTable;
	NSMutableDictionary* _routeUniquePointRangeDict;
	NSMutableDictionary* _alternateStartRoutesLookup;
	NSMutableArray* _contingentStartRoutes;
	NSMutableArray* _contingentMiddleRoutes;
	NSMutableArray* _contingentRoutes;
	GEOComposedRoute* _preferredRoute;
	BOOL _isNavigable;
	BOOL _lazyLoadingEnabled;
	long long _selectedRouteIndex;

}

@property (nonatomic,readonly) BOOL isNavigable;                                       //@synthesize isNavigable=_isNavigable - In the implementation block
@property (nonatomic,readonly) GEODirectionsRequest * request;                         //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) GEODirectionsResponse * response;                       //@synthesize response=_response - In the implementation block
@property (assign,nonatomic,__weak) GEORouteSet * routeSet;                            //@synthesize routeSet=_routeSet - In the implementation block
@property (nonatomic,readonly) NSArray * routes;                                       //@synthesize routes=_routes - In the implementation block
@property (nonatomic,readonly) NSArray * routesAndContingencies; 
@property (nonatomic,readonly) NSDictionary * alternateStartRoutesLookup; 
@property (nonatomic,__weak,readonly) GEOComposedRoute * preferredRoute;               //@synthesize preferredRoute=_preferredRoute - In the implementation block
-(BOOL)isNavigable;
-(NSArray *)routes;
-(GEORouteSet *)routeSet;
-(void)setRouteSet:(GEORouteSet *)arg1 ;
-(id)initWithRequest:(id)arg1 response:(id)arg2 routeSet:(id)arg3 shouldLazyLoad:(BOOL)arg4 selectedRouteIndex:(long long)arg5 ;
-(id)initWithReroute:(id)arg1 request:(id)arg2 response:(id)arg3 shouldLazyLoad:(BOOL)arg4 ;
-(id)_lazyRoutesAtIndex:(unsigned long long)arg1 partial:(BOOL)arg2 ;
-(id)routeAndPartialLazyContingenciesAtIndex:(unsigned long long)arg1 ;
-(id)routeAndFullLazyContingenciesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfFullRoute:(id)arg1 ;
-(void)_setupTransitRoutesForResponse:(id)arg1 ;
-(void)_setupDriveWalkRoutesForResponse:(id)arg1 ;
-(void)_buildAllRouteTypes:(id)arg1 ;
-(void)_stitchRoutesFromArray:(id)arg1 addToRoutes:(id)arg2 includeDepartureRoutes:(BOOL)arg3 ;
-(void)_attachAlternateStartRoute:(id)arg1 toRouteID:(id)arg2 ;
-(void)_debugAddGuidanceEventsForRoute:(id)arg1 response:(id)arg2 ;
-(id)_composedRouteForRoute:(id)arg1 ;
-(NSArray *)routesAndContingencies;
-(NSDictionary *)alternateStartRoutesLookup;
-(void)_createAlternateStartRoutesLookup;
-(GEOComposedRoute *)preferredRoute;
-(GEODirectionsResponse *)response;
-(GEODirectionsRequest *)request;
@end

