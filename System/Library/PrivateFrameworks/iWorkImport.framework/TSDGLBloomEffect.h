/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSDGLDataBuffer;
#import <iWorkImport/iWorkImport-Structs.h>
@class TSDGLFrameBuffer, TSDGLShader;

@interface TSDGLBloomEffect : NSObject {

	CGSize _effectSize;
	CGSize _blurBufferSize;
	TSDGLFrameBuffer* _colorFramebuffer;
	TSDGLFrameBuffer* _blurFramebuffer;
	id<TSDGLDataBuffer> _dataBuffer;
	id<TSDGLDataBuffer> _blurTransferDataBuffer;
	id<TSDGLDataBuffer> _blurDataBuffer;
	TSDGLShader* _blurHorizontalShader;
	TSDGLShader* _blurVerticalShader;
	TSDGLShader* _bloomShader;
	TSDGLShader* _fboTransferShader;
	int _oldViewportRect[4];
	BOOL _oldViewportRectInitialized;

}
-(void)p_blurColorBufferWithPreviousFramebuffer:(int)arg1 GLState:(id)arg2 ;
-(void)drawBloomEffectWithMVPMatrix:(CATransform3D)arg1 bloomAmount:(double)arg2 currentGLFramebuffer:(int)arg3 GLState:(id)arg4 ;
-(void)dealloc;
-(void)teardown;
-(void)bindFramebuffer;
-(void)unbindFramebufferAndBindGLFramebuffer:(int)arg1 ;
-(void)p_setupBuffers;
-(void)p_setupShaders;
-(id)initWithEffectSize:(CGSize)arg1 blurScale:(double)arg2 ;
@end
