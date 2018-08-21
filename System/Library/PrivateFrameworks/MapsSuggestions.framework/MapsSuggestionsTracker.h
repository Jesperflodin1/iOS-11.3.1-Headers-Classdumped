/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:53 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSuggestions/MapsSuggestions-Structs.h>
#import <MapsSuggestions/MapsSuggestionsObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, MapsSuggestionsManager, NSMutableDictionary, GEOLocationShifter, GEOAutomobileOptions, CLLocation, GEOComposedWaypoint, MapsSuggestionsMutableWeakEntries, NSString;

@interface MapsSuggestionsTracker : NSObject <MapsSuggestionsObject> {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _refreshTimer;
	double _refreshInterval;
	double _refreshDeferTime;
	int _transportType;
	MapsSuggestionsManager* _manager;
	NSMutableDictionary* _waypoints;
	GEOLocationShifter* _locationShifter;
	NSMutableDictionary* _etaTitleFormatters;
	NSMutableDictionary* _distanceTitleFormatters;
	BOOL _shouldBeRunning;
	int _mapType;
	GEOAutomobileOptions* _automobileOptions;
	CLLocation* _currentLocation;
	GEOComposedWaypoint* _currentLocationWaypoint;
	MapsSuggestionsMutableWeakEntries* _trackedEntries;

}

@property (retain) CLLocation * currentLocation;                                              //@synthesize currentLocation=_currentLocation - In the implementation block
@property (retain) GEOComposedWaypoint * currentLocationWaypoint;                             //@synthesize currentLocationWaypoint=_currentLocationWaypoint - In the implementation block
@property (nonatomic,retain) MapsSuggestionsMutableWeakEntries * trackedEntries;              //@synthesize trackedEntries=_trackedEntries - In the implementation block
@property (assign,nonatomic) int mapType;                                                     //@synthesize mapType=_mapType - In the implementation block
@property (nonatomic,retain) GEOAutomobileOptions * automobileOptions;                        //@synthesize automobileOptions=_automobileOptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName; 
+(BOOL)_isLocationShiftRequiredForLocation:(id)arg1 ;
-(id)initWithManager:(id)arg1 ;
-(void)setMapType:(int)arg1 ;
-(int)mapType;
-(CLLocation *)currentLocation;
-(void)setCurrentLocation:(CLLocation *)arg1 ;
-(GEOAutomobileOptions *)automobileOptions;
-(void)setAutomobileOptions:(GEOAutomobileOptions *)arg1 ;
-(void)dealloc;
-(void)unschedule;
-(id)location;
-(void)setLocation:(id)arg1 ;
-(NSString *)uniqueName;
-(void)_prepareShiftForLocation:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 withShiftRequestBlock:(/*^block*/id)arg3 ;
-(void)setTitleFormatter:(id)arg1 forType:(unsigned long long)arg2 ;
-(BOOL)_hasTitleFormatterForType:(unsigned long long)arg1 ;
-(id)_etaTitleFormatterForType:(unsigned long long)arg1 ;
-(id)_distanceTitleFormatterForType:(unsigned long long)arg1 ;
-(void)trackSuggestionEntries:(NSArray*)arg1 transportType:(int)arg2 ;
-(BOOL)_keepExistingWaypointsForTrackedEntries:(NSArray*)arg1 ;
-(BOOL)_requestWaypointForMapsSuggestionsEntry:(id)arg1 dispatchGroup:(id)arg2 ;
-(BOOL)_requestWaypointForCurrentLocation:(id)arg1 dispatchGroup:(id)arg2 ;
-(BOOL)_requestAllRequiredWaypoints;
-(void)_requestETAs;
-(id)_transportTypesForDestinationEntries:(id)arg1 ;
-(void)_decorateEntry:(id)arg1 eta:(double)arg2 trafficString:(id)arg3 ;
-(void)_requestDistances;
-(void)_determineTransportTypeFromOrigin:(id)arg1 withMapsSuggestionsEntry:(id)arg2 andCompletion:(/*^block*/id)arg3 ;
-(void)_scheduleRefreshIfCurrentLocationIsMuchBetterThanLocation:(id)arg1 ;
-(void)_scheduleRefresh;
-(void)scheduleRefresh;
-(void)_unschedule;
-(void)_shiftLocation:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 callbackQueue:(id)arg3 ;
-(GEOComposedWaypoint *)currentLocationWaypoint;
-(void)setCurrentLocationWaypoint:(GEOComposedWaypoint *)arg1 ;
-(MapsSuggestionsMutableWeakEntries *)trackedEntries;
-(void)setTrackedEntries:(MapsSuggestionsMutableWeakEntries *)arg1 ;
-(void)_refresh;
@end

