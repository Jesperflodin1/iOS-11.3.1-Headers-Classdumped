/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:07 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLCommandQueue, MTLDevice, OS_dispatch_queue, MTLTexture;
#import <Espresso/Espresso-Structs.h>
@class NSObject, NSString;

@interface EspressoImage2Image : NSObject {

	void* ctx;
	void* plan;
	SCD_Struct_Es0* net;
	SCD_Struct_Es1* output_blob;
	id<MTLCommandQueue> queue;
	id<MTLDevice> device;
	NSObject*<OS_dispatch_queue> dispatch_queue;
	BOOL is_temporal_model;
	unsigned long long dim[5];
	unsigned long long dim_small[5];
	int defaultWidth;
	int defaultHeight;
	float t0;
	int scale_ratio;
	id<MTLTexture> smallOldResultTexture;
	map<std::__1::basic_string<char>, float, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, float> > >* tweaks;
	postprocessing_settings_t current_postprocessing_settings;
	shared_ptr<Espresso::V9Engine::v9_noise_kernel>* noise_k;
	shared_ptr<Espresso::generic_load_constant_kernel>* noise_load_constant_kernel;
	NSString* currentNetworkPath;
	long long currentResolutionPreset;
	shared_ptr<Espresso::blob<float, 1> >* precomputed_noise;
	id<MTLTexture> tmpDestinationTexture;
	int _rotation_degrees;
	int _flip_y;

}

@property (assign,nonatomic) int rotation_degrees;              //@synthesize rotation_degrees=_rotation_degrees - In the implementation block
@property (assign,nonatomic) int flip_y;                        //@synthesize flip_y=_flip_y - In the implementation block
+(BOOL)loadStylesConfigAtPath:(id)arg1 ;
+(void)setDefaultOption:(id)arg1 toValue:(id)arg2 ;
+(BOOL)loadStylesConfigAtDefaultsKey:(id)arg1 ;
+(id)getStylesKeys;
+(int)featureVersion;
+(void)gpuSync:(id)arg1 tex:(id)arg2 ;
+(void)tuneNetworks:(id)arg1 ;
+(void)tuneNetworksWGWindowSize:(id)arg1 ;
-(int)load:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(int)reload;
-(id)initWithQueue:(id)arg1 ;
-(int)height;
-(int)width;
-(id)setupWithQueue:(id)arg1 ;
-(void)addNoiseLayer;
-(void)_resetTemporalState;
-(int)load:(id)arg1 resolutionPreset:(long long)arg2 ;
-(int)wasReshaped;
-(int)_reshapeToResolutionPreset:(long long)arg1 ;
-(pair<int, int>)resolutionForPreset:(long long)arg1 ;
-(int)_reshapeToWidth:(int)arg1 andHeight:(int)arg2 ;
-(int)encodeToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3 cropRect:(SCD_Struct_Es19)arg4 ;
-(int)submitToQueueWithSourceTexture:(id)arg1 destinationTexture:(id)arg2 cropRect:(SCD_Struct_Es19)arg3 ;
-(int)rotation_degrees;
-(int)flip_y;
-(void)postProcess:(id)arg1 cameraSourceTexture:(id)arg2 inputTexture:(id)arg3 destinationTexture:(id)arg4 ;
-(void)simpleLinearResize:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3 ;
-(void)_tune;
-(int)reshapeToResolutionPreset:(long long)arg1 ;
-(void)tweak:(id)arg1 value:(float)arg2 ;
-(void)tune;
-(void)aggregateWisdom:(wisdom_trainer2*)arg1 ;
-(id)newOutputTexture;
-(SCD_Struct_Es0*)getEspressoNetwork;
-(id)getInternalDataForKey:(id)arg1 ;
-(void)resetTemporalState;
-(int)reshapeToResolutionPreset:(long long)arg1 aspectRatio:(float)arg2 ;
-(int)reshapeToWidth:(int)arg1 andHeight:(int)arg2 ;
-(int)encodeToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3 cropRect:(SCD_Struct_Es19)arg4 destinationRect:(SCD_Struct_Es19)arg5 ;
-(int)submitToQueueWithSourceTexture:(id)arg1 destinationTexture:(id)arg2 ;
-(float)benchmark;
-(void)setRotation_degrees:(int)arg1 ;
-(void)setFlip_y:(int)arg1 ;
-(id)styleName;
@end

