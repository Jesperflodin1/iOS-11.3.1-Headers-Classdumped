/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:39 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AppleCVA.framework/AppleCVA
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPSCNNConvolutionDataSource <NSObject>
@optional
-(id*)rangesForUInt8Kernel;
-(float*)lookupTableForUInt8Kernel;
-(id)updateWithCommandBuffer:(id)arg1 gradientState:(id)arg2 sourceState:(id)arg3;
-(BOOL)updateWithGradientState:(id)arg1 sourceState:(id)arg2;

@required
-(float*)biasTerms;
-(void*)weights;
-(id)label;
-(void)purge;
-(BOOL)load;
-(id)descriptor;
-(unsigned)dataType;

@end

