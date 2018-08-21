/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:39 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HDDailyActivityGoalDetectionDelegate, HDAchievementEngineDataProviding;
#import <HealthDaemon/HealthDaemon-Structs.h>
@class NSDate, NSCalendar, HDAchievementDataStoreV2;

@interface HDAchievementEngineV2 : NSObject {

	BOOL _enableExtraLogging;
	id<HDDailyActivityGoalDetectionDelegate> _dailyGoalDetectionDelegate;
	id<HDAchievementEngineDataProviding> _dataProvider;
	NSDate* _fixedNowDate;
	NSCalendar* _fixedCalendar;
	HDAchievementDataStoreV2* _achievementStore;
	NSDate* _now;
	NSCalendar* _calendar;

}

@property (nonatomic,retain) HDAchievementDataStoreV2 * achievementStore;                                             //@synthesize achievementStore=_achievementStore - In the implementation block
@property (nonatomic,retain) NSDate * now;                                                                            //@synthesize now=_now - In the implementation block
@property (nonatomic,readonly) double nowTimeIntervalSinceReferenceDate; 
@property (nonatomic,retain) NSCalendar * calendar;                                                                   //@synthesize calendar=_calendar - In the implementation block
@property (assign,nonatomic) BOOL enableExtraLogging;                                                                 //@synthesize enableExtraLogging=_enableExtraLogging - In the implementation block
@property (assign,nonatomic,__weak) id<HDDailyActivityGoalDetectionDelegate> dailyGoalDetectionDelegate;              //@synthesize dailyGoalDetectionDelegate=_dailyGoalDetectionDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<HDAchievementEngineDataProviding> dataProvider;                                //@synthesize dataProvider=_dataProvider - In the implementation block
@property (setter=_setFixedNowDate:,getter=_fixedNowDate,nonatomic,retain) NSDate * fixedNowDate;                     //@synthesize fixedNowDate=_fixedNowDate - In the implementation block
@property (setter=_setFixedCalendar:,getter=_fixedCalendar,nonatomic,retain) NSCalendar * fixedCalendar;              //@synthesize fixedCalendar=_fixedCalendar - In the implementation block
-(void)setCalendar:(NSCalendar *)arg1 ;
-(NSCalendar *)calendar;
-(void)setDataProvider:(id<HDAchievementEngineDataProviding>)arg1 ;
-(id<HDAchievementEngineDataProviding>)dataProvider;
-(void)runForTriggers:(unsigned long long)arg1 withEnvironment:(id)arg2 ;
-(unsigned long long)runForNewWorkouts;
-(NSDate *)now;
-(void)systemTimeZoneDidChange;
-(id)_fixedNowDate;
-(id)_fixedCalendar;
-(HDAchievementDataStoreV2 *)achievementStore;
-(BOOL)enableExtraLogging;
-(SCD_Struct_HD72)_runForActivityDataWithInitialState:(SCD_Struct_HD72)arg1 forGoalType:(unsigned long long)arg2 goalDisplayName:(id)arg3 shouldAlertGoalComplete:(BOOL)arg4 goalMetHandler:(/*^block*/id)arg5 ;
-(id<HDDailyActivityGoalDetectionDelegate>)dailyGoalDetectionDelegate;
-(void)_updateAllGoalsMonthlyTotals;
-(void)_updateDistanceMonthlyTotals;
-(id)_lastEarnableDateOfDefinition:(id)arg1 inEnvironment:(id)arg2 ;
-(id)initWithAchievementStore:(id)arg1 ;
-(double)nowTimeIntervalSinceReferenceDate;
-(unsigned long long)runForNewMoveDataAlertingDailyGoals:(BOOL)arg1 ;
-(unsigned long long)runForNewExerciseDataAlertingDailyGoals:(BOOL)arg1 ;
-(unsigned long long)runForNewStandDataAlertingDailyGoals:(BOOL)arg1 ;
-(void)updateMonthlyTotals;
-(void)setDailyGoalDetectionDelegate:(id<HDDailyActivityGoalDetectionDelegate>)arg1 ;
-(void)_setFixedNowDate:(id)arg1 ;
-(void)_setFixedCalendar:(id)arg1 ;
-(void)setAchievementStore:(HDAchievementDataStoreV2 *)arg1 ;
-(void)setNow:(NSDate *)arg1 ;
-(void)setEnableExtraLogging:(BOOL)arg1 ;
@end
