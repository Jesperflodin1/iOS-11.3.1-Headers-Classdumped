/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:48 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/VideoProcessors/DepthProcessor.bundle/DepthProcessor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <DepthProcessor/DepthProcessor-Structs.h>
@class VNImageRequestHandler, NSArray, FigUtlROIProcessor;

@interface FigUtlFaceDetection : NSObject {

	VNImageRequestHandler* _requestHandler;
	NSArray* _faces;
	unsigned _pixelFormat;
	float _landmarksModelFraction;
	FigUtlROIProcessor* _roi;

}

@property (readonly) FigUtlROIProcessor * roi;              //@synthesize roi=_roi - In the implementation block
@property (readonly) BOOL isBlinking; 
@property (readonly) float blink; 
@property (readonly) int landmarkCount; 
+(id)createFaceLandmarksRequest:(float)arg1 ;
+(BOOL)prewarmBoxAlignmentAndLandmarksDetectorUsingFractionOfLandmarksModelFile:(float)arg1 ;
+(void)deallocateResources;
-(BOOL)isBlinking;
-(id)initWithMaxImageWidth:(int)arg1 height:(int)arg2 pixelFormat:(unsigned)arg3 landmarksModelFraction:(float)arg4 ;
-(BOOL)computeQuality:(CVBufferRef)arg1 orientation:(int)arg2 rectangle:(CGRect)arg3 quality:(float*)arg4 alignedRectangle:(CGRect*)arg5 ;
-(BOOL)computeLandmarks;
-(int)landmarkCount;
-(CGPoint)landmark:(int)arg1 ;
-(FigUtlROIProcessor *)roi;
-(BOOL)start;
-(void)end;
-(float)blink;
@end

