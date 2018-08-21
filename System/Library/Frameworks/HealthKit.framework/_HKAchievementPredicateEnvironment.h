/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:29 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/_HKBaseAchievementPredicateEnvironment.h>

@class NSString, _HKAchievementPredicateActivityDataEnvironment, _HKAchievementPredicateDatesEnvironment, _HKAchievementPredicateWorkoutsEnvironment;

@interface _HKAchievementPredicateEnvironment : _HKBaseAchievementPredicateEnvironment {

	NSString* _currentCountryCode;
	NSString* _currentDefinitionIdentifier;
	_HKAchievementPredicateActivityDataEnvironment* _activityData;
	_HKAchievementPredicateDatesEnvironment* _dates;
	_HKAchievementPredicateWorkoutsEnvironment* _workouts;

}

@property (nonatomic,readonly) _HKAchievementPredicateActivityDataEnvironment * activityData;              //@synthesize activityData=_activityData - In the implementation block
@property (nonatomic,readonly) _HKAchievementPredicateDatesEnvironment * dates;                            //@synthesize dates=_dates - In the implementation block
@property (nonatomic,readonly) _HKAchievementPredicateWorkoutsEnvironment * workouts;                      //@synthesize workouts=_workouts - In the implementation block
@property (nonatomic,readonly) NSString * currentDefinitionIdentifier; 
+(id)_expressionForAggregateValue:(id)arg1 inMonthOffset:(long long)arg2 ;
+(id)expressionForDaysMeetingAllGoalsInMonthOffset:(long long)arg1 ;
+(id)expressionForDaysMeetingMoveGoalInMonthOffset:(long long)arg1 ;
+(id)expressionForDaysMeetingMoveGoalByFactorOfTwoInMonthOffset:(long long)arg1 ;
+(id)expressionForDaysMeetingExerciseGoalInMonthOffset:(long long)arg1 ;
+(id)expressionForDaysMeetingStandGoalInMonthOffset:(long long)arg1 ;
+(id)expressionForActiveCaloriesBurnedInMonthOffset:(long long)arg1 ;
+(id)expressionForDailyAverageExerciseMinutesPerDayInMonthOffset:(long long)arg1 ;
+(id)expressionForExerciseMinutesInMonthOffset:(long long)arg1 ;
+(id)expressionForDistanceTraveledInMonthOffset:(long long)arg1 ;
+(id)expressionForDailyAverageActiveCaloriesBurnedInMonthOffset:(long long)arg1 ;
+(id)expressionForWorkoutsCompletedInMonthOffset:(long long)arg1 ;
+(id)pairedWatchCountryCode;
-(id)consecutiveMoveGoalsStartingDaysAgo:(id)arg1 ;
-(id)consecutiveExerciseGoalsStartingDaysAgo:(id)arg1 ;
-(id)consecutiveStandGoalsStartingDaysAgo:(id)arg1 ;
-(id)maxNumber:(id)arg1 otherNumber:(id)arg2 ;
-(void)setCurrentLocale:(id)arg1 ;
-(id)currentCountryCode;
-(NSString *)currentDefinitionIdentifier;
-(id)consecutiveAllGoalsStartingDaysAgo:(id)arg1 ;
-(_HKAchievementPredicateWorkoutsEnvironment *)workouts;
-(_HKAchievementPredicateDatesEnvironment *)dates;
-(id)initWithActivityDataEnvironment:(id)arg1 datesEnvironment:(id)arg2 workoutsEnvironment:(id)arg3 ;
-(_HKAchievementPredicateActivityDataEnvironment *)activityData;
-(void)setCurrentDefinitionIdentifier:(NSString *)arg1 ;
@end
