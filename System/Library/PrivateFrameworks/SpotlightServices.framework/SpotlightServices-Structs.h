/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:37 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct local_resultset_id_values_mapping {
	unsigned long long start_idx;
	unsigned long long end_idx;
	__CFDictionary mapping;
	unsigned long long numPRSRankingBundleFeatures;
	unsigned long long PRSRankingBundleFeatureOrder;
	float score_vector;
	unsigned long long mapSize;
} local_resultset_id_values_mapping;

typedef struct parsec_resultset_id_values_mapping {
	unsigned long long start_idx;
	unsigned long long end_idx;
	unsigned long long numFeatures;
	__CFDictionary mapping;
	float score_vector;
	unsigned long long mapSize;
} parsec_resultset_id_values_mapping;

typedef struct _MDPlistContainer* MDPlistContainerRef;

typedef struct {
	unsigned embeddedReference;
	unsigned char type;
} SCD_Struct_SS3;

typedef struct {
	char* containerBytes;
	SCD_Struct_SS3 reference;
} SCD_Struct_SS4;

typedef struct {
	char* field1;
	SCD_Struct_SS3 field2;
} SCD_Struct_SS5;

typedef struct ranking_index_score_t {
	unsigned long long lsb;
	unsigned long long msb;
} ranking_index_score_t;

typedef struct _NSZone* NSZoneRef;
