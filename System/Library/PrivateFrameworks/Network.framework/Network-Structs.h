/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned mptcpAggregateAllBytes : 1;
	unsigned mptcpAggregateAttempt : 1;
	unsigned mptcpAggregateCellBytes : 1;
	unsigned mptcpBackToWiFi : 1;
	unsigned mptcpCellDenied : 1;
	unsigned mptcpCellProxy : 1;
	unsigned mptcpFirstPartyAggregateAttempt : 1;
	unsigned mptcpFirstPartyHandoverAttempt : 1;
	unsigned mptcpFirstPartyInteractiveAttempt : 1;
	unsigned mptcpHandoverAllBytes : 1;
	unsigned mptcpHandoverAttempts : 1;
	unsigned mptcpHandoverCellBytes : 1;
	unsigned mptcpHandoverCellSubflowFromWiFi : 1;
	unsigned mptcpHandoverWiFiSubflowFromCell : 1;
	unsigned mptcpHandshakeAggregateSuccess : 1;
	unsigned mptcpHandshakeAggregateSuccessFirstParty : 1;
	unsigned mptcpHandshakeHandoverSuccessCell : 1;
	unsigned mptcpHandshakeHandoverSuccessCellFirstParty : 1;
	unsigned mptcpHandshakeHandoverSuccessWiFi : 1;
	unsigned mptcpHandshakeHandoverSuccessWiFiFirstParty : 1;
	unsigned mptcpHandshakeInteractiveSuccess : 1;
	unsigned mptcpHandshakeInteractiveSuccessFirstParty : 1;
	unsigned mptcpHeuristicFallback : 1;
	unsigned mptcpHeuristicFallbackFirstParty : 1;
	unsigned mptcpInteractiveAllBytes : 1;
	unsigned mptcpInteractiveAttempt : 1;
	unsigned mptcpInteractiveCellBytes : 1;
	unsigned mptcpInteractiveCellUsage : 1;
	unsigned mptcpWiFiProxy : 1;
} SCD_Struct_NW1;

typedef struct tcp_connection_fallback_watch_s* tcp_connection_fallback_watch_sRef;

typedef struct {
	unsigned timestamp : 1;
	unsigned connectionCellularFallbackCount : 1;
	unsigned endpointsFetchTaskBadReplyCount : 1;
	unsigned endpointsFetchTaskCount : 1;
	unsigned endpointsFetchTaskFailureCount : 1;
	unsigned endpointsFetchTaskSuccessCount : 1;
} SCD_Struct_NW3;

typedef struct __SecTrust* SecTrustRef;

typedef struct nw_tls_context* nw_tls_contextRef;

typedef struct __SecIdentity* SecIdentityRef;

typedef struct {
	unsigned interfaceType : 1;
	unsigned ipProtocol : 1;
	unsigned tcpECNIntClientSetup : 1;
	unsigned tcpECNIntClientSuccess : 1;
	unsigned tcpECNIntConnNoPLCE : 1;
	unsigned tcpECNIntConnPLCE : 1;
	unsigned tcpECNIntConnPLNoCE : 1;
	unsigned tcpECNIntConnRecvCE : 1;
	unsigned tcpECNIntConnRecvECE : 1;
	unsigned tcpECNIntFallbackCE : 1;
	unsigned tcpECNIntFallbackDropRst : 1;
	unsigned tcpECNIntFallbackDropRxmt : 1;
	unsigned tcpECNIntFallbackReorder : 1;
	unsigned tcpECNIntFallbackSYNRst : 1;
	unsigned tcpECNIntFallbackSynLoss : 1;
	unsigned tcpECNIntNotSupportedPeer : 1;
	unsigned tcpECNIntOffAvgRTT : 1;
	unsigned tcpECNIntOffDropRst : 1;
	unsigned tcpECNIntOffDropRxmt : 1;
	unsigned tcpECNIntOffOOBPer : 1;
	unsigned tcpECNIntOffRTTVar : 1;
	unsigned tcpECNIntOffReorderPer : 1;
	unsigned tcpECNIntOffRxmtPer : 1;
	unsigned tcpECNIntOffSACKE : 1;
	unsigned tcpECNIntOffTotalOOPkts : 1;
	unsigned tcpECNIntOffTotalRxPkts : 1;
	unsigned tcpECNIntOffTotalRxmtPkts : 1;
	unsigned tcpECNIntOffTotalTxPkts : 1;
	unsigned tcpECNIntOnAvgRTT : 1;
	unsigned tcpECNIntOnDropRst : 1;
	unsigned tcpECNIntOnDropRxmt : 1;
	unsigned tcpECNIntOnOOBPer : 1;
	unsigned tcpECNIntOnRTTVar : 1;
	unsigned tcpECNIntOnReorderPer : 1;
	unsigned tcpECNIntOnSACKE : 1;
	unsigned tcpECNIntOnTotalOOPkts : 1;
	unsigned tcpECNIntOnTotalRxPkts : 1;
	unsigned tcpECNIntOnTotalRxmtPkts : 1;
	unsigned tcpECNIntOnTotalTxPkts : 1;
	unsigned tcpECNIntRecvCE : 1;
	unsigned tcpECNIntRecvECE : 1;
	unsigned tcpECNIntRxmtPer : 1;
	unsigned tcpECNIntSentECE : 1;
	unsigned tcpECNIntServerSetup : 1;
	unsigned tcpECNIntServerSuccess : 1;
	unsigned tcpECNIntSynAckLost : 1;
	unsigned tcpECNIntSynLost : 1;
	unsigned tcpECNIntTotalConnections : 1;
	unsigned tcpUnsentDataAtSleepCnt : 1;
} SCD_Struct_NW7;

