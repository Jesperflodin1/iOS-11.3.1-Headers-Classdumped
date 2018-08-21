/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID, GEOGuidanceEvent, GEOComposedRoute, NSMutableArray, GEOJunction, GEOComposedRouteStep, NSArray, GEONameInfo, NSString;

@interface GEOComposedGuidanceEvent : NSObject {

	NSUUID* _uniqueID;
	unsigned long long _creationOrder;
	GEOGuidanceEvent* _guidanceEvent;
	GEOComposedRoute* _route;
	unsigned long long _source;
	unsigned long long _stepIndex;
	unsigned long long _enrouteNoticeIndex;
	unsigned long long _sourceIndex;
	BOOL _clampToStep;
	NSMutableArray* _lanes;
	double _startValidDistance;
	double _endValidDistance;
	double _referencePointDistance;
	double _distanceForStrings;
	GEOJunction* _maneuverJunction;

}

@property (nonatomic,retain) GEOGuidanceEvent * guidanceEvent;                          //@synthesize guidanceEvent=_guidanceEvent - In the implementation block
@property (nonatomic,readonly) NSUUID * uniqueID;                                       //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,readonly) GEOComposedRouteStep * step; 
@property (nonatomic,readonly) unsigned long long source; 
@property (nonatomic,readonly) unsigned long long enrouteNoticeIndex;                   //@synthesize enrouteNoticeIndex=_enrouteNoticeIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long sourceIndex; 
@property (nonatomic,readonly) BOOL hasSignGuidance; 
@property (nonatomic,readonly) BOOL hasSpokenGuidance; 
@property (nonatomic,readonly) unsigned long long stackRanking; 
@property (nonatomic,readonly) NSArray * signTitles; 
@property (nonatomic,readonly) NSArray * signDetails; 
@property (nonatomic,readonly) GEONameInfo * shieldInfo; 
@property (nonatomic,readonly) int maneuverArrow; 
@property (nonatomic,readonly) int drivingSide; 
@property (nonatomic,readonly) GEOJunction * maneuverJunction; 
@property (nonatomic,readonly) NSString * exclusiveSetIdentifier; 
@property (nonatomic,readonly) NSArray * announcements; 
@property (nonatomic,readonly) double repetitionInterval; 
@property (nonatomic,readonly) BOOL hasHaptics; 
@property (nonatomic,readonly) BOOL isSticky; 
@property (nonatomic,readonly) NSArray * lanes; 
@property (nonatomic,readonly) NSArray * laneInstructions; 
@property (nonatomic,readonly) int composedGuidanceEventType; 
@property (nonatomic,readonly) BOOL isLaneGuidanceForManeuver; 
@property (nonatomic,readonly) unsigned long long numChainedAnnouncements; 
@property (nonatomic,readonly) double startValidDistance;                               //@synthesize startValidDistance=_startValidDistance - In the implementation block
@property (nonatomic,readonly) double endValidDistance;                                 //@synthesize endValidDistance=_endValidDistance - In the implementation block
@property (nonatomic,readonly) double referencePointDistance;                           //@synthesize referencePointDistance=_referencePointDistance - In the implementation block
@property (nonatomic,readonly) double distanceForStrings;                               //@synthesize distanceForStrings=_distanceForStrings - In the implementation block
-(NSArray *)announcements;
-(id)initWithGuidanceEvent:(id)arg1 stepIndex:(unsigned long long)arg2 composedRoute:(id)arg3 clampToStep:(BOOL)arg4 ;
-(int)drivingSide;
-(BOOL)_MapsCarPlay_isEqual:(id)arg1 ;
-(GEOComposedRouteStep *)step;
-(BOOL)_needsLazyInit;
-(void)_lazyInit;
-(void)_findSource;
-(unsigned long long)sourceIndex;
-(BOOL)hasSignGuidance;
-(BOOL)hasSpokenGuidance;
-(unsigned long long)stackRanking;
-(NSArray *)signTitles;
-(NSArray *)signDetails;
-(GEONameInfo *)shieldInfo;
-(int)maneuverArrow;
-(GEOJunction *)maneuverJunction;
-(NSString *)exclusiveSetIdentifier;
-(double)repetitionInterval;
-(BOOL)hasHaptics;
-(BOOL)isSticky;
-(NSArray *)lanes;
-(NSArray *)laneInstructions;
-(int)composedGuidanceEventType;
-(BOOL)isLaneGuidanceForManeuver;
-(unsigned long long)numChainedAnnouncements;
-(double)startValidDistance;
-(double)endValidDistance;
-(BOOL)isValidForSpeed:(double)arg1 ;
-(double)startDistanceForSpeed:(double)arg1 ;
-(double)endDistanceForSpeed:(double)arg1 ;
-(double)triggerDistanceForSpeed:(double)arg1 andDuration:(/*^block*/id)arg2 ;
-(double)desiredTimeGapToEvent:(id)arg1 chained:(BOOL)arg2 ;
-(long long)compareFactoringInSpeed:(id)arg1 speed:(double)arg2 ;
-(NSUUID *)uniqueID;
-(GEOGuidanceEvent *)guidanceEvent;
-(void)setGuidanceEvent:(GEOGuidanceEvent *)arg1 ;
-(unsigned long long)enrouteNoticeIndex;
-(double)referencePointDistance;
-(double)distanceForStrings;
-(id)description;
-(long long)compare:(id)arg1 ;
-(unsigned long long)source;
-(long long)comparePriority:(id)arg1 ;
@end

