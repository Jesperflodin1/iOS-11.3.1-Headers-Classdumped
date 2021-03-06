/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:39 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray, _INPBRideCompletionStatus, _INPBRideDriver, _INPBLocationValue, _INPBTimestamp, NSString, _INPBRideOption, _INPBDateTimeRangeValue, _INPBUserActivity, _INPBRideVehicle;

@interface _INPBRideStatus : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _additionalActionItems;
	_INPBRideCompletionStatus* _completionStatus;
	_INPBRideDriver* _driver;
	_INPBLocationValue* _dropOffLocation;
	_INPBTimestamp* _estimatedDropOffDate;
	_INPBTimestamp* _estimatedPickupDate;
	_INPBTimestamp* _estimatedPickupEndDate;
	int _phase;
	_INPBLocationValue* _pickupLocation;
	NSString* _rideIdentifier;
	_INPBRideOption* _rideOption;
	_INPBDateTimeRangeValue* _scheduledPickupTime;
	_INPBUserActivity* _userActivityForCancelingInApplication;
	_INPBRideVehicle* _vehicle;
	NSMutableArray* _waypoints;
	SCD_Struct_IN1 _has;

}

@property (nonatomic,readonly) BOOL hasRideIdentifier; 
@property (nonatomic,retain) NSString * rideIdentifier;                                              //@synthesize rideIdentifier=_rideIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasPhase; 
@property (assign,nonatomic) int phase;                                                              //@synthesize phase=_phase - In the implementation block
@property (nonatomic,readonly) BOOL hasVehicle; 
@property (nonatomic,retain) _INPBRideVehicle * vehicle;                                             //@synthesize vehicle=_vehicle - In the implementation block
@property (nonatomic,readonly) BOOL hasDriver; 
@property (nonatomic,retain) _INPBRideDriver * driver;                                               //@synthesize driver=_driver - In the implementation block
@property (nonatomic,readonly) BOOL hasEstimatedPickupDate; 
@property (nonatomic,retain) _INPBTimestamp * estimatedPickupDate;                                   //@synthesize estimatedPickupDate=_estimatedPickupDate - In the implementation block
@property (nonatomic,readonly) BOOL hasEstimatedDropOffDate; 
@property (nonatomic,retain) _INPBTimestamp * estimatedDropOffDate;                                  //@synthesize estimatedDropOffDate=_estimatedDropOffDate - In the implementation block
@property (nonatomic,readonly) BOOL hasPickupLocation; 
@property (nonatomic,retain) _INPBLocationValue * pickupLocation;                                    //@synthesize pickupLocation=_pickupLocation - In the implementation block
@property (nonatomic,retain) NSMutableArray * waypoints;                                             //@synthesize waypoints=_waypoints - In the implementation block
@property (nonatomic,readonly) BOOL hasDropOffLocation; 
@property (nonatomic,retain) _INPBLocationValue * dropOffLocation;                                   //@synthesize dropOffLocation=_dropOffLocation - In the implementation block
@property (nonatomic,readonly) BOOL hasRideOption; 
@property (nonatomic,retain) _INPBRideOption * rideOption;                                           //@synthesize rideOption=_rideOption - In the implementation block
@property (nonatomic,readonly) BOOL hasUserActivityForCancelingInApplication; 
@property (nonatomic,retain) _INPBUserActivity * userActivityForCancelingInApplication;              //@synthesize userActivityForCancelingInApplication=_userActivityForCancelingInApplication - In the implementation block
@property (nonatomic,readonly) BOOL hasEstimatedPickupEndDate; 
@property (nonatomic,retain) _INPBTimestamp * estimatedPickupEndDate;                                //@synthesize estimatedPickupEndDate=_estimatedPickupEndDate - In the implementation block
@property (nonatomic,readonly) BOOL hasCompletionStatus; 
@property (nonatomic,retain) _INPBRideCompletionStatus * completionStatus;                           //@synthesize completionStatus=_completionStatus - In the implementation block
@property (nonatomic,retain) NSMutableArray * additionalActionItems;                                 //@synthesize additionalActionItems=_additionalActionItems - In the implementation block
@property (nonatomic,readonly) BOOL hasScheduledPickupTime; 
@property (nonatomic,retain) _INPBDateTimeRangeValue * scheduledPickupTime;                          //@synthesize scheduledPickupTime=_scheduledPickupTime - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)waypointsType;
+(id)options;
+(Class)additionalActionItemsType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(NSMutableArray *)waypoints;
-(void)clearWaypoints;
-(void)addWaypoints:(id)arg1 ;
-(unsigned long long)waypointsCount;
-(id)waypointsAtIndex:(unsigned long long)arg1 ;
-(void)setWaypoints:(NSMutableArray *)arg1 ;
-(int)phase;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setPhase:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setPickupLocation:(_INPBLocationValue *)arg1 ;
-(void)setDropOffLocation:(_INPBLocationValue *)arg1 ;
-(void)setScheduledPickupTime:(_INPBDateTimeRangeValue *)arg1 ;
-(_INPBLocationValue *)pickupLocation;
-(_INPBLocationValue *)dropOffLocation;
-(_INPBDateTimeRangeValue *)scheduledPickupTime;
-(NSString *)rideIdentifier;
-(void)setRideIdentifier:(NSString *)arg1 ;
-(BOOL)hasPhase;
-(BOOL)hasDriver;
-(BOOL)hasVehicle;
-(_INPBRideVehicle *)vehicle;
-(void)setVehicle:(_INPBRideVehicle *)arg1 ;
-(_INPBTimestamp *)estimatedDropOffDate;
-(void)setEstimatedDropOffDate:(_INPBTimestamp *)arg1 ;
-(_INPBTimestamp *)estimatedPickupEndDate;
-(void)setEstimatedPickupEndDate:(_INPBTimestamp *)arg1 ;
-(_INPBRideOption *)rideOption;
-(void)setRideOption:(_INPBRideOption *)arg1 ;
-(_INPBUserActivity *)userActivityForCancelingInApplication;
-(void)setUserActivityForCancelingInApplication:(_INPBUserActivity *)arg1 ;
-(BOOL)hasCompletionStatus;
-(NSMutableArray *)additionalActionItems;
-(void)addAdditionalActionItems:(id)arg1 ;
-(BOOL)hasPickupLocation;
-(BOOL)hasDropOffLocation;
-(BOOL)hasRideIdentifier;
-(void)setHasPhase:(BOOL)arg1 ;
-(id)phaseAsString:(int)arg1 ;
-(int)StringAsPhase:(id)arg1 ;
-(BOOL)hasEstimatedPickupDate;
-(BOOL)hasEstimatedDropOffDate;
-(BOOL)hasRideOption;
-(BOOL)hasUserActivityForCancelingInApplication;
-(BOOL)hasEstimatedPickupEndDate;
-(void)clearAdditionalActionItems;
-(unsigned long long)additionalActionItemsCount;
-(id)additionalActionItemsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasScheduledPickupTime;
-(void)setAdditionalActionItems:(NSMutableArray *)arg1 ;
-(_INPBRideCompletionStatus *)completionStatus;
-(void)setCompletionStatus:(_INPBRideCompletionStatus *)arg1 ;
-(_INPBTimestamp *)estimatedPickupDate;
-(void)setEstimatedPickupDate:(_INPBTimestamp *)arg1 ;
-(_INPBRideDriver *)driver;
-(void)setDriver:(_INPBRideDriver *)arg1 ;
@end