typedef struct {
	unsigned ifFltrAttach : 1;
	unsigned ifFltrAttachOs : 1;
	unsigned ifnetAlloc : 1;
	unsigned ifnetAllocOs : 1;
	unsigned ipFltrAdd : 1;
	unsigned ipFltrAddOs : 1;
	unsigned nexusFlowInet6Datagram : 1;
	unsigned nexusFlowInet6Stream : 1;
	unsigned nexusFlowInetDatagram : 1;
	unsigned nexusFlowInetStream : 1;
	unsigned pfAddrule : 1;
	unsigned pfAddruleOs : 1;
	unsigned sockAlloc : 1;
	unsigned sockAllocKernel : 1;
	unsigned sockAllocKernelOs : 1;
	unsigned sockDomainInet : 1;
	unsigned sockDomainInet6 : 1;
	unsigned sockDomainKey : 1;
	unsigned sockDomainLocal : 1;
	unsigned sockDomainMultipath : 1;
	unsigned sockDomainNdrv : 1;
	unsigned sockDomainOther : 1;
	unsigned sockDomainRoute : 1;
	unsigned sockDomainSystem : 1;
	unsigned sockFltrRegister : 1;
	unsigned sockFltrRegisterOs : 1;
	unsigned sockInetMcastJoin : 1;
	unsigned sockInetMcastJoinOs : 1;
	unsigned sockNecpClientuuidCount : 1;
	unsigned sockNetInet6Dgram : 1;
	unsigned sockNetInet6DgramConnected : 1;
	unsigned sockNetInet6DgramDns : 1;
	unsigned sockNetInet6DgramNoData : 1;
	unsigned sockNetInet6Stream : 1;
	unsigned sockNetInetDgram : 1;
	unsigned sockNetInetDgramConnected : 1;
	unsigned sockNetInetDgramDns : 1;
	unsigned sockNetInetDgramNoData : 1;
	unsigned sockNetInetStream : 1;
	unsigned timeSinceLastReport : 1;
	unsigned timestamp : 1;
	unsigned vmnetStart : 1;
	unsigned ifNetagentEnabled : 1;
} SCD_Struct_NW8;

typedef struct {
	unsigned numTfoBlackholed : 1;
	unsigned numTfoCookieInvalid : 1;
	unsigned numTfoCookieRcv : 1;
	unsigned numTfoCookieReq : 1;
	unsigned numTfoCookieReqRcv : 1;
	unsigned numTfoCookieSent : 1;
	unsigned numTfoFallback : 1;
	unsigned numTfoSynDataAcked : 1;
	unsigned numTfoSynDataRcv : 1;
	unsigned numTfoSynDataSent : 1;
	unsigned timestamp : 1;
} SCD_Struct_NW9;

