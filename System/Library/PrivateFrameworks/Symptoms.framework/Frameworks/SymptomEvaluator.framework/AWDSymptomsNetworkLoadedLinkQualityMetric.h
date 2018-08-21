/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDSymptomsNetworkLoadedLinkQualityMetric : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _dataStalls;
	int _lQM;
	int _lastReportedRSSI;
	int _loadedLQM;
	NSString* _networkAttachmentLabel;
	int _networkType;
	NSString* _radioAccessTechnology;
	BOOL _isLowInternetDL;
	BOOL _isLowInternetUL;
	BOOL _isNetworkReliable;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                   //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasNetworkType; 
@property (assign,nonatomic) int networkType;                                //@synthesize networkType=_networkType - In the implementation block
@property (nonatomic,readonly) BOOL hasNetworkAttachmentLabel; 
@property (nonatomic,retain) NSString * networkAttachmentLabel;              //@synthesize networkAttachmentLabel=_networkAttachmentLabel - In the implementation block
@property (assign,nonatomic) BOOL hasLoadedLQM; 
@property (assign,nonatomic) int loadedLQM;                                  //@synthesize loadedLQM=_loadedLQM - In the implementation block
@property (assign,nonatomic) BOOL hasLQM; 
@property (assign,nonatomic) int lQM;                                        //@synthesize lQM=_lQM - In the implementation block
@property (nonatomic,readonly) BOOL hasRadioAccessTechnology; 
@property (nonatomic,retain) NSString * radioAccessTechnology;               //@synthesize radioAccessTechnology=_radioAccessTechnology - In the implementation block
@property (assign,nonatomic) BOOL hasIsNetworkReliable; 
@property (assign,nonatomic) BOOL isNetworkReliable;                         //@synthesize isNetworkReliable=_isNetworkReliable - In the implementation block
@property (assign,nonatomic) BOOL hasDataStalls; 
@property (assign,nonatomic) unsigned dataStalls;                            //@synthesize dataStalls=_dataStalls - In the implementation block
@property (assign,nonatomic) BOOL hasLastReportedRSSI; 
@property (assign,nonatomic) int lastReportedRSSI;                           //@synthesize lastReportedRSSI=_lastReportedRSSI - In the implementation block
@property (assign,nonatomic) BOOL hasIsLowInternetUL; 
@property (assign,nonatomic) BOOL isLowInternetUL;                           //@synthesize isLowInternetUL=_isLowInternetUL - In the implementation block
@property (assign,nonatomic) BOOL hasIsLowInternetDL; 
@property (assign,nonatomic) BOOL isLowInternetDL;                           //@synthesize isLowInternetDL=_isLowInternetDL - In the implementation block
-(int)lQM;
-(void)setLQM:(int)arg1 ;
-(void)setHasLQM:(BOOL)arg1 ;
-(BOOL)hasLQM;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setDataStalls:(unsigned)arg1 ;
-(void)setHasDataStalls:(BOOL)arg1 ;
-(BOOL)hasDataStalls;
-(int)networkType;
-(void)setNetworkType:(int)arg1 ;
-(void)setHasNetworkType:(BOOL)arg1 ;
-(BOOL)hasNetworkType;
-(id)networkTypeAsString:(int)arg1 ;
-(int)StringAsNetworkType:(id)arg1 ;
-(unsigned)dataStalls;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setRadioAccessTechnology:(NSString *)arg1 ;
-(NSString *)radioAccessTechnology;
-(void)setNetworkAttachmentLabel:(NSString *)arg1 ;
-(BOOL)hasNetworkAttachmentLabel;
-(void)setLoadedLQM:(int)arg1 ;
-(void)setHasLoadedLQM:(BOOL)arg1 ;
-(BOOL)hasLoadedLQM;
-(BOOL)hasRadioAccessTechnology;
-(void)setIsNetworkReliable:(BOOL)arg1 ;
-(void)setHasIsNetworkReliable:(BOOL)arg1 ;
-(BOOL)hasIsNetworkReliable;
-(void)setLastReportedRSSI:(int)arg1 ;
-(void)setHasLastReportedRSSI:(BOOL)arg1 ;
-(BOOL)hasLastReportedRSSI;
-(void)setIsLowInternetUL:(BOOL)arg1 ;
-(void)setHasIsLowInternetUL:(BOOL)arg1 ;
-(BOOL)hasIsLowInternetUL;
-(void)setIsLowInternetDL:(BOOL)arg1 ;
-(void)setHasIsLowInternetDL:(BOOL)arg1 ;
-(BOOL)hasIsLowInternetDL;
-(NSString *)networkAttachmentLabel;
-(int)loadedLQM;
-(BOOL)isNetworkReliable;
-(int)lastReportedRSSI;
-(BOOL)isLowInternetUL;
-(BOOL)isLowInternetDL;
@end

