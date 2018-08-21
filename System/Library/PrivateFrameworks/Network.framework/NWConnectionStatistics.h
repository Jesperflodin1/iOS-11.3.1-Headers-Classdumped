/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:16 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Network/Network-Structs.h>
@class NSString, PBCodable;

@interface NWConnectionStatistics : NSObject {

	unsigned _awdMetricID;
	NSString* _clientIdentifier;
	NSString* _sourceIdentifier;
	PBCodable* _awdReport;
	netcore_stats_tcp_report _report;

}

@property (nonatomic,retain) NSString * clientIdentifier;                                //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (assign,nonatomic) netcore_stats_tcp_report report;                            //@synthesize report=_report - In the implementation block
@property (nonatomic,retain) PBCodable * awdReport;                                      //@synthesize awdReport=_awdReport - In the implementation block
@property (assign,nonatomic) unsigned awdMetricID;                                       //@synthesize awdMetricID=_awdMetricID - In the implementation block
@property (nonatomic,retain) NSString * sourceIdentifier;                                //@synthesize sourceIdentifier=_sourceIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL delegated; 
@property (nonatomic,readonly) int interfaceType; 
@property (nonatomic,readonly) unsigned timeToDnsResolvedMsecs; 
@property (nonatomic,readonly) unsigned timeToDnsStartMsecs; 
@property (nonatomic,readonly) unsigned dnsResolvedTimeMsecs; 
@property (nonatomic,readonly) BOOL dnsAnswersCached; 
@property (nonatomic,readonly) unsigned timeToConnectionStartMsecs; 
@property (nonatomic,readonly) unsigned timeToConnectionEstablishmentMsecs; 
@property (nonatomic,readonly) unsigned connectionEstablishmentTimeMsecs; 
@property (nonatomic,readonly) unsigned flowDurationMsecs; 
@property (nonatomic,readonly) int connectedInterfaceType; 
@property (nonatomic,readonly) BOOL connected; 
@property (nonatomic,readonly) unsigned trafficClass; 
@property (nonatomic,readonly) BOOL fallbackEligible; 
@property (nonatomic,readonly) BOOL cellularFallback; 
@property (nonatomic,readonly) BOOL cellularRrcConnected; 
@property (nonatomic,readonly) BOOL tls13Configured; 
@property (nonatomic,readonly) BOOL tlsSucceeded; 
@property (nonatomic,readonly) BOOL kernelReportedStalls; 
@property (nonatomic,readonly) BOOL kernelReportingConnectionStalled; 
@property (nonatomic,readonly) BOOL kernelReportingReadStalled; 
@property (nonatomic,readonly) BOOL kernelReportingWriteStalled; 
@property (nonatomic,readonly) unsigned long long bytesIn; 
@property (nonatomic,readonly) unsigned long long bytesOut; 
@property (nonatomic,readonly) unsigned long long bytesDuplicate; 
@property (nonatomic,readonly) unsigned long long bytesOOO; 
@property (nonatomic,readonly) unsigned long long bytesRetransmitted; 
@property (nonatomic,readonly) unsigned long long packetsIn; 
@property (nonatomic,readonly) unsigned long long packetsOut; 
@property (nonatomic,readonly) unsigned long long packetsDuplicate; 
@property (nonatomic,readonly) unsigned long long packetsOOO; 
@property (nonatomic,readonly) unsigned long long packetsRetransmitted; 
@property (nonatomic,readonly) unsigned tcpRTTCurrentMsecs; 
@property (nonatomic,readonly) unsigned tcpRTTSmoothedMsecs; 
@property (nonatomic,readonly) unsigned tcpRTTBestMsecs; 
@property (nonatomic,readonly) unsigned tcpRTTVariance; 
@property (nonatomic,readonly) unsigned tcpSynRetransmissionCount; 
@property (nonatomic,readonly) BOOL tcpFastOpen; 
@property (nonatomic,readonly) unsigned tcpBetterRouteEventCount; 
@property (nonatomic,readonly) unsigned tcpConnectionReuseCount; 
@property (nonatomic,readonly) unsigned tcpAppReportingDataStallCount; 
@property (nonatomic,readonly) unsigned tcpAppDataStallTimerMsecs; 
-(int)interfaceType;
-(unsigned long long)bytesIn;
-(unsigned long long)bytesOut;
-(int)connectedInterfaceType;
-(unsigned)timeToConnectionEstablishmentMsecs;
-(unsigned)flowDurationMsecs;
-(BOOL)kernelReportedStalls;
-(BOOL)kernelReportingConnectionStalled;
-(BOOL)kernelReportingReadStalled;
-(BOOL)kernelReportingWriteStalled;
-(unsigned long long)bytesDuplicate;
-(unsigned long long)bytesRetransmitted;
-(unsigned long long)packetsDuplicate;
-(unsigned long long)packetsRetransmitted;
-(unsigned)trafficClass;
-(BOOL)tcpFastOpen;
-(BOOL)cellularFallback;
-(unsigned)timeToConnectionStartMsecs;
-(unsigned)connectionEstablishmentTimeMsecs;
-(BOOL)delegated;
-(BOOL)fallbackEligible;
-(NSString *)sourceIdentifier;
-(void)setSourceIdentifier:(NSString *)arg1 ;
-(NSString *)clientIdentifier;
-(unsigned long long)packetsIn;
-(unsigned long long)packetsOut;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(unsigned)timeToDnsResolvedMsecs;
-(unsigned)timeToDnsStartMsecs;
-(unsigned)dnsResolvedTimeMsecs;
-(BOOL)dnsAnswersCached;
-(unsigned long long)bytesOOO;
-(unsigned long long)packetsOOO;
-(unsigned)tcpRTTCurrentMsecs;
-(unsigned)tcpRTTSmoothedMsecs;
-(unsigned)tcpRTTBestMsecs;
-(unsigned)tcpRTTVariance;
-(unsigned)tcpSynRetransmissionCount;
-(unsigned)tcpBetterRouteEventCount;
-(unsigned)tcpConnectionReuseCount;
-(unsigned)tcpAppReportingDataStallCount;
-(unsigned)tcpAppDataStallTimerMsecs;
-(BOOL)cellularRrcConnected;
-(BOOL)tls13Configured;
-(BOOL)tlsSucceeded;
-(id)_createDataUsageSnapshotFromStruct:(const netcore_stats_data_usage_snapshot*)arg1 ;
-(id)_createFallbackReportFromStruct:(const netcore_stats_tcp_cell_fallback_report*)arg1 ;
-(id)_createStatisticsReportFromStruct:(const netcore_stats_tcp_statistics_report*)arg1 ;
-(void)setAwdReport:(PBCodable *)arg1 ;
-(void)setAwdMetricID:(unsigned)arg1 ;
-(void)setReport:(netcore_stats_tcp_report)arg1 ;
-(BOOL)connected;
-(netcore_stats_tcp_report)report;
-(id)initWithTCPReport:(netcore_stats_tcp_report*)arg1 length:(unsigned long long)arg2 clientIdentifier:(id)arg3 sourceIdentifier:(id)arg4 ;
-(PBCodable *)awdReport;
-(unsigned)awdMetricID;
@end

