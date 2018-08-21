/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MNTracePlayerSchedulerDelegate.h>
#import <libobjc.A.dylib/MNTimeProvider.h>

@class MNTrace, NSHashTable, MNTracePlayerScheduler, MNTracePlayerTimelineStream, MNLocation, MNTracePlayerETAUpdater, NSDate, NSData, GEOETAUpdater, NSString;

@interface MNTracePlayer : NSObject <MNTracePlayerSchedulerDelegate, MNTimeProvider> {

	MNTrace* _trace;
	double _traceStartTimestamp;
	NSHashTable* _observers;
	MNTracePlayerScheduler* _scheduler;
	MNTracePlayerTimelineStream* _locationStream;
	MNLocation* _lastReportedLocation;
	BOOL _isPlaying;
	BOOL _isPaused;
	double _duration;
	int _mainTransportType;
	double _speedMultiplier;
	BOOL _forceDirectionsResponsesFromTrace;
	MNTracePlayerTimelineStream* _directionsStream;
	BOOL _shouldPlayETARequests;
	MNTracePlayerETAUpdater* _etaUpdater;
	MNTracePlayerTimelineStream* _etaUpdatesStream;

}

@property (nonatomic,readonly) MNTrace * trace;                                    //@synthesize trace=_trace - In the implementation block
@property (nonatomic,readonly) BOOL isPlaying;                                     //@synthesize isPlaying=_isPlaying - In the implementation block
@property (nonatomic,readonly) BOOL isPaused;                                      //@synthesize isPaused=_isPaused - In the implementation block
@property (nonatomic,readonly) double position; 
@property (nonatomic,readonly) double duration;                                    //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) int mainTransportType;                              //@synthesize mainTransportType=_mainTransportType - In the implementation block
@property (nonatomic,readonly) NSDate * currentLocationDate; 
@property (nonatomic,readonly) NSData * selectedRouteID; 
@property (nonatomic,readonly) unsigned long long selectedRouteIndex; 
@property (assign,nonatomic) double speedMultiplier;                               //@synthesize speedMultiplier=_speedMultiplier - In the implementation block
@property (assign,nonatomic) BOOL shouldPlayETARequests;                           //@synthesize shouldPlayETARequests=_shouldPlayETARequests - In the implementation block
@property (nonatomic,readonly) GEOETAUpdater * etaUpdater;                         //@synthesize etaUpdater=_etaUpdater - In the implementation block
@property (assign,nonatomic) BOOL forceDirectionsResponsesFromTrace;               //@synthesize forceDirectionsResponsesFromTrace=_forceDirectionsResponsesFromTrace - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double currentTime; 
-(unsigned long long)selectedRouteIndex;
-(int)mainTransportType;
-(void)dealloc;
-(double)duration;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(double)position;
-(void)stop;
-(void)start;
-(void)resume;
-(double)currentTime;
-(BOOL)isPlaying;
-(id)initWithPath:(id)arg1 ;
-(void)pause;
-(BOOL)isPaused;
-(MNTrace *)trace;
-(double)speedMultiplier;
-(void)setSpeedMultiplier:(double)arg1 ;
-(id)initWithTrace:(id)arg1 ;
-(void)tracePlayerScheduler:(id)arg1 didUpdatePosition:(double)arg2 ;
-(id)initWithPath:(id)arg1 outError:(id*)arg2 ;
-(void)startAtLocationIndex:(unsigned long long)arg1 ;
-(BOOL)requestDirectionsWithHandler:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(BOOL)requestDirectionsNearTimestamp:(double)arg1 withHandler:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(void)jumpToTime:(double)arg1 ;
-(void)jumpToLocationAtIndex:(unsigned long long)arg1 ;
-(void)skipByTimeInterval:(double)arg1 ;
-(void)jumpToBookmarkAtIndex:(unsigned long long)arg1 ;
-(NSDate *)currentLocationDate;
-(NSData *)selectedRouteID;
-(void)_createTimelineStreams;
-(void)setShouldPlayETARequests:(BOOL)arg1 ;
-(void)setForceDirectionsResponsesFromTrace:(BOOL)arg1 ;
-(double)_responseTimeForRequestAtIndex:(unsigned long long)arg1 ;
-(id)_locationWithCurrentDate:(id)arg1 ;
-(BOOL)shouldPlayETARequests;
-(GEOETAUpdater *)etaUpdater;
-(BOOL)forceDirectionsResponsesFromTrace;
@end

