/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:35 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PencilKit/PencilKit-Structs.h>
@class DKDGLFrameBuffer, PKResourceHandler, DKDGLDataBuffer, NSMapTable, PKGLContext, PKDrawing, PKLinedPaper;

@interface PKRenderer : NSObject {

	vector<AnimatingStroke, std::__1::allocator<AnimatingStroke> >* _animatingStrokes;
	DKDGLFrameBuffer* _paintFramebuffer;
	DKDGLFrameBuffer* _paintFramebufferAccumulator;
	DKDGLFrameBuffer* _originalBackFramebuffer;
	CGRect _paintFramebufferDirtyRect;
	GLsyncRef _finishRenderingFence;
	PKResourceHandler* _resourceHandler;
	int _backingWidth;
	int _backingHeight;
	unsigned _backgroundImageTexture;
	CGSize _backgroundImageTextureSize;
	SCD_Struct_DK8 _backgroundGLColor;
	CGSize _drawingPixelSize;
	double _fromStrokeSpaceScale;
	CGRect _contentsBounds;
	CGAffineTransform _strokeTransform;
	DKDGLDataBuffer* _strokeBuffer;
	DKDGLDataBuffer* _linesBuffer;
	unsigned long long _strokeBufferCount;
	PKStrokePoint _lastPointForEraser;
	BOOL _lastPointForEraserIsValid;
	BOOL _rendersToSharedContext;
	NSMapTable* _tileFramebuffers;
	BOOL _solidColorBackboard;
	BOOL _isFinishedRendering;
	PKGLContext* _glContext;
	PKDrawing* _drawing;
	double _inputScale;
	double _eraserIndicatorAlpha;
	double _backboardPaperMultiply;
	CGColorRef _backgroundColor;
	PKLinedPaper* _linedPaper;
	CGSize _actualSize;
	CGRect _viewScissor;
	CGAffineTransform _paperTransform;

}

