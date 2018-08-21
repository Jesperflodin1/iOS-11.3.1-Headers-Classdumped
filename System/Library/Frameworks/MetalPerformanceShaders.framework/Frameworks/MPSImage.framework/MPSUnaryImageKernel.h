/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:57 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSImage/MPSImage-Structs.h>
#import <MPSCore/MPSKernel.h>

@interface MPSUnaryImageKernel : MPSKernel {

	SCD_Struct_MP6 _offset;
	SCD_Struct_MP3 _clipRect;
	unsigned long long _edgeMode;
	int _checkFlags;
	/*function pointer*/void* _encode;
	void* _encodeData;
	/*function pointer*/void* _getPreferredTileSize;

}

@property (assign,nonatomic) SCD_Struct_MP6 offset;                    //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) SCD_Struct_MP3 clipRect;                  //@synthesize clipRect=_clipRect - In the implementation block
@property (assign,nonatomic) unsigned long long edgeMode;              //@synthesize edgeMode=_edgeMode - In the implementation block
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 destinationImage:(id)arg3 ;
-(MPSRegion)sourceRegionForDestinationSize:(SCD_Struct_MP2)arg1 ;
-(unsigned long long)edgeMode;
-(void)setEdgeMode:(unsigned long long)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(SCD_Struct_MP6)offset;
-(void)setOffset:(SCD_Struct_MP6)arg1 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3 ;
-(SCD_Struct_MP3)clipRect;
-(void)setClipRect:(SCD_Struct_MP3)arg1 ;
-(BOOL)encodeToCommandBuffer:(id)arg1 inPlaceTexture:(id*)arg2 fallbackCopyAllocator:(/*^block*/id)arg3 ;
-(id)initWithDevice:(id)arg1 ;
@end

