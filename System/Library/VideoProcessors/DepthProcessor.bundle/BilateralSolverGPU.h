/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:48 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/VideoProcessors/DepthProcessor.bundle/DepthProcessor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLComputePipelineState, MTLBuffer, MTLTexture;
#import <DepthProcessor/DepthProcessor-Structs.h>
@class FigMetalContext;

@interface BilateralSolverGPU : NSObject {

	FigMetalContext* _metalContext;
	id<MTLComputePipelineState> _computePipelines[9];
	SCD_Struct_Bi6 _threadGroupInfo;
	SCD_Struct_Bi7 _params;
	int _width;
	int _height;
	unsigned long long _maxVertices;
	id<MTLBuffer> _gridHashBuffer;
	id<MTLBuffer> _gridBlurBuffer;
	id<MTLBuffer> _gridCoordIndicesBuffer;
	id<MTLBuffer> _gridCoordTableBuffer;
	id<MTLTexture> _gridHashMatrix;
	id<MTLBuffer> _gridInterpIndicesBuffer;
	id<MTLBuffer> _gridInterpTableBuffer;
	id<MTLBuffer> _gridInterpPadBuffer;
	id<MTLBuffer> _A_buf;
	id<MTLBuffer> _b_buf;
	id<MTLBuffer> _s_buf;
	id<MTLBuffer> _q_buf;
	id<MTLBuffer> _Dn_buf[2];
	id<MTLBuffer> _x_buf[2];
	id<MTLBuffer> _r_buf[2];
	id<MTLBuffer> _d_buf[2];
	int _idxDnBufIn;
	int _idxSwapBufIn;
	BOOL _useTrilinearInterpolation;

}

@property (assign,nonatomic) BOOL useTrilinearInterpolation;              //@synthesize useTrilinearInterpolation=_useTrilinearInterpolation - In the implementation block
-(id)initWithWidth:(int)arg1 height:(int)arg2 maxVertices:(unsigned long long)arg3 metalContext:(id)arg4 ;
-(int)doSolveWithBilateralGridhash:(id)arg1 reference:(CVBufferRef)arg2 input:(CVBufferRef)arg3 confidence:(CVBufferRef)arg4 output:(CVBufferRef)arg5 lambda:(float)arg6 maxIterations:(int)arg7 ;
-(void)_setupPipelines;
-(BOOL)useTrilinearInterpolation;
-(void)setUseTrilinearInterpolation:(BOOL)arg1 ;
-(void)_setupBuffer;
-(void)_prepareResources:(id)arg1 ;
-(int)_doBistochastizeWithCommandBuffer:(id)arg1 t_tex:(id)arg2 c_tex:(id)arg3 lambda:(float)arg4 nIterations:(int)arg5 ;
-(int)_doPCGWithCommandBuffer:(id)arg1 nIterations:(int)arg2 ;
-(int)_doSliceTrilinearWithCommandBuffer:(id)arg1 ref_tex:(id)arg2 o_tex:(id)arg3 ;
-(int)_doSliceWithCommandBuffer:(id)arg1 o_tex:(id)arg2 ;
@end

