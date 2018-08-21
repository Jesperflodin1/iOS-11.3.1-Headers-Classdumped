/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <SymptomEvaluator/AnalyticsEngineCore.h>

@class NSMutableDictionary, NSMutableSet, NetworkAnalyticsStateRelay, AWDSymptomsNetworkAnalyticsRRCConnectedPeriod;

@interface NOIAnalyticsEngine : AnalyticsEngineCore {

	NSMutableDictionary* liveClients;
	NSMutableSet* managedNOIs;
	id _cellEpochObserver;
	id _wifiEpochObserver;
	id _wiredEpochObserver;
	id _modelTurndownObserver;
	id _cellStateChangeObserver;
	id _cellStateCapabilityObserver;
	id _cellFallbackObserver;
	id _primaryObserver;
	int notifyToken;
	NSMutableSet* _predictionQueryClients;
	unsigned long long _predictionQueryCount;
	unsigned long long _startConnectionTimestamp;
	unsigned long long _startBackgroundConnectionTimestamp;
	unsigned long long _lastDisconnectTimestamp;
	unsigned _ingressLQM;
	unsigned long long _ingressUploadThroughput;
	unsigned long long _ingressDownloadThroughput;
	unsigned long long _ingressBytesIn;
	unsigned long long _ingressBytesOut;
	unsigned long long _ingressPacketsIn;
	unsigned long long _ingressPacketsOut;
	unsigned long long _lastDisconnectedSecs;
	BOOL _ingressInstantMetricAvailable;
	BOOL _ingressThroughputMetricAvailable;
	NetworkAnalyticsStateRelay* _cellRelay;
	NetworkAnalyticsStateRelay* _wifiRelay;
	NetworkAnalyticsStateRelay* _wiredRelay;
	AWDSymptomsNetworkAnalyticsRRCConnectedPeriod* _rrcConnectionMetric;

}
+(id)queue;
+(void)resetQueryStatistics;
+(void)getQueryStatistics:(SCD_Struct_NO9*)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithWorkspace:(id)arg1 params:(id)arg2 queue:(id)arg3 ;
-(void)subscribeToNOIsFor:(id)arg1 orPredicate:(id)arg2 options:(id)arg3 connection:(id)arg4 ;
-(void)inquireNOIFor:(id)arg1 orPredicate:(id)arg2 requestedKeys:(id)arg3 options:(id)arg4 connection:(id)arg5 reply:(/*^block*/id)arg6 ;
-(void)unsubscribeToNOIs:(id)arg1 connection:(id)arg2 ;
-(void)clientEvent:(id)arg1 isAddEvent:(BOOL)arg2 ;
-(void)_bottomUpNOIEvent:(id)arg1 withInfo:(id)arg2 ;
-(BOOL)_initializeAllManagedNOIs;
-(void)_observeStateRelays;
-(void)_dumpClientStructure;
-(id)_createStringTypeFromNetworkType:(long long)arg1 ;
-(void)_resetRRCMetricCounters;
-(void)l2ThroughputMetrics:(id)arg1 options:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)_evalPostingNotificationForNOI:(id)arg1 forEvent:(id)arg2 withInfo:(id)arg3 ;
-(id)_clientNOIEvent:(id)arg1 forNOIs:(id)arg2 isAddEvent:(BOOL)arg3 ;
-(id)_validatedNOIs:(id)arg1 orPredicate:(id)arg2 ;
-(void)_coreNOIMembershipChangeOn:(id)arg1 forNOIs:(id)arg2 isAddEvent:(BOOL)arg3 ;
-(void)_resetQueryStatistics;
-(void)_getQueryStatistics:(SCD_Struct_NO9*)arg1 ;
-(void)auditableLinkQuality:(id)arg1 options:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)estTransferTime:(id)arg1 options:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)canUseOnAlternate:(id)arg1 options:(id)arg2 reply:(/*^block*/id)arg3 ;
@end

