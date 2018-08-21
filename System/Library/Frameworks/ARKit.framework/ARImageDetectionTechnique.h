/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:41 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARTechnique.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSArray, NSMutableDictionary, ARImageDetectionResultData, NSObject, NSDictionary;

@interface ARImageDetectionTechnique : ARTechnique {

	NSArray* _referenceImages;
	NSMutableDictionary* _detectionCountByImageID;
	OpaqueVTPixelTransferSessionRef _vtPixelTransferSession;
	CVPixelBufferPoolRef _grayPixelBufferPool;
	ARImageDetectionResultData* _latestResultData;
	NSObject*<OS_dispatch_queue> _processDataQueue;
	NSObject*<OS_dispatch_semaphore> _loadingSemaphore;
	NSObject*<OS_dispatch_semaphore> _dataSemaphore;
	NSObject*<OS_dispatch_semaphore> _detectionSemaphore;
	ARImageDetectionResultData* _referenceImageData;
	unsigned long long _numberOfSkippedFrames;
	unsigned long long _numberOfFramesBetweenDetectionCalls;
	BOOL _finishedLoadingImages;
	BOOL _continousDetection;
	BOOL _estimateScale;
	BOOL _redetectOnSignificantEvent;
	unsigned long long _estimateScaleCount;
	CV3DODTContextRef _odtHandle;
	NSDictionary* _referenceImageMap;

}

@property (retain) NSDictionary * referenceImageMap;                                                      //@synthesize referenceImageMap=_referenceImageMap - In the implementation block
@property (nonatomic,readonly) BOOL finishedLoadingImages; 
@property (nonatomic,copy,readonly) ARImageDetectionResultData * currentDetectionResultData; 
+(BOOL)_redetectionRequiredForContext:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(NSDictionary *)referenceImageMap;
-(id)_loadReferenceImages;
-(id)_processImageDataAndPose:(id)arg1 worldTrackingPose:(id)arg2 ;
-(void)setReferenceImageMap:(NSDictionary *)arg1 ;
-(id)initWithReferenceImages:(id)arg1 ;
-(unsigned long long)requiredSensorDataTypes;
-(BOOL)finishedLoadingImages;
-(void)releaseODTHandle;
-(ARImageDetectionResultData *)currentDetectionResultData;
-(void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2 ;
@end

