/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:53 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AutoLoop.framework/AutoLoop
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct {
	long long value;
	int timescale;
	unsigned flags;
	long long epoch;
} SCD_Struct_Pr1;

typedef struct {
	SCD_Struct_Pr1 start;
	SCD_Struct_Pr1 duration;
} SCD_Struct_Pr2;

typedef struct _compressed_pair<CMTime *, std::__1::allocator<CMTime> > {
	/*function pointer*/void* __value_;
} compressed_pair<CMTime *, std::__1::allocator<CMTime> >;

typedef struct vector<CMTime, std::__1::allocator<CMTime> > {
	/*function pointer*/void* __begin_;
	/*function pointer*/void* __end_;
	compressed_pair<CMTime *, std::__1::allocator<CMTime> > __end_cap_;
} vector<CMTime, std::__1::allocator<CMTime> >;

typedef struct _compressed_pair<FloatPoint *, std::__1::allocator<FloatPoint> > {
	/*function pointer*/void* __value_;
} compressed_pair<FloatPoint *, std::__1::allocator<FloatPoint> >;

typedef struct vector<FloatPoint, std::__1::allocator<FloatPoint> > {
	/*function pointer*/void* __begin_;
	/*function pointer*/void* __end_;
	compressed_pair<FloatPoint *, std::__1::allocator<FloatPoint> > __end_cap_;
} vector<FloatPoint, std::__1::allocator<FloatPoint> >;

typedef struct __CVMetalTextureCache* CVMetalTextureCacheRef;

typedef struct __CVBuffer* CVBufferRef;

typedef struct CGImage* CGImageRef;

typedef struct ImageFeatureMatchParamRec {
	int blocksX;
	int blocksY;
	int blockOverlap;
	int detectMethod;
	int extractMethod;
	BOOL justAffine;
	BOOL rescalePoints;
	float angleTolerance;
	float distanceToleranceFraction;
	float metricTolerance;
	unsigned maxAllowedMatches;
	unsigned minFeaturesPerFrame;
	unsigned maxFeaturesPerFrame;
	BOOL useOpenCVMatching;
	float nonmaxSuppressionRadius;
	float maxReprojectionErrorBase;
	float maxReprojectionErrorSlope;
	BOOL useOpenCL;
} ImageFeatureMatchParamRec;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct CGAffineTransform {
	double a;
	double b;
	double c;
	double d;
	double tx;
	double ty;
} CGAffineTransform;

typedef struct opaqueCMSampleBuffer* opaqueCMSampleBufferRef;

typedef struct CGImageDestination* CGImageDestinationRef;

typedef struct _compressed_pair<SP_FrameInfo *, std::__1::allocator<SP_FrameInfo> > {
	/*function pointer*/void* __value_;
} compressed_pair<SP_FrameInfo *, std::__1::allocator<SP_FrameInfo> >;

typedef struct vector<SP_FrameInfo, std::__1::allocator<SP_FrameInfo> > {
	/*function pointer*/void* __begin_;
	/*function pointer*/void* __end_;
	compressed_pair<SP_FrameInfo *, std::__1::allocator<SP_FrameInfo> > __end_cap_;
} vector<SP_FrameInfo, std::__1::allocator<SP_FrameInfo> >;

typedef struct {
	float field1[9];
	SCD_Struct_Pr1 field2;
} SCD_Struct_St18;

