/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:58 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNKernel.h>

@protocol MPSCNNBatchNormalizationDataSource;
@interface MPSCNNBatchNormalization : MPSCNNKernel {

	MPSAutoBuffer* _gamma;
	MPSAutoBuffer* _beta;
	MPSAutoBuffer* _meanDS;
	MPSAutoBuffer* _varDS;
	id<MPSCNNBatchNormalizationDataSource> _dataSource;
	BOOL _stateNeedsToLoad;
	float _epsilon;
	unsigned long long _numberOfFeatureChannels;

}

@property (nonatomic,readonly) unsigned long long numberOfFeatureChannels;                            //@synthesize numberOfFeatureChannels=_numberOfFeatureChannels - In the implementation block
@property (assign,nonatomic) float epsilon;                                                           //@synthesize epsilon=_epsilon - In the implementation block
@property (nonatomic,retain,readonly) id<MPSCNNBatchNormalizationDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
+(const MPSLibraryInfo*)libraryInfo;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)temporaryResultStateForCommandBuffer:(id)arg1 sourceImage:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4 ;
-(id)resultStateForSourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3 ;
-(BOOL)isResultStateReusedAcrossBatch;
-(unsigned long long)numberOfFeatureChannels;
-(void)reloadDataSource:(id)arg1 ;
-(id)initWithDevice:(id)arg1 dataSource:(id)arg2 ;
-(void)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 batchNormalizationState:(id)arg3 destinationImage:(id)arg4 ;
-(void)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(NSArray*)arg2 batchNormalizationState:(id)arg3 destinationImages:(NSArray*)arg4 ;
-(id)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 batchNormalizationState:(id)arg3 ;
-(NSArray*)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(NSArray*)arg2 batchNormalizationState:(id)arg3 ;
-(void)reloadGammaAndBetaWithCommandBuffer:(id)arg1 gammaAndBetaState:(id)arg2 ;
-(void)setEpsilon:(float)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)debugDescription;
-(id<MPSCNNBatchNormalizationDataSource>)dataSource;
-(float)epsilon;
@end

