/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:09 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSReading/TSReading-Structs.h>
@interface TSDGLShadow : NSObject
+(id)sharedContext;
+(id)renderQueue;
-(void)setupGLTextureParameters;
-(CGImageRef)newCGImageFromGLBuffer:(char**)arg1 ;
-(void)createOffscreenRenderBuffer:(CGSize)arg1 framebuffer:(id)arg2 requiresDepth:(BOOL)arg3 colorRenderBuffer:(unsigned*)arg4 depthRenderBuffer:(unsigned*)arg5 ;
@end

