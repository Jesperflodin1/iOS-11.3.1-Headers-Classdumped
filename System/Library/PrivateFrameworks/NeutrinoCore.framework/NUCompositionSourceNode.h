/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:20 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUSourceNode.h>

@class NURenderPipeline, NUComposition;

@interface NUCompositionSourceNode : NUSourceNode {

	NURenderPipeline* _renderPipeline;
	NUComposition* _composition;
	SCD_Struct_NU5 _pixelSize;

}
-(BOOL)load:(out id*)arg1 ;
-(id)initWithSettings:(id)arg1 ;
-(SCD_Struct_NU5)pixelSize;
-(id)preparedNodeWithSourceContainer:(id)arg1 pipelineState:(id)arg2 pipelineSettings:(id)arg3 sourceSettings:(id)arg4 error:(out id*)arg5 ;
-(id)_evaluateImageGeometry:(out id*)arg1 ;
-(id)_evaluateImageProperties:(out id*)arg1 ;
-(BOOL)shouldCacheNodeForPipelineState:(id)arg1 ;
-(id)_evaluateImage:(out id*)arg1 ;
-(id)initWithComposition:(id)arg1 renderPipeline:(id)arg2 settings:(id)arg3 ;
-(id)_compositionRenderNodeForPipelineState:(id)arg1 error:(out id*)arg2 ;
@end

