/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSExternalCNNUnary.h>
#import <MPSNeuralNetwork/MPSExternalCNNPoolingAverage.h>

@protocol MPSExternalCNNPoolingAverage <MPSExternalCNNUnary>
@required
-(unsigned long long)encodeToCommandBuffer:(id)arg1 computeCommandEncoder:(id)arg2 options:(unsigned long long)arg3 sourceTexture:(id)arg4 sourceInfo:(const SCD_Struct_MP16*)arg5 destinationTexture:(id)arg6 destinationInfo:(const SCD_Struct_MP17*)arg7;
-(unsigned long long)encodeToCommandBuffer:(id)arg1 computeCommandEncoder:(id)arg2 options:(unsigned long long)arg3 sourceTexture:(id)arg4 sourceInfo:(const SCD_Struct_MP16*)arg5 destinationTexture:(id)arg6 destinationInfo:(const SCD_Struct_MP17*)arg7 zeroPadSizeX:(unsigned long long)arg8 zeroPadSizeY:(unsigned long long)arg9;

@end


@class NSString;

@interface MPSExternalCNNPoolingAverage : MPSExternalCNNUnary <MPSExternalCNNPoolingAverage>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)encodeToCommandBuffer:(id)arg1 computeCommandEncoder:(id)arg2 options:(unsigned long long)arg3 sourceTexture:(id)arg4 sourceInfo:(const SCD_Struct_MP16*)arg5 destinationTexture:(id)arg6 destinationInfo:(const SCD_Struct_MP17*)arg7 ;
-(unsigned long long)encodeWithFilter:(id)arg1 encoder:(id)arg2 commandBuffer:(id)arg3 callInfo:(const SCD_Struct_MP18*)arg4 ;
-(unsigned long long)encodeToCommandBuffer:(id)arg1 computeCommandEncoder:(id)arg2 options:(unsigned long long)arg3 sourceTexture:(id)arg4 sourceInfo:(const SCD_Struct_MP16*)arg5 destinationTexture:(id)arg6 destinationInfo:(const SCD_Struct_MP17*)arg7 zeroPadSizeX:(unsigned long long)arg8 zeroPadSizeY:(unsigned long long)arg9 ;
@end

