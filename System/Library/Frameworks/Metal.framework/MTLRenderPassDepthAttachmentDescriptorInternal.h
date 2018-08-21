/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:56 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLRenderPassDepthAttachmentDescriptor.h>

@interface MTLRenderPassDepthAttachmentDescriptorInternal : MTLRenderPassDepthAttachmentDescriptor {

	MTLRenderPassAttachmentDescriptorPrivate _private;

}
+(id)attachmentDescriptor;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(const MTLRenderPassAttachmentDescriptorPrivate*)_descriptorPrivate;
-(unsigned long long)depthResolveFilter;
-(void)setDepthResolveFilter:(unsigned long long)arg1 ;
-(unsigned long long)slice;
-(void)setDepthPlane:(unsigned long long)arg1 ;
-(unsigned long long)depthPlane;
-(void)setResolveLevel:(unsigned long long)arg1 ;
-(unsigned long long)resolveLevel;
-(void)setResolveSlice:(unsigned long long)arg1 ;
-(unsigned long long)resolveSlice;
-(void)setResolveDepthPlane:(unsigned long long)arg1 ;
-(unsigned long long)resolveDepthPlane;
-(void)setYInvert:(BOOL)arg1 ;
-(BOOL)yInvert;
-(unsigned long long)storeActionOptions;
-(void)setStoreActionOptions:(unsigned long long)arg1 ;
-(unsigned long long)loadAction;
-(unsigned long long)storeAction;
-(double)clearDepth;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLevel:(unsigned long long)arg1 ;
-(unsigned long long)level;
-(void)setClearDepth:(double)arg1 ;
-(void)setResolveTexture:(id)arg1 ;
-(void)setStoreAction:(unsigned long long)arg1 ;
-(void)setLoadAction:(unsigned long long)arg1 ;
-(void)setSlice:(unsigned long long)arg1 ;
-(id)resolveTexture;
-(void)setTexture:(id)arg1 ;
-(id)texture;
@end
