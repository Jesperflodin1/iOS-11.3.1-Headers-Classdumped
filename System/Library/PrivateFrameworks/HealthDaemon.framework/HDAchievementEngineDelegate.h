/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:38 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HDAchievementEngineDelegate <NSObject>
@required
-(long long)mostRecentWorkoutAnchor;
-(id)currentDate;
-(long long)activitySummaryIndexToday;
-(id)energyBurnedGoalYesterday;
-(id)energyBurnedGoalToday;
-(double)caloriesBurnedYesterday;
-(double)caloriesBurnedToday;
-(double)briskMinutesYesterday;
-(double)briskMinutesToday;
-(unsigned long long)standingHoursYesterday;
-(unsigned long long)standingHoursToday;
-(unsigned long long)stepsTakenYesterday;
-(unsigned long long)stepsTakenToday;
-(id)workoutsEndingAfterAnchor:(long long)arg1 newAnchor:(long long*)arg2;

@end
