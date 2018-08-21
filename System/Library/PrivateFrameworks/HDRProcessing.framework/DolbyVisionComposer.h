/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:35 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HDRProcessing.framework/HDRProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLDeviceSPI, MTLLibrary, MTLComputePipelineState, MTLTexture, MTLBuffer;
#import <HDRProcessing/HDRProcessing-Structs.h>
@interface DolbyVisionComposer : NSObject {

	unsigned long long _frameIndex;
	id<MTLDeviceSPI> _device;
	id<MTLLibrary> _defaultLibrary;
	id<MTLComputePipelineState> _horizontalHalfLumaKernel;
	id<MTLComputePipelineState> _verticalHalfLumaKernel;
	id<MTLComputePipelineState> _verticalResampleKernel;
	id<MTLComputePipelineState> _horizontalResampleKernel;
	id<MTLComputePipelineState> _composeLumaKernel;
	id<MTLComputePipelineState> _composeChromaKernel;
	id<MTLComputePipelineState> _composeYUVKernel;
	id<MTLComputePipelineState> _sdr2cif10;
	id<MTLComputePipelineState> _packedHDR10toRGB;
	id<MTLComputePipelineState> _packed422HDR10toRGB;
	id<MTLComputePipelineState> _packedHDR10toRGB_YUVTM;
	id<MTLComputePipelineState> _packed422HDR10toRGB_YUVTM;
	id<MTLComputePipelineState> _packedDolbyYUVtoRGB_YUVTM[2];
	id<MTLComputePipelineState> _packed422DolbyYUVtoRGB_YUVTM[2];
	id<MTLComputePipelineState> _packedDolbyIPTtoRGB_YUVTM[2];
	id<MTLComputePipelineState> _packed422DolbyIPTtoRGB_YUVTM[2];
	id<MTLComputePipelineState> _singleLayerIntegratedKernel;
	id<MTLComputePipelineState> _singleLayerIntegratedIPTKernel;
	id<MTLComputePipelineState> _singleLayerIntegratedKernelPlanar[3];
	id<MTLComputePipelineState> _singleLayerIntegratedIPTKernelPlanar[3];
	id<MTLComputePipelineState> _singleLayerIntegratedKernelPackedPlanar[3];
	id<MTLComputePipelineState> _singleLayerIntegratedIPTKernelPackedPlanar[3];
	id<MTLComputePipelineState> _yuvP422PackedPlanar[3];
	id<MTLComputePipelineState> _iptP422PackedPlanar[3];
	id<MTLComputePipelineState> _packedHDR10Cif10;
	id<MTLComputePipelineState> _packed422HDR10Cif10;
	id<MTLComputePipelineState> _unpackeX420HDR10FP16;
	id<MTLComputePipelineState> _singleLayer16bit444Kernel;
	id<MTLTexture> _polynomialTables[3];
	id<MTLTexture> _currentPolynomialTable;
	id<MTLBuffer> _dequantizelTable;
	id<MTLBuffer> _configBuffers[3];
	id<MTLBuffer> _config;
	id<MTLTexture> _blTexture;
	id<MTLTexture> _blTextureUV;
	id<MTLTexture> _blSubsampledTempTexture;
	id<MTLTexture> _blSubsampledTexture;
	id<MTLTexture> _elTexture;
	id<MTLTexture> _elTextureUV;
	id<MTLTexture> _outputTexture[3];
	id<MTLTexture> _outputTextureUV;
	id<MTLTexture> _pq2LTable;
	unsigned _pq2LTableSize;
	id<MTLTexture> _scalingFactorTable;
	float _scalingFactorTableBuffer[1024];
	id<MTLTexture> _yuvScalingFactorTable;
	float _yuvScalingFactorTableBuffer[2048];
	float _prev_slope;
	float _prev_c1;
	float _prev_c2;
	float _prev_c3;
	id<MTLTexture> _l2PQTable0;
	id<MTLTexture> _l2PQTable1;
	unsigned _l2PQTableSize;
	float _l2PQMidPoint;
	float _l2PQMaxPoint;
	BOOL _dumpPolynomialResult;
	unsigned _inputPixelFormat;
	BOOL _isPackedInputBuffer;
	unsigned _createScalingTableIndex;
	float _cached_target_white;
	float _cached_target_black;
	float _cached_source_white;
	float _cached_source_black;
	BOOL _yuvCombinedCompose;
	BOOL _preSubsampleLumaForMMR;
	BOOL _bypassDisplayManagement;

}

