/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:39 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDQueryServer.h>

@class HDSQLitePredicate, HDActivitySummaryQueryHelper;

@interface HDActivitySummaryQueryServer : HDQueryServer {

	BOOL _deliversUpdates;
	long long _lastProcessedAnchor;
	HDSQLitePredicate* _filterPredicate;
	HDActivitySummaryQueryHelper* _queryHelper;
	BOOL _shouldIncludePrivateProperties;
	BOOL _hasSentInitialResults;

}
-(id)initWithQueryUUID:(id)arg1 configuration:(id)arg2 clientProxy:(id)arg3 client:(id)arg4 delegate:(id)arg5 profile:(id)arg6 ;
-(void)_queue_start;
-(id)requiredEntitlements;
-(void)_queue_stop;
-(void)_setUpInitialQueryHelper;
-(void)_queue_deliverErrorToClient:(id)arg1 ;
-(void)_queue_deliverActivitySummariesToClient:(id)arg1 ;
-(void)_queue_deliverResultsWithActivitySummaries:(id)arg1 error:(id)arg2 ;
@end
