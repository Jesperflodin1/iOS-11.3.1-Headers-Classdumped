/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/VideoProcessors/SDOFRendering.bundle/SDOFRendering
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLComputePipelineState;
#import <SDOFRendering/SDOFRendering-Structs.h>
@class FigMetalContext;

@interface SparseRenderer : NSObject {

	FigMetalContext* _mtlCtx;
	id<MTLComputePipelineState> _preprocess_kernel;
	id<MTLComputePipelineState> _sparseSampling_kernel;
	id<MTLComputePipelineState> _sparseAntiAliasingX_kernel;
	id<MTLComputePipelineState> _sparseAntiAliasingY_kernel;
	id<MTLComputePipelineState> _sparseYUVOutput1_kernel;
	id<MTLComputePipelineState> _sparseYUVOutput2_kernel;
	BOOL _shadersLoaded;
	SCD_Struct_Bl0 _preprocess_tgSize;
	SCD_Struct_Bl0 _preprocess_gridSize;
	SCD_Struct_Bl0 _render_tgSize;
	SCD_Struct_Bl0 _render_gridSize;
	SCD_Struct_Bl0 _antiAliasX_tgSize;
	SCD_Struct_Bl0 _antiAliasX_gridSize;
	SCD_Struct_Bl0 _antiAliasY_tgSize;
	SCD_Struct_Bl0 _antiAliasY_gridSize;
	SCD_Struct_Bl0 _yuvOutput1_tgSize;
	SCD_Struct_Bl0 _yuvOutput1_gridSize;
	SCD_Struct_Bl0 _yuvOutput2_tgSize;
	SCD_Struct_Bl0 _yuvOutput2_gridSize;
	rendering_config_params _config_params;

}

@property (assign,nonatomic) rendering_config_params config_params;              //@synthesize config_params=_config_params - In the implementation block
-(void)setConfig_params:(rendering_config_params)arg1 ;
-(int)configureForInputWidth:(unsigned long long)arg1 inputHeight:(unsigned long long)arg2 blurmapWidth:(unsigned long long)arg3 blurmapHeight:(unsigned long long)arg4 ;
-(int)enqueueRenderingUsingResources:(id)arg1 inputBlurMap:(id)arg2 inputLuma:(id)arg3 inputChroma:(id)arg4 outputLuma:(id)arg5 outputChroma:(id)arg6 ;
-(int)loadShaders;
-(int)validateInputsWithResources:(id)arg1 inputBlurMap:(id)arg2 inputLuma:(id)arg3 inputChroma:(id)arg4 outputLuma:(id)arg5 outputChroma:(id)arg6 ;
-(int)enqueuePreProcessingUsingResources:(id)arg1 blurMap:(id)arg2 luma:(id)arg3 chroma:(id)arg4 ;
-(int)enqueueRenderingUsingResources:(id)arg1 ;
-(int)enqueueAntiAliasingUsingResources:(id)arg1 ;
-(int)enqueueOutputGenerationUsingResources:(id)arg1 inputLuma:(id)arg2 inputChroma:(id)arg3 outputLuma:(id)arg4 outputChroma:(id)arg5 ;
-(rendering_config_params)config_params;
-(id)initWithMetalContext:(id)arg1 ;
@end
