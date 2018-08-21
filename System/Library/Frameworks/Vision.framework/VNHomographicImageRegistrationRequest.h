/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageRegistrationRequest.h>

@interface VNHomographicImageRegistrationRequest : VNImageRegistrationRequest
-(id)observationsCacheKey;
-(BOOL)internalPerformInContext:(id)arg1 error:(id*)arg2 ;
-(BOOL)_createN:(unsigned long long)arg1 CVPixelBuffers:(_CVBuffer*)arg2 withPixelFormat:(unsigned)arg3 width:(unsigned long long)arg4 height:(unsigned long long)arg5 error:(id*)arg6 ;
-(CVBufferRef)_createHomographicPixelBufferFromImageBuffer:(id)arg1 cropRect:(CGRect)arg2 options:(id)arg3 error:(id*)arg4 ;
-(BOOL)_calculateHomographicWarpTransform:(SCD_Struct_VN13*)arg1 ofFloatingImagePixelBuffer:(CVBufferRef)arg2 ontoReferenceImagePixelBuffer:(CVBufferRef)arg3 usingImageRegistrationContext:(ImageRegistrationCtx_sRef)arg4 glContext:(void*)arg5 seededWithPreviousWarpTransform:(const SCD_Struct_VN13*)arg6 error:(id*)arg7 ;
-(BOOL)wantsSequencedRequestObservationsRecording;
@end
