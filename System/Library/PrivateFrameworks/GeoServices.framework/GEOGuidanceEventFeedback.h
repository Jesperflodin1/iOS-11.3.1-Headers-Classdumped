/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:29 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, GEOSignGuidanceFeedback, GEOSpokenGuidanceFeedback;

@interface GEOGuidanceEventFeedback : PBCodable <NSCopying> {

	float _distanceToManeuver;
	float _duration;
	unsigned _enrouteNoticeIndex;
	unsigned _eventIndex;
	NSData* _routeID;
	GEOSignGuidanceFeedback* _signGuidanceFeedback;
	GEOSpokenGuidanceFeedback* _spokenGuidanceFeedback;
	unsigned _stepID;
	float _timeToManeuver;
	int _trafficSpeed;
	float _vehicleSpeed;
	SCD_Struct_GE60 _has;

}

@property (nonatomic,readonly) BOOL hasRouteID; 
@property (nonatomic,retain) NSData * routeID;                                                //@synthesize routeID=_routeID - In the implementation block
@property (assign,nonatomic) BOOL hasStepID; 
@property (assign,nonatomic) unsigned stepID;                                                 //@synthesize stepID=_stepID - In the implementation block
@property (assign,nonatomic) BOOL hasEnrouteNoticeIndex; 
@property (assign,nonatomic) unsigned enrouteNoticeIndex;                                     //@synthesize enrouteNoticeIndex=_enrouteNoticeIndex - In the implementation block
@property (assign,nonatomic) BOOL hasEventIndex; 
@property (assign,nonatomic) unsigned eventIndex;                                             //@synthesize eventIndex=_eventIndex - In the implementation block
@property (assign,nonatomic) BOOL hasDistanceToManeuver; 
@property (assign,nonatomic) float distanceToManeuver;                                        //@synthesize distanceToManeuver=_distanceToManeuver - In the implementation block
@property (assign,nonatomic) BOOL hasTimeToManeuver; 
@property (assign,nonatomic) float timeToManeuver;                                            //@synthesize timeToManeuver=_timeToManeuver - In the implementation block
@property (assign,nonatomic) BOOL hasVehicleSpeed; 
@property (assign,nonatomic) float vehicleSpeed;                                              //@synthesize vehicleSpeed=_vehicleSpeed - In the implementation block
@property (assign,nonatomic) BOOL hasTrafficSpeed; 
@property (assign,nonatomic) int trafficSpeed;                                                //@synthesize trafficSpeed=_trafficSpeed - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) float duration;                                                  //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) BOOL hasSignGuidanceFeedback; 
@property (nonatomic,retain) GEOSignGuidanceFeedback * signGuidanceFeedback;                  //@synthesize signGuidanceFeedback=_signGuidanceFeedback - In the implementation block
@property (nonatomic,readonly) BOOL hasSpokenGuidanceFeedback; 
@property (nonatomic,retain) GEOSpokenGuidanceFeedback * spokenGuidanceFeedback;              //@synthesize spokenGuidanceFeedback=_spokenGuidanceFeedback - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasRouteID;
-(NSData *)routeID;
-(void)setRouteID:(NSData *)arg1 ;
-(BOOL)hasDuration;
-(void)setStepID:(unsigned)arg1 ;
-(void)setHasStepID:(BOOL)arg1 ;
-(BOOL)hasStepID;
-(unsigned)stepID;
-(void)setDistanceToManeuver:(float)arg1 ;
-(unsigned)enrouteNoticeIndex;
-(void)setEnrouteNoticeIndex:(unsigned)arg1 ;
-(void)setHasEnrouteNoticeIndex:(BOOL)arg1 ;
-(BOOL)hasEnrouteNoticeIndex;
-(void)setEventIndex:(unsigned)arg1 ;
-(void)setHasEventIndex:(BOOL)arg1 ;
-(BOOL)hasEventIndex;
-(void)setHasDistanceToManeuver:(BOOL)arg1 ;
-(BOOL)hasDistanceToManeuver;
-(void)setTimeToManeuver:(float)arg1 ;
-(void)setHasTimeToManeuver:(BOOL)arg1 ;
-(BOOL)hasTimeToManeuver;
-(void)setVehicleSpeed:(float)arg1 ;
-(void)setHasVehicleSpeed:(BOOL)arg1 ;
-(BOOL)hasVehicleSpeed;
-(int)trafficSpeed;
-(void)setTrafficSpeed:(int)arg1 ;
-(void)setHasTrafficSpeed:(BOOL)arg1 ;
-(BOOL)hasTrafficSpeed;
-(id)trafficSpeedAsString:(int)arg1 ;
-(int)StringAsTrafficSpeed:(id)arg1 ;
-(void)setHasDuration:(BOOL)arg1 ;
-(BOOL)hasSignGuidanceFeedback;
-(BOOL)hasSpokenGuidanceFeedback;
-(unsigned)eventIndex;
-(float)distanceToManeuver;
-(float)timeToManeuver;
-(float)vehicleSpeed;
-(GEOSignGuidanceFeedback *)signGuidanceFeedback;
-(void)setSignGuidanceFeedback:(GEOSignGuidanceFeedback *)arg1 ;
-(GEOSpokenGuidanceFeedback *)spokenGuidanceFeedback;
-(void)setSpokenGuidanceFeedback:(GEOSpokenGuidanceFeedback *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(float)duration;
-(void)setDuration:(float)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

