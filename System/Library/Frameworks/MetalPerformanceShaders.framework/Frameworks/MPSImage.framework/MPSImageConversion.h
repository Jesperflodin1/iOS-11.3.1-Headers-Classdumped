/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:57 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSImage/MPSImage-Structs.h>
#import <MPSImage/MPSUnaryImageKernel.h>

@class MPSImageTransformSequence;

@interface MPSImageConversion : MPSUnaryImageKernel {

	MPSImageTransformSequence* transform;
	[2 srcDecode];
	[2 destDecode];
	ConversionInfo_s convertInfo;
	ConversionInfoPtrs_s* convertInfoPtrs;
	/*function pointer*/void* matFun;
	/*function pointer*/void* trcFun;
	/*function pointer*/void* lutFun;
	/*function pointer*/void* optionsFun;
	unsigned long long sourceAlpha;
	unsigned long long destinationAlpha;

}

@property (nonatomic,readonly) unsigned long long sourceAlpha; 
@property (nonatomic,readonly) unsigned long long destinationAlpha; 
+(const MPSLibraryInfo*)libraryInfo;
-(id)initWithDevice:(id)arg1 transform:(id)arg2 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 sourceDecode:(const float*)arg3 destinationTexture:(id)arg4 destinationDecode:(const float*)arg5 ;
-(unsigned long long)sourceAlpha;
-(unsigned long long)destinationAlpha;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)debugDescription;
-(id)initWithDevice:(id)arg1 srcAlpha:(unsigned long long)arg2 destAlpha:(unsigned long long)arg3 backgroundColor:(double*)arg4 conversionInfo:(const CGColorConversionInfoRef)arg5 ;
-(id)initWithDevice:(id)arg1 ;
@end

