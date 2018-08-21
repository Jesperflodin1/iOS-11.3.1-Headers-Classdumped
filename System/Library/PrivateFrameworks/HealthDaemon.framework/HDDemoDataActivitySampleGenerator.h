/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:38 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDDemoDataBaseSampleGenerator.h>

@class HDProfile, HDDataOriginProvenance, HKActivityCache, HDDemoDataGeneratorWorkoutConfiguration, _HDDemoDataActivityWorkoutState;

@interface HDDemoDataActivitySampleGenerator : HDDemoDataBaseSampleGenerator {

	HDProfile* _profile;
	HDDataOriginProvenance* _provenance;
	double _nextActiveCaloriesSampleTime;
	double _nextAppleStandHourSampleTime;
	double _nextRestingCaloriesSampleTime;
	double _nextFallSampleTime;
	double _nextFlightsClimbedSampleTime;
	double _nextStepsSampleTime;
	double _nextExerciseMinuteTime;
	double _nextHeartRateRecoveryStartTime;
	double _nextHeartRateRecoveryStopTime;
	double _nextUVIndexSampleTime;
	double _lastUVIndexPeakTime;
	double _lastUVExposure;
	double _lastUVIndexPeak;
	HKActivityCache* _lastActivityCache;
	HDDemoDataGeneratorWorkoutConfiguration* _currentWorkoutConfiguration;
	_HDDemoDataActivityWorkoutState* _workoutState;

}

