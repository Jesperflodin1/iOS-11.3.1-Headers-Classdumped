/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:55 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLTileRenderPipelineDescriptor.h>

@interface MTLTileRenderPipelineDescriptorInternal : MTLTileRenderPipelineDescriptor {

	MTLTileRenderPipelineDescriptorPrivate _private;

}
-(id)formattedDescription:(unsigned long long)arg1 ;
-(const MTLTileRenderPipelineDescriptorPrivate*)_descriptorPrivate;
-(unsigned long long)rasterSampleCount;
-(void)setRasterSampleCount:(unsigned long long)arg1 ;
-(id)tileBuffers;
-(void)setTileFunction:(id)arg1 ;
-(id)tileFunction;
-(void)setThreadgroupSizeMatchesTileSize:(BOOL)arg1 ;
-(BOOL)threadgroupSizeMatchesTileSize;
-(void)validateWithDevice:(id)arg1 ;
-(id)colorAttachments;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)sampleCount;
-(void)setSampleCount:(unsigned long long)arg1 ;
-(void)reset;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)label;
-(void)setLabel:(id)arg1 ;
@end

