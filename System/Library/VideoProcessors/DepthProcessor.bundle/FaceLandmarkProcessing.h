/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:48 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/VideoProcessors/DepthProcessor.bundle/DepthProcessor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <DepthProcessor/DepthProcessor-Structs.h>
@interface FaceLandmarkProcessing : NSObject {

	unsigned long long _width;
	unsigned long long _height;
	float _confidenceUpdateValue;
	float _minFaceQuality;
	float _confidenceMinValue;
	float _minRatioFaceFill;
	float _maskShrinkRatio;
	CVBufferRef _faceMaskBuffer;
	CVBufferRef _invalidInvZMaskBuffer;
	float* _validInvZArray;
	float* _validInvZPerRowArray;
	CGPoint* _contourC0;
	int _contourC0Count;
	int _minX;
	int _maxX;
	int _minY;
	int _maxY;
	 * _pDepthOutputBuffer;
	 * _pConfidenceBuffer;
	char* _pFaceMaskBuffer;
	char* _pHoleMaskBuffer;
	unsigned long long _depthOutputBufferBpr;
	unsigned long long _confidenceBpr;
	unsigned long long _faceMaskBufferBpr;
	unsigned long long _invalidInvZMaskBufferBpr;
	BOOL _resourcesAllocated;

}
-(int)faceLandmarkProcess:(id)arg1 exifOrientation:(int)arg2 depthInputBuffer:(CVBufferRef)arg3 confidence:(CVBufferRef)arg4 depthOutputBuffer:(CVBufferRef)arg5 faceLandmarksPrunedOutput:(id)arg6 ;
-(void)getMedianInvZInFaceMask:(int)arg1 numInvalidFacePixels:(int*)arg2 numValidFacePixels:(int*)arg3 medianInvZF16:( *)arg4 ;
-(void)fillHolesInMask:( )arg1 ;
-(int)allocateResources;
-(void)releaseResources;
-(void)dealloc;
-(id)initWithParameters:(SCD_Struct_Fi16*)arg1 ;
@end
