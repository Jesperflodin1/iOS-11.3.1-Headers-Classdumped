/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:37 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDQueryServer.h>
#import <libobjc.A.dylib/HDDataObserver.h>

@class HKStatisticsCollection, _HKDelayedOperation, NSDate, NSDateComponents, HDActivityCacheDataSource, HDSourceManager, NSString;

@interface HDActivityStatisticsQueryServer : HDQueryServer <HDDataObserver> {

	HKStatisticsCollection* _statisticsCollection;
	BOOL _deliveredInitialResults;
	BOOL _deliversUpdates;
	_HKDelayedOperation* _updateOperation;
	_HKDelayedOperation* _resetOperation;
	NSDate* _startDate;
	NSDate* _endDate;
	NSDateComponents* _moveIntervalComponents;
	NSDateComponents* _exerciseIntervalComponents;
	HDActivityCacheDataSource* _dataSource;
	HDSourceManager* _sourceManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithQueryUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 client:(id)arg4 delegate:(id)arg5 profile:(id)arg6 ;
-(void)_queue_start;
-(BOOL)_shouldListenForUpdates;
-(void)_queue_deliverUpdates;
-(void)_queue_stop;
-(id)_allObservedQuantityTypes;
-(BOOL)_queue_queryIsRunning;
-(void)_createDataSourceIfNecessary;
-(BOOL)_queue_updateDataSourceWithMoveStatistics:(id*)arg1 exerciseStatistics:(id*)arg2 standInfo:(id*)arg3 workoutInfoOut:(id*)arg4 error:(id*)arg5 ;
-(void)_queue_deliverError:(id)arg1 ;
-(void)_queue_deliverActivityMoveStatistics:(id)arg1 exerciseStatistics:(id)arg2 standHoursInfo:(id)arg3 workouts:(id)arg4 ;
@end

