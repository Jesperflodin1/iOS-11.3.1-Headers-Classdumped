/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:18 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct {
	unsigned long long s[2];
} SCD_Struct_PM0;

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned timestamp : 1;
	unsigned weightsL2norm : 1;
	unsigned weightsScaleFactor : 1;
} SCD_Struct_AW2;

typedef struct {
	unsigned batchSize : 1;
	unsigned support : 1;
} SCD_Struct_AW3;

typedef struct {
	unsigned list;
	unsigned long long count;
	unsigned long long size;
} SCD_Struct_AW4;

typedef struct {
	unsigned bucketSize : 1;
	unsigned columnLength : 1;
	unsigned minValue : 1;
	unsigned rowLength : 1;
} SCD_Struct_AW5;

typedef struct {
	unsigned long long list;
	unsigned long long count;
	unsigned long long size;
} SCD_Struct_AW6;

typedef struct {
	float list;
	unsigned long long count;
	unsigned long long size;
} SCD_Struct_AW7;

typedef struct {
	unsigned length : 1;
} SCD_Struct_AW8;

typedef struct {
	unsigned falseNegatives : 1;
	unsigned falsePositives : 1;
	unsigned trueNegatives : 1;
	unsigned truePositives : 1;
	unsigned f1 : 1;
	unsigned rmse : 1;
	unsigned secsToExecute : 1;
} SCD_Struct_AW9;

typedef struct sparse_m_float* sparse_m_floatRef;
