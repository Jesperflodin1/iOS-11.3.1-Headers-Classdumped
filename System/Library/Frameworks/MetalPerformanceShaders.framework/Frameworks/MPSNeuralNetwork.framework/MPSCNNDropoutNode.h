/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:58 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSNNFilterNode.h>

@interface MPSCNNDropoutNode : MPSNNFilterNode {

	float _keepProbability;
	unsigned long long _seed;
	SCD_Struct_MP0 _maskStride;

}

@property (nonatomic,readonly) float keepProbability;                          //@synthesize keepProbability=_keepProbability - In the implementation block
@property (nonatomic,readonly) unsigned long long seed;                        //@synthesize seed=_seed - In the implementation block
@property (nonatomic,readonly) SCD_Struct_MP0 maskStrideInPixels;              //@synthesize maskStride=_maskStride - In the implementation block
+(id)nodeWithSource:(id)arg1 ;
+(id)nodeWithSource:(id)arg1 keepProbability:(float)arg2 ;
+(id)nodeWithSource:(id)arg1 keepProbability:(float)arg2 seed:(unsigned long long)arg3 maskStrideInPixels:(SCD_Struct_MP0)arg4 ;
-(FilterGraphNode*)newFilterNode;
-(float)keepProbability;
-(SCD_Struct_MP0)maskStrideInPixels;
-(Class)gradientClass;
-(id)initWithSource:(id)arg1 keepProbability:(float)arg2 ;
-(id)initWithSource:(id)arg1 keepProbability:(float)arg2 seed:(unsigned long long)arg3 maskStrideInPixels:(SCD_Struct_MP0)arg4 ;
-(unsigned long long)seed;
-(id)initWithSource:(id)arg1 ;
@end

