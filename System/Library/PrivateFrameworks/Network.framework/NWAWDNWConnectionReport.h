/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Network/Network-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NWAWDNWConnectionReport : PBCodable <NSCopying> {

	unsigned long long _bestRTT;
	unsigned long long _bytesDuplicate;
	unsigned long long _bytesIn;
	unsigned long long _bytesOut;
	unsigned long long _bytesOutOfOrder;
	unsigned long long _bytesRetransmitted;
	unsigned long long _connectedAddressIndex;
	unsigned long long _connectionReuseCount;
	unsigned long long _currentRTT;
	unsigned long long _dataStallCount;
	unsigned long long _flowConnectMilliseconds;
	unsigned long long _flowDurationMilliseconds;
	unsigned long long _ipv4AddressCount;
	unsigned long long _ipv4DNSServerCount;
	unsigned long long _ipv6AddressCount;
	unsigned long long _ipv6DNSServerCount;
	unsigned long long _multipathBytesInCell;
	unsigned long long _multipathBytesInInitial;
	unsigned long long _multipathBytesInWiFi;
	unsigned long long _multipathBytesOutCell;
	unsigned long long _multipathBytesOutInitial;
	unsigned long long _multipathBytesOutWiFi;
	unsigned long long _multipathServiceType;
	unsigned long long _packetsIn;
	unsigned long long _packetsOut;
	unsigned long long _pathTriggerMilliseconds;
	unsigned long long _proxyMilliseconds;
	unsigned long long _rTTvariance;
	unsigned long long _resolutionMilliseconds;
	unsigned long long _smoothedRTT;
	unsigned long long _synRetransmissionCount;
	unsigned long long _timestamp;
	unsigned long long _tlsMilliseconds;
	unsigned long long _trafficClass;
	int _appleApp;
	int _appleHost;
	int _connectedAddressFamily;
	int _connectedInterfaceType;
	int _connectionMode;
	int _failureReason;
	int _firstAddressFamily;
	int _stackLevel;
	int _tlsVersion;
	int _usedProxyType;
	BOOL _customProxyConfigured;
	BOOL _fallbackEligible;
	BOOL _firstParty;
	BOOL _ipv4Available;
	BOOL _ipv6Available;
	BOOL _multipathConfigured;
	BOOL _resolutionRequired;
	BOOL _synthesizedExtraIPv6Address;
	BOOL _synthesizedIPv6Address;
	BOOL _systemProxyConfigured;
	BOOL _tfoConfigured;
	BOOL _tfoUsed;
	BOOL _tlsConfigured;
	BOOL _tlsVersionTimeout;
	BOOL _triggeredPath;
	BOOL _usedFallback;
	BOOL _weakFallback;
	SCD_Struct_NW10 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                             //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasTriggeredPath; 
@property (assign,nonatomic) BOOL triggeredPath;                                       //@synthesize triggeredPath=_triggeredPath - In the implementation block
@property (assign,nonatomic) BOOL hasSystemProxyConfigured; 
@property (assign,nonatomic) BOOL systemProxyConfigured;                               //@synthesize systemProxyConfigured=_systemProxyConfigured - In the implementation block
@property (assign,nonatomic) BOOL hasCustomProxyConfigured; 
@property (assign,nonatomic) BOOL customProxyConfigured;                               //@synthesize customProxyConfigured=_customProxyConfigured - In the implementation block
@property (assign,nonatomic) BOOL hasUsedProxyType; 
@property (assign,nonatomic) int usedProxyType;                                        //@synthesize usedProxyType=_usedProxyType - In the implementation block
@property (assign,nonatomic) BOOL hasFallbackEligible; 
@property (assign,nonatomic) BOOL fallbackEligible;                                    //@synthesize fallbackEligible=_fallbackEligible - In the implementation block
@property (assign,nonatomic) BOOL hasWeakFallback; 
@property (assign,nonatomic) BOOL weakFallback;                                        //@synthesize weakFallback=_weakFallback - In the implementation block
@property (assign,nonatomic) BOOL hasUsedFallback; 
@property (assign,nonatomic) BOOL usedFallback;                                        //@synthesize usedFallback=_usedFallback - In the implementation block
@property (assign,nonatomic) BOOL hasResolutionRequired; 
@property (assign,nonatomic) BOOL resolutionRequired;                                  //@synthesize resolutionRequired=_resolutionRequired - In the implementation block
@property (assign,nonatomic) BOOL hasTlsConfigured; 
@property (assign,nonatomic) BOOL tlsConfigured;                                       //@synthesize tlsConfigured=_tlsConfigured - In the implementation block
@property (assign,nonatomic) BOOL hasTfoConfigured; 
@property (assign,nonatomic) BOOL tfoConfigured;                                       //@synthesize tfoConfigured=_tfoConfigured - In the implementation block
@property (assign,nonatomic) BOOL hasMultipathConfigured; 
@property (assign,nonatomic) BOOL multipathConfigured;                                 //@synthesize multipathConfigured=_multipathConfigured - In the implementation block
@property (assign,nonatomic) BOOL hasTrafficClass; 
@property (assign,nonatomic) unsigned long long trafficClass;                          //@synthesize trafficClass=_trafficClass - In the implementation block
@property (assign,nonatomic) BOOL hasFailureReason; 
@property (assign,nonatomic) int failureReason;                                        //@synthesize failureReason=_failureReason - In the implementation block
@property (assign,nonatomic) BOOL hasPathTriggerMilliseconds; 
@property (assign,nonatomic) unsigned long long pathTriggerMilliseconds;               //@synthesize pathTriggerMilliseconds=_pathTriggerMilliseconds - In the implementation block
@property (assign,nonatomic) BOOL hasResolutionMilliseconds; 
@property (assign,nonatomic) unsigned long long resolutionMilliseconds;                //@synthesize resolutionMilliseconds=_resolutionMilliseconds - In the implementation block
@property (assign,nonatomic) BOOL hasProxyMilliseconds; 
@property (assign,nonatomic) unsigned long long proxyMilliseconds;                     //@synthesize proxyMilliseconds=_proxyMilliseconds - In the implementation block
@property (assign,nonatomic) BOOL hasFlowConnectMilliseconds; 
@property (assign,nonatomic) unsigned long long flowConnectMilliseconds;               //@synthesize flowConnectMilliseconds=_flowConnectMilliseconds - In the implementation block
@property (assign,nonatomic) BOOL hasTlsMilliseconds; 
@property (assign,nonatomic) unsigned long long tlsMilliseconds;                       //@synthesize tlsMilliseconds=_tlsMilliseconds - In the implementation block
@property (assign,nonatomic) BOOL hasFlowDurationMilliseconds; 
@property (assign,nonatomic) unsigned long long flowDurationMilliseconds;              //@synthesize flowDurationMilliseconds=_flowDurationMilliseconds - In the implementation block
@property (assign,nonatomic) BOOL hasIpv4AddressCount; 
@property (assign,nonatomic) unsigned long long ipv4AddressCount;                      //@synthesize ipv4AddressCount=_ipv4AddressCount - In the implementation block
@property (assign,nonatomic) BOOL hasIpv6AddressCount; 
@property (assign,nonatomic) unsigned long long ipv6AddressCount;                      //@synthesize ipv6AddressCount=_ipv6AddressCount - In the implementation block
@property (assign,nonatomic) BOOL hasSynthesizedIPv6Address; 
@property (assign,nonatomic) BOOL synthesizedIPv6Address;                              //@synthesize synthesizedIPv6Address=_synthesizedIPv6Address - In the implementation block
@property (assign,nonatomic) BOOL hasFirstAddressFamily; 
@property (assign,nonatomic) int firstAddressFamily;                                   //@synthesize firstAddressFamily=_firstAddressFamily - In the implementation block
@property (assign,nonatomic) BOOL hasConnectedAddressFamily; 
@property (assign,nonatomic) int connectedAddressFamily;                               //@synthesize connectedAddressFamily=_connectedAddressFamily - In the implementation block
@property (assign,nonatomic) BOOL hasConnectedAddressIndex; 
@property (assign,nonatomic) unsigned long long connectedAddressIndex;                 //@synthesize connectedAddressIndex=_connectedAddressIndex - In the implementation block
@property (assign,nonatomic) BOOL hasConnectedInterfaceType; 
@property (assign,nonatomic) int connectedInterfaceType;                               //@synthesize connectedInterfaceType=_connectedInterfaceType - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionReuseCount; 
@property (assign,nonatomic) unsigned long long connectionReuseCount;                  //@synthesize connectionReuseCount=_connectionReuseCount - In the implementation block
@property (assign,nonatomic) BOOL hasDataStallCount; 
@property (assign,nonatomic) unsigned long long dataStallCount;                        //@synthesize dataStallCount=_dataStallCount - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionMode; 
@property (assign,nonatomic) int connectionMode;                                       //@synthesize connectionMode=_connectionMode - In the implementation block
@property (assign,nonatomic) BOOL hasAppleHost; 
@property (assign,nonatomic) int appleHost;                                            //@synthesize appleHost=_appleHost - In the implementation block
@property (assign,nonatomic) BOOL hasAppleApp; 
@property (assign,nonatomic) int appleApp;                                             //@synthesize appleApp=_appleApp - In the implementation block
@property (assign,nonatomic) BOOL hasTlsVersion; 
@property (assign,nonatomic) int tlsVersion;                                           //@synthesize tlsVersion=_tlsVersion - In the implementation block
@property (assign,nonatomic) BOOL hasStackLevel; 
@property (assign,nonatomic) int stackLevel;                                           //@synthesize stackLevel=_stackLevel - In the implementation block
@property (assign,nonatomic) BOOL hasIpv4Available; 
@property (assign,nonatomic) BOOL ipv4Available;                                       //@synthesize ipv4Available=_ipv4Available - In the implementation block
@property (assign,nonatomic) BOOL hasIpv6Available; 
@property (assign,nonatomic) BOOL ipv6Available;                                       //@synthesize ipv6Available=_ipv6Available - In the implementation block
@property (assign,nonatomic) BOOL hasIpv4DNSServerCount; 
@property (assign,nonatomic) unsigned long long ipv4DNSServerCount;                    //@synthesize ipv4DNSServerCount=_ipv4DNSServerCount - In the implementation block
@property (assign,nonatomic) BOOL hasIpv6DNSServerCount; 
@property (assign,nonatomic) unsigned long long ipv6DNSServerCount;                    //@synthesize ipv6DNSServerCount=_ipv6DNSServerCount - In the implementation block
@property (assign,nonatomic) BOOL hasTlsVersionTimeout; 
@property (assign,nonatomic) BOOL tlsVersionTimeout;                                   //@synthesize tlsVersionTimeout=_tlsVersionTimeout - In the implementation block
@property (assign,nonatomic) BOOL hasSynthesizedExtraIPv6Address; 
@property (assign,nonatomic) BOOL synthesizedExtraIPv6Address;                         //@synthesize synthesizedExtraIPv6Address=_synthesizedExtraIPv6Address - In the implementation block
@property (assign,nonatomic) BOOL hasBytesIn; 
@property (assign,nonatomic) unsigned long long bytesIn;                               //@synthesize bytesIn=_bytesIn - In the implementation block
@property (assign,nonatomic) BOOL hasBytesOut; 
@property (assign,nonatomic) unsigned long long bytesOut;                              //@synthesize bytesOut=_bytesOut - In the implementation block
@property (assign,nonatomic) BOOL hasBytesDuplicate; 
@property (assign,nonatomic) unsigned long long bytesDuplicate;                        //@synthesize bytesDuplicate=_bytesDuplicate - In the implementation block
@property (assign,nonatomic) BOOL hasBytesOutOfOrder; 
@property (assign,nonatomic) unsigned long long bytesOutOfOrder;                       //@synthesize bytesOutOfOrder=_bytesOutOfOrder - In the implementation block
@property (assign,nonatomic) BOOL hasBytesRetransmitted; 
@property (assign,nonatomic) unsigned long long bytesRetransmitted;                    //@synthesize bytesRetransmitted=_bytesRetransmitted - In the implementation block
@property (assign,nonatomic) BOOL hasPacketsIn; 
@property (assign,nonatomic) unsigned long long packetsIn;                             //@synthesize packetsIn=_packetsIn - In the implementation block
@property (assign,nonatomic) BOOL hasPacketsOut; 
@property (assign,nonatomic) unsigned long long packetsOut;                            //@synthesize packetsOut=_packetsOut - In the implementation block
@property (assign,nonatomic) BOOL hasCurrentRTT; 
@property (assign,nonatomic) unsigned long long currentRTT;                            //@synthesize currentRTT=_currentRTT - In the implementation block
@property (assign,nonatomic) BOOL hasSmoothedRTT; 
@property (assign,nonatomic) unsigned long long smoothedRTT;                           //@synthesize smoothedRTT=_smoothedRTT - In the implementation block
@property (assign,nonatomic) BOOL hasBestRTT; 
@property (assign,nonatomic) unsigned long long bestRTT;                               //@synthesize bestRTT=_bestRTT - In the implementation block
@property (assign,nonatomic) BOOL hasRTTvariance; 
@property (assign,nonatomic) unsigned long long rTTvariance;                           //@synthesize rTTvariance=_rTTvariance - In the implementation block
@property (assign,nonatomic) BOOL hasSynRetransmissionCount; 
@property (assign,nonatomic) unsigned long long synRetransmissionCount;                //@synthesize synRetransmissionCount=_synRetransmissionCount - In the implementation block
@property (assign,nonatomic) BOOL hasTfoUsed; 
@property (assign,nonatomic) BOOL tfoUsed;                                             //@synthesize tfoUsed=_tfoUsed - In the implementation block
@property (assign,nonatomic) BOOL hasMultipathServiceType; 
@property (assign,nonatomic) unsigned long long multipathServiceType;                  //@synthesize multipathServiceType=_multipathServiceType - In the implementation block
@property (assign,nonatomic) BOOL hasFirstParty; 
@property (assign,nonatomic) BOOL firstParty;                                          //@synthesize firstParty=_firstParty - In the implementation block
@property (assign,nonatomic) BOOL hasMultipathBytesInCell; 
@property (assign,nonatomic) unsigned long long multipathBytesInCell;                  //@synthesize multipathBytesInCell=_multipathBytesInCell - In the implementation block
@property (assign,nonatomic) BOOL hasMultipathBytesOutCell; 
@property (assign,nonatomic) unsigned long long multipathBytesOutCell;                 //@synthesize multipathBytesOutCell=_multipathBytesOutCell - In the implementation block
@property (assign,nonatomic) BOOL hasMultipathBytesInWiFi; 
@property (assign,nonatomic) unsigned long long multipathBytesInWiFi;                  //@synthesize multipathBytesInWiFi=_multipathBytesInWiFi - In the implementation block
@property (assign,nonatomic) BOOL hasMultipathBytesOutWiFi; 
@property (assign,nonatomic) unsigned long long multipathBytesOutWiFi;                 //@synthesize multipathBytesOutWiFi=_multipathBytesOutWiFi - In the implementation block
@property (assign,nonatomic) BOOL hasMultipathBytesInInitial; 
@property (assign,nonatomic) unsigned long long multipathBytesInInitial;               //@synthesize multipathBytesInInitial=_multipathBytesInInitial - In the implementation block
@property (assign,nonatomic) BOOL hasMultipathBytesOutInitial; 
@property (assign,nonatomic) unsigned long long multipathBytesOutInitial;              //@synthesize multipathBytesOutInitial=_multipathBytesOutInitial - In the implementation block
-(void)setCurrentRTT:(unsigned long long)arg1 ;
-(void)setHasCurrentRTT:(BOOL)arg1 ;
-(BOOL)hasCurrentRTT;
-(unsigned long long)currentRTT;
-(void)setBytesIn:(unsigned long long)arg1 ;
-(void)setHasBytesIn:(BOOL)arg1 ;
-(BOOL)hasBytesIn;
-(void)setBytesOut:(unsigned long long)arg1 ;
-(void)setHasBytesOut:(BOOL)arg1 ;
-(BOOL)hasBytesOut;
-(void)setMultipathBytesInCell:(unsigned long long)arg1 ;
-(void)setHasMultipathBytesInCell:(BOOL)arg1 ;
-(BOOL)hasMultipathBytesInCell;
-(void)setMultipathBytesOutCell:(unsigned long long)arg1 ;
-(void)setHasMultipathBytesOutCell:(BOOL)arg1 ;
-(BOOL)hasMultipathBytesOutCell;
-(void)setMultipathBytesInWiFi:(unsigned long long)arg1 ;
-(void)setHasMultipathBytesInWiFi:(BOOL)arg1 ;
-(BOOL)hasMultipathBytesInWiFi;
-(void)setMultipathBytesOutWiFi:(unsigned long long)arg1 ;
-(void)setHasMultipathBytesOutWiFi:(BOOL)arg1 ;
-(BOOL)hasMultipathBytesOutWiFi;
-(void)setMultipathBytesInInitial:(unsigned long long)arg1 ;
-(void)setHasMultipathBytesInInitial:(BOOL)arg1 ;
-(BOOL)hasMultipathBytesInInitial;
-(void)setMultipathBytesOutInitial:(unsigned long long)arg1 ;
-(void)setHasMultipathBytesOutInitial:(BOOL)arg1 ;
-(BOOL)hasMultipathBytesOutInitial;
-(unsigned long long)bytesIn;
-(unsigned long long)bytesOut;
-(unsigned long long)multipathBytesInCell;
-(unsigned long long)multipathBytesOutCell;
-(unsigned long long)multipathBytesInWiFi;
-(unsigned long long)multipathBytesOutWiFi;
-(unsigned long long)multipathBytesInInitial;
-(unsigned long long)multipathBytesOutInitial;
-(int)connectedInterfaceType;
-(void)setConnectedInterfaceType:(int)arg1 ;
-(void)setHasConnectedInterfaceType:(BOOL)arg1 ;
-(BOOL)hasConnectedInterfaceType;
-(id)connectedInterfaceTypeAsString:(int)arg1 ;
-(int)StringAsConnectedInterfaceType:(id)arg1 ;
-(void)setBytesDuplicate:(unsigned long long)arg1 ;
-(void)setHasBytesDuplicate:(BOOL)arg1 ;
-(BOOL)hasBytesDuplicate;
-(void)setBytesOutOfOrder:(unsigned long long)arg1 ;
-(void)setHasBytesOutOfOrder:(BOOL)arg1 ;
-(BOOL)hasBytesOutOfOrder;
-(void)setBytesRetransmitted:(unsigned long long)arg1 ;
-(void)setHasBytesRetransmitted:(BOOL)arg1 ;
-(BOOL)hasBytesRetransmitted;
-(void)setRTTvariance:(unsigned long long)arg1 ;
-(void)setHasRTTvariance:(BOOL)arg1 ;
-(BOOL)hasRTTvariance;
-(void)setSynRetransmissionCount:(unsigned long long)arg1 ;
-(void)setHasSynRetransmissionCount:(BOOL)arg1 ;
-(BOOL)hasSynRetransmissionCount;
-(void)setConnectionReuseCount:(unsigned long long)arg1 ;
-(void)setHasConnectionReuseCount:(BOOL)arg1 ;
-(BOOL)hasConnectionReuseCount;
-(void)setTrafficClass:(unsigned long long)arg1 ;
-(void)setHasTrafficClass:(BOOL)arg1 ;
-(BOOL)hasTrafficClass;
-(void)setMultipathServiceType:(unsigned long long)arg1 ;
-(void)setHasMultipathServiceType:(BOOL)arg1 ;
-(BOOL)hasMultipathServiceType;
-(void)setFirstParty:(BOOL)arg1 ;
-(void)setHasFirstParty:(BOOL)arg1 ;
-(BOOL)hasFirstParty;
-(unsigned long long)bytesDuplicate;
-(unsigned long long)bytesOutOfOrder;
-(unsigned long long)bytesRetransmitted;
-(unsigned long long)rTTvariance;
-(unsigned long long)synRetransmissionCount;
-(unsigned long long)connectionReuseCount;
-(unsigned long long)trafficClass;
-(unsigned long long)multipathServiceType;
-(BOOL)firstParty;
-(void)setTriggeredPath:(BOOL)arg1 ;
-(void)setHasTriggeredPath:(BOOL)arg1 ;
-(BOOL)hasTriggeredPath;
-(void)setSystemProxyConfigured:(BOOL)arg1 ;
-(void)setHasSystemProxyConfigured:(BOOL)arg1 ;
-(BOOL)hasSystemProxyConfigured;
-(void)setCustomProxyConfigured:(BOOL)arg1 ;
-(void)setHasCustomProxyConfigured:(BOOL)arg1 ;
-(BOOL)hasCustomProxyConfigured;
-(int)usedProxyType;
-(void)setUsedProxyType:(int)arg1 ;
-(void)setHasUsedProxyType:(BOOL)arg1 ;
-(BOOL)hasUsedProxyType;
-(id)usedProxyTypeAsString:(int)arg1 ;
-(int)StringAsUsedProxyType:(id)arg1 ;
-(void)setFallbackEligible:(BOOL)arg1 ;
-(void)setHasFallbackEligible:(BOOL)arg1 ;
-(BOOL)hasFallbackEligible;
-(void)setWeakFallback:(BOOL)arg1 ;
-(void)setHasWeakFallback:(BOOL)arg1 ;
-(BOOL)hasWeakFallback;
-(void)setUsedFallback:(BOOL)arg1 ;
-(void)setHasUsedFallback:(BOOL)arg1 ;
-(BOOL)hasUsedFallback;
-(void)setResolutionRequired:(BOOL)arg1 ;
-(void)setHasResolutionRequired:(BOOL)arg1 ;
-(BOOL)hasResolutionRequired;
-(void)setTlsConfigured:(BOOL)arg1 ;
-(void)setHasTlsConfigured:(BOOL)arg1 ;
-(BOOL)hasTlsConfigured;
-(void)setTfoConfigured:(BOOL)arg1 ;
-(void)setHasTfoConfigured:(BOOL)arg1 ;
-(BOOL)hasTfoConfigured;
-(void)setMultipathConfigured:(BOOL)arg1 ;
-(void)setHasMultipathConfigured:(BOOL)arg1 ;
-(BOOL)hasMultipathConfigured;
-(void)setPathTriggerMilliseconds:(unsigned long long)arg1 ;
-(void)setHasPathTriggerMilliseconds:(BOOL)arg1 ;
-(BOOL)hasPathTriggerMilliseconds;
-(void)setResolutionMilliseconds:(unsigned long long)arg1 ;
-(void)setHasResolutionMilliseconds:(BOOL)arg1 ;
-(BOOL)hasResolutionMilliseconds;
-(void)setProxyMilliseconds:(unsigned long long)arg1 ;
-(void)setHasProxyMilliseconds:(BOOL)arg1 ;
-(BOOL)hasProxyMilliseconds;
-(void)setFlowConnectMilliseconds:(unsigned long long)arg1 ;
-(void)setHasFlowConnectMilliseconds:(BOOL)arg1 ;
-(BOOL)hasFlowConnectMilliseconds;
-(void)setTlsMilliseconds:(unsigned long long)arg1 ;
-(void)setHasTlsMilliseconds:(BOOL)arg1 ;
-(BOOL)hasTlsMilliseconds;
-(void)setFlowDurationMilliseconds:(unsigned long long)arg1 ;
-(void)setHasFlowDurationMilliseconds:(BOOL)arg1 ;
-(BOOL)hasFlowDurationMilliseconds;
-(void)setIpv4AddressCount:(unsigned long long)arg1 ;
-(void)setHasIpv4AddressCount:(BOOL)arg1 ;
-(BOOL)hasIpv4AddressCount;
-(void)setIpv6AddressCount:(unsigned long long)arg1 ;
-(void)setHasIpv6AddressCount:(BOOL)arg1 ;
-(BOOL)hasIpv6AddressCount;
-(void)setSynthesizedIPv6Address:(BOOL)arg1 ;
-(void)setHasSynthesizedIPv6Address:(BOOL)arg1 ;
-(BOOL)hasSynthesizedIPv6Address;
-(int)firstAddressFamily;
-(void)setFirstAddressFamily:(int)arg1 ;
-(void)setHasFirstAddressFamily:(BOOL)arg1 ;
-(BOOL)hasFirstAddressFamily;
-(id)firstAddressFamilyAsString:(int)arg1 ;
-(int)StringAsFirstAddressFamily:(id)arg1 ;
-(int)connectedAddressFamily;
-(void)setConnectedAddressFamily:(int)arg1 ;
-(void)setHasConnectedAddressFamily:(BOOL)arg1 ;
-(BOOL)hasConnectedAddressFamily;
-(id)connectedAddressFamilyAsString:(int)arg1 ;
-(int)StringAsConnectedAddressFamily:(id)arg1 ;
-(void)setConnectedAddressIndex:(unsigned long long)arg1 ;
-(void)setHasConnectedAddressIndex:(BOOL)arg1 ;
-(BOOL)hasConnectedAddressIndex;
-(void)setDataStallCount:(unsigned long long)arg1 ;
-(void)setHasDataStallCount:(BOOL)arg1 ;
-(BOOL)hasDataStallCount;
-(int)connectionMode;
-(void)setConnectionMode:(int)arg1 ;
-(void)setHasConnectionMode:(BOOL)arg1 ;
-(BOOL)hasConnectionMode;
-(id)connectionModeAsString:(int)arg1 ;
-(int)StringAsConnectionMode:(id)arg1 ;
-(int)appleHost;
-(void)setAppleHost:(int)arg1 ;
-(void)setHasAppleHost:(BOOL)arg1 ;
-(BOOL)hasAppleHost;
-(id)appleHostAsString:(int)arg1 ;
-(int)StringAsAppleHost:(id)arg1 ;
-(int)appleApp;
-(void)setAppleApp:(int)arg1 ;
-(void)setHasAppleApp:(BOOL)arg1 ;
-(BOOL)hasAppleApp;
-(id)appleAppAsString:(int)arg1 ;
-(int)StringAsAppleApp:(id)arg1 ;
-(int)tlsVersion;
-(void)setTlsVersion:(int)arg1 ;
-(void)setHasTlsVersion:(BOOL)arg1 ;
-(BOOL)hasTlsVersion;
-(id)tlsVersionAsString:(int)arg1 ;
-(int)StringAsTlsVersion:(id)arg1 ;
-(int)stackLevel;
-(void)setStackLevel:(int)arg1 ;
-(void)setHasStackLevel:(BOOL)arg1 ;
-(BOOL)hasStackLevel;
-(id)stackLevelAsString:(int)arg1 ;
-(int)StringAsStackLevel:(id)arg1 ;
-(void)setIpv4Available:(BOOL)arg1 ;
-(void)setHasIpv4Available:(BOOL)arg1 ;
-(BOOL)hasIpv4Available;
-(void)setIpv6Available:(BOOL)arg1 ;
-(void)setHasIpv6Available:(BOOL)arg1 ;
-(BOOL)hasIpv6Available;
-(void)setIpv4DNSServerCount:(unsigned long long)arg1 ;
-(void)setHasIpv4DNSServerCount:(BOOL)arg1 ;
-(BOOL)hasIpv4DNSServerCount;
-(void)setIpv6DNSServerCount:(unsigned long long)arg1 ;
-(void)setHasIpv6DNSServerCount:(BOOL)arg1 ;
-(BOOL)hasIpv6DNSServerCount;
-(void)setTlsVersionTimeout:(BOOL)arg1 ;
-(void)setHasTlsVersionTimeout:(BOOL)arg1 ;
-(BOOL)hasTlsVersionTimeout;
-(void)setSynthesizedExtraIPv6Address:(BOOL)arg1 ;
-(void)setHasSynthesizedExtraIPv6Address:(BOOL)arg1 ;
-(BOOL)hasSynthesizedExtraIPv6Address;
-(void)setSmoothedRTT:(unsigned long long)arg1 ;
-(void)setHasSmoothedRTT:(BOOL)arg1 ;
-(BOOL)hasSmoothedRTT;
-(void)setBestRTT:(unsigned long long)arg1 ;
-(void)setHasBestRTT:(BOOL)arg1 ;
-(BOOL)hasBestRTT;
-(void)setTfoUsed:(BOOL)arg1 ;
-(void)setHasTfoUsed:(BOOL)arg1 ;
-(BOOL)hasTfoUsed;
-(BOOL)triggeredPath;
-(BOOL)systemProxyConfigured;
-(BOOL)customProxyConfigured;
-(BOOL)fallbackEligible;
-(BOOL)weakFallback;
-(BOOL)usedFallback;
-(BOOL)resolutionRequired;
-(BOOL)tlsConfigured;
-(BOOL)tfoConfigured;
-(BOOL)multipathConfigured;
-(unsigned long long)pathTriggerMilliseconds;
-(unsigned long long)resolutionMilliseconds;
-(unsigned long long)proxyMilliseconds;
-(unsigned long long)flowConnectMilliseconds;
-(unsigned long long)tlsMilliseconds;
-(unsigned long long)flowDurationMilliseconds;
-(unsigned long long)ipv4AddressCount;
-(unsigned long long)ipv6AddressCount;
-(BOOL)synthesizedIPv6Address;
-(unsigned long long)connectedAddressIndex;
-(unsigned long long)dataStallCount;
-(BOOL)ipv4Available;
-(BOOL)ipv6Available;
-(unsigned long long)ipv4DNSServerCount;
-(unsigned long long)ipv6DNSServerCount;
-(BOOL)tlsVersionTimeout;
-(BOOL)synthesizedExtraIPv6Address;
-(unsigned long long)smoothedRTT;
-(unsigned long long)bestRTT;
-(BOOL)tfoUsed;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setPacketsIn:(unsigned long long)arg1 ;
-(void)setHasPacketsIn:(BOOL)arg1 ;
-(BOOL)hasPacketsIn;
-(void)setPacketsOut:(unsigned long long)arg1 ;
-(void)setHasPacketsOut:(BOOL)arg1 ;
-(BOOL)hasPacketsOut;
-(unsigned long long)packetsIn;
-(unsigned long long)packetsOut;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)failureReason;
-(void)setFailureReason:(int)arg1 ;
-(void)setHasFailureReason:(BOOL)arg1 ;
-(BOOL)hasFailureReason;
-(id)failureReasonAsString:(int)arg1 ;
-(int)StringAsFailureReason:(id)arg1 ;
@end

