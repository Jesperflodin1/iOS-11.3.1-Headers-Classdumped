/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AccessoryNavigation.framework/AccessoryNavigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ACCNavigationAccessoryComponent : NSObject {

	BOOL _isEnabled;
	unsigned long long _identifier;
	NSString* _name;
	unsigned long long _maxLength_CurrentRoadName;
	unsigned long long _maxLength_DestinationRoadName;
	unsigned long long _maxLength_PostManeuverRoadName;
	unsigned long long _maxLength_ManeuverDescription;
	unsigned long long _maxLength_LaneGuidanceDescription;
	unsigned long long _maxCapacity_GuidanceManeuver;
	unsigned long long _maxCapacity_LaneGuidance;

}

@property (assign) unsigned long long identifier;                                     //@synthesize identifier=_identifier - In the implementation block
@property (retain) NSString * name;                                                   //@synthesize name=_name - In the implementation block
@property (assign) BOOL isEnabled;                                                    //@synthesize isEnabled=_isEnabled - In the implementation block
@property (assign) unsigned long long maxLength_CurrentRoadName;                      //@synthesize maxLength_CurrentRoadName=_maxLength_CurrentRoadName - In the implementation block
@property (assign) unsigned long long maxLength_DestinationRoadName;                  //@synthesize maxLength_DestinationRoadName=_maxLength_DestinationRoadName - In the implementation block
@property (assign) unsigned long long maxLength_PostManeuverRoadName;                 //@synthesize maxLength_PostManeuverRoadName=_maxLength_PostManeuverRoadName - In the implementation block
@property (assign) unsigned long long maxLength_ManeuverDescription;                  //@synthesize maxLength_ManeuverDescription=_maxLength_ManeuverDescription - In the implementation block
@property (assign) unsigned long long maxLength_LaneGuidanceDescription;              //@synthesize maxLength_LaneGuidanceDescription=_maxLength_LaneGuidanceDescription - In the implementation block
@property (assign) unsigned long long maxCapacity_GuidanceManeuver;                   //@synthesize maxCapacity_GuidanceManeuver=_maxCapacity_GuidanceManeuver - In the implementation block
@property (assign) unsigned long long maxCapacity_LaneGuidance;                       //@synthesize maxCapacity_LaneGuidance=_maxCapacity_LaneGuidance - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(unsigned long long)identifier;
-(BOOL)isEnabled;
-(void)setIdentifier:(unsigned long long)arg1 ;
-(void)setIsEnabled:(BOOL)arg1 ;
-(unsigned long long)maxLength_CurrentRoadName;
-(unsigned long long)maxLength_DestinationRoadName;
-(unsigned long long)maxLength_PostManeuverRoadName;
-(unsigned long long)maxLength_ManeuverDescription;
-(unsigned long long)maxCapacity_GuidanceManeuver;
-(void)setMaxLength_CurrentRoadName:(unsigned long long)arg1 ;
-(void)setMaxLength_DestinationRoadName:(unsigned long long)arg1 ;
-(void)setMaxLength_PostManeuverRoadName:(unsigned long long)arg1 ;
-(void)setMaxLength_ManeuverDescription:(unsigned long long)arg1 ;
-(void)setMaxCapacity_GuidanceManeuver:(unsigned long long)arg1 ;
-(void)setMaxLength_LaneGuidanceDescription:(unsigned long long)arg1 ;
-(void)setMaxCapacity_LaneGuidance:(unsigned long long)arg1 ;
-(unsigned long long)maxLength_LaneGuidanceDescription;
-(unsigned long long)maxCapacity_LaneGuidance;
@end

