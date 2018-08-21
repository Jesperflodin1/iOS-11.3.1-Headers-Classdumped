/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:58 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSCore/MPSState.h>

@interface MPSRNNRecurrentImageState : MPSState {

	id* recurrentImages;
	id* cellImages;
	int nLayers;
	BOOL _isTemporary;

}
-(void)setReadCount:(unsigned long long)arg1 ;
-(id)getRecurrentOutputImageForLayerIndex:(unsigned long long)arg1 ;
-(id)getMemoryCellImageForLayerIndex:(unsigned long long)arg1 ;
-(id)initWithCommandBuffer:(id)arg1 recurrentImageDescriptors:(id*)arg2 cellImageDescriptors:(id*)arg3 isTemporary:(BOOL)arg4 layerCount:(int)arg5 ;
-(void)dealloc;
-(BOOL)isTemporary;
@end