typedef struct {
	unsigned bestRTT : 1;
	unsigned bytesDuplicate : 1;
	unsigned bytesIn : 1;
	unsigned bytesOut : 1;
	unsigned bytesOutOfOrder : 1;
	unsigned bytesRetransmitted : 1;
	unsigned connectedAddressIndex : 1;
	unsigned connectionReuseCount : 1;
	unsigned currentRTT : 1;
	unsigned dataStallCount : 1;
	unsigned flowConnectMilliseconds : 1;
	unsigned flowDurationMilliseconds : 1;
	unsigned ipv4AddressCount : 1;
	unsigned ipv4DNSServerCount : 1;
	unsigned ipv6AddressCount : 1;
	unsigned ipv6DNSServerCount : 1;
	unsigned multipathBytesInCell : 1;
	unsigned multipathBytesInInitial : 1;
	unsigned multipathBytesInWiFi : 1;
	unsigned multipathBytesOutCell : 1;
	unsigned multipathBytesOutInitial : 1;
	unsigned multipathBytesOutWiFi : 1;
	unsigned multipathServiceType : 1;
	unsigned packetsIn : 1;
	unsigned packetsOut : 1;
	unsigned pathTriggerMilliseconds : 1;
	unsigned proxyMilliseconds : 1;
	unsigned rTTvariance : 1;
	unsigned resolutionMilliseconds : 1;
	unsigned smoothedRTT : 1;
	unsigned synRetransmissionCount : 1;
	unsigned timestamp : 1;
	unsigned tlsMilliseconds : 1;
	unsigned trafficClass : 1;
	unsigned appleApp : 1;
	unsigned appleHost : 1;
	unsigned connectedAddressFamily : 1;
	unsigned connectedInterfaceType : 1;
	unsigned connectionMode : 1;
	unsigned failureReason : 1;
	unsigned firstAddressFamily : 1;
	unsigned stackLevel : 1;
	unsigned tlsVersion : 1;
	unsigned usedProxyType : 1;
	unsigned customProxyConfigured : 1;
	unsigned fallbackEligible : 1;
	unsigned firstParty : 1;
	unsigned ipv4Available : 1;
	unsigned ipv6Available : 1;
	unsigned multipathConfigured : 1;
	unsigned resolutionRequired : 1;
	unsigned synthesizedExtraIPv6Address : 1;
	unsigned synthesizedIPv6Address : 1;
	unsigned systemProxyConfigured : 1;
	unsigned tfoConfigured : 1;
	unsigned tfoUsed : 1;
	unsigned tlsConfigured : 1;
	unsigned tlsVersionTimeout : 1;
	unsigned triggeredPath : 1;
	unsigned usedFallback : 1;
	unsigned weakFallback : 1;
} SCD_Struct_NW10;

typedef struct {
	unsigned establishmentTime : 1;
	unsigned postConnectSessionLifetime : 1;
	unsigned timestamp : 1;
	unsigned establishmentFailureError : 1;
	unsigned establishmentSynRetransmits : 1;
	unsigned postConnectSubflowAttemptCount : 1;
	unsigned postConnectSubflowMaxSubflowCount : 1;
	unsigned subflowSwitchingCount : 1;
	unsigned establishmentCellularFallback : 1;
	unsigned establishmentForcedTcpFallback : 1;
	unsigned establishmentSuccess : 1;
	unsigned establishmentTcpFallback : 1;
	unsigned postConnectMultiHomed : 1;
	unsigned postConnectSingleHomed : 1;
} SCD_Struct_NW11;