@property (assign,nonatomic,__weak) HDProfile * profile;                                                         //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) HDDataOriginProvenance * provenance;                                                //@synthesize provenance=_provenance - In the implementation block
@property (assign,nonatomic) double nextActiveCaloriesSampleTime;                                                //@synthesize nextActiveCaloriesSampleTime=_nextActiveCaloriesSampleTime - In the implementation block
@property (assign,nonatomic) double nextAppleStandHourSampleTime;                                                //@synthesize nextAppleStandHourSampleTime=_nextAppleStandHourSampleTime - In the implementation block
@property (assign,nonatomic) double nextRestingCaloriesSampleTime;                                               //@synthesize nextRestingCaloriesSampleTime=_nextRestingCaloriesSampleTime - In the implementation block
@property (assign,nonatomic) double nextFallSampleTime;                                                          //@synthesize nextFallSampleTime=_nextFallSampleTime - In the implementation block
@property (assign,nonatomic) double nextFlightsClimbedSampleTime;                                                //@synthesize nextFlightsClimbedSampleTime=_nextFlightsClimbedSampleTime - In the implementation block
@property (assign,nonatomic) double nextStepsSampleTime;                                                         //@synthesize nextStepsSampleTime=_nextStepsSampleTime - In the implementation block
@property (assign,nonatomic) double nextExerciseMinuteTime;                                                      //@synthesize nextExerciseMinuteTime=_nextExerciseMinuteTime - In the implementation block
@property (assign,nonatomic) double nextHeartRateRecoveryStartTime;                                              //@synthesize nextHeartRateRecoveryStartTime=_nextHeartRateRecoveryStartTime - In the implementation block
@property (assign,nonatomic) double nextHeartRateRecoveryStopTime;                                               //@synthesize nextHeartRateRecoveryStopTime=_nextHeartRateRecoveryStopTime - In the implementation block
@property (assign,nonatomic) double nextUVIndexSampleTime;                                                       //@synthesize nextUVIndexSampleTime=_nextUVIndexSampleTime - In the implementation block
@property (assign,nonatomic) double lastUVIndexPeakTime;                                                         //@synthesize lastUVIndexPeakTime=_lastUVIndexPeakTime - In the implementation block
@property (assign,nonatomic) double lastUVExposure;                                                              //@synthesize lastUVExposure=_lastUVExposure - In the implementation block
@property (assign,nonatomic) double lastUVIndexPeak;                                                             //@synthesize lastUVIndexPeak=_lastUVIndexPeak - In the implementation block
@property (nonatomic,retain) HKActivityCache * lastActivityCache;                                                //@synthesize lastActivityCache=_lastActivityCache - In the implementation block
@property (nonatomic,retain) HDDemoDataGeneratorWorkoutConfiguration * currentWorkoutConfiguration;              //@synthesize currentWorkoutConfiguration=_currentWorkoutConfiguration - In the implementation block
@property (nonatomic,retain) _HDDemoDataActivityWorkoutState * workoutState;                                     //@synthesize workoutState=_workoutState - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(HDProfile *)profile;
-(void)setProfile:(HDProfile *)arg1 ;
-(void)setupWithDemoDataGenerator:(id)arg1 ;
-(void)generateSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4 ;
-(double)_computeExerciseTimeFromCurrentTime:(double)arg1 mean:(double)arg2 stdDev:(double)arg3 ;
-(BOOL)_isDemoPersonWalking:(id)arg1 atTime:(double)arg2 samplePeriod:(double)arg3 ;
-(id)_computeFlightsClimbedForDemoPerson:(id)arg1 atTime:(double)arg2 ;
-(_HDDemoDataActivityWorkoutState *)workoutState;
-(HDDataOriginProvenance *)provenance;
-(void)setProvenance:(HDDataOriginProvenance *)arg1 ;
-(id)activeCaloriesForDemoPerson:(id)arg1 atTime:(double)arg2 ;
-(id)exerciseMinutesForDemoPerson:(id)arg1 atTime:(double)arg2 ;
-(id)appleStandHourForDemoPerson:(id)arg1 atTime:(double)arg2 activeCalories:(id)arg3 exerciseMinutes:(id)arg4 ;
-(id)restingCaloriesForDemoPerson:(id)arg1 atTime:(double)arg2 ;
-(id)fallsForDemoPerson:(id)arg1 atTime:(double)arg2 ;
-(id)flightsClimbedForDemoPerson:(id)arg1 atTime:(double)arg2 ;
-(id)stepsForDemoPerson:(id)arg1 atTime:(double)arg2 ;
-(id)_computeWalkingRunningDistanceWithStepCount:(id)arg1 demoPerson:(id)arg2 ;
-(id)_computeCyclingDistanceWithStepCount:(id)arg1 demoPerson:(id)arg2 ;
-(id)uvIndexForDemoPerson:(id)arg1 atTime:(double)arg2 ;
-(id)_sumQuantity:(id)arg1 withQuantity:(id)arg2 ;
-(void)_updateWorkoutStateWithActiveEnergyBurned:(id)arg1 distanceWalking:(id)arg2 distanceCycling:(id)arg3 currentTime:(double)arg4 date:(id)arg5 objectCollection:(id)arg6 demoPerson:(id)arg7 ;
-(void)_generateHIITWorkoutDataWithObjectCollection:(id)arg1 demoPerson:(id)arg2 ;
-(void)_generateSwimmingWorkoutDataWithObjectCollection:(id)arg1 demoPerson:(id)arg2 ;
-(void)_generateEllipticalWorkoutDataWithObjectCollection:(id)arg1 demoPerson:(id)arg2 ;
-(void)_generateRunningWorkoutDataWithObjectCollection:(id)arg1 demoPerson:(id)arg2 ;
-(void)_generateWalkingWorkoutDataWithObjectCollection:(id)arg1 demoPerson:(id)arg2 ;
-(void)_generateYogaWorkoutDataWithObjectCollection:(id)arg1 demoPerson:(id)arg2 ;
-(void)_generateWorkoutDataWithHeartRates:(id)arg1 recoveryHeartRates:(id)arg2 objectCollection:(id)arg3 demoPerson:(id)arg4 ;
-(void)_generateSwimmingSegmentDataWithStartDate:(id)arg1 segmentTime:(double)arg2 segmentDistance:(double)arg3 numLaps:(long long)arg4 strokeStyle:(long long)arg5 objectCollection:(id)arg6 demoPerson:(id)arg7 ;
-(id)_computeSwimmingStrokesFromDistance:(id)arg1 demoPerson:(id)arg2 ;
-(double)_computeUVIndexForDemoPerson:(id)arg1 atTime:(double)arg2 ;
-(double)lastUVIndexPeak;
-(void)setProfile:(id)arg1 provenance:(id)arg2 ;
-(long long)_pickActivityForTime:(double)arg1 ;
-(double)_computeExerciseCaloriesForDemoPerson:(id)arg1 duration:(double)arg2 activity:(long long)arg3 weight:(double)arg4 ;
-(double)_computePercentCooledForDemoPerson:(id)arg1 atTime:(double)arg2 ;
-(BOOL)_isDemoPersonCoolingDown:(id)arg1 atTime:(double)arg2 ;
-(BOOL)_isDemoPersonSedentary:(id)arg1 atTime:(double)arg2 ;
-(BOOL)_isDemoPersonInWorkoutRecovery:(id)arg1 atTime:(double)arg2 ;
-(double)nextActiveCaloriesSampleTime;
-(void)setNextActiveCaloriesSampleTime:(double)arg1 ;
-(double)nextAppleStandHourSampleTime;
-(void)setNextAppleStandHourSampleTime:(double)arg1 ;
-(double)nextRestingCaloriesSampleTime;
-(void)setNextRestingCaloriesSampleTime:(double)arg1 ;
-(double)nextFallSampleTime;
-(void)setNextFallSampleTime:(double)arg1 ;
-(double)nextFlightsClimbedSampleTime;
-(void)setNextFlightsClimbedSampleTime:(double)arg1 ;
-(double)nextStepsSampleTime;
-(void)setNextStepsSampleTime:(double)arg1 ;
-(double)nextExerciseMinuteTime;
-(void)setNextExerciseMinuteTime:(double)arg1 ;
-(double)nextHeartRateRecoveryStartTime;
-(void)setNextHeartRateRecoveryStartTime:(double)arg1 ;
-(double)nextHeartRateRecoveryStopTime;
-(void)setNextHeartRateRecoveryStopTime:(double)arg1 ;
-(double)nextUVIndexSampleTime;
-(void)setNextUVIndexSampleTime:(double)arg1 ;
-(double)lastUVIndexPeakTime;
-(void)setLastUVIndexPeakTime:(double)arg1 ;
-(double)lastUVExposure;
-(void)setLastUVExposure:(double)arg1 ;
-(void)setLastUVIndexPeak:(double)arg1 ;
-(HKActivityCache *)lastActivityCache;
-(void)setLastActivityCache:(HKActivityCache *)arg1 ;
-(HDDemoDataGeneratorWorkoutConfiguration *)currentWorkoutConfiguration;
-(void)setCurrentWorkoutConfiguration:(HDDemoDataGeneratorWorkoutConfiguration *)arg1 ;
-(void)setWorkoutState:(_HDDemoDataActivityWorkoutState *)arg1 ;
@end

