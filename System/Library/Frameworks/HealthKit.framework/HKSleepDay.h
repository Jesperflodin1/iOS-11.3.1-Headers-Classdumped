/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSArray, NSDateInterval;

@interface HKSleepDay : NSObject {

	NSDate* _startDate;
	NSDate* _endDate;
	NSArray* _sleepPeriods;
	NSDateInterval* _dateInterval;
	double _inBedDuration;
	double _asleepDuration;
	double _asleepDurationGoal;
	long long _asleepDurationGoalSource;
	long long _numberOfInterruptions;
	double _timeAwakeDuringIntendedSleepPeriod;
	double _efficiency;

}

@property (nonatomic,readonly) NSDate * startDate;                                     //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                                       //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * sleepPeriods;                            //@synthesize sleepPeriods=_sleepPeriods - In the implementation block
@property (nonatomic,readonly) NSDateInterval * dateInterval;                          //@synthesize dateInterval=_dateInterval - In the implementation block
@property (nonatomic,readonly) double inBedDuration;                                   //@synthesize inBedDuration=_inBedDuration - In the implementation block
@property (nonatomic,readonly) double asleepDuration;                                  //@synthesize asleepDuration=_asleepDuration - In the implementation block
@property (nonatomic,readonly) double asleepDurationGoal;                              //@synthesize asleepDurationGoal=_asleepDurationGoal - In the implementation block
@property (nonatomic,readonly) long long asleepDurationGoalSource;                     //@synthesize asleepDurationGoalSource=_asleepDurationGoalSource - In the implementation block
@property (nonatomic,readonly) long long numberOfInterruptions;                        //@synthesize numberOfInterruptions=_numberOfInterruptions - In the implementation block
@property (nonatomic,readonly) double timeAwakeDuringIntendedSleepPeriod;              //@synthesize timeAwakeDuringIntendedSleepPeriod=_timeAwakeDuringIntendedSleepPeriod - In the implementation block
@property (nonatomic,readonly) double efficiency;                                      //@synthesize efficiency=_efficiency - In the implementation block
-(id)description;
-(double)inBedDuration;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 sleepPeriods:(id)arg3 ;
-(id)primarySleepPeriod;
-(double)asleepDuration;
-(double)efficiency;
-(long long)numberOfInterruptions;
-(double)asleepDurationGoal;
-(long long)asleepDurationGoalSource;
-(double)timeAwakeDuringIntendedSleepPeriod;
-(NSArray *)sleepPeriods;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(NSDateInterval *)dateInterval;
@end