@property (assign,nonatomic,__weak) PKDrawing * drawing;                       //@synthesize drawing=_drawing - In the implementation block
@property (nonatomic,readonly) PKGLContext * glContext;                        //@synthesize glContext=_glContext - In the implementation block
@property (assign,nonatomic) double inputScale;                                //@synthesize inputScale=_inputScale - In the implementation block
@property (assign,nonatomic) double eraserIndicatorAlpha;                      //@synthesize eraserIndicatorAlpha=_eraserIndicatorAlpha - In the implementation block
@property (assign,nonatomic) BOOL solidColorBackboard;                         //@synthesize solidColorBackboard=_solidColorBackboard - In the implementation block
@property (assign,nonatomic) BOOL isFinishedRendering;                         //@synthesize isFinishedRendering=_isFinishedRendering - In the implementation block
@property (assign,nonatomic) CGAffineTransform strokeTransform;                //@synthesize strokeTransform=_strokeTransform - In the implementation block
@property (assign,nonatomic) CGAffineTransform paperTransform;                 //@synthesize paperTransform=_paperTransform - In the implementation block
@property (assign,nonatomic) CGRect viewScissor;                               //@synthesize viewScissor=_viewScissor - In the implementation block
@property (assign,nonatomic) double backboardPaperMultiply;                    //@synthesize backboardPaperMultiply=_backboardPaperMultiply - In the implementation block
@property (assign,nonatomic) CGSize actualSize;                                //@synthesize actualSize=_actualSize - In the implementation block
@property (assign,nonatomic) CGColorRef backgroundColor;                       //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) PKResourceHandler * resourceHandler;              //@synthesize resourceHandler=_resourceHandler - In the implementation block
@property (nonatomic,retain) PKLinedPaper * linedPaper;                        //@synthesize linedPaper=_linedPaper - In the implementation block
@property (nonatomic,readonly) double latestTimestamp; 
-(void)setBackgroundColor:(CGColorRef)arg1 ;
-(CGColorRef)backgroundColor;
-(void)dealloc;
-(void)setBackgroundImage:(CGImageRef)arg1 ;
-(void)clear;
-(double)inputScale;
-(void)setInputScale:(double)arg1 ;
-(CGSize)actualSize;
-(void)setBackboardPaperMultiply:(double)arg1 ;
-(void)setLinedPaper:(PKLinedPaper *)arg1 ;
-(void)setStrokeTransform:(CGAffineTransform)arg1 ;
-(void)setViewScissor:(CGRect)arg1 ;
-(void)setPaperTransform:(CGAffineTransform)arg1 ;
-(PKLinedPaper *)linedPaper;
-(id)initWithDrawingPixelSize:(CGSize)arg1 actualSize:(CGSize)arg2 glContext:(id)arg3 ;
-(void)setActualSize:(CGSize)arg1 ;
-(void)switchGLContextIfNecessary;
-(void)restoreGLContextIfNecessary;
-(void)flushMemoryIfPossible;
-(void)setupMaskFramebufferIfNecessary;
-(void)setupDrawingFramebuffersIfNecessary;
-(void)setupStrokeBufferIfNecessary;
-(void)renderPenStroke:(PKStrokePointSlice*)arg1 animatingStroke:(AnimatingStroke*)arg2 alpha:(double)arg3 combinedRendering:(BOOL)arg4 ;
-(void)renderParticleStroke:(PKStrokePointSlice*)arg1 animatingStroke:(AnimatingStroke*)arg2 starts:(BOOL)arg3 ends:(BOOL)arg4 combinedRendering:(BOOL)arg5 ;
-(void)renderEraserIndicatorVertices:(StrokeVertex*)arg1 numVertices:(unsigned long long)arg2 buffer:(id)arg3 shader:(id)arg4 withTransform:(CGAffineTransform)arg5 ;
-(void)renderStrokeVertices:(StrokeVertex*)arg1 numVertices:(unsigned long long)arg2 buffer:(id)arg3 shader:(id)arg4 ;
-(CGRect)clipRectForVertices:(StrokeVertex*)arg1 numVertices:(unsigned long long)arg2 ;
-(CGRect)transformRectFromStrokeToPixelSpace:(CGRect)arg1 ;
-(CGRect)transformRectFromStrokeToPixelSpace:(CGRect)arg1 transform:(CGAffineTransform)arg2 ;
-(CATransform3D)setShaderTransform:(id)arg1 forFramebufferSize:(CGSize)arg2 flipped:(BOOL)arg3 ;
-(void)setShaderTransform:(id)arg1 ;
-(void)renderParticleStrokeVertices:(StrokeVertex*)arg1 numVertices:(unsigned long long)arg2 buffer:(id)arg3 shader:(id)arg4 ;
-(void)renderFullscreenQuadWithShader:(id)arg1 transform:(CGAffineTransform)arg2 flipped:(BOOL)arg3 ;
-(void)renderWithTransform:(CGAffineTransform)arg1 animatingStroke:(AnimatingStroke*)arg2 mode:(long long)arg3 clipped:(BOOL)arg4 renderBufferSize:(CGSize)arg5 ;
-(void)renderStroke:(id)arg1 withTransform:(CGAffineTransform)arg2 mode:(long long)arg3 flipped:(BOOL)arg4 renderBufferSize:(CGSize)arg5 ;
-(CGAffineTransform)paperTransform;
-(BOOL)solidColorBackboard;
-(void)setPaperTextureOnShader:(id)arg1 ;
-(void)renderPaperTransform:(CGAffineTransform)arg1 paperTransform:(CGAffineTransform)arg2 flipped:(BOOL)arg3 multiply:(double)arg4 ;
-(void)renderLinesRenderBufferSize:(CGSize)arg1 ;
-(void)renderBrushIndicatorForStroke:(id)arg1 withTransform:(CGAffineTransform)arg2 mode:(long long)arg3 flipped:(BOOL)arg4 ;
-(void)renderEraserIndicator:(PKStrokePoint)arg1 withTransform:(CGAffineTransform)arg2 ;
-(void)drawNewPointsAt:(double)arg1 ;
-(void)renderStroke:(PKStrokePointSlice*)arg1 animatingStroke:(AnimatingStroke*)arg2 accumulating:(BOOL)arg3 combinedRendering:(BOOL)arg4 ;
-(void)finishRenderingClippedToStrokeSpaceRect:(CGRect)arg1 forStroke:(AnimatingStroke*)arg2 ;
-(void)clearPaintFramebuffers;
-(void)resetPaintFramebufferAccumulateIfNeeded;
-(void)renderAnimatingStrokesWithTransform:(CGAffineTransform)arg1 renderBufferSize:(CGSize)arg2 ;
-(void)renderTexture:(unsigned)arg1 flipped:(BOOL)arg2 ;
-(void)finishStroke;
-(void)finishRenderingNoTeardownForStroke:(AnimatingStroke*)arg1 clippedToPixelSpaceRect:(CGRect)arg2 ;
-(void)finishRendering;
-(id)setupNewTile:(id)arg1 ;
-(CGImageRef)newCGImageWithClipRect:(CGRect)arg1 ;
-(CGImageRef)newCGImageFromFramebuffer:(id)arg1 withClipRect:(CGRect)arg2 ;
-(void)renderTexture:(unsigned)arg1 intoFramebuffer:(id)arg2 ;
-(void)renderImage:(CGImageRef)arg1 intoFramebuffer:(id)arg2 ;
-(void)applyStrokeSpaceClipRect:(CGRect)arg1 strokeTransform:(CGAffineTransform)arg2 ;
-(void)renderImage:(CGImageRef)arg1 andMask:(CGImageRef)arg2 ;
-(unsigned long long)_renderStrokes:(id)arg1 clippedToStrokeSpaceRect:(CGRect)arg2 strokeTransform:(CGAffineTransform)arg3 renderedBlock:(/*^block*/id)arg4 ;
-(unsigned long long)clearAndRenderStrokes:(id)arg1 clippedToStrokeSpaceRect:(CGRect)arg2 strokeTransform:(CGAffineTransform)arg3 renderedBlock:(/*^block*/id)arg4 ;
-(unsigned long long)renderStrokes:(id)arg1 clippedToStrokeSpaceRect:(CGRect)arg2 strokeTransform:(CGAffineTransform)arg3 renderedBlock:(/*^block*/id)arg4 ;
-(id)initWithDrawingPixelSize:(CGSize)arg1 actualSize:(CGSize)arg2 ;
-(void)setupOpenGL;
-(void)renderLiveStrokeWithTransform:(CGAffineTransform)arg1 renderBufferSize:(CGSize)arg2 ;
-(void)drawingBeganWithStroke:(id)arg1 ;
-(BOOL)isFinishedRendering;
-(void)getAndRenderNewPoints:(id)arg1 ;
-(double)latestTimestamp;
-(void)renderAheadWithTransform:(CGAffineTransform)arg1 onPaper:(BOOL)arg2 renderBufferSize:(CGSize)arg3 ;
-(void)drawingEnded:(id)arg1 finishStrokeBlock:(/*^block*/id)arg2 ;
-(CGRect)contentsBoundsInStrokeSpace;
-(void)didTeardownTile;
-(void)copyIntoTile:(id)arg1 strokeTransform:(CGAffineTransform)arg2 ;
-(void)renderTile:(id)arg1 ;
-(void)renderTile:(id)arg1 intoTile:(id)arg2 ;
-(void)renderImage:(CGImageRef)arg1 andMask:(CGImageRef)arg2 clippedToStrokeSpaceRect:(CGRect)arg3 ;
-(unsigned long long)clearAndRenderStrokes:(id)arg1 clippedToStrokeSpaceRect:(CGRect)arg2 renderedBlock:(/*^block*/id)arg3 ;
-(unsigned long long)renderStrokes:(id)arg1 renderedBlock:(/*^block*/id)arg2 ;
-(PKGLContext *)glContext;
-(void)setSolidColorBackboard:(BOOL)arg1 ;
-(void)setIsFinishedRendering:(BOOL)arg1 ;
-(CGRect)viewScissor;
-(double)backboardPaperMultiply;
-(PKResourceHandler *)resourceHandler;
-(void)setResourceHandler:(PKResourceHandler *)arg1 ;
-(CGAffineTransform)strokeTransform;
-(CGImageRef)newCGImage;
-(CGImageRef)newCGImageFromGL;
-(void)setDrawing:(PKDrawing *)arg1 ;
-(PKDrawing *)drawing;
-(void)setEraserIndicatorAlpha:(double)arg1 ;
-(void)drawingCancelled;
-(double)eraserIndicatorAlpha;
@end
