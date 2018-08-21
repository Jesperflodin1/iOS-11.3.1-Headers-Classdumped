/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:39 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDSubserver.h>
#import <libobjc.A.dylib/HDQueryServerDelegate.h>
#import <libobjc.A.dylib/HDQueryControlServerInterface.h>

@class NSMutableDictionary, NSString;

@interface HDQueryControlServer : HDSubserver <HDQueryServerDelegate, HDQueryControlServerInterface> {

	NSMutableDictionary* _queryServersByUUID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidate;
-(void)queryServer:(id)arg1 requestsAuthorizationForSamples:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithParentServer:(id)arg1 ;
-(id)queryServer:(id)arg1 filterSamplesForReadAuthorization:(id)arg2 ;
-(void)_startQueryServer:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)remote_startQueryWithUUID:(id)arg1 serverDataObject:(id)arg2 queryClass:(Class)arg3 client:(id)arg4 handler:(/*^block*/id)arg5 ;
-(BOOL)queryServerClientHasActiveWorkout:(id)arg1 ;
-(BOOL)queryServer:(id)arg1 isAuthorizationStatusDeterminedForTypes:(id)arg2 error:(id*)arg3 ;
-(id)readAuthorizationStatusForQueryServer:(id)arg1 type:(id)arg2 error:(id*)arg3 ;
-(void)queryServerDidFinish:(id)arg1 ;
-(unsigned)clientSDKVersionForQueryServer:(id)arg1 ;
-(void)remote_startActivityStatisticsQueryWithUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)remote_startActivitySummaryQueryWithUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)remote_startAnchoredObjectQueryWithUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)remote_startCorrelationQueryWithUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)remote_startCurrentActivitySummaryQueryWithUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)remote_startDocumentQueryWithUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)remote_startDateRangeQueryWithUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)remote_startFitnessFriendsQueryWithUUID:(id)arg1 serverDataObject:(id)arg2 queryClass:(Class)arg3 clientProxy:(id)arg4 handler:(/*^block*/id)arg5 ;
-(void)remote_startLatestSummariesQueryWithUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)remote_startLocationSeriesQueryWithUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)remote_startObserverQueryWithUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)remote_startSampleCountQueryWithUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)remote_startSampleQueryWithUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)remote_startSampleTypesQueryWithUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)remote_startSourceQueryWithUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)remote_startStatisticsCollectionQueryWithUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)remote_startStatisticsQueryWithUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)remote_startHeartRateHistogramQueryWithUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)remote_startHeartRateSummaryQueryWithUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 handler:(/*^block*/id)arg4 ;
-(BOOL)_queue_hasActiveQueries;
-(id)_clientSourceIdentifierWithError:(id*)arg1 ;
-(BOOL)queryServerShouldObserveInBackground:(id)arg1 ;
-(BOOL)queryServerClientIsInBackground:(id)arg1 ;
@end

