/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:40 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDDataCollectorSensorDatum.h>

@class NSArray, HKQuantity;

@interface HDStationaryDiscordanceSensorDatum : HDDataCollectorSensorDatum {

	NSArray* _associatedSampleUUIDs;
	HKQuantity* _discordanceThreshold;

}

@property (nonatomic,readonly) NSArray * associatedSampleUUIDs;                //@synthesize associatedSampleUUIDs=_associatedSampleUUIDs - In the implementation block
@property (nonatomic,readonly) HKQuantity * discordanceThreshold;              //@synthesize discordanceThreshold=_discordanceThreshold - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)metadata;
-(id)initWithIdentifier:(id)arg1 dateInterval:(id)arg2 discordanceThreshold:(id)arg3 associatedSampleUUIDs:(id)arg4 resumeContext:(id)arg5 ;
-(NSArray *)associatedSampleUUIDs;
-(HKQuantity *)discordanceThreshold;
@end

