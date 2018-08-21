/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, CIVector;

@interface PILongExposureFusion : CIFilter {

	CIImage* _inputImage;
	CIImage* _inputStillImage;
	CIImage* _inputMaskImage;
	NSNumber* _inputRenderScale;
	NSNumber* _inputVideoScale;
	CIVector* _inputAlignmentExtent;
	CIVector* _inputAlignmentTransform;

}

@property (nonatomic,retain) CIImage * inputImage;                            //@synthesize inputImage=_inputImage - In the implementation block
@property (nonatomic,retain) CIImage * inputStillImage;                       //@synthesize inputStillImage=_inputStillImage - In the implementation block
@property (nonatomic,retain) CIImage * inputMaskImage;                        //@synthesize inputMaskImage=_inputMaskImage - In the implementation block
@property (nonatomic,retain) NSNumber * inputRenderScale;                     //@synthesize inputRenderScale=_inputRenderScale - In the implementation block
@property (nonatomic,retain) NSNumber * inputVideoScale;                      //@synthesize inputVideoScale=_inputVideoScale - In the implementation block
@property (nonatomic,retain) CIVector * inputAlignmentExtent;                 //@synthesize inputAlignmentExtent=_inputAlignmentExtent - In the implementation block
@property (nonatomic,retain) CIVector * inputAlignmentTransform;              //@synthesize inputAlignmentTransform=_inputAlignmentTransform - In the implementation block
+(void)initialize;
+(void)loadFusionTuningParameters;
+(BOOL)_debugDumpIntermediateImages;
+(BOOL)debugDumpIntermediateImages;
-(CIImage *)inputMaskImage;
-(void)setInputMaskImage:(CIImage *)arg1 ;
-(id)outputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIImage *)inputImage;
-(CIImage *)inputStillImage;
-(NSNumber *)inputRenderScale;
-(NSNumber *)inputVideoScale;
-(CIVector *)inputAlignmentExtent;
-(CIVector *)inputAlignmentTransform;
-(id)alignImage:(id)arg1 transform:(SCD_Struct_PI11)arg2 extent:(CGRect)arg3 ;
-(id)_computeNCCMapFromImage:(id)arg1 toImage:(id)arg2 scale:(double)arg3 ;
-(id)_refineMaskImage:(id)arg1 guideImage:(id)arg2 scale:(double)arg3 ;
-(id)_fuseImage:(id)arg1 withGuideImage:(id)arg2 weightImage:(id)arg3 maskImage:(id)arg4 ;
-(void)setInputStillImage:(CIImage *)arg1 ;
-(void)setInputRenderScale:(NSNumber *)arg1 ;
-(void)setInputVideoScale:(NSNumber *)arg1 ;
-(void)setInputAlignmentExtent:(CIVector *)arg1 ;
-(void)setInputAlignmentTransform:(CIVector *)arg1 ;
@end
