/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:29 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/_HKBaseAchievementPredicateEnvironment.h>

@interface _HKAchievementPredicateMonthlyAggregatesEnvironment : _HKBaseAchievementPredicateEnvironment {

	long long _daysMeetingAllGoals;
	long long _daysMeetingMoveGoal;
	long long _daysMeetingMoveGoalByFactorOfTwo;
	long long _daysMeetingExerciseGoal;
	long long _daysMeetingStandGoal;
	double _activeCalories;
	double _activeCaloriesDailyAverage;
	double _exerciseMinutes;
	double _exerciseMinutesDailyAverage;
	double _distanceTraveled;
	long long _workouts;

}

@property (nonatomic,readonly) long long daysMeetingAllGoals;                           //@synthesize daysMeetingAllGoals=_daysMeetingAllGoals - In the implementation block
@property (nonatomic,readonly) long long daysMeetingMoveGoal;                           //@synthesize daysMeetingMoveGoal=_daysMeetingMoveGoal - In the implementation block
@property (nonatomic,readonly) long long daysMeetingMoveGoalByFactorOfTwo;              //@synthesize daysMeetingMoveGoalByFactorOfTwo=_daysMeetingMoveGoalByFactorOfTwo - In the implementation block
@property (nonatomic,readonly) long long daysMeetingExerciseGoal;                       //@synthesize daysMeetingExerciseGoal=_daysMeetingExerciseGoal - In the implementation block
@property (nonatomic,readonly) long long daysMeetingStandGoal;                          //@synthesize daysMeetingStandGoal=_daysMeetingStandGoal - In the implementation block
@property (nonatomic,readonly) double activeCalories;                                   //@synthesize activeCalories=_activeCalories - In the implementation block
@property (nonatomic,readonly) double activeCaloriesDailyAverage;                       //@synthesize activeCaloriesDailyAverage=_activeCaloriesDailyAverage - In the implementation block
@property (nonatomic,readonly) double exerciseMinutes;                                  //@synthesize exerciseMinutes=_exerciseMinutes - In the implementation block
@property (nonatomic,readonly) double exerciseMinutesDailyAverage;                      //@synthesize exerciseMinutesDailyAverage=_exerciseMinutesDailyAverage - In the implementation block
@property (nonatomic,readonly) double distanceTraveled;                                 //@synthesize distanceTraveled=_distanceTraveled - In the implementation block
@property (nonatomic,readonly) long long workouts;                                      //@synthesize workouts=_workouts - In the implementation block
-(long long)daysMeetingAllGoals;
-(long long)daysMeetingMoveGoal;
-(long long)daysMeetingMoveGoalByFactorOfTwo;
-(long long)daysMeetingExerciseGoal;
-(long long)daysMeetingStandGoal;
-(double)activeCaloriesDailyAverage;
-(double)exerciseMinutesDailyAverage;
-(double)distanceTraveled;
-(long long)workouts;
-(double)exerciseMinutes;
-(double)activeCalories;
-(id)initWithNumberOfDaysInMonth:(unsigned long long)arg1 daysMeetingAllGoals:(long long)arg2 daysMeetingMoveGoal:(long long)arg3 daysMeetingMoveGoalByFactorOfTwo:(long long)arg4 daysMeetingExerciseGoal:(long long)arg5 daysMeetingStandGoal:(long long)arg6 activeCalories:(double)arg7 exerciseMinutes:(double)arg8 distanceTraveled:(double)arg9 workouts:(long long)arg10 ;
@end

