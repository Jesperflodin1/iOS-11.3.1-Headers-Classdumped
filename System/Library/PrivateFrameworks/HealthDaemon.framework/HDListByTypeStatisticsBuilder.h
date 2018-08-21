/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:40 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDStatisticsBuilder.h>

@class NSDateInterval, NSMutableArray, NSMutableDictionary, NSCalendar, NSNumber;

@interface HDListByTypeStatisticsBuilder : HDStatisticsBuilder {

	NSDateInterval* _baseInterval;
	NSDateInterval* _sleepInterval;
	NSMutableArray* _lastUpdatedDataTypes;
	NSMutableDictionary* _calculatorByTypes;
	NSMutableDictionary* _statisticsByTypes;
	NSMutableDictionary* _summariesByTypes;
	NSMutableDictionary* _quantitiesByDataType;
	NSMutableDictionary* _datesByDataType;
	NSCalendar* _calendar;
	NSNumber* _lastAnchor;
	/*^block*/id _shouldStopProcessing;

}

@property (nonatomic,retain) NSNumber * lastAnchor;              //@synthesize lastAnchor=_lastAnchor - In the implementation block
@property (nonatomic,copy) id shouldStopProcessing;              //@synthesize shouldStopProcessing=_shouldStopProcessing - In the implementation block
-(void)setLastAnchor:(NSNumber *)arg1 ;
-(NSNumber *)lastAnchor;
-(id)initWithProfile:(id)arg1 baseInterval:(id)arg2 sleepInterval:(id)arg3 calendar:(id)arg4 ;
-(void)setShouldStopProcessing:(id)arg1 ;
-(id)summariesForDayWithError:(id*)arg1 ;
-(void)updateValuesWithAddedSample:(id)arg1 anchor:(id)arg2 ;
-(BOOL)wasUpdated;
-(id)updatedSummaries;
-(BOOL)addCategorySamplesForType:(long long)arg1 value:(double)arg2 startTime:(double)arg3 endTime:(double)arg4 sourceId:(long long)arg5 enforceLatest:(BOOL)arg6 ;
-(BOOL)addQuantitySamplesForType:(long long)arg1 value:(double)arg2 bucketStartTime:(double)arg3 bucketEndTime:(double)arg4 startTime:(double)arg5 endTime:(double)arg6 sourceId:(long long)arg7 enforceLatest:(BOOL)arg8 ;
-(BOOL)_enumerateSamplesWithDatabase:(id)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)_queryForWorkoutSamplesWithDatabase:(id)arg1 error:(id*)arg2 ;
-(BOOL)_queryForSleepSamplesWithDatabase:(id)arg1 error:(id*)arg2 ;
-(void)_updateStatisticsForAllCalculators;
-(id)_latestAnchorFromDatabase:(id)arg1 withError:(id*)arg2 ;
-(id)calculatedQuantitiesByDataType;
-(BOOL)_addWorkoutSample:(id)arg1 ;
-(BOOL)_addSleepSample:(id)arg1 ;
-(id)_sleepQueryResultBuilder;
-(void)_updateStatisticsForDataType:(id)arg1 ;
-(void)_updateSummaryTypeFromSample:(id)arg1 ;
-(BOOL)_setIfLatestDate:(id)arg1 forObjectType:(id)arg2 ;
-(id)timeIntervalCalculatorForType:(id)arg1 ;
-(BOOL)_setIfLatestTimestamp:(double)arg1 forObjectType:(id)arg2 ;
-(id)discreteCollectionCalculatorForType:(id)arg1 ;
-(id)collectionCalculatorForType:(id)arg1 from:(double)arg2 to:(double)arg3 ;
-(BOOL)_resetCalculatorForDataType:(long long)arg1 bucketStartTime:(double)arg2 bucketEndTime:(double)arg3 ;
-(id)_predicateForObjectsOfTypes:(id)arg1 ;
-(unsigned long long)mergeStrategyForType:(id)arg1 ;
-(id)_dateIntervalForType:(long long)arg1 ;
-(BOOL)_enumerateSamplesOfType:(long long)arg1 interval:(id)arg2 database:(id)arg3 handler:(/*^block*/id)arg4 ;
-(id)_calculatedSummariesForDayWithDatabase:(id)arg1 error:(id*)arg2 ;
-(id)_calculatedValuesForDatabase:(id)arg1 error:(id*)arg2 ;
-(id)_predicateForAllTypes;
-(id)_predicateForTypesWithSleep:(id)arg1 ;
-(id)_predicateForTypesWithoutSleep:(id)arg1 ;
-(id)_sleepDatePredicate;
-(id)_sleepTypePredicate;
-(id)_sqlListPlaceholderOfCount:(long long)arg1 ;
-(id)shouldStopProcessing;
@end

