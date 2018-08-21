/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, _CDLocalContext;
@class _ATXAppDailyDose, _ATXAppInfoManager, _ATXAppLaunchHistogramManager, _ATXAppLaunchSequenceManager, NSMutableDictionary, NSObject, _ATXDuetHelper, NSMutableArray, NSMutableSet, PETScalarEventTracker;

@interface _ATXAppLaunchMonitor : NSObject {

	_ATXAppDailyDose* _appDailyDose;
	_ATXAppInfoManager* _appInfoManager;
	_ATXAppLaunchHistogramManager* _appLaunchHistogramManager;
	_ATXAppLaunchSequenceManager* _appLaunchSequenceManager;
	NSMutableDictionary* _launchedBundleIds;
	NSObject*<OS_dispatch_queue> _appLaunchHistoryQueue;
	NSObject*<OS_dispatch_queue> _logQueue;
	_ATXDuetHelper* _duetHelper;
	NSMutableArray* _deltaLog;
	id<_CDLocalContext> _context;
	NSMutableSet* _registrations;
	PETScalarEventTracker* _updateLaunchHistoryTracker;

}
+(void)_logPredictionForBundleId:(id)arg1 launchReason:(id)arg2 consumerType:(unsigned long long)arg3 consumerSubType:(unsigned char)arg4 ;
+(void)mergeAppLaunches:(id)arg1 andBacklightTransitions:(id)arg2 callingAppLaunchBlock:(/*^block*/id)arg3 ;
-(id)init;
-(void)dealloc;
-(void)stop;
-(void)start;
-(void)clearHistory;
-(id)initWithInMemoryStore;
-(id)initWithAppInfoManager:(id)arg1 appLaunchHistogramManager:(id)arg2 appLaunchSequenceManager:(id)arg3 appDailyDose:(id)arg4 duetHelper:(id)arg5 ;
-(void)updateLaunchHistoryFromDuet;
-(void)updateLaunchHistoryFromDuet:(double)arg1 callback:(/*^block*/id)arg2 ;
-(id)getLastAppsFromDuetWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(void)registerForAppChange;
-(void)registerForBacklightChange;
-(void)handleAppLaunchNotification:(id)arg1 reason:(id)arg2 ;
-(void)handleBacklightChangeNotificationWithValue:(int)arg1 ;
-(void)clearIntentHistogramHistory;
-(void)addLaunchWithBundleId:(id)arg1 date:(id)arg2 timeZone:(id)arg3 reason:(id)arg4 ;
-(void)_addSURFLaunchesDuringLastLaunch;
-(void)_addSurfLaunchesBetweenStartDate:(id)arg1 endDate:(id)arg2 ;
-(void)_addLaunchWithBundleIdNoLock:(id)arg1 date:(id)arg2 timeZone:(id)arg3 reason:(id)arg4 isExtension:(BOOL)arg5 ;
-(void)startDeltaRecording;
-(id)stopDeltaRecording;
-(id)appInfoManager;
-(id)appLaunchHistogramManager;
-(id)appLaunchSequenceManager;
-(void)swapDuetHelper:(id)arg1 ;
-(id)dailyDose;
-(void)_syncForTests;
@end

