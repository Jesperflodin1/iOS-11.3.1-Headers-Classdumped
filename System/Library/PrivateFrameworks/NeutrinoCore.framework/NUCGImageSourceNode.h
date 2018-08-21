/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:20 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUSourceNode.h>

@protocol OS_dispatch_queue;
@class NSObject, NSURL, NSString, NSDictionary, NSArray;

@interface NUCGImageSourceNode : NUSourceNode {

	NSObject*<OS_dispatch_queue> _queue;
	BOOL _loaded;
	NSURL* _URL;
	NSString* _UTI;
	CGImageSourceRef _imageSource;
	NSDictionary* _imageProperties;
	long long _orientation;
	CGColorSpaceRef _colorSpace;
	long long _alphaInfo;
	long long _componentInfo;
	NSArray* _depthImagesProperties;
	SCD_Struct_NU5 _size;

}

@property (readonly) NSURL * URL;                                         //@synthesize URL=_URL - In the implementation block
@property (readonly) NSString * UTI;                                      //@synthesize UTI=_UTI - In the implementation block
@property (assign) BOOL loaded;                                           //@synthesize loaded=_loaded - In the implementation block
@property (nonatomic,retain) CGImageSourceRef imageSource;                //@synthesize imageSource=_imageSource - In the implementation block
@property (nonatomic,retain) NSDictionary * imageProperties;              //@synthesize imageProperties=_imageProperties - In the implementation block
@property (assign) SCD_Struct_NU5 size;                                   //@synthesize size=_size - In the implementation block
@property (assign) long long orientation;                                 //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,retain) CGColorSpaceRef colorSpace;                  //@synthesize colorSpace=_colorSpace - In the implementation block
@property (assign) long long alphaInfo;                                   //@synthesize alphaInfo=_alphaInfo - In the implementation block
@property (assign) long long componentInfo;                               //@synthesize componentInfo=_componentInfo - In the implementation block
@property (retain) NSArray * depthImagesProperties;                       //@synthesize depthImagesProperties=_depthImagesProperties - In the implementation block
-(BOOL)load:(out id*)arg1 ;
-(BOOL)loaded;
-(SCD_Struct_NU5)size;
-(void)setSize:(SCD_Struct_NU5)arg1 ;
-(void)dealloc;
-(void)_init;
-(long long)orientation;
-(NSURL *)URL;
-(void)setOrientation:(long long)arg1 ;
-(CGColorSpaceRef)colorSpace;
-(id)initWithSettings:(id)arg1 ;
-(SCD_Struct_NU5)pixelSize;
-(NSString *)UTI;
-(void)setImageProperties:(NSDictionary *)arg1 ;
-(void)setImageSource:(CGImageSourceRef)arg1 ;
-(CGImageSourceRef)imageSource;
-(id)initWithURL:(id)arg1 UTI:(id)arg2 ;
-(void)_addDefaultFinalizedSourceOptions:(id)arg1 ;
-(id)_evaluateImagePropertiesWithSourceOptions:(id)arg1 error:(out id*)arg2 ;
-(id)_evaluateImageWithSourceOptions:(id)arg1 subsampleFactor:(long long*)arg2 error:(out id*)arg3 ;
-(id)_evaluateRawImagePropertiesWithSourceOptions:(id)arg1 error:(out id*)arg2 ;
-(BOOL)supportsPipelineState:(id)arg1 error:(out id*)arg2 ;
-(id)initWithImageSource:(CGImageSourceRef)arg1 identifier:(id)arg2 ;
-(id)resolvedNodeWithCachedInputs:(NSDictionary*)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4 ;
-(id)preparedNodeWithSourceContainer:(id)arg1 pipelineState:(id)arg2 pipelineSettings:(id)arg3 sourceSettings:(id)arg4 error:(out id*)arg5 ;
-(id)_evaluateImageGeometry:(out id*)arg1 ;
-(long long)sourceOrientation;
-(id)_evaluateImageProperties:(out id*)arg1 ;
-(void)setAlphaInfo:(long long)arg1 ;
-(void)setComponentInfo:(long long)arg1 ;
-(BOOL)shouldCacheNodeForPipelineState:(id)arg1 ;
-(id)_evaluateImage:(out id*)arg1 ;
-(long long)alphaInfo;
-(long long)componentInfo;
-(id)depthImagePropertiesForDepthType:(long long)arg1 ;
-(NSArray *)depthImagesProperties;
-(BOOL)pipelineStateIsForDepthImage:(id)arg1 ;
-(id)resolvedDepthNodeForPipelineState:(id)arg1 error:(out id*)arg2 ;
-(void)setDepthImagesProperties:(NSArray *)arg1 ;
-(id)_finalizeSourceOptions:(id)arg1 subsampleFactor:(long long)arg2 ;
-(BOOL)_setGeometryFromProperties:(id)arg1 error:(out id*)arg2 ;
-(BOOL)_setDepthInformationFromProperties:(id)arg1 error:(out id*)arg2 ;
-(NSDictionary *)imageProperties;
-(void)setLoaded:(BOOL)arg1 ;
-(BOOL)_load:(out id*)arg1 ;
-(void)setColorSpace:(CGColorSpaceRef)arg1 ;
@end

