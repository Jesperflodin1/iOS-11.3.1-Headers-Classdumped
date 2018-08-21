/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:00 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <SymptomEvaluator/AnalyticsEngineCore.h>
#import <libobjc.A.dylib/WiFiShimDelegate.h>
#import <libobjc.A.dylib/ProxyAnalyticsDelegate.h>

@protocol OS_dispatch_source;
@class NSMutableDictionary, NSDate, NSString, NSMutableData, ImpoExpoService, NWPathEvaluator, NetworkAnalyticsModel, WiFiShim, NSData, NSObject, NLCRunner, ProxyAnalytics;

@interface NetworkAnalyticsEngine : AnalyticsEngineCore <WiFiShimDelegate, ProxyAnalyticsDelegate> {

	id trafficObserver;
	id dnsObserver;
	id tdObserver;
	id dataStallObserver;
	id limObserver;
	NSMutableDictionary* activeEpochs;
	NStatManagerRef routeManager;
	/*^block*/id routeMetricsRefreshCompletionBlock;
	NSMutableDictionary* liveDefaultRoutes;
	int lastScoreExit[4];
	BOOL idleExitSuppressed;
	NSDate* lastEpochRemoved;
	NSDate* lastKnownGoodNotified;
	NSDate* pendedRssiEdge;
	unsigned long long pendedRssiEdgeTarget;
	int lastReportedRrcValue;
	NSString* lastReportedRrcInterface;
	int combinedCellDNSCounts;
	int combinedWifiDNSCounts;
	NSMutableDictionary* snapshots;
	NSMutableData* journalRecords;
	ImpoExpoService* ieService;
	NSDate* journalLastFlushed;
	NWPathEvaluator* cellPathEvaluator;
	NWPathEvaluator* wifiPathEvaluator;
	NWPathEvaluator* etherPathEvaluator;
	NWPathEvaluator* primaryPathEvaluator;
	CTServerConnectionRef serverConnection;
	int cellInternetStatus;
	NSString* cellInternetPDPContext;
	unsigned long long cellSPIType;
	NetworkAnalyticsModel* model;
	WiFiShim* _wifiShim;
	NSData* _hashSalt;
	unsigned long long _wifiSingleDNSFailureCount;
	unsigned long long _wifiCompleteDNSFailureCount;
	unsigned long long _cellSingleDNSFailureCount;
	unsigned long long _cellCompleteDNSFailureCount;
	id _rnfWiFiObserver;
	NSObject*<OS_dispatch_source> rnfTestTimeoutTimer;
	NLCRunner* rnfTestNLCRunner;
	BOOL _delegateToProxyAnalytics;
	BOOL _removeOldRecordsNow;
	ProxyAnalytics* _proxyAnalytics;

}