typedef struct {
	unsigned appDataStallTimerMsecs : 1;
	unsigned appReportingDataStallCount : 1;
	unsigned bestRTTMsecs : 1;
	unsigned betterRouteEventCount : 1;
	unsigned bytesDuplicate : 1;
	unsigned bytesIn : 1;
	unsigned bytesOut : 1;
	unsigned bytesOutOfOrder : 1;
	unsigned bytesRetransmitted : 1;
	unsigned connectionEstablishmentTimeMsecs : 1;
	unsigned connectionReuseCount : 1;
	unsigned currentRTTMsecs : 1;
	unsigned dNSResolvedTimeMsecs : 1;
	unsigned flowDurationMsecs : 1;
	unsigned iPAddressAttemptCount : 1;
	unsigned multipathBytesInCell : 1;
	unsigned multipathBytesInInitial : 1;
	unsigned multipathBytesInWiFi : 1;
	unsigned multipathBytesOutCell : 1;
	unsigned multipathBytesOutInitial : 1;
	unsigned multipathBytesOutWiFi : 1;
	unsigned multipathServiceType : 1;
	unsigned packetsDuplicate : 1;
	unsigned packetsIn : 1;
	unsigned packetsOut : 1;
	unsigned packetsOutOfOrder : 1;
	unsigned packetsRetransmitted : 1;
	unsigned rTTvariance : 1;
	unsigned smoothedRTTMsecs : 1;
	unsigned synRetransmissionCount : 1;
	unsigned timeToConnectionEstablishmentMsecs : 1;
	unsigned timeToConnectionStartMsecs : 1;
	unsigned timeToDNSResolvedMsecs : 1;
	unsigned timeToDNSStartMsecs : 1;
	unsigned trafficClass : 1;
	unsigned connectedInterfaceType : 1;
	unsigned interfaceType : 1;
	unsigned cellularFallback : 1;
	unsigned cellularRRCConnected : 1;
	unsigned connected : 1;
	unsigned dNSAnswersCached : 1;
	unsigned firstParty : 1;
	unsigned kernelReportedStalls : 1;
	unsigned kernelReportingConnectionStalled : 1;
	unsigned kernelReportingReadStalled : 1;
	unsigned kernelReportingWriteStalled : 1;
	unsigned tcpFastOpen : 1;
} SCD_Struct_NW12;

typedef struct {
	unsigned timestamp : 1;
	unsigned reportReason : 1;
} SCD_Struct_NW13;

typedef struct {
	unsigned fallbackConnectionCount : 1;
	unsigned totalConnectionCount : 1;
	unsigned totalSuccessfulConnectionCount : 1;
} SCD_Struct_NW14;

typedef struct nw_hash_table* nw_hash_tableRef;

typedef struct {
	unsigned active : 1;
	unsigned networkProvider : 1;
	unsigned nexusProvider : 1;
	unsigned userActivated : 1;
	unsigned voluntary : 1;
} SCD_Struct_NW16;

typedef struct {
	unsigned tcpConnectionAccepts : 1;
	unsigned tcpConnectionAttempts : 1;
	unsigned tcpIPv4AvgRTT : 1;
	unsigned tcpIPv6AvgRTT : 1;
	unsigned tcpRecvPLR : 1;
	unsigned tcpSendPLR : 1;
	unsigned tcpSendReorderRate : 1;
	unsigned tcpSendTLRTO : 1;
} SCD_Struct_NW17;

typedef struct {
	int list;
	unsigned long long count;
	unsigned long long size;
} SCD_Struct_NW18;

typedef struct {
	unsigned long long list;
	unsigned long long count;
	unsigned long long size;
} SCD_Struct_NW19;

typedef struct {
	long long list;
	unsigned long long count;
	unsigned long long size;
} SCD_Struct_NW20;

typedef struct {
	unsigned bytesReceived : 1;
	unsigned bytesSent : 1;
	unsigned clientConnectionCount : 1;
	unsigned connectionDuration : 1;
	unsigned timestamp : 1;
	unsigned connectionAttemptCount : 1;
	unsigned connectionCellularFallbackCount : 1;
	unsigned connectionFailureCount : 1;
	unsigned connectionSuccessMptcpCount : 1;
	unsigned connectionSuccessTcpCount : 1;
	unsigned resumptionFailureCount : 1;
	unsigned resumptionSuccessCount : 1;
	unsigned suspensionCount : 1;
	unsigned upgradeSuccessAndNotNeededCount : 1;
	unsigned upgradeSuccessAndPrimaryCount : 1;
} SCD_Struct_NW21;

typedef struct {
	unsigned numTfoBlackholed : 1;
	unsigned numTfoCookieInvalid : 1;
	unsigned numTfoCookieRcv : 1;
	unsigned numTfoCookieReq : 1;
	unsigned numTfoCookieReqRcv : 1;
	unsigned numTfoCookieSent : 1;
	unsigned numTfoFallback : 1;
	unsigned numTfoSynDataAcked : 1;
	unsigned numTfoSynDataRcv : 1;
	unsigned numTfoSynDataSent : 1;
} SCD_Struct_NW22;

