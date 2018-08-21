/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:39 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HDQueryControlServerInterface <NSObject>
@required
-(void)remote_startQueryWithUUID:(id)arg1 serverDataObject:(id)arg2 queryClass:(Class)arg3 client:(id)arg4 handler:(/*^block*/id)arg5;
-(void)remote_startActivityStatisticsQueryWithUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 handler:(/*^block*/id)arg4;
-(void)remote_startActivitySummaryQueryWithUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 handler:(/*^block*/id)arg4;
-(void)remote_startAnchoredObjectQueryWithUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 handler:(/*^block*/id)arg4;
-(void)remote_startCorrelationQueryWithUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 handler:(/*^block*/id)arg4;
-(void)remote_startCurrentActivitySummaryQueryWithUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 handler:(/*^block*/id)arg4;
-(void)remote_startDocumentQueryWithUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 handler:(/*^block*/id)arg4;
-(void)remote_startDateRangeQueryWithUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 handler:(/*^block*/id)arg4;
-(void)remote_startFitnessFriendsQueryWithUUID:(id)arg1 serverDataObject:(id)arg2 queryClass:(Class)arg3 clientProxy:(id)arg4 handler:(/*^block*/id)arg5;
-(void)remote_startLatestSummariesQueryWithUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 handler:(/*^block*/id)arg4;
-(void)remote_startLocationSeriesQueryWithUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 handler:(/*^block*/id)arg4;
-(void)remote_startObserverQueryWithUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 handler:(/*^block*/id)arg4;
-(void)remote_startSampleCountQueryWithUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 handler:(/*^block*/id)arg4;
-(void)remote_startSampleQueryWithUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 handler:(/*^block*/id)arg4;
-(void)remote_startSampleTypesQueryWithUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 handler:(/*^block*/id)arg4;
-(void)remote_startSourceQueryWithUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 handler:(/*^block*/id)arg4;
-(void)remote_startStatisticsCollectionQueryWithUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 handler:(/*^block*/id)arg4;
-(void)remote_startStatisticsQueryWithUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 handler:(/*^block*/id)arg4;
-(void)remote_startHeartRateHistogramQueryWithUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 handler:(/*^block*/id)arg4;
-(void)remote_startHeartRateSummaryQueryWithUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 handler:(/*^block*/id)arg4;

@end