@property (assign,nonatomic) BOOL delegateToProxyAnalytics;                //@synthesize delegateToProxyAnalytics=_delegateToProxyAnalytics - In the implementation block
@property (assign,nonatomic) BOOL removeOldRecordsNow;                     //@synthesize removeOldRecordsNow=_removeOldRecordsNow - In the implementation block
@property (nonatomic,retain) ProxyAnalytics * proxyAnalytics;              //@synthesize proxyAnalytics=_proxyAnalytics - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)queue;
+(BOOL)getDNSCountsOn:(id)arg1 total:(long long*)arg2 impacted:(long long*)arg3 ;
+(BOOL)performNetAttachmentQueryOn:(id)arg1 reply:(/*^block*/id)arg2 ;
+(void)hasNetworkAttachmentOn:(id)arg1 isAny:(BOOL)arg2 isBuiltin:(BOOL)arg3 scopedToLOI:(long long)arg4 hasCustomSignature:(id)arg5 queue:(id)arg6 reply:(/*^block*/id)arg7 ;
+(int)getLoadedLQMOn:(long long)arg1 ;
+(void)awdCaptureIn:(id)arg1 replyQueue:(id)arg2 reply:(/*^block*/id)arg3 ;
+(id)getStateRelayFor:(id)arg1 ;
+(long long)mapLinkQuality:(int)arg1 ;
+(long long)mapPowerCost:(unsigned char)arg1 ;
+(void)getAuditableLoadedLQMOn:(long long)arg1 queue:(id)arg2 reply:(/*^block*/id)arg3 ;
+(void)layer2MetricsOn:(id)arg1 queue:(id)arg2 reply:(/*^block*/id)arg3 ;
+(void)estimatedTransferTimeOn:(id)arg1 forPayloadInfo:(id)arg2 queue:(id)arg3 reply:(/*^block*/id)arg4 ;
+(void)performPersistentStoreHealthCheckWithReply:(/*^block*/id)arg1 ;
+(id)hashPrimaryKey:(id)arg1 ;
+(id)concurrentEpochs;
+(void)sendTrafficInfoFlags:(unsigned)arg1 changeFlags:(unsigned)arg2 foreground:(BOOL)arg3 ;
+(BOOL)trainModelAndScore:(BOOL)arg1 lastScoreDate:(id)arg2 output:(id*)arg3 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)shutdown;
-(int)performQueryOnEntityFromCache:(id)arg1 pred:(id)arg2 altpred:(id*)arg3 actions:(id)arg4 found:(id*)arg5 ;
-(void)performQueryPostProcessing:(id)arg1 actions:(id)arg2 processOutcome:(id)arg3 ;
-(id)initWithWorkspace:(id)arg1 params:(id)arg2 queue:(id)arg3 ;
-(BOOL)handlesEntity:(id)arg1 ;
-(void)performQueryOnEntity:(id)arg1 pred:(id)arg2 sort:(id)arg3 actions:(id)arg4 service:(id)arg5 connection:(id)arg6 reply:(/*^block*/id)arg7 ;
-(void)createSnapshotFor:(id)arg1 pred:(id)arg2 actions:(id)arg3 reply:(/*^block*/id)arg4 ;
-(id)setOption:(id)arg1 ;
-(id)getOption:(id)arg1 ;
-(void)resetDataFor:(id)arg1 nameKind:(id)arg2 ;
-(void)wifiShim_BSSIDChangedForInterface:(id)arg1 ;
-(void)wifiShim_WiFiManagerHasRestarted;
-(void)wifiShim_L2NewMetrics:(id)arg1 forInterface:(id)arg2 ;
-(void)wifiShim_L2TriggerDisconnectEdge:(BOOL)arg1 forInterface:(id)arg2 ;
-(void)abortRNFTestWithReply:(/*^block*/id)arg1 ;
-(void)proxyAnalyticsTrainAndScoreInterrupted;
-(void)proxyAnalyticsTrainAndScoreComplete:(id)arg1 error:(id)arg2 ;
-(void)performPersistentStoreHealthCheckComplete:(id)arg1 error:(id)arg2 ;
-(int)_getCellInternetStatus;
-(id)_getCellInternetPDPContext;
-(void)_cellNetworkChangeForInterface:(id)arg1 roamingEvent:(BOOL)arg2 ;
-(unsigned)_getCellSPIType;
-(void)_updateCellInternetStatus:(int)arg1 pdpContext:(int)arg2 ;
-(void)_extractCellLinkFingerprintFrom:(CFDataRef)arg1 ;
-(void)_actUponCellRrcChangeTo:(int)arg1 ;
-(void)_trackRealTimeLqmLastUpdatedOnInterfaceType:(long long)arg1 ;
-(id)_currentEpochForKind:(id)arg1 ;
-(void)_computeAndApplyLoadedLqmFrom:(int)arg1 oldLqm:(int)arg2 onInterfaceType:(long long)arg3 ;
-(void)_retrieveDNSServersForEpoch:(id)arg1 ;
-(BOOL)_hashPrimaryKeyInPlace:(char*)arg1 ;
-(id)_hashPrimaryKey:(id)arg1 ;
-(BOOL)_populateLQMJournalRecord:(SCD_Struct_Ne24*)arg1 fromCellFingerprint:(BOOL)arg2 key:(const char*)arg3 atLOI:(long long)arg4 ofKind:(id)arg5 lqm:(int)arg6 isFaulty:(unsigned)arg7 ;
-(BOOL)_populateLIMJournalRecord:(SCD_Struct_Ne25*)arg1 fromKernelDict:(id)arg2 ;
-(BOOL)_appendJournalRecord:(id)arg1 ;
-(BOOL)_flushAllJournalRecords;
-(void)_computeAndApplyLoadedLqmFrom:(int)arg1 oldLqm:(int)arg2 onInterfaceType:(long long)arg3 loadedLqmAuditRecords:(id)arg4 ;
-(void)_informKernelOfLqm:(int)arg1 forInterfaceName:(const char*)arg2 ;
-(id)_mapRadioTechnologyTypeToString:(unsigned char)arg1 ;
-(void)_actUponLoadedLqmChangeFrom:(int)arg1 to:(int)arg2 onInterfaceType:(long long)arg3 ;
-(void)_setRadioTechnology:(unsigned char)arg1 forNetworkType:(int)arg2 ;
-(id)_retrieveCellCarrierName;
-(int)_retrieveCellId;
-(BOOL)_primaryKeyChange:(id)arg1 interfaceName:(id)arg2 ofKind:(id)arg3 roamingEvent:(BOOL)arg4 ;
-(void)_updateCombinedDNSCounts;
-(void)wifiNetworkChangedForInterface:(id)arg1 roaming:(BOOL)arg2 ;
-(void)_wifiNetworkChange:(id)arg1 ;
-(void)_wifiKnownNetworksDeleted:(id)arg1 ;
-(void)_fetchHashSaltFromJournal;
-(unsigned long long)_setupCoreTelephonyAndBasebandNotificationsOn:(id)arg1 ;
-(void)_observeNetworkFramework;
-(void)_flowCompleted:(id)arg1 ;
-(void)_dnsWithSymptoms:(id)arg1 ;
-(void)_triggerDisconnectEdge:(id)arg1 ;
-(void)_dataStall:(id)arg1 ;
-(void)_processLIM:(id)arg1 ;
-(BOOL)delegateToProxyAnalytics;
-(void)setProxyAnalytics:(ProxyAnalytics *)arg1 ;
-(ProxyAnalytics *)proxyAnalytics;
-(void)setRemoveOldRecordsNow:(BOOL)arg1 ;
-(void)_trainModelAndScore:(BOOL)arg1 ;
-(void)_dumpStats;
-(BOOL)removeOldRecordsNow;
-(void)_removeOldRouteRecords;
-(void)setDelegateToProxyAnalytics:(BOOL)arg1 ;
-(void)_createJournalRecordOfType:(unsigned char)arg1 fromDict:(id)arg2 ;
-(int)_generateAdviceForEpoch:(id)arg1 relativeTo:(id)arg2 ;
-(void)_updateAdviceForEpoch:(id)arg1 ;
-(void)_informKernelOfCellRrc:(int)arg1 forInterface:(id)arg2 ;
-(void)_disarmDOASuspector:(id)arg1 ;
-(void)_disarmFatalSuspector:(id)arg1 withEventAt:(id)arg2 by:(id)arg3 ;
-(void)_handleRouteData:(NStatSourceRef)arg1 ;
-(BOOL)_shouldAcceptRouteSource:(NStatSourceRef)arg1 ;
-(void)_handleRouteClosing:(NStatSourceRef)arg1 ;
-(void)_armFatalSuspector:(id)arg1 isActive:(BOOL)arg2 ;
-(BOOL)_getDNSCountsOn:(id)arg1 total:(long long*)arg2 impacted:(long long*)arg3 ;
-(void)_delayedKnownGoodNetworkAlert;
-(void)_disarmLowQDisconnectSuspector:(id)arg1 ;
-(void)_armLowQDisconnectSuspector:(id)arg1 ;
-(id)timeOfDayPrecise;
-(void)handleRNFTestTimeout;
-(NStatSourceRef)_newDefRouteForInterface:(id)arg1 saFamily:(unsigned char)arg2 ;
-(void)_setDefrouteMonitoring:(unsigned)arg1 ofKind:(id)arg2 roamingEvent:(BOOL)arg3 family:(unsigned char)arg4 retries:(int)arg5 ;
-(void)_establishLqmBaselineOn:(BOOL)arg1 interfaceName:(id)arg2 lqmPtr:(int*)arg3 ;
-(void)_informKernelOfLIMUplink:(BOOL)arg1 downlink:(BOOL)arg2 forInterface:(const char*)arg3 ;
-(void)_idleExitTransactionCheck;
-(void)_updateAdviceForKind:(id)arg1 ;
-(BOOL)_recordOfActiveFatalSuspector:(long long)arg1 ;
-(id)_scoringDuty:(id)arg1 forType:(int)arg2 withRetCode:(int*)arg3 oldestTime:(id*)arg4 ;
-(void)_setScalarValueInNetworkAttachments:(id)arg1 targetKeyPath:(id)arg2 basedOn:(id)arg3 matchingKeyPath:(id)arg4 matchValue:(id)arg5 noMatchValue:(id)arg6 ;
-(void)_applyCalculatedScoringMetrics:(id)arg1 entries:(id)arg2 ;
-(id)_createNetworkAttachmentIdentifierExclusionList;
-(void)_awdCaptureHistorical:(id)arg1 replyQueue:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)_refreshRouteMetrics;
-(void)_refreshRouteMetricsComplete;
-(void)_refreshRouteMetricsWithCallbackOnQueue:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(int)_combinedDNSCountForEpoch:(id)arg1 ;
-(BOOL)_newCellTransferTimeEstimateRequired;
-(void)_awaitEstimatedDataTransferTimeWithCallbackOnQueue:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_hasNetworkAttachmentOn:(id)arg1 isAny:(BOOL)arg2 isBuiltin:(BOOL)arg3 scopedToLOI:(long long)arg4 hasCustomSignature:(id)arg5 queue:(id)arg6 reply:(/*^block*/id)arg7 ;
-(BOOL)_performNetAttachmentQueryOn:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)_getAuditableLoadedLQMOn:(long long)arg1 queue:(id)arg2 reply:(/*^block*/id)arg3 ;
-(id)_concurrentEpochs;
-(void)_layer2MetricsOn:(id)arg1 queue:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)_estimatedTransferTimeOn:(id)arg1 forPayloadInfo:(id)arg2 queue:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)_sendTrafficInfoFlags:(unsigned)arg1 changeFlags:(unsigned)arg2 foreground:(BOOL)arg3 ;
-(id)_adviceToNSString:(int)arg1 ;
-(void)_awdCaptureInstant:(id)arg1 replyQueue:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)_awdCaptureIn:(id)arg1 replyQueue:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)_scoringTrampoline;
-(id)_model;
-(void)_setLastScoreDate:(id)arg1 ;
-(id)lastScoreExits;
-(id)lastScoreDate;
-(id)wifiShim;
-(void)startRNFTestWithConnection:(id)arg1 options:(id)arg2 scenarioName:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)_armDOASuspector:(id)arg1 ;
@end

