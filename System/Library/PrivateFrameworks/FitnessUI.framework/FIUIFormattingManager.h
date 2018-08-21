/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FIUIUnitManager;

@interface FIUIFormattingManager : NSObject {

	FIUIUnitManager* _unitManager;

}

@property (nonatomic,readonly) FIUIUnitManager * unitManager;              //@synthesize unitManager=_unitManager - In the implementation block
+(id)stringWithNumber:(id)arg1 decimalPrecision:(unsigned long long)arg2 ;
+(id)percentStringWithNumber:(id)arg1 ;
+(id)stringWithNumber:(id)arg1 decimalPrecision:(unsigned long long)arg2 roundingMode:(unsigned long long)arg3 ;
+(id)localizedShortCadenceUnitString;
+(id)localizedShortPowerUnitString;
-(id)localizedDistanceByStrokeStyle:(id)arg1 isPoolSwim:(BOOL)arg2 ;
-(id)localizedPaceStringWithDistance:(id)arg1 overDuration:(double)arg2 paceFormat:(long long)arg3 ;
-(id)localizedShortUnitStringForDistanceType:(unsigned long long)arg1 ;
-(id)localizedSpeedUnitString;
-(id)stringWithDuration:(double)arg1 durationFormat:(unsigned long long)arg2 ;
-(id)localizedStringWithActiveEnergy:(id)arg1 unitStyle:(unsigned long long)arg2 ;
-(id)localizedShortActiveEnergyUnitString;
-(id)localizedStringWithDistanceInMeters:(double)arg1 distanceType:(unsigned long long)arg2 unitStyle:(unsigned long long)arg3 ;
-(id)localizedSwimmingPaceStringWithDistance:(id)arg1 overDuration:(double)arg2 paceFormat:(long long)arg3 ;
-(id)localizedStrokeCountStringWithCount:(long long)arg1 overDistance:(id)arg2 paceFormat:(long long)arg3 ;
-(double)roundedDailyMoveGoalForCalories:(double)arg1 ;
-(double)distanceInDistanceUnit:(unsigned long long)arg1 forDistanceInMeters:(double)arg2 ;
-(id)_localizedStringWithDistanceUnit:(unsigned long long)arg1 distanceInUnit:(double)arg2 unitStyle:(long long)arg3 decimalPrecision:(unsigned long long)arg4 ;
-(id)localizedStringWithDistanceInMeters:(double)arg1 distanceUnit:(unsigned long long)arg2 unitStyle:(unsigned long long)arg3 decimalPrecision:(unsigned long long)arg4 ;
-(unsigned long long)_naturalScaleUnitForDistanceInMeters:(double)arg1 distanceType:(unsigned long long)arg2 ;
-(double)distanceInMetersForDistanceInUserUnit:(double)arg1 distanceType:(unsigned long long)arg2 ;
-(id)localizedShortUnitStringForDistanceUnit:(unsigned long long)arg1 textCase:(unsigned long long)arg2 ;
-(id)applyTextCase:(unsigned long long)arg1 toString:(id)arg2 ;
-(id)localizedShortUnitStringForDistanceUnit:(unsigned long long)arg1 ;
-(id)localizedLongUnitStringForDistanceUnit:(unsigned long long)arg1 distanceInUnit:(double)arg2 textCase:(unsigned long long)arg3 ;
-(double)distanceInUserDistanceUnitForDistanceInMeters:(double)arg1 distanceType:(unsigned long long)arg2 ;
-(id)localizedPaceUnitStringWithDistanceType:(unsigned long long)arg1 distanceUnit:(unsigned long long)arg2 ;
-(id)localizedStringWithEnergy:(id)arg1 energyType:(unsigned long long)arg2 unitStyle:(unsigned long long)arg3 ;
-(id)_energyBurnedUnitStringForUnit:(id)arg1 useShortString:(BOOL)arg2 ;
-(id)localizedLongActiveEnergyUnitStringWithTextCase:(unsigned long long)arg1 ;
-(unsigned long long)_effectiveGoalTypeForWorkout:(id)arg1 ;
-(BOOL)_workoutSupportsDistanceMetricForGoalDisplay:(id)arg1 ;
-(id)_localizedKeyMetricEnergyBurnedStringForWorkout:(id)arg1 withUnitStyle:(unsigned long long)arg2 ;
-(id)_localizedKeyMetricDistanceStringForWorkout:(id)arg1 withUnitStyle:(unsigned long long)arg2 ;
-(id)_localizedKeyMetricDurationStringWithWorkout:(id)arg1 ;
-(id)_localizedOpenGoalKeyMetricStringForWorkout:(id)arg1 withUnitStyle:(unsigned long long)arg2 ;
-(id)localizedNaturalScaleStringWithDistanceInMeters:(double)arg1 distanceType:(unsigned long long)arg2 unitStyle:(unsigned long long)arg3 usedUnit:(unsigned long long*)arg4 ;
-(id)_localizedKeyMetricCyclingStringWithWorkout:(id)arg1 withUnitStyle:(unsigned long long)arg2 ;
-(id)localizedStringWithHeartRate:(id)arg1 unitStyle:(unsigned long long)arg2 requirePositiveValue:(BOOL)arg3 ;
-(id)localizedStringWithBeatsPerMinute:(double)arg1 requirePositiveValue:(BOOL)arg2 ;
-(id)localizedHeartRateUnitString;
-(id)localizationKeyForDistanceBaseKey:(id)arg1 distanceType:(unsigned long long)arg2 ;
-(id)localizedLongUnitStringForDistanceUnit:(unsigned long long)arg1 distanceInUnit:(double)arg2 ;
-(id)localizedPowerUnitStringForPower:(double)arg1 ;
-(id)localizedShortTypeDistinguishingUnitStringForPowerType:(unsigned long long)arg1 unitString:(id)arg2 ;
-(id)localizedDistinguishingPaceUnitStringWithMetricType:(unsigned long long)arg1 distanceType:(unsigned long long)arg2 distanceUnit:(unsigned long long)arg3 paceFormat:(long long)arg4 ;
-(unsigned long long)userDistanceUnitForSwimmingLapLength;
-(id)localizedStringWithPersonHeight:(id)arg1 unitStyle:(long long)arg2 ;
-(double)energyBurnedInUserUnitForCalories:(double)arg1 ;
-(double)caloriesForEnergyBurnedInUserUnit:(double)arg1 ;
-(id)localizedStringWithEnergyInCalories:(double)arg1 energyType:(unsigned long long)arg2 unitStyle:(unsigned long long)arg3 ;
-(id)localizedShortTypeDistinguishingUnitStringForEnergyType:(unsigned long long)arg1 ;
-(id)localizedLongActiveEnergyUnitString;
-(id)localizedGoalDescriptionForWorkout:(id)arg1 withValue:(id*)arg2 appendActivityType:(BOOL)arg3 ;
-(id)localizedGoalDescriptionForGoalType:(unsigned long long)arg1 goalValue:(double)arg2 activityType:(id)arg3 ;
-(id)localizedShareTextWithWorkout:(id)arg1 shareValue:(id)arg2 ;
-(id)localizedPaceValueForSplit:(id)arg1 activityType:(id)arg2 ;
-(id)localizedTitleForSplit:(id)arg1 unit:(id)arg2 lapIndex:(long long)arg3 useShortFormat:(BOOL)arg4 ;
-(id)localizedStringWithHeartRate:(id)arg1 ;
-(id)localizedStringWithHeartRate:(id)arg1 unitStyle:(unsigned long long)arg2 ;
-(id)localizedStringWithBeatsPerMinute:(double)arg1 ;
-(id)initWithUnitManager:(id)arg1 ;
-(id)localizedKeyMetricStringForWorkout:(id)arg1 unitStyle:(unsigned long long)arg2 ;
-(FIUIUnitManager *)unitManager;
-(id)localizationKeyForEnergyBaseKey:(id)arg1 ;
-(id)localizedStringWithActiveEnergy:(id)arg1 ;
-(id)decimalSeparator;
@end

