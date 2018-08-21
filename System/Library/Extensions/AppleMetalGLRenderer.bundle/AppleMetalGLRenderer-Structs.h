/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:39 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Extensions/AppleMetalGLRenderer.bundle/AppleMetalGLRenderer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class <MTLRenderPipelineStateSPI>;

typedef struct {
	unsigned fragmentUsesDiscard : 1;
	unsigned fragmentWritesSampleMask : 1;
	unsigned fragmentWritesDepth : 1;
	unsigned vertexRegisterSpill : 1;
	unsigned fragmentRegisterSpill : 1;
	unsigned fragmentReadsFramebufferValues : 1;
	unsigned fragmentPunchThrough : 1;
	unsigned vertexWritesPointSize : 1;
	unsigned private2 : 1;
	unsigned reserved : 55;
} SCD_Struct_GL0;

typedef struct {
	<MTLRenderPipelineStateSPI>* renderPipelineState;
	SCD_Struct_GL0 usageFlags;
} SCD_Struct_GL1;

