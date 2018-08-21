/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:58 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSRNNDescriptor.h>

@protocol MPSCNNConvolutionDataSource;
@interface MPSRNNSingleGateDescriptor : MPSRNNDescriptor {

	id<MPSCNNConvolutionDataSource> _inputWeights;
	id<MPSCNNConvolutionDataSource> _recurrentWeights;

}

@property (nonatomic,retain) id<MPSCNNConvolutionDataSource> inputWeights;                  //@synthesize inputWeights=_inputWeights - In the implementation block
@property (nonatomic,retain) id<MPSCNNConvolutionDataSource> recurrentWeights;              //@synthesize recurrentWeights=_recurrentWeights - In the implementation block
+(id)createRNNSingleGateDescriptorWithInputFeatureChannels:(unsigned long long)arg1 outputFeatureChannels:(unsigned long long)arg2 ;
-(id)initWithInputFeatureChannels:(unsigned long long)arg1 outputFeatureChannels:(unsigned long long)arg2 ;
-(id<MPSCNNConvolutionDataSource>)recurrentWeights;
-(void)setRecurrentWeights:(id<MPSCNNConvolutionDataSource>)arg1 ;
-(id<MPSCNNConvolutionDataSource>)inputWeights;
-(void)setInputWeights:(id<MPSCNNConvolutionDataSource>)arg1 ;
-(id)init;
-(void)dealloc;
@end

