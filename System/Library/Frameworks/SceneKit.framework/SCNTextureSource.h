/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SceneKit/SceneKit-Structs.h>
@interface SCNTextureSource : NSObject {

	id _mtlTextureCache;
	id _glTextureCache;
	 _size;

}
-(void)setSize:;
-(void)dealloc;
-(id)metalTextureWithEngineContext:(C3DEngineContextRef)arg1 textureSampler:(_C3DTextureSampler*)arg2 nextFrameTime:(double*)arg3 ;
-(_C3DRendererContext*)rendererContextForTextureSourceWithEngineContext:(C3DEngineContextRef)arg1 ;
-(double)nextFrameTime;
-(void)cleanup:(_C3DRendererContext*)arg1 ;
-(C3DTextureRef)_textureWithEngineContext:(C3DEngineContextRef)arg1 textureSampler:(_C3DTextureSampler*)arg2 nextFrameTime:(double*)arg3 ;
-(id)glTextureCache;
-(void)setGlTextureCache:(id)arg1 ;
-(BOOL)supportsMetal;
-(BOOL)prefersGL3;
-(void)renderWithEngineContext:(C3DEngineContextRef)arg1 textureSampler:(_C3DTextureSampler*)arg2 nextFrameTime:(double*)arg3 ;
-(C3DTextureRef)textureWithEngineContext:(C3DEngineContextRef)arg1 textureSampler:(_C3DTextureSampler*)arg2 nextFrameTime:(double*)arg3 ;
-(id)MTLTextureCache;
-(void)setMTLTextureCache:(id)arg1 ;
-(1)textureSize;
@end

