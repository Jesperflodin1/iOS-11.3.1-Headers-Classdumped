/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:39 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSSet, HDProfile, NSMutableDictionary, NSMutableArray, NSError, NSString;

@interface HDAchievementDataStore : NSObject {

	NSDate* _lastPerfectWeekAllDate;
	NSSet* _earnedAchievementDefinitionIdentifiers;
	double _cached_caloriesBurnedToday;
	double _cached_briskMinutesToday;
	unsigned long long _cached_standingHoursToday;
	HDProfile* _profile;
	NSMutableDictionary* _cachedValues;
	NSMutableDictionary* _updatedValues;
	NSMutableArray* _achievements;
	NSError* _currentRunError;
	NSString* _currentRunErroredPropertyKey;

}

@property (nonatomic,retain) HDProfile * profile;                                                     //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedValues;                                      //@synthesize cachedValues=_cachedValues - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * updatedValues;                                     //@synthesize updatedValues=_updatedValues - In the implementation block
@property (nonatomic,retain) NSMutableArray * achievements;                                           //@synthesize achievements=_achievements - In the implementation block
@property (nonatomic,retain) NSError * currentRunError;                                               //@synthesize currentRunError=_currentRunError - In the implementation block
@property (nonatomic,retain) NSString * currentRunErroredPropertyKey;                                 //@synthesize currentRunErroredPropertyKey=_currentRunErroredPropertyKey - In the implementation block
@property (nonatomic,retain) NSDate * lastWorkoutEndDate; 
@property (assign,nonatomic) long long lastWorkoutAnchor; 
@property (assign,nonatomic) unsigned long long bestOneTimeStepCount; 
@property (assign,nonatomic) unsigned long long stepCountToday; 
@property (assign,nonatomic) long long stepCountLastCheckedActivitySummaryIndex; 
@property (assign,nonatomic) long long briskMinutesFirstCheckedActivitySummaryIndex; 
@property (assign,nonatomic) long long briskMinutesLastCheckedActivitySummaryIndex; 
@property (assign,nonatomic) double briskMinutesToday; 
@property (assign,nonatomic) double bestBriskMinutes; 
@property (assign,nonatomic) unsigned long long consecutiveBriskMinutesGoalsMet; 
@property (nonatomic,retain) NSDate * lastPerfectWeekBriskMinutesDate; 
@property (assign,nonatomic) long long standingHoursLastCheckedActivitySummaryIndex; 
@property (assign,nonatomic) unsigned long long standingHoursToday; 
@property (assign,nonatomic) unsigned long long consecutiveStandingHoursGoalsMet; 
@property (nonatomic,retain) NSDate * lastPerfectWeekStandDate; 
@property (nonatomic,retain) NSDate * lastDistanceDate; 
@property (assign,nonatomic) double distanceToday; 
@property (assign,nonatomic) double bestDistance; 
@property (assign,nonatomic) long long caloriesBurnedFirstCheckedActivitySummaryIndex; 
@property (assign,nonatomic) long long caloriesBurnedLastCheckedActivitySummaryIndex; 
@property (assign,nonatomic) double caloriesBurnedToday; 
@property (assign,nonatomic) double bestDailyCalorieBurn; 
@property (assign,nonatomic) double latestCalorieBurnGoalMetCalories; 
@property (assign,nonatomic) double bestCalorieBurnGoalMetCalories; 
@property (assign,nonatomic) unsigned long long consecutiveCompleteDays; 
@property (assign,nonatomic) unsigned long long bestConsecutiveCompleteDays; 
@property (assign,nonatomic) unsigned long long lifetimeCompleteDays; 
@property (nonatomic,retain) NSDate * lastPerfectWeekCaloriesBurnedDate; 
@property (nonatomic,retain) NSDate * lastPerfectWeekAllDate;                                         //@synthesize lastPerfectWeekAllDate=_lastPerfectWeekAllDate - In the implementation block
@property (assign,nonatomic) long long lastResetSummaryIndexForMoveGoal; 
@property (assign,nonatomic) long long lastResetSummaryIndexForExerciseGoal; 
@property (assign,nonatomic) long long lastResetSummaryIndexForStandGoal; 
@property (assign,nonatomic) unsigned long long achievementDoctorRunCount; 
@property (nonatomic,readonly) unsigned long long achievementDoctorRunCountFromDatabase; 
@property (nonatomic,retain) NSSet * earnedAchievementDefinitionIdentifiers;                          //@synthesize earnedAchievementDefinitionIdentifiers=_earnedAchievementDefinitionIdentifiers - In the implementation block
@property (assign,nonatomic) double cached_caloriesBurnedToday;                                       //@synthesize cached_caloriesBurnedToday=_cached_caloriesBurnedToday - In the implementation block
@property (assign,nonatomic) double cached_briskMinutesToday;                                         //@synthesize cached_briskMinutesToday=_cached_briskMinutesToday - In the implementation block
@property (assign,nonatomic) unsigned long long cached_standingHoursToday;                            //@synthesize cached_standingHoursToday=_cached_standingHoursToday - In the implementation block
-(id)init;
-(id)initWithProfile:(id)arg1 ;
-(HDProfile *)profile;
-(NSError *)currentRunError;
-(void)setCurrentRunError:(NSError *)arg1 ;
-(void)setCurrentRunErroredPropertyKey:(NSString *)arg1 ;
-(BOOL)_transaction_removeDuplicateAddedAchievementsWithError:(id*)arg1 ;
-(long long)int64ForKey:(id)arg1 ;
-(BOOL)setDatabaseIdentifier:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)unsignedIntegerForKey:(id)arg1 ;
-(void)setUnsignedInteger:(unsigned long long)arg1 forKey:(id)arg2 ;
-(double)doubleForKey:(id)arg1 ;
-(void)setDouble:(double)arg1 forKey:(id)arg2 ;
-(void)setInt64:(long long)arg1 forKey:(id)arg2 ;
-(id)dateForKey:(id)arg1 ;
-(void)setDate:(id)arg1 forKey:(id)arg2 ;
-(void)_setValue:(id)arg1 forKey:(id)arg2 ;
-(id)_valueForKey:(id)arg1 ;
-(id)_valueFromDatabaseForKey:(id)arg1 ;
-(NSSet *)earnedAchievementDefinitionIdentifiers;
-(id)uncommittedAchievements;
-(id)databaseIdentifier;
-(void)addAchievements:(id)arg1 ;
-(id)unalertedAchievements;
-(unsigned long long)countOfUnalertedAchievements;
-(void)setProfile:(HDProfile *)arg1 ;
-(NSString *)currentRunErroredPropertyKey;
-(id)createAchievementPredicateEnvironment;
-(BOOL)commit:(id*)arg1 ;
-(double)caloriesBurnedToday;
-(double)briskMinutesToday;
-(unsigned long long)standingHoursToday;
-(void)setConsecutiveStandingHoursGoalsMet:(unsigned long long)arg1 ;
-(void)setConsecutiveCompleteDays:(unsigned long long)arg1 ;
-(unsigned long long)consecutiveStandingHoursGoalsMet;
-(unsigned long long)consecutiveCompleteDays;
-(void)addAchievement:(id)arg1 ;
-(void)markAchievementAlerted:(id)arg1 ;
-(id)cachedNumberValueForKey:(id)arg1 ;
-(id)cachedDateValueForKey:(id)arg1 ;
-(NSMutableArray *)achievements;
-(void)setAchievements:(NSMutableArray *)arg1 ;
-(long long)lastWorkoutAnchor;
-(void)setLastWorkoutEndDate:(NSDate *)arg1 ;
-(void)setLastWorkoutAnchor:(long long)arg1 ;
-(long long)briskMinutesFirstCheckedActivitySummaryIndex;
-(long long)briskMinutesLastCheckedActivitySummaryIndex;
-(long long)lastResetSummaryIndexForExerciseGoal;
-(NSDate *)lastPerfectWeekBriskMinutesDate;
-(unsigned long long)consecutiveBriskMinutesGoalsMet;
-(double)bestBriskMinutes;
-(void)setBriskMinutesToday:(double)arg1 ;
-(void)setBriskMinutesFirstCheckedActivitySummaryIndex:(long long)arg1 ;
-(void)setBriskMinutesLastCheckedActivitySummaryIndex:(long long)arg1 ;
-(void)setConsecutiveBriskMinutesGoalsMet:(unsigned long long)arg1 ;
-(void)setLastResetSummaryIndexForExerciseGoal:(long long)arg1 ;
-(void)setBestBriskMinutes:(double)arg1 ;
-(void)setLastPerfectWeekBriskMinutesDate:(NSDate *)arg1 ;
-(long long)standingHoursLastCheckedActivitySummaryIndex;
-(long long)lastResetSummaryIndexForStandGoal;
-(NSDate *)lastPerfectWeekStandDate;
-(void)setStandingHoursToday:(unsigned long long)arg1 ;
-(void)setStandingHoursLastCheckedActivitySummaryIndex:(long long)arg1 ;
-(void)setLastResetSummaryIndexForStandGoal:(long long)arg1 ;
-(void)setLastPerfectWeekStandDate:(NSDate *)arg1 ;
-(unsigned long long)bestOneTimeStepCount;
-(unsigned long long)stepCountToday;
-(long long)stepCountLastCheckedActivitySummaryIndex;
-(void)setStepCountToday:(unsigned long long)arg1 ;
-(void)setBestOneTimeStepCount:(unsigned long long)arg1 ;
-(void)setStepCountLastCheckedActivitySummaryIndex:(long long)arg1 ;
-(long long)caloriesBurnedFirstCheckedActivitySummaryIndex;
-(long long)caloriesBurnedLastCheckedActivitySummaryIndex;
-(long long)lastResetSummaryIndexForMoveGoal;
-(NSDate *)lastPerfectWeekCaloriesBurnedDate;
-(double)bestDailyCalorieBurn;
-(unsigned long long)bestConsecutiveCompleteDays;
-(double)bestCalorieBurnGoalMetCalories;
-(unsigned long long)lifetimeCompleteDays;
-(double)latestCalorieBurnGoalMetCalories;
-(void)setCaloriesBurnedToday:(double)arg1 ;
-(void)setCaloriesBurnedFirstCheckedActivitySummaryIndex:(long long)arg1 ;
-(void)setCaloriesBurnedLastCheckedActivitySummaryIndex:(long long)arg1 ;
-(void)setBestDailyCalorieBurn:(double)arg1 ;
-(void)setLifetimeCompleteDays:(unsigned long long)arg1 ;
-(void)setBestConsecutiveCompleteDays:(unsigned long long)arg1 ;
-(void)setLatestCalorieBurnGoalMetCalories:(double)arg1 ;
-(void)setBestCalorieBurnGoalMetCalories:(double)arg1 ;
-(void)setLastResetSummaryIndexForMoveGoal:(long long)arg1 ;
-(void)setLastPerfectWeekCaloriesBurnedDate:(NSDate *)arg1 ;
-(double)cached_caloriesBurnedToday;
-(double)cached_briskMinutesToday;
-(unsigned long long)cached_standingHoursToday;
-(BOOL)_updatedValuesContainStreakChanges;
-(BOOL)_transaction_mergeInboxKeyValuesIntoLocalWithError:(id*)arg1 numberOfMergedValues:(unsigned long long*)arg2 ;
-(double)cached_bestCalorieBurnGoalMetCalories;
-(double)cached_bestDailyCalorieBurn;
-(double)cached_bestBriskMinutes;
-(unsigned long long)cached_bestConsecutiveCompleteDays;
-(unsigned long long)cached_consecutiveCompleteDays;
-(unsigned long long)cached_consecutiveBriskMinutesGoalsMet;
-(unsigned long long)cached_consecutiveStandingHoursGoalsMet;
-(unsigned long long)cached_lifetimeCompleteDays;
-(long long)cached_caloriesBurnedFirstCheckedActivitySummaryIndex;
-(long long)cached_caloriesBurnedLastCheckedActivitySummaryIndex;
-(long long)cached_briskMinutesFirstCheckedActivitySummaryIndex;
-(long long)cached_briskMinutesLastCheckedActivitySummaryIndex;
-(void)logUpdatedValues;
-(NSDate *)lastWorkoutEndDate;
-(id)cached_lastWorkoutEndDate;
-(long long)cached_lastWorkoutAnchor;
-(unsigned long long)cached_bestOneTimeStepCount;
-(unsigned long long)cached_stepCountToday;
-(long long)cached_stepCountLastCheckedActivitySummaryIndex;
-(id)cached_lastPerfectWeekBriskMinutesDate;
-(long long)cached_standingHoursLastCheckedActivitySummaryIndex;
-(id)cached_lastPerfectWeekStandDate;
-(NSDate *)lastDistanceDate;
-(id)cached_lastDistanceDate;
-(void)setLastDistanceDate:(NSDate *)arg1 ;
-(double)distanceToday;
-(double)cached_distanceToday;
-(void)setDistanceToday:(double)arg1 ;
-(double)bestDistance;
-(double)cached_bestDistance;
-(void)setBestDistance:(double)arg1 ;
-(double)cached_latestCalorieBurnGoalMetCalories;
-(id)cached_lastPerfectWeekCaloriesBurnedDate;
-(long long)cached_lastResetSummaryIndexForMoveGoal;
-(long long)cached_lastResetSummaryIndexForExerciseGoal;
-(long long)cached_lastResetSummaryIndexForStandGoal;
-(unsigned long long)achievementDoctorRunCount;
-(unsigned long long)cached_achievementDoctorRunCount;
-(void)setAchievementDoctorRunCount:(unsigned long long)arg1 ;
-(unsigned long long)achievementDoctorRunCountFromDatabase;
-(NSDate *)lastPerfectWeekAllDate;
-(void)setLastPerfectWeekAllDate:(NSDate *)arg1 ;
-(void)setEarnedAchievementDefinitionIdentifiers:(NSSet *)arg1 ;
-(void)setCached_caloriesBurnedToday:(double)arg1 ;
-(void)setCached_briskMinutesToday:(double)arg1 ;
-(void)setCached_standingHoursToday:(unsigned long long)arg1 ;
-(NSMutableDictionary *)cachedValues;
-(void)setCachedValues:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)updatedValues;
-(void)setUpdatedValues:(NSMutableDictionary *)arg1 ;
@end

