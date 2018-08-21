/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNNGradientState.h>
#import <MPSNeuralNetwork/MPSImageSizeEncodingState.h>

@class MPSCNNConvolution, NSString;

@interface MPSCNNConvolutionGradientState : MPSNNGradientState <MPSImageSizeEncodingState> {

	BOOL _initialized;
	MPSCNNConvolution* _convolution;

}

@property (nonatomic,readonly) id<MTLBuffer> gradientForWeights; 
@property (nonatomic,readonly) id<MTLBuffer> gradientForBiases; 
@property (nonatomic,retain,readonly) MPSCNNConvolution * convolution;              //@synthesize convolution=_convolution - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long sourceWidth; 
@property (nonatomic,readonly) unsigned long long sourceHeight; 
+(id)temporaryStateWithCommandBuffer:(id)arg1 resourceList:(id)arg2 convolution:(id)arg3 ;
-(MPSCNNConvolution *)convolution;
-(id<MTLBuffer>)gradientForWeights;
-(id<MTLBuffer>)gradientForBiases;
-(id)initWithDevice:(id)arg1 weightsBufferSize:(unsigned long long)arg2 biasesBufferSize:(unsigned long long)arg3 convolution:(id)arg4 ;
-(void)dealloc;
-(NSString *)debugDescription;
-(unsigned long long)sourceWidth;
-(unsigned long long)sourceHeight;
@end

