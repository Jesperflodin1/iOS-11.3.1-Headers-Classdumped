/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:58 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSNNFilterNode.h>

@class MPSNNLabelsNode, MPSCNNLossDescriptor;

@interface MPSCNNLossNode : MPSNNFilterNode {

	MPSNNLabelsNode* _labels;
	MPSCNNLossDescriptor* _descriptor;

}

@property (nonatomic,retain,readonly) MPSNNLabelsNode * inputLabels;              //@synthesize labels=_labels - In the implementation block
+(id)nodeWithSource:(id)arg1 lossDescriptor:(id)arg2 ;
-(FilterGraphNode*)newFilterNode;
-(id)gradientFilterWithSources:(id)arg1 ;
-(id)initWithSource:(id)arg1 lossDescriptor:(id)arg2 ;
-(MPSNNLabelsNode *)inputLabels;
-(void)dealloc;
@end