typedef struct {
	unsigned field1[8];
} SCD_Struct_NW23;

typedef struct {
	unsigned command : 1;
} SCD_Struct_NW24;

typedef struct netcore_stats_tcp_statistics_report {
	unsigned long long bytes_in;
	unsigned long long bytes_out;
	unsigned long long bytes_duplicate;
	unsigned long long bytes_ooo;
	unsigned long long bytes_retransmitted;
	unsigned long long packets_in;
	unsigned long long packets_out;
	unsigned long long packets_duplicate;
	unsigned long long packets_ooo;
	unsigned long long packets_retransmitted;
	unsigned long long multipath_bytes_in_cell;
	unsigned long long multipath_bytes_out_cell;
	unsigned long long multipath_bytes_in_wifi;
	unsigned long long multipath_bytes_out_wifi;
	unsigned long long multipath_bytes_in_initial;
	unsigned long long multipath_bytes_out_initial;
	unsigned time_to_dns_resolved_msecs;
	unsigned time_to_dns_start_msecs;
	unsigned dns_resolved_time_msecs;
	unsigned time_to_connection_start_msecs;
	unsigned time_to_connection_establishment_msecs;
	unsigned connection_establishment_time_msecs;
	unsigned flow_duration_msecs;
	unsigned traffic_class;
	unsigned current_rtt_msecs;
	unsigned smoothed_rtt_msecs;
	unsigned best_rtt_msecs;
	unsigned rtt_variance;
	unsigned syn_retransmission_count;
	unsigned better_route_event_count;
	unsigned connection_reuse_count;
	unsigned app_reporting_data_stall_count;
	unsigned app_data_stall_timer_msecs;
	int interface_type;
	int connected_interface_type;
	int multipath_service_type;
	unsigned dns_answers_cached : 1;
	unsigned connected : 1;
	unsigned cellular_fallback : 1;
	unsigned cellular_rrc_connected : 1;
	unsigned kernel_reported_stalls : 1;
	unsigned kernel_reporting_connection_stalled : 1;
	unsigned kernel_reporting_read_stalled : 1;
	unsigned kernel_reporting_write_stalled : 1;
	unsigned tcp_fast_open : 1;
	unsigned first_party : 1;
	unsigned tls13_configured : 1;
	unsigned __pad_bits : 5;
	unsigned char __pad[6];
} netcore_stats_tcp_statistics_report;

typedef struct netcore_stats_network_event {
	int network_event_type;
	unsigned time_to_network_event_msecs;
} netcore_stats_network_event;

typedef struct netcore_stats_data_usage_snapshot {
	unsigned long long bytes_in;
	unsigned long long bytes_out;
	unsigned long long multipath_bytes_in_cell;
	unsigned long long multipath_bytes_out_cell;
	unsigned long long multipath_bytes_in_wifi;
	unsigned long long multipath_bytes_out_wifi;
	unsigned long long multipath_bytes_in_initial;
	unsigned long long multipath_bytes_out_initial;
} netcore_stats_data_usage_snapshot;

