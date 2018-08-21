/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:58 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSCore/MPSKernel.h>

@class MPSMatrixMultiplication;

@interface MPSRNNMatrixInferenceLayer : MPSKernel {

	int* layerTypes;
	void* layers;
	void* forwardLayers;
	int* forwardLayerTypes;
	unsigned long long nForwardLayers;
	void* backwardLayers;
	int* backwardLayerTypes;
	unsigned long long nBackwardLayers;
	MPSMatrixMultiplication* gemmKernel;
	MPSMatrixMultiplication* gemmKernelNonTranspose;
	BOOL _recurrentOutputIsTemporary;
	BOOL _storeAllIntermediateStates;
	unsigned long long _numberOfLayers;
	unsigned long long _bidirectionalCombineMode;
	unsigned long long _inputFeatureChannels;
	unsigned long long _outputFeatureChannels;

}

@property (nonatomic,readonly) unsigned long long inputFeatureChannels;                //@synthesize inputFeatureChannels=_inputFeatureChannels - In the implementation block
@property (nonatomic,readonly) unsigned long long outputFeatureChannels;               //@synthesize outputFeatureChannels=_outputFeatureChannels - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfLayers;                      //@synthesize numberOfLayers=_numberOfLayers - In the implementation block
@property (assign,nonatomic) BOOL recurrentOutputIsTemporary;                          //@synthesize recurrentOutputIsTemporary=_recurrentOutputIsTemporary - In the implementation block
@property (assign,nonatomic) BOOL storeAllIntermediateStates;                          //@synthesize storeAllIntermediateStates=_storeAllIntermediateStates - In the implementation block
@property (assign,nonatomic) unsigned long long bidirectionalCombineMode;              //@synthesize bidirectionalCombineMode=_bidirectionalCombineMode - In the implementation block
+(const MPSLibraryInfo*)libraryInfo;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(unsigned long long)inputFeatureChannels;
-(unsigned long long)outputFeatureChannels;
-(BOOL)storeAllIntermediateStates;
-(id)initWithDevice:(id)arg1 rnnDescriptor:(id)arg2 ;
-(id)initWithDevice:(id)arg1 rnnDescriptors:(id)arg2 ;
-(BOOL)recurrentOutputIsTemporary;
-(void)setRecurrentOutputIsTemporary:(BOOL)arg1 ;
-(void)setStoreAllIntermediateStates:(BOOL)arg1 ;
-(unsigned long long)bidirectionalCombineMode;
-(void)setBidirectionalCombineMode:(unsigned long long)arg1 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceMatrix:(id)arg2 destinationMatrix:(id)arg3 recurrentInputState:(id)arg4 recurrentOutputState:(id*)arg5 ;
-(void)encodeSequenceToCommandBuffer:(id)arg1 sourceMatrices:(id)arg2 destinationMatrices:(id)arg3 recurrentInputState:(id)arg4 recurrentOutputStates:(id)arg5 ;
-(void)encodeBidirectionalSequenceToCommandBuffer:(id)arg1 sourceSequence:(id)arg2 destinationForwardMatrices:(id)arg3 destinationBackwardMatrices:(id)arg4 ;
-(unsigned long long)numberOfLayers;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
@end

