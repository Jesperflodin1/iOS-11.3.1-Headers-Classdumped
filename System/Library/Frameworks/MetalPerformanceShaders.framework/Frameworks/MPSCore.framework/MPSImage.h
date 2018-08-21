/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:57 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MPSCore/MPSCore-Structs.h>
@class NSString;

@interface MPSImage : NSObject {

	MPSDevice* _device;
	unsigned long long _width;
	unsigned long long _height;
	unsigned long long _featureChannels;
	unsigned long long _featureChannelsLayout;
	unsigned long long _numberOfImages;
	unsigned long long _textureType;
	NSString* _label;
	MPSPixelInfo _pixelInfo;
	MPSImage* _parent;
	MPSAutoTexture* _texture;
	BOOL _updatedAlready;

}

@property (nonatomic,readonly) unsigned long long featureChannelsLayout;              //@synthesize featureChannelsLayout=_featureChannelsLayout - In the implementation block
@property (nonatomic,retain,readonly) id<MTLDevice> device; 
@property (nonatomic,readonly) unsigned long long width;                              //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) unsigned long long height;                             //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) unsigned long long featureChannels;                    //@synthesize featureChannels=_featureChannels - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfImages;                     //@synthesize numberOfImages=_numberOfImages - In the implementation block
@property (nonatomic,readonly) unsigned long long textureType; 
@property (nonatomic,readonly) unsigned long long pixelFormat; 
@property (nonatomic,readonly) unsigned long long precision; 
@property (nonatomic,readonly) unsigned long long usage; 
@property (nonatomic,readonly) unsigned long long pixelSize; 
@property (nonatomic,readonly) id<MTLTexture> texture; 
@property (copy) NSString * label;                                                    //@synthesize label=_label - In the implementation block
@property (nonatomic,retain,readonly) MPSImage * parent;                              //@synthesize parent=_parent - In the implementation block
+(id)defaultAllocator;
-(id)initWithDescriptor:(id)arg1 featureChannels:(unsigned long long)arg2 featureChannelsLayout:(unsigned long long)arg3 onDevice:(id)arg4 ;
-(id)initWithParentImage:(id)arg1 sliceRange:(NSRange)arg2 featureChannels:(unsigned long long)arg3 ;
-(NSArray*)batchRepresentationWithSubRange:(NSRange)arg1 ;
-(unsigned long long)getPixelChannelSize;
-(void)readBytes:(void*)arg1 dataLayout:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 bytesPerImage:(unsigned long long)arg4 region:(SCD_Struct_MP8)arg5 featureChannelInfo:(SCD_Struct_MP9)arg6 imageIndex:(unsigned long long)arg7 ;
-(void)readBytes:(void*)arg1 dataLayout:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 region:(SCD_Struct_MP8)arg4 featureChannelInfo:(SCD_Struct_MP9)arg5 imageIndex:(unsigned long long)arg6 ;
-(void)writeBytes:(const void*)arg1 dataLayout:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 region:(SCD_Struct_MP8)arg4 featureChannelInfo:(SCD_Struct_MP9)arg5 imageIndex:(unsigned long long)arg6 ;
-(unsigned long long)featureChannels;
-(id)initWithTexture:(id)arg1 featureChannels:(unsigned long long)arg2 ;
-(id)initWithDevice:(id)arg1 imageDescriptor:(id)arg2 ;
-(unsigned long long)featureChannelsLayout;
-(void)writeBytes:(const void*)arg1 dataLayout:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 bytesPerImage:(unsigned long long)arg4 region:(SCD_Struct_MP8)arg5 featureChannelInfo:(SCD_Struct_MP9)arg6 imageIndex:(unsigned long long)arg7 ;
-(NSArray*)batchRepresentation;
-(id)subImageWithFeatureChannelRange:(NSRange)arg1 ;
-(void)synchronizeOnCommandBuffer:(id)arg1 ;
-(unsigned long long)pixelFormat;
-(unsigned long long)textureType;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)debugDescription;
-(id)debugQuickLookObject;
-(unsigned long long)height;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(unsigned long long)usage;
-(unsigned long long)width;
-(unsigned long long)pixelSize;
-(MPSImage *)parent;
-(unsigned long long)resourceSize;
-(id)initWithTexture:(id)arg1 featureChannels:(unsigned long long)arg2 featureChannelsLayout:(unsigned long long)arg3 ;
-(unsigned long long)setPurgeableState:(unsigned long long)arg1 ;
-(unsigned long long)numberOfImages;
-(void)writeBytes:(const void*)arg1 dataLayout:(unsigned long long)arg2 imageIndex:(unsigned long long)arg3 ;
-(void)readBytes:(void*)arg1 dataLayout:(unsigned long long)arg2 imageIndex:(unsigned long long)arg3 ;
-(id<MTLTexture>)texture;
-(id<MTLDevice>)device;
-(unsigned long long)precision;
@end