typedef struct nw_connection_report_s {
	unsigned long long bytes_in;
	unsigned long long bytes_out;
	unsigned long long bytes_duplicate;
	unsigned long long bytes_ooo;
	unsigned long long bytes_retransmitted;
	unsigned long long packets_in;
	unsigned long long packets_out;
	unsigned long long multipath_bytes_in_cell;
	unsigned long long multipath_bytes_out_cell;
	unsigned long long multipath_bytes_in_wifi;
	unsigned long long multipath_bytes_out_wifi;
	unsigned long long multipath_bytes_in_initial;
	unsigned long long multipath_bytes_out_initial;
	unsigned current_rtt_msecs;
	unsigned smoothed_rtt_msecs;
	unsigned best_rtt_msecs;
	unsigned rtt_variance;
	unsigned syn_retransmission_count;
	unsigned used_proxy_type;
	unsigned traffic_class;
	unsigned path_trigger_milliseconds;
	unsigned resolution_milliseconds;
	unsigned proxy_milliseconds;
	unsigned flow_connect_milliseconds;
	unsigned tls_milliseconds;
	unsigned flow_duration_milliseconds;
	unsigned ipv4_address_count;
	unsigned ipv6_address_count;
	unsigned connected_address_index;
	unsigned connection_reuse_count;
	unsigned data_stall_count;
	unsigned ipv4_dns_server_count;
	unsigned ipv6_dns_server_count;
	int failure_reason;
	int connected_interface_type;
	int multipath_service_type;
	int connection_mode;
	int apple_host;
	int apple_app;
	int tls_version;
	int stack_level;
	unsigned char first_address_family;
	unsigned char connected_address_family;
	unsigned triggered_path : 1;
	unsigned system_proxy_configured : 1;
	unsigned custom_proxy_configured : 1;
	unsigned fallback_eligible : 1;
	unsigned weak_fallback : 1;
	unsigned used_fallback : 1;
	unsigned resolution_required : 1;
	unsigned tls_configured : 1;
	unsigned tls13_configured : 1;
	unsigned tfo_configured : 1;
	unsigned multipath_configured : 1;
	unsigned connected : 1;
	unsigned tls_succeeded : 1;
	unsigned synthesized_ipv6_address : 1;
	unsigned synthesized_extra_ipv6_address : 1;
	unsigned ipv4_available : 1;
	unsigned ipv6_available : 1;
	unsigned used_tfo : 1;
	unsigned tls_version_timeout : 1;
	unsigned first_party : 1;
	unsigned __pad_bits : 4;
	unsigned char __pad[3];
} nw_connection_report_s;

typedef struct netcore_stats_tcp_cell_fallback_report {
	netcore_stats_network_event network_events[20];
	netcore_stats_data_usage_snapshot data_usage_snapshots_at_network_events[20];
	int deny_reason;
	unsigned network_event_count;
	unsigned data_usage_snapshots_at_network_events_count;
	unsigned fallback_timer_msecs;
	BOOL fellback;
	unsigned char __pad[7];
} netcore_stats_tcp_cell_fallback_report;

typedef struct {
	netcore_stats_tcp_statistics_report statistics_report;
	netcore_stats_tcp_cell_fallback_report fallback_report;
	netcore_stats_tcp_statistics_report connection_attempts[8];
	int report_reason;
	unsigned ip_address_attempt_count;
} SCD_Struct_NW30;

typedef struct netcore_stats_tcp_report {
	/*function pointer*/void* u;
	SCD_Struct_NW30 legacy;
	nw_connection_report_s) nw_connection_report;
	BOOL delegated;
	BOOL legacy;
	unsigned char __pad[6];
} netcore_stats_tcp_report;

typedef struct {
	unsigned delegateIndex : 1;
	unsigned generation : 1;
	unsigned index : 1;
	unsigned mtu : 1;
	unsigned subtype : 1;
	unsigned type : 1;
	unsigned expensive : 1;
} SCD_Struct_NW32;

typedef struct {
	unsigned iPAddressAttemptCount : 1;
	unsigned timestamp : 1;
	unsigned reportReason : 1;
	unsigned delegated : 1;
} SCD_Struct_NW33;

typedef struct {
	unsigned tcpECNClientSetup : 1;
	unsigned tcpECNClientSuccess : 1;
	unsigned tcpECNConnNoPacketLossCE : 1;
	unsigned tcpECNConnPacketLossCE : 1;
	unsigned tcpECNConnPacketLossNoCE : 1;
	unsigned tcpECNConnRecvCE : 1;
	unsigned tcpECNConnRecvECE : 1;
	unsigned tcpECNFallbackCE : 1;
	unsigned tcpECNFallbackReorder : 1;
	unsigned tcpECNFallbackSynLoss : 1;
	unsigned tcpECNNotSupportedPeer : 1;
	unsigned tcpECNRecvCE : 1;
	unsigned tcpECNRecvECE : 1;
	unsigned tcpECNSentECE : 1;
	unsigned tcpECNServerSetup : 1;
	unsigned tcpECNServerSuccess : 1;
	unsigned tcpECNSynAckLost : 1;
	unsigned tcpECNSynLost : 1;
	unsigned tcpECNClientNegotiationEnabled : 1;
	unsigned tcpECNServerNegotiationEnabled : 1;
} SCD_Struct_NW34;

