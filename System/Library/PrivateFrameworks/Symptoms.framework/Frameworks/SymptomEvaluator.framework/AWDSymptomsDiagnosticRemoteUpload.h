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

@class NSString, NSMutableArray;

@interface AWDSymptomsDiagnosticRemoteUpload : PBCodable <NSCopying> {

	SCD_Struct_AW5* _primaryNetworkObservedOnCompletions;
	SCD_Struct_AW6* _taskErrorCodes;
	SCD_Struct_AW6* _taskFileSizes;
	SCD_Struct_AW5* _taskHttpStatusCodes;
	SCD_Struct_AW5* _taskRetryCounts;
	SCD_Struct_AW5* _taskStatus;
	unsigned long long _apnsMsgIdentifier;
	unsigned long long _requestedTimestamp;
	unsigned long long _scheduledTimestamp;
	unsigned long long _timestamp;
	NSString* _caseIdentifier;
	int _consentStatus;
	int _expectedFileCount;
	int _preflightStatus;
	unsigned _radarIdentifier;
	int _requestStatus;
	NSMutableArray* _taskErrorDomains;
	unsigned _urgency;
	SCD_Struct_AW7 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                               //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasRequestedTimestamp; 
@property (assign,nonatomic) unsigned long long requestedTimestamp;                                      //@synthesize requestedTimestamp=_requestedTimestamp - In the implementation block
@property (assign,nonatomic) BOOL hasScheduledTimestamp; 
@property (assign,nonatomic) unsigned long long scheduledTimestamp;                                      //@synthesize scheduledTimestamp=_scheduledTimestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasCaseIdentifier; 
@property (nonatomic,retain) NSString * caseIdentifier;                                                  //@synthesize caseIdentifier=_caseIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasRadarIdentifier; 
@property (assign,nonatomic) unsigned radarIdentifier;                                                   //@synthesize radarIdentifier=_radarIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasApnsMsgIdentifier; 
@property (assign,nonatomic) unsigned long long apnsMsgIdentifier;                                       //@synthesize apnsMsgIdentifier=_apnsMsgIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasUrgency; 
@property (assign,nonatomic) unsigned urgency;                                                           //@synthesize urgency=_urgency - In the implementation block
@property (assign,nonatomic) BOOL hasPreflightStatus; 
@property (assign,nonatomic) int preflightStatus;                                                        //@synthesize preflightStatus=_preflightStatus - In the implementation block
@property (assign,nonatomic) BOOL hasConsentStatus; 
@property (assign,nonatomic) int consentStatus;                                                          //@synthesize consentStatus=_consentStatus - In the implementation block
@property (assign,nonatomic) BOOL hasRequestStatus; 
@property (assign,nonatomic) int requestStatus;                                                          //@synthesize requestStatus=_requestStatus - In the implementation block
@property (assign,nonatomic) BOOL hasExpectedFileCount; 
@property (assign,nonatomic) int expectedFileCount;                                                      //@synthesize expectedFileCount=_expectedFileCount - In the implementation block
@property (nonatomic,readonly) unsigned long long taskFileSizesCount; 
@property (nonatomic,readonly) long long* taskFileSizes; 
@property (nonatomic,readonly) unsigned long long taskStatusCount; 
@property (nonatomic,readonly) int* taskStatus; 
@property (nonatomic,readonly) unsigned long long taskRetryCountsCount; 
@property (nonatomic,readonly) int* taskRetryCounts; 
@property (nonatomic,readonly) unsigned long long taskHttpStatusCodesCount; 
@property (nonatomic,readonly) int* taskHttpStatusCodes; 
@property (nonatomic,retain) NSMutableArray * taskErrorDomains;                                          //@synthesize taskErrorDomains=_taskErrorDomains - In the implementation block
@property (nonatomic,readonly) unsigned long long taskErrorCodesCount; 
@property (nonatomic,readonly) long long* taskErrorCodes; 
@property (nonatomic,readonly) unsigned long long primaryNetworkObservedOnCompletionsCount; 
@property (nonatomic,readonly) int* primaryNetworkObservedOnCompletions; 
+(Class)taskErrorDomainType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(unsigned)urgency;
-(void)setUrgency:(unsigned)arg1 ;
-(void)setHasUrgency:(BOOL)arg1 ;
-(BOOL)hasUrgency;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)addTaskErrorDomain:(id)arg1 ;
-(void)setCaseIdentifier:(NSString *)arg1 ;
-(unsigned long long)taskFileSizesCount;
-(void)clearTaskFileSizes;
-(long long)taskFileSizeAtIndex:(unsigned long long)arg1 ;
-(void)addTaskFileSize:(long long)arg1 ;
-(unsigned long long)taskStatusCount;
-(void)clearTaskStatus;
-(int)taskStatusAtIndex:(unsigned long long)arg1 ;
-(void)addTaskStatus:(int)arg1 ;
-(unsigned long long)taskRetryCountsCount;
-(void)clearTaskRetryCounts;
-(int)taskRetryCountAtIndex:(unsigned long long)arg1 ;
-(void)addTaskRetryCount:(int)arg1 ;
-(unsigned long long)taskHttpStatusCodesCount;
-(void)clearTaskHttpStatusCodes;
-(int)taskHttpStatusCodeAtIndex:(unsigned long long)arg1 ;
-(void)addTaskHttpStatusCode:(int)arg1 ;
-(unsigned long long)taskErrorDomainsCount;
-(void)clearTaskErrorDomains;
-(id)taskErrorDomainAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)taskErrorCodesCount;
-(void)clearTaskErrorCodes;
-(long long)taskErrorCodeAtIndex:(unsigned long long)arg1 ;
-(void)addTaskErrorCode:(long long)arg1 ;
-(unsigned long long)primaryNetworkObservedOnCompletionsCount;
-(void)clearPrimaryNetworkObservedOnCompletions;
-(int)primaryNetworkObservedOnCompletionAtIndex:(unsigned long long)arg1 ;
-(void)addPrimaryNetworkObservedOnCompletion:(int)arg1 ;
-(void)setRequestedTimestamp:(unsigned long long)arg1 ;
-(void)setHasRequestedTimestamp:(BOOL)arg1 ;
-(BOOL)hasRequestedTimestamp;
-(void)setScheduledTimestamp:(unsigned long long)arg1 ;
-(void)setHasScheduledTimestamp:(BOOL)arg1 ;
-(BOOL)hasScheduledTimestamp;
-(BOOL)hasCaseIdentifier;
-(void)setRadarIdentifier:(unsigned)arg1 ;
-(void)setHasRadarIdentifier:(BOOL)arg1 ;
-(BOOL)hasRadarIdentifier;
-(void)setApnsMsgIdentifier:(unsigned long long)arg1 ;
-(void)setHasApnsMsgIdentifier:(BOOL)arg1 ;
-(BOOL)hasApnsMsgIdentifier;
-(int)preflightStatus;
-(void)setPreflightStatus:(int)arg1 ;
-(void)setHasPreflightStatus:(BOOL)arg1 ;
-(BOOL)hasPreflightStatus;
-(id)preflightStatusAsString:(int)arg1 ;
-(int)StringAsPreflightStatus:(id)arg1 ;
-(int)consentStatus;
-(void)setConsentStatus:(int)arg1 ;
-(void)setHasConsentStatus:(BOOL)arg1 ;
-(BOOL)hasConsentStatus;
-(id)consentStatusAsString:(int)arg1 ;
-(int)StringAsConsentStatus:(id)arg1 ;
-(int)requestStatus;
-(void)setRequestStatus:(int)arg1 ;
-(void)setHasRequestStatus:(BOOL)arg1 ;
-(BOOL)hasRequestStatus;
-(id)requestStatusAsString:(int)arg1 ;
-(int)StringAsRequestStatus:(id)arg1 ;
-(void)setExpectedFileCount:(int)arg1 ;
-(void)setHasExpectedFileCount:(BOOL)arg1 ;
-(BOOL)hasExpectedFileCount;
-(long long*)taskFileSizes;
-(void)setTaskFileSizes:(long long*)arg1 count:(unsigned long long)arg2 ;
-(int*)taskStatus;
-(void)setTaskStatus:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)taskStatusAsString:(int)arg1 ;
-(int)StringAsTaskStatus:(id)arg1 ;
-(int*)taskRetryCounts;
-(void)setTaskRetryCounts:(int*)arg1 count:(unsigned long long)arg2 ;
-(int*)taskHttpStatusCodes;
-(void)setTaskHttpStatusCodes:(int*)arg1 count:(unsigned long long)arg2 ;
-(long long*)taskErrorCodes;
-(void)setTaskErrorCodes:(long long*)arg1 count:(unsigned long long)arg2 ;
-(int*)primaryNetworkObservedOnCompletions;
-(void)setPrimaryNetworkObservedOnCompletions:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)primaryNetworkObservedOnCompletionsAsString:(int)arg1 ;
-(int)StringAsPrimaryNetworkObservedOnCompletions:(id)arg1 ;
-(unsigned long long)requestedTimestamp;
-(unsigned long long)scheduledTimestamp;
-(NSString *)caseIdentifier;
-(unsigned)radarIdentifier;
-(unsigned long long)apnsMsgIdentifier;
-(int)expectedFileCount;
-(NSMutableArray *)taskErrorDomains;
-(void)setTaskErrorDomains:(NSMutableArray *)arg1 ;
@end

