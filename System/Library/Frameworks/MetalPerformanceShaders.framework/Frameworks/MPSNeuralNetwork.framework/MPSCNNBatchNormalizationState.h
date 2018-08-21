/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:58 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNNGradientState.h>

@class MPSCNNBatchNormalization;

@interface MPSCNNBatchNormalizationState : MPSNNGradientState {

	MPSCNNBatchNormalization* _batchNormalization;
	unsigned long long _accumulationCount;
	unsigned long long _numberOfFeatureChannels;
	float _epsilon;

}

@property (nonatomic,retain,readonly) MPSCNNBatchNormalization * batchNormalization;              //@synthesize batchNormalization=_batchNormalization - In the implementation block
+(id)temporaryStateWithCommandBuffer:(id)arg1 numberOfFeatureChannels:(unsigned long long)arg2 epsilon:(float)arg3 batchNormalization:(id)arg4 ;
-(id)beta;
-(id)initDeferredWithDevice:(id)arg1 numberOfFeatureChannels:(unsigned long long)arg2 epsilon:(float)arg3 batchNormalization:(id)arg4 ;
-(id)gradientForGamma;
-(id)gradientForBeta;
-(MPSCNNBatchNormalization *)batchNormalization;
-(void)dealloc;
-(void)reset;
-(id)variance;
-(id)mean;
-(id)gamma;
@end

