/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, HKQuantity, NSString;

@interface FIUIWorkoutActivityType : NSObject <NSSecureCoding> {

	BOOL _isIndoor;
	unsigned long long _identifier;
	unsigned long long _auxiliaryTypeIdentifier;
	NSDictionary* _metadata;

}

@property (nonatomic,readonly) unsigned long long identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned long long auxiliaryTypeIdentifier;              //@synthesize auxiliaryTypeIdentifier=_auxiliaryTypeIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long effectiveTypeIdentifier; 
@property (nonatomic,readonly) BOOL isIndoor; 
@property (nonatomic,readonly) BOOL isCategorizedOtherWorkout; 
@property (nonatomic,readonly) NSDictionary * metadata;                                 //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) long long swimmingLocationType; 
@property (nonatomic,readonly) HKQuantity * lapLength; 
@property (nonatomic,readonly) NSString * uniqueIdentifier; 
+(BOOL)supportsSecureCoding;
+(id)activityTypeWithHKWorkoutActivityTypeIdentifier:(unsigned long long)arg1 isIndoor:(BOOL)arg2 metadata:(id)arg3 ;
+(id)activityTypeWithHKWorkoutActivityTypeIdentifier:(unsigned long long)arg1 isIndoor:(BOOL)arg2 ;
+(id)supportedActivityTypesWithIsWheelchairUser:(BOOL)arg1 ;
+(id)wheelchairActivityTypes;
+(id)activityTypeWithWorkout:(id)arg1 ;
+(id)possibleActivityTypesForIdentifier:(unsigned long long)arg1 locationType:(long long)arg2 swimmingLocationType:(long long)arg3 wheelchairUser:(BOOL)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)identifier;
-(id)localizedName;
-(NSString *)uniqueIdentifier;
-(NSDictionary *)metadata;
-(id)defaultEnabledMetrics;
-(id)allAvailableMetrics;
-(id)initWithActivityTypeIdentifier:(unsigned long long)arg1 isIndoor:(BOOL)arg2 metadata:(id)arg3 ;
-(id)initWithActivityTypeIdentifier:(unsigned long long)arg1 isIndoor:(BOOL)arg2 metadata:(id)arg3 auxiliaryTypeIdentifier:(unsigned long long)arg4 ;
-(unsigned long long)auxiliaryTypeIdentifier;
-(unsigned long long)effectiveTypeIdentifier;
-(BOOL)isCategorizedOtherWorkout;
-(id)initWithActivityTypeIdentifier:(unsigned long long)arg1 isIndoor:(BOOL)arg2 ;
-(id)localizedNameComponents;
-(id)activityTypeByAddingLapLength:(double)arg1 ;
-(BOOL)hasLocationTypePool;
-(id)_machineProvidedMetrics;
-(id)_metricsForSwimmingWithLocationType:(long long)arg1 ;
-(id)_indoorDefaultEnabledMetricsForActivityType:(unsigned long long)arg1 ;
-(id)_defaultEnabledMetricsForActivityType:(unsigned long long)arg1 ;
-(id)allAvailableMetricsWithIsMachineWorkout:(BOOL)arg1 ;
-(id)appendMachineMetricsIfPossibleToMetrics:(id)arg1 maxNumMetrics:(long long)arg2 ;
-(BOOL)isAvailableMetricType:(unsigned long long)arg1 withIsMachineWorkout:(BOOL)arg2 ;
-(long long)swimmingLocationType;
-(HKQuantity *)lapLength;
-(BOOL)isIndoor;
@end

