/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:15 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@class NSArray, NSData, NSMutableArray;

@interface FigIrisAutoTrimmer : NSObject {

	BOOL _motionAvailable;
	SCD_Struct_Fi75 _captureMotionDelta;
	double _captureMotionDeltaPeriod;
	BOOL _haveCaptureMotionDelta;
	SCD_Struct_Fi75 _lastAttitude;
	SCD_Struct_Fi75 _lastDelta;
	double _lastCheckedTimestamp;
	int _lastStatus;
	OpaqueFigSimpleMutexRef _motionSamplesLock;
	int _svmKernelType;
	int _svmVectorCount;
	int _svmParamCount;
	float _svmRBFRho;
	float _svmRBFGamma;
	NSArray* _svmKeys;
	NSData* _svmNormalization;
	NSData* _svmVectors;
	NSMutableArray* _motionSamples;
	unsigned long long _estimatedIntermediatesCount;
	SCD_Struct_BW2 _maxHoldDuration;
	long long _maxHoldFrames;
	double _bufferHistorySeconds;
	double _motionSampleRate;
	unsigned long long _nominalHistorySize;

}

@property (nonatomic,readonly) BOOL trimmingActive; 
+(void)initialize;
-(void)setBufferHistorySeconds:(double)arg1 ;
-(void)setMaxHoldDuration:(SCD_Struct_BW2)arg1 ;
-(void)startMotionProcessing;
-(void)stopMotionProcessing;
-(void)processISPMotionData:(id)arg1 forHostTime:(SCD_Struct_BW2)arg2 ;
-(int)emissionStatusForHostPTS:(SCD_Struct_BW2)arg1 ;
-(SCD_Struct_BW2)beginTrimmingForStillImageHostPTS:(SCD_Struct_BW2)arg1 minimumPTS:(SCD_Struct_BW2)arg2 ;
-(void)_initWithSVM:(id)arg1 fromFile:(id)arg2 ;
-(void)_processMotionSample:(const SCD_Struct_Fi75*)arg1 gravity:(const SCD_Struct_Fi74*)arg2 timestamp:(double)arg3 metadata:(id)arg4 ;
-(double)_timeoutThreshold;
-(long long)_findClosestIndexToOffset:(double)arg1 atLeastOneFromIndex:(long long)arg2 limitIndex:(long long)arg3 ;
-(BOOL)_shouldCut:(id)arg1 withLookahead:(id)arg2 withLookback:(id)arg3 ;
-(long long)_findClosestIndexToTimestamp:(double)arg1 fromIndex:(long long)arg2 limitIndex:(long long)arg3 ;
-(double)_directionalWeightForSample:(id)arg1 ;
-(BOOL)_isUnstable:(id)arg1 withLookback:(id)arg2 ;
-(BOOL)_shouldCutUnstable:(id)arg1 withLookahead:(id)arg2 ;
-(BOOL)_shouldCutSVM:(id)arg1 ;
-(void)_updateStorageStats;
-(double)_getHostTime;
-(BOOL)trimmingActive;
-(SCD_Struct_BW2)maxHoldDuration;
-(double)bufferHistorySeconds;
-(double)videoFrameRate;
-(id)init;
-(void)dealloc;
-(void)setVideoFrameRate:(double)arg1 ;
@end

