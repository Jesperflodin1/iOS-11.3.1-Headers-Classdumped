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

@interface DisparityUpsampling : NSObject {

	FigMetalContext* _mtlCtx;
	id<MTLComputePipelineState> _upsampling_kernel;
	SCD_Struct_Bl0 _upsampling_tgSize;
	SCD_Struct_Bl0 _upsampling_gridSize;

}
-(int)enqueueUpsampleWithInputShiftMap:(id)arg1 outputShiftMap:(id)arg2 ;
-(int)validateInputsWithInputShiftMap:(id)arg1 outputShiftMap:(id)arg2 ;
-(int)configureForInputWidth:(unsigned long long)arg1 inputHeight:(unsigned long long)arg2 outputWidth:(unsigned long long)arg3 outputHeight:(unsigned long long)arg4 ;
-(int)enqueueUpsamplingWithInputShiftMap:(id)arg1 outputShiftMap:(id)arg2 ;
-(id)initWithMetalContext:(id)arg1 ;
@end
