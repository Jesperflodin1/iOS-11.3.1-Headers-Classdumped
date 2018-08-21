/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:20 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUTransformNode.h>

@class NUImageTransformAffine;

@interface NUCropNode : NUTransformNode {

	BOOL _resetCleanAperture;
	NUImageTransformAffine* _transform;
	SCD_Struct_NU6 _cropRect;

}

@property (retain) NUImageTransformAffine * transform;              //@synthesize transform=_transform - In the implementation block
@property (assign) SCD_Struct_NU6 cropRect;                         //@synthesize cropRect=_cropRect - In the implementation block
@property (readonly) BOOL resetCleanAperture;                       //@synthesize resetCleanAperture=_resetCleanAperture - In the implementation block
-(void)setTransform:(NUImageTransformAffine *)arg1 ;
-(NUImageTransformAffine *)transform;
-(id)initWithRect:(SCD_Struct_NU6)arg1 input:(id)arg2 ;
-(id)resolvedNodeWithCachedInputs:(NSDictionary*)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4 ;
-(id)_evaluateImageGeometry:(out id*)arg1 ;
-(id)initWithRect:(SCD_Struct_NU6)arg1 input:(id)arg2 resetCleanAperture:(BOOL)arg3 ;
-(id)_evaluateVideoProperties:(out id*)arg1 ;
-(id)_evaluateImage:(out id*)arg1 ;
-(id)initWithSettings:(id)arg1 inputs:(NSDictionary*)arg2 ;
-(id)_evaluateDepthData:(out id*)arg1 ;
-(BOOL)canPropagateOriginalDepthData;
-(id)_transformWithError:(out id*)arg1 ;
-(BOOL)resetCleanAperture;
-(SCD_Struct_NU6)cropRect;
-(void)setCropRect:(SCD_Struct_NU6)arg1 ;
@end
