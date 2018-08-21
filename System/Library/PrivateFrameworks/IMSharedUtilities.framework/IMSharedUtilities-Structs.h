/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:24 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned associatedMessageType : 1;
	unsigned expireState : 1;
	unsigned timeDelivered : 1;
	unsigned timeExpressiveSentPlayed : 1;
	unsigned timePlayed : 1;
	unsigned timeRead : 1;
	unsigned associatedMessageRangeLength : 1;
	unsigned associatedMessageRangeLocation : 1;
	unsigned version : 1;
} SCD_Struct_IM1;

typedef struct {
	unsigned shareDirection : 1;
	unsigned shareStatus : 1;
	unsigned version : 1;
} SCD_Struct_IM2;

typedef struct {
	unsigned messageActionType : 1;
	unsigned version : 1;
} SCD_Struct_IM3;

typedef struct {
	unsigned version : 1;
} SCD_Struct_IM4;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;
