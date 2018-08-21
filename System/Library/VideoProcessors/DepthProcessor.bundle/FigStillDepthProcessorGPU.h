/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:48 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/VideoProcessors/DepthProcessor.bundle/DepthProcessor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DepthProcessor/DepthProcessor-Structs.h>
#import <DepthProcessor/DepthProcessor.h>

@protocol MTLTexture;
@class NSArray, NSDictionary, FigMetalContext, FaceLandmarkProcessing, BodyProbability, DistanceTransformGpu, BilateralGridHash, BilateralSolverGPU, SLICMetal, slicMetalParameters, SuperPixelHoleFillMetal, FFCFiltersMetal, DepthProcUtilitiesMetal, NSString;

@interface FigStillDepthProcessorGPU : NSObject <DepthProcessor> {

	SCD_Struct_Fi26 _configuration;
	FigMetalContext* _metalContext;
	CVBufferRef _yuvInputBuffer;
	CVBufferRef _disparityInputBuffer;
	CVBufferRef _disparityOutputBuffer;
	int _width;
	int _height;
	NSDictionary* _metadataDictionary;
	CVBufferRef _preprocessedDisparity;
	FaceLandmarkProcessing* _faceLandmarkProcessing;
	SCD_Struct_Fi27* _faceProperties;
	int _orientation;
	CVBufferRef _faceLandmarkDisparity;
	BodyProbability* _bodyProbabilityProcessing;
	CVBufferRef _bodyProbabilityMap;
	DistanceTransformGpu* _distanceTransformProcessing;
	CVBufferRef _distanceTransformDisparity;
	CVBufferRef _distanceTransformMap;
	CVBufferRef _confidenceMap;
	CVBufferRef _invalidConfidenceMask;
	CVBufferRef _imerodeConfidenceMap;
	BilateralGridHash* _bilateralGridProcessing;
	BilateralSolverGPU* _bilateralSolverGPUProcessing;
	CVBufferRef _bilateralInvZBufferIn;
	CVBufferRef _bilateralConfMapFloat32Buffer;
	CVBufferRef _bilateralInvZBufferOut;
	CVBufferRef _bilateralDisparity;
	SLICMetal* _slicMetal;
	slicMetalParameters* _slicMetalParameters;
	int _slicMaxNumSuperPixels;
	id<MTLTexture> _slicRgbaTexture;
	id<MTLTexture> _slicSpixelCentersIdAndNPixels;
	id<MTLTexture> _slicSpixelColor;
	id<MTLTexture> _slicIdxImg;
	SuperPixelHoleFillMetal* _superPixelHoleFillMetal;
	CVBufferRef _superPixelHoleFillDisparity;
	CVBufferRef _superPixelHoleFillConfidence;
	CVBufferRef _superPixelHoleFillMaskValid;
	FFCFiltersMetal* _FFCFilters;
	DepthProcUtilitiesMetal* _DepthProcUtilMetal;
	BOOL _submodulesInitialized;
	BOOL _resourcesAllocated;
	long long _timingTable[22];
	BOOL _disparityQualityIsHigh;
	float _disparityQualityScore;
	int _figDepthQuality;
	NSArray* _faceLandmarksArray;

}

@property (nonatomic,retain) NSArray * faceLandmarksArray;                     //@synthesize faceLandmarksArray=_faceLandmarksArray - In the implementation block
@property (nonatomic,readonly) float disparityQualityScore;                    //@synthesize disparityQualityScore=_disparityQualityScore - In the implementation block
@property (nonatomic,readonly) BOOL disparityQualityIsHigh;                    //@synthesize disparityQualityIsHigh=_disparityQualityIsHigh - In the implementation block
@property (nonatomic,readonly) int figDepthQuality;                            //@synthesize figDepthQuality=_figDepthQuality - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSDictionary * cameraInfoByPortType; 
+(int)prewarm;
-(id)createTextureOfSize:(CGSize)arg1 withFormat:(unsigned long long)arg2 ;
-(int)sanityChecksYuvBuffer:(CVBufferRef)arg1 depthBuffer:(CVBufferRef)arg2 outputDisparityBuffer:(CVBufferRef)arg3 ;
-(int)initSubmodules;
-(int)preprocessDataOnGpu:(CVBufferRef)arg1 ;
-(int)processDisparityPipeline;
-(int)estimateDisparityQualityScore:(CVBufferRef)arg1 ;
-(int)erosionOnGpu;
-(int)faceLandmarkProcessing;
-(int)bodyProbability;
-(int)iterativeMask;
-(int)setFarDistanceOnGpu;
-(int)confidenceFalloff;
-(int)superPixelHoleFilling;
-(int)fastBilateralSolver;
-(void)reportProcessingTime;
-(int)initF16CVPixelBuffer:(CVBufferRef)arg1 withValue:( )arg2 ;
-(int)find:(CVBufferRef)arg1 value:( )arg2 outputBuffer:(CVBufferRef)arg3 ;
-(int)disparityDataOverride;
-(int)normalizeF16:(CVBufferRef)arg1 toF32:(CVBufferRef)arg2 ;
-(int)convertConfidenceF16:(CVBufferRef)arg1 toF32:(CVBufferRef)arg2 ;
-(int)denormalizeF32:(CVBufferRef)arg1 toF16:(CVBufferRef)arg2 ;
-(id)detectLandmarksUsingInputPixelBuffer:(CVBufferRef)arg1 usingImageOrientation:(int)arg2 ;
-(NSArray *)faceLandmarksArray;
-(void)recordTime:(int)arg1 ;
-(int)figDepthQuality;
-(BOOL)disparityQualityIsHigh;
-(float)disparityQualityScore;
-(void)setFaceLandmarksArray:(NSArray *)arg1 ;
-(int)processDepthBuffer:(CVBufferRef)arg1 yuvBuffer:(CVBufferRef)arg2 parametersDictionary:(id)arg3 outputDisparityBuffer:(CVBufferRef)arg4 ;
-(id)initWithParameters:(depthProcessorParameters*)arg1 commandQueue:(id)arg2 ;
-(int)setTuningParameters:(id)arg1 ;
-(BOOL)allocateResources;
-(void)releaseResources;
-(void)dealloc;
@end

