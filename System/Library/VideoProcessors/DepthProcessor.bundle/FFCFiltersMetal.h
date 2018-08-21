/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:48 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/VideoProcessors/DepthProcessor.bundle/DepthProcessor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLComputePipelineState, MTLDevice, MTLCommandQueue, MTLCommandBuffer;
#import <DepthProcessor/DepthProcessor-Structs.h>
@class FigMetalContext;

@interface FFCFiltersMetal : NSObject {

	id<MTLComputePipelineState> _FFCFiltersComputePipelinesStates[2];
	id<MTLDevice> _mtlDevice;
	id<MTLCommandQueue> _mtlCommandQueue;
	id<MTLCommandBuffer> _mtlCommandBuffer;
	FigMetalContext* _mtlContext;

}
-(int)boxFilterFrom:(CVBufferRef)arg1 To:(CVBufferRef)arg2 ;
-(int)erosionFilterFrom:(CVBufferRef)arg1 To:(CVBufferRef)arg2 ;
-(int)_compileShadersWithLibrary:(id)arg1 ;
-(void)_waitForCompletion;
-(void)_commitAndWait;
-(void)_newCommandBuffer;
-(void)_commitNoWait;
-(id)initWithMetalContext:(id)arg1 ;
@end

