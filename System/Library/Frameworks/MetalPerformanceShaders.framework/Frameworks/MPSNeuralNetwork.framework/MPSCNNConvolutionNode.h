/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSNNFilterNode.h>

@protocol MPSCNNConvolutionDataSource;
@class MPSCNNConvolutionStateNode, MPSCNNConvolutionGradientStateNode;

@interface MPSCNNConvolutionNode : MPSNNFilterNode {

	id<MPSCNNConvolutionDataSource> _weights;

}

@property (nonatomic,readonly) MPSCNNConvolutionStateNode * convolutionState; 
@property (nonatomic,readonly) MPSCNNConvolutionGradientStateNode * convolutionGradientState; 
+(id)nodeWithSource:(id)arg1 weights:(id)arg2 ;
-(FilterGraphNode*)newFilterNode;
-(Class)gradientClass;
-(id)resultState;
-(id)initWithSource:(id)arg1 weights:(id)arg2 ;
-(id)initWithSource:(id)arg1 weights:(id)arg2 state:(id)arg3 ;
-(MPSCNNConvolutionGradientStateNode *)convolutionGradientState;
-(MPSCNNConvolutionStateNode *)convolutionState;
-(void)dealloc;
@end
