/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSDAnimationRandomGenerator;
#import <iWorkImport/iWorkImport-Structs.h>
@class NSArray, TSDGLTextureInfo, TSDGLShader;

@interface TSDGLEdgeDistanceFieldTraceEffect : NSObject {

	BOOL _canDraw;
	BOOL _didTeardown;
	long long _traceTextureMaxValue;
	CGAffineTransform _textureEdgeInsetsAdjustmentMatrix;
	NSArray* _strokeLineSegment;
	CFArrayRef _zeroesArray;
	CGSize _bufferSize;
	BOOL _isValid;
	TSDGLTextureInfo* _edgeDistanceFieldTextureInfo;
	TSDGLTextureInfo* _traceTextureInfo;
	TSDGLShader* _shader;
	id<TSDAnimationRandomGenerator> _randomGenerator;
	CGPoint _randomStrokePoint;

}

@property (nonatomic,readonly) BOOL isValid;                                                 //@synthesize isValid=_isValid - In the implementation block
@property (nonatomic,readonly) TSDGLTextureInfo * edgeDistanceFieldTextureInfo;              //@synthesize edgeDistanceFieldTextureInfo=_edgeDistanceFieldTextureInfo - In the implementation block
@property (nonatomic,readonly) TSDGLTextureInfo * traceTextureInfo;                          //@synthesize traceTextureInfo=_traceTextureInfo - In the implementation block
@property (nonatomic,readonly) TSDGLShader * shader;                                         //@synthesize shader=_shader - In the implementation block
@property (nonatomic,readonly) CGPoint randomStrokePoint;                                    //@synthesize randomStrokePoint=_randomStrokePoint - In the implementation block
@property (nonatomic,readonly) NSArray * strokeLineSegment; 
@property (nonatomic,readonly) id<TSDAnimationRandomGenerator> randomGenerator;              //@synthesize randomGenerator=_randomGenerator - In the implementation block
+(void)willBeginUsingShaders;
+(void)didEndUsingShaders;
-(id<TSDAnimationRandomGenerator>)randomGenerator;
-(BOOL)p_generateTraceTextureInfoWithStrokeWidth:(double)arg1 clockwise:(BOOL)arg2 randomGenerator:(id)arg3 ;
-(TSDGLTextureInfo *)edgeDistanceFieldTextureInfo;
-(TSDGLTextureInfo *)traceTextureInfo;
-(id)p_houghTransformWithZeroes:(CFArrayRef)arg1 bufferSize:(CGSize)arg2 ;
-(CGPoint)p_normalizedPointInTexturedRectangleFrameFromPoint:(CGPoint)arg1 inBufferSize:(CGSize)arg2 ;
-(void)p_fillFloatBuffer:(float*)arg1 withRGBAData:(char*)arg2 bufferSize:(CGSize)arg3 ;
-(void)p_addNearbyPixelsToArray:(CFArrayRef)arg1 pixel:(CGPoint)arg2 edgeDataBuffer:(float*)arg3 dataBuffer:(char*)arg4 tempDataBuffer:(char*)arg5 localMaximumLookupBuffer:(BOOL*)arg6 bufferSize:(CGSize)arg7 ;
-(id)initWithTR:(id)arg1 strokeWidth:(double)arg2 downsampleScale:(double)arg3 clockwise:(BOOL)arg4 GLState:(id)arg5 randomGenerator:(id)arg6 ;
-(void)setupShaderWithPercent:(double)arg1 MVPMatrix:(CATransform3D)arg2 opacity:(double)arg3 color:(tquat<float>)arg4 strokeFadeHardnessLeading:(double)arg5 strokeFadeHardnessTrailing:(double)arg6 ;
-(NSArray *)strokeLineSegment;
-(CGPoint)randomStrokePoint;
-(void)dealloc;
-(id)description;
-(BOOL)isValid;
-(void)teardown;
-(TSDGLShader *)shader;
@end

