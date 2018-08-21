/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:02 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotosFormats/PhotosFormats-Structs.h>
@class NSMutableArray;

@interface PFSinglePassVideoExportItemStatistics : NSObject {

	float _frameRate;
	unsigned long long _lastOutputChunkTimestamp;
	NSMutableArray* _outputChunkMeasurements;
	unsigned long long _processedOutputTotalBytes;
	unsigned long long _processedVideoSampleBytes;
	unsigned long long _processedAdditionalSampleBytes;
	double _conversionDuration;
	double _lastProcessedInputFramePresentationTime;
	long long _processedOutputFrameCount;
	unsigned long long _targetOutputTotalBytes;
	double _targetPlaybackDuration;

}

@property (assign) unsigned long long lastOutputChunkTimestamp;                     //@synthesize lastOutputChunkTimestamp=_lastOutputChunkTimestamp - In the implementation block
@property (retain) NSMutableArray * outputChunkMeasurements;                        //@synthesize outputChunkMeasurements=_outputChunkMeasurements - In the implementation block
@property (assign) unsigned long long processedOutputTotalBytes;                    //@synthesize processedOutputTotalBytes=_processedOutputTotalBytes - In the implementation block
@property (assign) unsigned long long processedVideoSampleBytes;                    //@synthesize processedVideoSampleBytes=_processedVideoSampleBytes - In the implementation block
@property (assign) unsigned long long processedAdditionalSampleBytes;               //@synthesize processedAdditionalSampleBytes=_processedAdditionalSampleBytes - In the implementation block
@property (assign) double conversionDuration;                                       //@synthesize conversionDuration=_conversionDuration - In the implementation block
@property (readonly) unsigned long long processedOutputBytesPerSecond; 
@property (readonly) double averageOutputChunkTimeInterval; 
@property (readonly) unsigned long long averageOutputChunkBytes; 
@property (readonly) float processingFramesPerSecond; 
@property (assign) double lastProcessedInputFramePresentationTime;                  //@synthesize lastProcessedInputFramePresentationTime=_lastProcessedInputFramePresentationTime - In the implementation block
@property (assign) long long processedOutputFrameCount;                             //@synthesize processedOutputFrameCount=_processedOutputFrameCount - In the implementation block
@property (readonly) long long effectiveEncodingBitRate; 
@property (assign) unsigned long long targetOutputTotalBytes;                       //@synthesize targetOutputTotalBytes=_targetOutputTotalBytes - In the implementation block
@property (assign) double targetPlaybackDuration;                                   //@synthesize targetPlaybackDuration=_targetPlaybackDuration - In the implementation block
@property (assign) float frameRate;                                                 //@synthesize frameRate=_frameRate - In the implementation block
@property (readonly) long long targetEncodingBitRate; 
+(id)statisticsWithTargetPlaybackDuration:(SCD_Struct_PF1)arg1 frameRate:(float)arg2 targetOutputTotalBytes:(unsigned long long)arg3 ;
-(id)init;
-(void)setTargetPlaybackDuration:(double)arg1 ;
-(void)setTargetOutputTotalBytes:(unsigned long long)arg1 ;
-(void)enumerateOutputChunkMeasurementsWithHandler:(/*^block*/id)arg1 ;
-(unsigned long long)processedOutputTotalBytes;
-(double)conversionDuration;
-(unsigned long long)processedOutputBytesPerSecond;
-(float)processingFramesPerSecond;
-(double)averageOutputChunkTimeInterval;
-(unsigned long long)averageOutputChunkBytes;
-(void)addMeasurementForBytesDelivered:(unsigned long long)arg1 ;
-(long long)targetEncodingBitRate;
-(long long)effectiveEncodingBitRate;
-(id)outputChunkMeasurementsDescription;
-(unsigned long long)lastOutputChunkTimestamp;
-(void)setLastOutputChunkTimestamp:(unsigned long long)arg1 ;
-(NSMutableArray *)outputChunkMeasurements;
-(void)setOutputChunkMeasurements:(NSMutableArray *)arg1 ;
-(void)setProcessedOutputTotalBytes:(unsigned long long)arg1 ;
-(unsigned long long)processedVideoSampleBytes;
-(void)setProcessedVideoSampleBytes:(unsigned long long)arg1 ;
-(unsigned long long)processedAdditionalSampleBytes;
-(void)setProcessedAdditionalSampleBytes:(unsigned long long)arg1 ;
-(void)setConversionDuration:(double)arg1 ;
-(double)lastProcessedInputFramePresentationTime;
-(void)setLastProcessedInputFramePresentationTime:(double)arg1 ;
-(long long)processedOutputFrameCount;
-(void)setProcessedOutputFrameCount:(long long)arg1 ;
-(unsigned long long)targetOutputTotalBytes;
-(double)targetPlaybackDuration;
-(id)summaryDescription;
-(float)frameRate;
-(void)setFrameRate:(float)arg1 ;
@end