@property (assign) BOOL yuvCombinedCompose;                   //@synthesize yuvCombinedCompose=_yuvCombinedCompose - In the implementation block
@property (assign) BOOL preSubsampleLumaForMMR;               //@synthesize preSubsampleLumaForMMR=_preSubsampleLumaForMMR - In the implementation block
@property (assign) BOOL bypassDisplayManagement;              //@synthesize bypassDisplayManagement=_bypassDisplayManagement - In the implementation block
-(void)setupMetal;
-(void)createKernels;
-(void)createPQ2LTable;
-(void)createL2PQTable;
-(void)encodeToCommandBuffer:(id)arg1 BL:(IOSurfaceRef)arg2 EL:(IOSurfaceRef)arg3 Output:(IOSurfaceRef)arg4 ComposerData:(SCD_Struct_HD24*)arg5 DMData:(SCD_Struct_HD25*)arg6 tcControl:(ToneCurve_Control*)arg7 hdrControl:(SCD_Struct_HD22*)arg8 hdr10InfoFrame:(SCD_Struct_HD14*)arg9 ;
-(void)initBuffers;
-(void)createScalingTable_YUVTM;
-(id)createComputePipeLineWithName:(id)arg1 useTrim:(BOOL)arg2 forLLDovi:(BOOL)arg3 ;
-(void)setupInputTexturesWithBL:(IOSurfaceRef)arg1 EL:(IOSurfaceRef)arg2 Output:(IOSurfaceRef)arg3 MetaData:(SCD_Struct_HD24*)arg4 ;
-(void)setupOutputTexturesWithBuffer:(IOSurfaceRef)arg1 ;
-(void)setupInputBuffersWithMetadata:(SCD_Struct_HD24*)arg1 ;
-(void)encodeDualLayerToCommandBuffer:(id)arg1 BL:(IOSurfaceRef)arg2 EL:(IOSurfaceRef)arg3 Output:(IOSurfaceRef)arg4 MetaData:(SCD_Struct_HD24*)arg5 tcControl:(ToneCurve_Control*)arg6 ;
-(void)encodeSingleLayerToCommandBuffer:(id)arg1 BL:(IOSurfaceRef)arg2 Output:(IOSurfaceRef)arg3 ComposerData:(SCD_Struct_HD24*)arg4 DMData:(SCD_Struct_HD25*)arg5 tcControl:(ToneCurve_Control*)arg6 hdrControl:(SCD_Struct_HD22*)arg7 hdr10InfoFrame:(SCD_Struct_HD14*)arg8 ;
-(void)checkInputFormats:(unsigned)arg1 returnInput1:(BOOL*)arg2 returnInput2:(BOOL*)arg3 outputFormat:(unsigned)arg4 returnOutput1:(BOOL*)arg5 returnOutput2:(BOOL*)arg6 returnOutput3:(BOOL*)arg7 returnOutput4:(BOOL*)arg8 ;
-(void)checkForContent:(unsigned)arg1 contentReturn1:(BOOL*)arg2 contentReturn2:(BOOL*)arg3 forDisplay:(unsigned)arg4 displayReturn1:(BOOL*)arg5 displayReturn2:(BOOL*)arg6 displayReturn3:(BOOL*)arg7 displayReturn4:(BOOL*)arg8 displayReturn5:(BOOL*)arg9 ;
-(void)macSetupToneMappingWithContent:(BOOL)arg1 Output:(IOSurfaceRef)arg2 DMData:(SCD_Struct_HD25*)arg3 tcControl:(ToneCurve_Control*)arg4 hdrControl:(SCD_Struct_HD22*)arg5 hdr10InfoFrame:(SCD_Struct_HD14*)arg6 dmConfig:(SCD_Struct_Do27*)arg7 hdr10OnMac:(BOOL)arg8 onHDR10TV:(BOOL)arg9 ;
-(void)macSetupEncoderForCommandBuffer:(id)arg1 DMData:(SCD_Struct_HD25*)arg2 dmConfig:(id)arg3 isHdr10OnMac:(BOOL)arg4 onHDR10TV:(BOOL)arg5 ;
-(void)embeddedSetupToneMappingWithContent:(BOOL)arg1 Output:(IOSurfaceRef)arg2 DMData:(SCD_Struct_HD25*)arg3 tcControl:(ToneCurve_Control*)arg4 hdrControl:(SCD_Struct_HD22*)arg5 hdr10InfoFrame:(SCD_Struct_HD14*)arg6 dmConfig:(SCD_Struct_Do27*)arg7 hdr10OnPad:(BOOL)arg8 onHDR10TV:(BOOL)arg9 ;
-(void)embeddedSetupEncoderForCommandBuffer:(id)arg1 DMData:(SCD_Struct_HD25*)arg2 dmConfig:(id)arg3 isInput422:(BOOL)arg4 hasThreeOutputPlane:(BOOL)arg5 isSdrOnDolbyOrHDR10:(BOOL)arg6 isHDR10OnHDR10TV:(BOOL)arg7 isDolbyOnHDR10TV:(BOOL)arg8 isHDR10OnDolby:(BOOL)arg9 isHDR10OnPad:(BOOL)arg10 isDoviOnPad:(BOOL)arg11 isDoviOnLLDovi:(BOOL)arg12 ;
-(void)fillInScalingTable_YUVTM:(SCD_Struct_Do27*)arg1 target_White:(float)arg2 target_Black:(float)arg3 source_White:(float)arg4 source_Black:(float)arg5 satBoost:(float)arg6 scalingFactor:(BOOL)arg7 ;
-(void)createScalingFactorTableFromDMConfig:(SCD_Struct_Do27*)arg1 ;
-(void)encodeSubsampleLumaHorizontalToCommandBuffer:(id)arg1 ;
-(void)encodeSubsampleLumaVerticalToCommandBuffer:(id)arg1 ;
-(void)encodeComposeCombinedToCommandBuffer:(id)arg1 ;
-(void)encodeComposeLumaToCommandBuffer:(id)arg1 ;
-(void)encodeComposeChromaToCommandBuffer:(id)arg1 withMetaData:(SCD_Struct_HD24*)arg2 ;
-(void)setupComposerKernelConfiguration:(SCD_Struct_Do29*)arg1 fromMetaData:(SCD_Struct_HD24*)arg2 ;
-(BOOL)yuvCombinedCompose;
-(void)setYuvCombinedCompose:(BOOL)arg1 ;
-(BOOL)preSubsampleLumaForMMR;
-(void)setPreSubsampleLumaForMMR:(BOOL)arg1 ;
-(BOOL)bypassDisplayManagement;
-(void)setBypassDisplayManagement:(BOOL)arg1 ;
-(id)initWithDevice:(id)arg1 ;
@end
