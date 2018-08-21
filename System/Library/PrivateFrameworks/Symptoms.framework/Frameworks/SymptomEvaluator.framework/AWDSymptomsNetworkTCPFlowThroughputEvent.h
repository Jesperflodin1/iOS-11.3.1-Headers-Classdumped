/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:00 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDSymptomsNetworkTCPFlowThroughputEvent : PBCodable <NSCopying> {

	unsigned long long _connAttempts;
	unsigned long long _connSuccess;
	unsigned long long _delayedACKFactor;
	unsigned long long _dlThroughputBytesPerSec;
	unsigned long long _estimatorConfidence;
	unsigned long long _estimatorDelayMsecs;
	unsigned long long _flowDurationMsecs;
	unsigned long long _invalidResponses;
	long long _lQM;
	unsigned long long _maxCongestionWindow;
	unsigned long long _packetErrorRate;
	unsigned long long _retransmissionTimeoutMsecs;
	unsigned long long _rttAverageMsecs;
	unsigned long long _rttMinimumMsecs;
	unsigned long long _rttVariation;
	unsigned long long _rxBytes;
	unsigned long long _rxDuplicateBytes;
	unsigned long long _rxOutOfOrderBytes;
	unsigned long long _timeToNetworkEventsMsecs;
	unsigned long long _txBytes;
	unsigned long long _txRetransmittedBytes;
	unsigned long long _ulThroughputBytesPerSec;
	int _snapshotType;
	int _throughputType;
	SCD_Struct_AW16 _has;

}

