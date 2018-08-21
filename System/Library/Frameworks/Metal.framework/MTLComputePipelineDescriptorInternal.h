/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:56 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLComputePipelineDescriptor.h>

@interface MTLComputePipelineDescriptorInternal : MTLComputePipelineDescriptor {

	MTLComputePipelineDescriptorPrivate _private;

}
-(id)formattedDescription:(unsigned long long)arg1 ;
-(const MTLComputePipelineDescriptorPrivate*)_descriptorPrivate;
-(void)validateWithDevice:(id)arg1 ;
-(id)stageInputDescriptor;
-(void)setPipelineLibrary:(id)arg1 ;
-(id)computeFunction;
-(void)setDriverCompilerOptions:(id)arg1 ;
-(id)driverCompilerOptions;
-(id)pipelineLibrary;
-(BOOL)threadGroupSizeIsMultipleOfThreadExecutionWidth;
-(id)newSerializedComputeData;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)reset;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)label;
-(void)setLabel:(id)arg1 ;
-(id)buffers;
-(void)setComputeFunction:(id)arg1 ;
-(void)setThreadGroupSizeIsMultipleOfThreadExecutionWidth:(BOOL)arg1 ;
-(void)setStageInputDescriptor:(id)arg1 ;
@end

