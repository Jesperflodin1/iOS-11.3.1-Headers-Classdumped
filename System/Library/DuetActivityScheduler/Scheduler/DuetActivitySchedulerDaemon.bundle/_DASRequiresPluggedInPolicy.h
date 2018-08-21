/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:38 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/DuetActivityScheduler/Scheduler/DuetActivitySchedulerDaemon.bundle/DuetActivitySchedulerDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DuetActivitySchedulerDaemon/_DASActivityPolicyPredicting.h>

@protocol OS_dispatch_queue;
@class NSString, _CDContextualKeyPath, NSArray, _DKPredictor, _DKPredictionTimeline, NSDate, NSObject, NSUserDefaults;

@interface _DASRequiresPluggedInPolicy : NSObject <_DASActivityPolicyPredicting> {

	BOOL _deficitProcessing;
	NSString* _policyName;
	_CDContextualKeyPath* _batteryStatusKeyPath;
	_CDContextualKeyPath* _watchIsPluggedInKeyPath;
	NSArray* _triggers;
	_DKPredictor* _predictor;
	_DKPredictionTimeline* _pluginTimeline;
	NSDate* _lastPredictionTimelineUpdate;
	NSObject*<OS_dispatch_queue> _statsRecordingQueue;
	NSUserDefaults* _pluginStatusDefaults;

}

@property (nonatomic,retain) NSString * policyName;                                         //@synthesize policyName=_policyName - In the implementation block
@property (nonatomic,retain) _CDContextualKeyPath * batteryStatusKeyPath;                   //@synthesize batteryStatusKeyPath=_batteryStatusKeyPath - In the implementation block
@property (nonatomic,retain) _CDContextualKeyPath * watchIsPluggedInKeyPath;                //@synthesize watchIsPluggedInKeyPath=_watchIsPluggedInKeyPath - In the implementation block
@property (nonatomic,retain) NSArray * triggers;                                            //@synthesize triggers=_triggers - In the implementation block
@property (nonatomic,retain) _DKPredictor * predictor;                                      //@synthesize predictor=_predictor - In the implementation block
@property (retain) _DKPredictionTimeline * pluginTimeline;                                  //@synthesize pluginTimeline=_pluginTimeline - In the implementation block
@property (nonatomic,retain) NSDate * lastPredictionTimelineUpdate;                         //@synthesize lastPredictionTimelineUpdate=_lastPredictionTimelineUpdate - In the implementation block
@property (assign,nonatomic) BOOL deficitProcessing;                                        //@synthesize deficitProcessing=_deficitProcessing - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> statsRecordingQueue;              //@synthesize statsRecordingQueue=_statsRecordingQueue - In the implementation block
@property (nonatomic,retain) NSUserDefaults * pluginStatusDefaults;                         //@synthesize pluginStatusDefaults=_pluginStatusDefaults - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)policyInstance;
-(id)initializeTriggers;
-(NSString *)policyName;
-(BOOL)shouldIgnoreTrigger:(id)arg1 withState:(id)arg2 ;
-(BOOL)appliesToActivity:(id)arg1 ;
-(id)predictionForDevicePluggedIn;
-(void)setDeficitProcessing:(BOOL)arg1 ;
-(BOOL)deficitProcessing;
-(_DKPredictionTimeline *)pluginTimeline;
-(BOOL)isExpectedLongChargeAtDate:(id)arg1 ;
-(void)computeAndRecordPolicyDurationStatsWhilePluggedIn:(BOOL)arg1 considerPluggedIn:(BOOL)arg2 atDate:(id)arg3 ;
-(double)scoreForActivity:(id)arg1 withBatteryStatus:(id)arg2 timeSincePluginStateChange:(double)arg3 atDate:(id)arg4 rationale:(id)arg5 ;
-(double)scoreForActivity:(id)arg1 isPluggedIn:(BOOL)arg2 ;
-(void)setPluginTimeline:(_DKPredictionTimeline *)arg1 ;
-(double)weightForActivity:(id)arg1 ;
-(id)responseForActivity:(id)arg1 withState:(id)arg2 ;
-(double)predictedScoreForActivity:(id)arg1 atDate:(id)arg2 ;
-(void)setStatsRecordingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSUserDefaults *)pluginStatusDefaults;
-(void)setPluginStatusDefaults:(NSUserDefaults *)arg1 ;
-(_CDContextualKeyPath *)watchIsPluggedInKeyPath;
-(_CDContextualKeyPath *)batteryStatusKeyPath;
-(void)setWatchIsPluggedInKeyPath:(_CDContextualKeyPath *)arg1 ;
-(NSObject*<OS_dispatch_queue>)statsRecordingQueue;
-(void)setBatteryStatusKeyPath:(_CDContextualKeyPath *)arg1 ;
-(BOOL)shouldLogScoreToPowerLog;
-(void)setLastPredictionTimelineUpdate:(NSDate *)arg1 ;
-(void)setPolicyName:(NSString *)arg1 ;
-(NSDate *)lastPredictionTimelineUpdate;
-(id)init;
-(void)setPredictor:(_DKPredictor *)arg1 ;
-(_DKPredictor *)predictor;
-(NSArray *)triggers;
-(void)setTriggers:(NSArray *)arg1 ;
@end