@property (assign,nonatomic) BOOL hasTimeToNetworkEventsMsecs; 
@property (assign,nonatomic) unsigned long long timeToNetworkEventsMsecs;                //@synthesize timeToNetworkEventsMsecs=_timeToNetworkEventsMsecs - In the implementation block
@property (assign,nonatomic) BOOL hasThroughputType; 
@property (assign,nonatomic) int throughputType;                                         //@synthesize throughputType=_throughputType - In the implementation block
@property (assign,nonatomic) BOOL hasSnapshotType; 
@property (assign,nonatomic) int snapshotType;                                           //@synthesize snapshotType=_snapshotType - In the implementation block
@property (assign,nonatomic) BOOL hasTxBytes; 
@property (assign,nonatomic) unsigned long long txBytes;                                 //@synthesize txBytes=_txBytes - In the implementation block
@property (assign,nonatomic) BOOL hasRxBytes; 
@property (assign,nonatomic) unsigned long long rxBytes;                                 //@synthesize rxBytes=_rxBytes - In the implementation block
@property (assign,nonatomic) BOOL hasFlowDurationMsecs; 
@property (assign,nonatomic) unsigned long long flowDurationMsecs;                       //@synthesize flowDurationMsecs=_flowDurationMsecs - In the implementation block
@property (assign,nonatomic) BOOL hasUlThroughputBytesPerSec; 
@property (assign,nonatomic) unsigned long long ulThroughputBytesPerSec;                 //@synthesize ulThroughputBytesPerSec=_ulThroughputBytesPerSec - In the implementation block
@property (assign,nonatomic) BOOL hasDlThroughputBytesPerSec; 
@property (assign,nonatomic) unsigned long long dlThroughputBytesPerSec;                 //@synthesize dlThroughputBytesPerSec=_dlThroughputBytesPerSec - In the implementation block
@property (assign,nonatomic) BOOL hasEstimatorDelayMsecs; 
@property (assign,nonatomic) unsigned long long estimatorDelayMsecs;                     //@synthesize estimatorDelayMsecs=_estimatorDelayMsecs - In the implementation block
@property (assign,nonatomic) BOOL hasEstimatorConfidence; 
@property (assign,nonatomic) unsigned long long estimatorConfidence;                     //@synthesize estimatorConfidence=_estimatorConfidence - In the implementation block
@property (assign,nonatomic) BOOL hasInvalidResponses; 
@property (assign,nonatomic) unsigned long long invalidResponses;                        //@synthesize invalidResponses=_invalidResponses - In the implementation block
@property (assign,nonatomic) BOOL hasRxDuplicateBytes; 
@property (assign,nonatomic) unsigned long long rxDuplicateBytes;                        //@synthesize rxDuplicateBytes=_rxDuplicateBytes - In the implementation block
@property (assign,nonatomic) BOOL hasRxOutOfOrderBytes; 
@property (assign,nonatomic) unsigned long long rxOutOfOrderBytes;                       //@synthesize rxOutOfOrderBytes=_rxOutOfOrderBytes - In the implementation block
@property (assign,nonatomic) BOOL hasTxRetransmittedBytes; 
@property (assign,nonatomic) unsigned long long txRetransmittedBytes;                    //@synthesize txRetransmittedBytes=_txRetransmittedBytes - In the implementation block
@property (assign,nonatomic) BOOL hasConnAttempts; 
@property (assign,nonatomic) unsigned long long connAttempts;                            //@synthesize connAttempts=_connAttempts - In the implementation block
@property (assign,nonatomic) BOOL hasConnSuccess; 
@property (assign,nonatomic) unsigned long long connSuccess;                             //@synthesize connSuccess=_connSuccess - In the implementation block
@property (assign,nonatomic) BOOL hasRttMinimumMsecs; 
@property (assign,nonatomic) unsigned long long rttMinimumMsecs;                         //@synthesize rttMinimumMsecs=_rttMinimumMsecs - In the implementation block
@property (assign,nonatomic) BOOL hasRttAverageMsecs; 
@property (assign,nonatomic) unsigned long long rttAverageMsecs;                         //@synthesize rttAverageMsecs=_rttAverageMsecs - In the implementation block
@property (assign,nonatomic) BOOL hasRttVariation; 
@property (assign,nonatomic) unsigned long long rttVariation;                            //@synthesize rttVariation=_rttVariation - In the implementation block
@property (assign,nonatomic) BOOL hasMaxCongestionWindow; 
@property (assign,nonatomic) unsigned long long maxCongestionWindow;                     //@synthesize maxCongestionWindow=_maxCongestionWindow - In the implementation block
@property (assign,nonatomic) BOOL hasDelayedACKFactor; 
@property (assign,nonatomic) unsigned long long delayedACKFactor;                        //@synthesize delayedACKFactor=_delayedACKFactor - In the implementation block
@property (assign,nonatomic) BOOL hasRetransmissionTimeoutMsecs; 
@property (assign,nonatomic) unsigned long long retransmissionTimeoutMsecs;              //@synthesize retransmissionTimeoutMsecs=_retransmissionTimeoutMsecs - In the implementation block
@property (assign,nonatomic) BOOL hasPacketErrorRate; 
@property (assign,nonatomic) unsigned long long packetErrorRate;                         //@synthesize packetErrorRate=_packetErrorRate - In the implementation block
@property (assign,nonatomic) BOOL hasLQM; 
@property (assign,nonatomic) long long lQM;                                              //@synthesize lQM=_lQM - In the implementation block
-(unsigned long long)timeToNetworkEventsMsecs;
-(void)setFlowDurationMsecs:(unsigned long long)arg1 ;
-(void)setHasFlowDurationMsecs:(BOOL)arg1 ;
-(BOOL)hasFlowDurationMsecs;
-(unsigned long long)flowDurationMsecs;
-(long long)lQM;
-(void)setLQM:(long long)arg1 ;
-(void)setHasLQM:(BOOL)arg1 ;
-(BOOL)hasLQM;
-(void)setTxBytes:(unsigned long long)arg1 ;
-(void)setHasTxBytes:(BOOL)arg1 ;
-(BOOL)hasTxBytes;
-(void)setRxBytes:(unsigned long long)arg1 ;
-(void)setHasRxBytes:(BOOL)arg1 ;
-(BOOL)hasRxBytes;
-(unsigned long long)txBytes;
-(unsigned long long)rxBytes;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setRxOutOfOrderBytes:(unsigned long long)arg1 ;
-(void)setHasRxOutOfOrderBytes:(BOOL)arg1 ;
-(BOOL)hasRxOutOfOrderBytes;
-(unsigned long long)rxOutOfOrderBytes;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)rxDuplicateBytes;
-(unsigned long long)txRetransmittedBytes;
-(unsigned long long)rttVariation;
-(void)setRttVariation:(unsigned long long)arg1 ;
-(void)setConnAttempts:(unsigned long long)arg1 ;
-(unsigned long long)connAttempts;
-(void)setHasConnAttempts:(BOOL)arg1 ;
-(BOOL)hasConnAttempts;
-(void)setConnSuccess:(unsigned long long)arg1 ;
-(void)setHasConnSuccess:(BOOL)arg1 ;
-(BOOL)hasConnSuccess;
-(unsigned long long)connSuccess;
-(void)setTimeToNetworkEventsMsecs:(unsigned long long)arg1 ;
-(void)setHasTimeToNetworkEventsMsecs:(BOOL)arg1 ;
-(BOOL)hasTimeToNetworkEventsMsecs;
-(int)throughputType;
-(void)setThroughputType:(int)arg1 ;
-(void)setHasThroughputType:(BOOL)arg1 ;
-(BOOL)hasThroughputType;
-(id)throughputTypeAsString:(int)arg1 ;
-(int)StringAsThroughputType:(id)arg1 ;
-(int)snapshotType;
-(void)setSnapshotType:(int)arg1 ;
-(void)setHasSnapshotType:(BOOL)arg1 ;
-(BOOL)hasSnapshotType;
-(id)snapshotTypeAsString:(int)arg1 ;
-(int)StringAsSnapshotType:(id)arg1 ;
-(void)setUlThroughputBytesPerSec:(unsigned long long)arg1 ;
-(void)setHasUlThroughputBytesPerSec:(BOOL)arg1 ;
-(BOOL)hasUlThroughputBytesPerSec;
-(void)setDlThroughputBytesPerSec:(unsigned long long)arg1 ;
-(void)setHasDlThroughputBytesPerSec:(BOOL)arg1 ;
-(BOOL)hasDlThroughputBytesPerSec;
-(void)setEstimatorDelayMsecs:(unsigned long long)arg1 ;
-(void)setHasEstimatorDelayMsecs:(BOOL)arg1 ;
-(BOOL)hasEstimatorDelayMsecs;
-(void)setEstimatorConfidence:(unsigned long long)arg1 ;
-(void)setHasEstimatorConfidence:(BOOL)arg1 ;
-(BOOL)hasEstimatorConfidence;
-(void)setInvalidResponses:(unsigned long long)arg1 ;
-(void)setHasInvalidResponses:(BOOL)arg1 ;
-(BOOL)hasInvalidResponses;
-(void)setRxDuplicateBytes:(unsigned long long)arg1 ;
-(void)setHasRxDuplicateBytes:(BOOL)arg1 ;
-(BOOL)hasRxDuplicateBytes;
-(void)setTxRetransmittedBytes:(unsigned long long)arg1 ;
-(void)setHasTxRetransmittedBytes:(BOOL)arg1 ;
-(BOOL)hasTxRetransmittedBytes;
-(void)setRttMinimumMsecs:(unsigned long long)arg1 ;
-(void)setHasRttMinimumMsecs:(BOOL)arg1 ;
-(BOOL)hasRttMinimumMsecs;
-(void)setRttAverageMsecs:(unsigned long long)arg1 ;
-(void)setHasRttAverageMsecs:(BOOL)arg1 ;
-(BOOL)hasRttAverageMsecs;
-(void)setHasRttVariation:(BOOL)arg1 ;
-(BOOL)hasRttVariation;
-(void)setMaxCongestionWindow:(unsigned long long)arg1 ;
-(void)setHasMaxCongestionWindow:(BOOL)arg1 ;
-(BOOL)hasMaxCongestionWindow;
-(void)setDelayedACKFactor:(unsigned long long)arg1 ;
-(void)setHasDelayedACKFactor:(BOOL)arg1 ;
-(BOOL)hasDelayedACKFactor;
-(void)setRetransmissionTimeoutMsecs:(unsigned long long)arg1 ;
-(void)setHasRetransmissionTimeoutMsecs:(BOOL)arg1 ;
-(BOOL)hasRetransmissionTimeoutMsecs;
-(void)setPacketErrorRate:(unsigned long long)arg1 ;
-(void)setHasPacketErrorRate:(BOOL)arg1 ;
-(BOOL)hasPacketErrorRate;
-(unsigned long long)ulThroughputBytesPerSec;
-(unsigned long long)dlThroughputBytesPerSec;
-(unsigned long long)estimatorDelayMsecs;
-(unsigned long long)estimatorConfidence;
-(unsigned long long)invalidResponses;
-(unsigned long long)rttMinimumMsecs;
-(unsigned long long)rttAverageMsecs;
-(unsigned long long)maxCongestionWindow;
-(unsigned long long)delayedACKFactor;
-(unsigned long long)retransmissionTimeoutMsecs;
-(unsigned long long)packetErrorRate;
@end

