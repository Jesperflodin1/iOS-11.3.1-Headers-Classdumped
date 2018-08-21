/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSSet, NSLock, NSDate, NSDateComponents;

@interface HKStatisticsCollection : NSObject {

	/*^block*/id _emptyStatisticsConstructor;
	double _approximateStatisticsInterval;
	NSMutableDictionary* _statisticsByIndex;
	NSSet* _cachedSources;
	NSLock* _statisticsLock;
	NSDate* _anchorDate;
	NSDateComponents* _statisticsInterval;

}

@property (nonatomic,readonly) NSDate * anchorDate;                                //@synthesize anchorDate=_anchorDate - In the implementation block
@property (nonatomic,readonly) NSDateComponents * statisticsInterval;              //@synthesize statisticsInterval=_statisticsInterval - In the implementation block
-(id)sources;
-(id)init;
-(NSDateComponents *)statisticsInterval;
-(id)_initWithAnchorDate:(id)arg1 statisticsInterval:(id)arg2 emptyStatisticsConstructor:(/*^block*/id)arg3 ;
-(id)_statisticsForIndex:(long long)arg1 ;
-(void)_enumerateStatisticsIndexesFromDate:(id)arg1 toDate:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)_clearSourcesCache;
-(id)_maxSumQuantityStatistics;
-(id)_minSumQuantityStatistics;
-(id)_timePeriodForDate:(id)arg1 ;
-(id)statisticsForDate:(id)arg1 ;
-(id)_initWithAnchorDate:(id)arg1 statisticsInterval:(id)arg2 ;
-(BOOL)_insertStatistics:(id)arg1 ;
-(id)statistics;
-(void)_enumerateTimePeriodsFromDate:(id)arg1 toDate:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(id)_statisticsPeriodAndIndex:(long long*)arg1 forDate:(id)arg2 ;
-(void)_timePeriodForStatisticsAtIndex:(long long)arg1 startDate:(id*)arg2 endDate:(id*)arg3 ;
-(void)enumerateStatisticsFromDate:(id)arg1 toDate:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(NSDate *)anchorDate;
-(void)_resetStatistics:(id)arg1 ;
@end

