/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:48 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned timestamp : 1;
	unsigned protocol : 1;
	unsigned provider : 1;
} SCD_Struct_AW1;

typedef struct {
	unsigned genericErrorCode : 1;
	unsigned errorCode : 1;
} SCD_Struct_AW2;

typedef struct {
	unsigned totalTextSize : 1;
} SCD_Struct_AW3;

typedef struct {
	unsigned drawingInsertCount : 1;
	unsigned drawingSentCount : 1;
	unsigned timestamp : 1;
	unsigned messageSent : 1;
} SCD_Struct_AW4;

typedef struct {
	unsigned numActiveCalls : 1;
	unsigned numBackgroundWifiClients : 1;
	unsigned timestamp : 1;
	unsigned dataInterface : 1;
	unsigned reachabilityFlags : 1;
	unsigned cellData : 1;
	unsigned dnsEnabled : 1;
	unsigned roamingAllowed : 1;
	unsigned wifiEnabled : 1;
} SCD_Struct_AW5;

typedef struct {
	int list;
	unsigned long long count;
	unsigned long long size;
} SCD_Struct_AW6;

typedef struct {
	unsigned bucketedLocalNonDeletedCount : 1;
	unsigned duration : 1;
	unsigned fetchSize : 1;
	unsigned numMessagesFetched : 1;
	unsigned options : 1;
	unsigned timestamp : 1;
	unsigned emailProvider : 1;
	unsigned mailboxType : 1;
	unsigned newMessagesState : 1;
	unsigned protocol : 1;
	unsigned totalBytesReceived : 1;
	unsigned totalBytesSent : 1;
	unsigned trigger : 1;
	unsigned didTimeout : 1;
	unsigned foreground : 1;
} SCD_Struct_AW7;

typedef struct {
	unsigned messageAgeInWeeks : 1;
	unsigned topHitIndexInSpotlightList : 1;
	unsigned topHitIndexInTopHitsList : 1;
	unsigned mailboxType : 1;
	unsigned type : 1;
	unsigned isTopHitMessage : 1;
} SCD_Struct_AW8;

typedef struct CompressionQueueContext_s* CompressionQueueContext_sRef;

