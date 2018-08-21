/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:33 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOLocation, NSData, GEOLatLng, NSArray;

@interface GEOCompanionRouteStatus : PBCodable <NSCopying> {

	SCD_Struct_GE20* _selectedRideIndexs;
	double _timestamp;
	unsigned _distanceRemainingOnRoute;
	unsigned _distanceToManeuver;
	unsigned _distanceToRoute;
	int _feedbackType;
	int _hapticsType;
	GEOLocation* _location;
	unsigned _remainingTime;
	NSData* _routeID;
	unsigned _routeLocationIndex;
	float _routeLocationOffset;
	GEOLatLng* _routeMatchCoordinate;
	unsigned _stepID;
	BOOL _guidancePromptsEnabled;
	BOOL _lowGuidanceNavigation;
	SCD_Struct_GE18 _has;

}

@property (nonatomic,readonly) BOOL isNavigating; 
@property (nonatomic,readonly) BOOL isRecalculating; 
@property (nonatomic,readonly) BOOL hasEffectiveStepID; 
@property (nonatomic,readonly) unsigned effectiveStepID; 
@property (nonatomic,readonly) BOOL hasEffectiveDistanceToManeuver; 
@property (nonatomic,readonly) unsigned effectiveDistanceToManeuver; 
@property (nonatomic,readonly) NSArray * selectedRideIndices; 
@property (assign,nonatomic) BOOL hasFeedbackType; 
@property (assign,nonatomic) int feedbackType;                                          //@synthesize feedbackType=_feedbackType - In the implementation block
@property (assign,nonatomic) BOOL hasStepID; 
@property (assign,nonatomic) unsigned stepID;                                           //@synthesize stepID=_stepID - In the implementation block
@property (assign,nonatomic) BOOL hasDistanceToManeuver; 
@property (assign,nonatomic) unsigned distanceToManeuver;                               //@synthesize distanceToManeuver=_distanceToManeuver - In the implementation block
@property (assign,nonatomic) BOOL hasDistanceToRoute; 
@property (assign,nonatomic) unsigned distanceToRoute;                                  //@synthesize distanceToRoute=_distanceToRoute - In the implementation block
@property (assign,nonatomic) BOOL hasDistanceRemainingOnRoute; 
@property (assign,nonatomic) unsigned distanceRemainingOnRoute;                         //@synthesize distanceRemainingOnRoute=_distanceRemainingOnRoute - In the implementation block
@property (assign,nonatomic) BOOL hasRemainingTime; 
@property (assign,nonatomic) unsigned remainingTime;                                    //@synthesize remainingTime=_remainingTime - In the implementation block
@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain) GEOLocation * location;                                    //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) BOOL hasRouteLocationIndex; 
@property (assign,nonatomic) unsigned routeLocationIndex;                               //@synthesize routeLocationIndex=_routeLocationIndex - In the implementation block
@property (assign,nonatomic) BOOL hasRouteLocationOffset; 
@property (assign,nonatomic) float routeLocationOffset;                                 //@synthesize routeLocationOffset=_routeLocationOffset - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp;                                          //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasRouteMatchCoordinate; 
@property (nonatomic,retain) GEOLatLng * routeMatchCoordinate;                          //@synthesize routeMatchCoordinate=_routeMatchCoordinate - In the implementation block
@property (nonatomic,readonly) BOOL hasRouteID; 
@property (nonatomic,retain) NSData * routeID;                                          //@synthesize routeID=_routeID - In the implementation block
@property (assign,nonatomic) BOOL hasGuidancePromptsEnabled; 
@property (assign,nonatomic) BOOL guidancePromptsEnabled;                               //@synthesize guidancePromptsEnabled=_guidancePromptsEnabled - In the implementation block
@property (nonatomic,readonly) unsigned long long selectedRideIndexsCount; 
@property (nonatomic,readonly) unsigned* selectedRideIndexs; 
@property (assign,nonatomic) BOOL hasLowGuidanceNavigation; 
@property (assign,nonatomic) BOOL lowGuidanceNavigation;                                //@synthesize lowGuidanceNavigation=_lowGuidanceNavigation - In the implementation block
@property (assign,nonatomic) BOOL hasHapticsType; 
@property (assign,nonatomic) int hapticsType;                                           //@synthesize hapticsType=_hapticsType - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasRouteID;
-(NSData *)routeID;
-(void)setRouteID:(NSData *)arg1 ;
-(BOOL)hasLocation;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setStepID:(unsigned)arg1 ;
-(void)setHasStepID:(BOOL)arg1 ;
-(BOOL)hasStepID;
-(unsigned)stepID;
-(void)setGuidancePromptsEnabled:(BOOL)arg1 ;
-(BOOL)hasFeedbackType;
-(void)setHapticsType:(int)arg1 ;
-(BOOL)hasHapticsType;
-(void)updateFeedbackWithNavigationState:(int)arg1 locationUnreliable:(BOOL)arg2 announcementStage:(unsigned long long)arg3 nextAnnouncementStage:(unsigned long long)arg4 nextAnnouncementTime:(double)arg5 ;
-(void)setLowGuidanceNavigation:(BOOL)arg1 ;
-(void)setRemainingTime:(unsigned)arg1 ;
-(void)setDistanceRemainingOnRoute:(unsigned)arg1 ;
-(void)setDistanceToManeuver:(unsigned)arg1 ;
-(void)updateClusteredSectionSelectedRideIndicesFromRoute:(id)arg1 routeID:(id)arg2 ;
-(void)setFeedbackType:(int)arg1 ;
-(void)setRouteMatchCoordinate:(GEOLatLng *)arg1 ;
-(void)setDistanceToRoute:(unsigned)arg1 ;
-(void)setRouteLocationOffset:(float)arg1 ;
-(void)setRouteLocationIndex:(unsigned)arg1 ;
-(int)feedbackType;
-(id)initWithRoute:(id)arg1 routeID:(id)arg2 ;
-(void)setHasDistanceToManeuver:(BOOL)arg1 ;
-(BOOL)hasDistanceToManeuver;
-(unsigned)distanceToManeuver;
-(void)setHasFeedbackType:(BOOL)arg1 ;
-(id)feedbackTypeAsString:(int)arg1 ;
-(int)StringAsFeedbackType:(id)arg1 ;
-(void)_updateClusteredSectionSelectedRideIndicesFromRoute:(id)arg1 ;
-(void)setHasDistanceToRoute:(BOOL)arg1 ;
-(void)clearSelectedRideIndexs;
-(void)addSelectedRideIndex:(unsigned)arg1 ;
-(unsigned)effectiveStepID;
-(BOOL)hasDistanceToRoute;
-(unsigned)distanceToRoute;
-(unsigned long long)selectedRideIndexsCount;
-(unsigned)selectedRideIndexAtIndex:(unsigned long long)arg1 ;
-(id)initWithRouteID:(id)arg1 ;
-(void)updateWithRoute:(id)arg1 routeID:(id)arg2 ;
-(BOOL)isNavigating;
-(BOOL)isRecalculating;
-(BOOL)hasEffectiveStepID;
-(unsigned)effectiveStepIDInRoute:(id)arg1 ;
-(BOOL)hasEffectiveDistanceToManeuver;
-(unsigned)effectiveDistanceToManeuver;
-(NSArray *)selectedRideIndices;
-(BOOL)hasRouteLocationIndex;
-(BOOL)hasRouteLocationOffset;
-(unsigned)routeLocationIndex;
-(float)routeLocationOffset;
-(void)setHasDistanceRemainingOnRoute:(BOOL)arg1 ;
-(BOOL)hasDistanceRemainingOnRoute;
-(void)setHasRemainingTime:(BOOL)arg1 ;
-(BOOL)hasRemainingTime;
-(void)setHasRouteLocationIndex:(BOOL)arg1 ;
-(void)setHasRouteLocationOffset:(BOOL)arg1 ;
-(BOOL)hasRouteMatchCoordinate;
-(void)setHasGuidancePromptsEnabled:(BOOL)arg1 ;
-(BOOL)hasGuidancePromptsEnabled;
-(unsigned*)selectedRideIndexs;
-(void)setSelectedRideIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setHasLowGuidanceNavigation:(BOOL)arg1 ;
-(BOOL)hasLowGuidanceNavigation;
-(int)hapticsType;
-(void)setHasHapticsType:(BOOL)arg1 ;
-(id)hapticsTypeAsString:(int)arg1 ;
-(int)StringAsHapticsType:(id)arg1 ;
-(unsigned)distanceRemainingOnRoute;
-(unsigned)remainingTime;
-(GEOLatLng *)routeMatchCoordinate;
-(BOOL)guidancePromptsEnabled;
-(BOOL)lowGuidanceNavigation;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(GEOLocation *)location;
-(void)setLocation:(GEOLocation *)arg1 ;
@end

