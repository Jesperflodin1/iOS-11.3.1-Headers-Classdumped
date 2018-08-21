/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:00 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/DrawingKit.framework/DrawingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DrawingKit/DrawingKit-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/DKInkRendererDelegate.h>

@protocol DKInkRenderer, DKInkViewRenderDelegate;
@class DKDrawing, UIColor, UIView, DKDrawingStroke, NSMutableArray, DKPointSmoothing, CADisplayLink, NSUndoManager, NSString;

@interface DKInkView : UIView <DKInkRendererDelegate> {

	DKDrawing* _currentDrawing;
	CGColorRef _cgColor;
	CGPoint _lastPoint;
	double _lastTouchTime;
	CGPoint _velocityInWindow;
	id _trackingTouchID;
	BOOL _trackingTouches;
	/*^block*/id _animationCompletionHandler;
	BOOL _isAddingPointWithoutSmoothing;
	BOOL _scaleDrawingToFitCanvas;
	BOOL _allowInput;
	BOOL _isRenderingPaused;
	UIColor* _strokeColor;
	double _minPressure;
	double _maxPressure;
	double _minThickness;
	double _maxThickness;
	UIView*<DKInkRenderer> _renderer;
	DKDrawingStroke* _currentBrushStroke;
	NSMutableArray* _currentInterpolatedBrushStroke;
	NSMutableArray* _cachedInterpolatedBrushStrokes;
	double _currentWeight;
	unsigned long long _totalPointsAdded;
	double _strokeStartTime;
	DKPointSmoothing* _inputFIFO;
	unsigned long long _animationType;
	NSMutableArray* _cachedInterpolatedAnimationPoints;
	NSMutableArray* _cachedInterpolatedAnimationStrokes;
	NSMutableArray* _computedAnimationFrames;
	double _drawingScale;
	CADisplayLink* _displayLink;
	NSUndoManager* _strokeUndoManager;
	unsigned long long _mode;
	id<DKInkViewRenderDelegate> _renderPreviewDelegate;
	unsigned long long _renderPreviewMode;
	CGPoint _strokeStartLocation;
	CGPoint _strokeLastLocation;
	 _lastVectorPoint;
	CGRect _aggregateInvalid;
	CGRect _unionDrawingRect;

}

@property (nonatomic,retain) UIView*<DKInkRenderer> renderer;                                       //@synthesize renderer=_renderer - In the implementation block
@property (nonatomic,retain) DKDrawingStroke * currentBrushStroke;                                  //@synthesize currentBrushStroke=_currentBrushStroke - In the implementation block
@property (nonatomic,retain) NSMutableArray * currentInterpolatedBrushStroke;                       //@synthesize currentInterpolatedBrushStroke=_currentInterpolatedBrushStroke - In the implementation block
@property (nonatomic,retain) NSMutableArray * cachedInterpolatedBrushStrokes;                       //@synthesize cachedInterpolatedBrushStrokes=_cachedInterpolatedBrushStrokes - In the implementation block
@property (assign,nonatomic) double currentWeight;                                                  //@synthesize currentWeight=_currentWeight - In the implementation block
@property (assign) unsigned long long totalPointsAdded;                                             //@synthesize totalPointsAdded=_totalPointsAdded - In the implementation block
@property (assign) CGPoint strokeStartLocation;                                                     //@synthesize strokeStartLocation=_strokeStartLocation - In the implementation block
@property (assign) CGPoint strokeLastLocation;                                                      //@synthesize strokeLastLocation=_strokeLastLocation - In the implementation block
@property (assign) double strokeStartTime;                                                          //@synthesize strokeStartTime=_strokeStartTime - In the implementation block
@property (assign) BOOL isAddingPointWithoutSmoothing;                                              //@synthesize isAddingPointWithoutSmoothing=_isAddingPointWithoutSmoothing - In the implementation block
@property (assign,nonatomic)  lastVectorPoint;                                                      //@synthesize lastVectorPoint=_lastVectorPoint - In the implementation block
@property (nonatomic,retain) DKPointSmoothing * inputFIFO;                                          //@synthesize inputFIFO=_inputFIFO - In the implementation block
@property (assign,nonatomic) CGRect aggregateInvalid;                                               //@synthesize aggregateInvalid=_aggregateInvalid - In the implementation block
@property (assign,nonatomic) CGRect unionDrawingRect;                                               //@synthesize unionDrawingRect=_unionDrawingRect - In the implementation block
@property (assign,nonatomic) unsigned long long animationType;                                      //@synthesize animationType=_animationType - In the implementation block
@property (nonatomic,retain) NSMutableArray * cachedInterpolatedAnimationPoints;                    //@synthesize cachedInterpolatedAnimationPoints=_cachedInterpolatedAnimationPoints - In the implementation block
@property (nonatomic,retain) NSMutableArray * cachedInterpolatedAnimationStrokes;                   //@synthesize cachedInterpolatedAnimationStrokes=_cachedInterpolatedAnimationStrokes - In the implementation block
@property (nonatomic,retain) NSMutableArray * computedAnimationFrames;                              //@synthesize computedAnimationFrames=_computedAnimationFrames - In the implementation block
@property (assign,nonatomic) double drawingScale;                                                   //@synthesize drawingScale=_drawingScale - In the implementation block
@property (nonatomic,retain) CADisplayLink * displayLink;                                           //@synthesize displayLink=_displayLink - In the implementation block
@property (nonatomic,retain) NSUndoManager * strokeUndoManager;                                     //@synthesize strokeUndoManager=_strokeUndoManager - In the implementation block
@property (assign,nonatomic) unsigned long long mode;                                               //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) BOOL scaleDrawingToFitCanvas;                                          //@synthesize scaleDrawingToFitCanvas=_scaleDrawingToFitCanvas - In the implementation block
@property (assign,nonatomic) BOOL allowInput;                                                       //@synthesize allowInput=_allowInput - In the implementation block
@property (nonatomic,readonly) long long countOfCurrentStroke; 
@property (nonatomic,readonly) BOOL canvasHasInk; 
@property (nonatomic,readonly) BOOL trackingTouches;                                                //@synthesize trackingTouches=_trackingTouches - In the implementation block
@property (nonatomic,readonly) BOOL isRenderingPaused;                                              //@synthesize isRenderingPaused=_isRenderingPaused - In the implementation block
@property (assign,nonatomic,__weak) id<DKInkViewRenderDelegate> renderPreviewDelegate;              //@synthesize renderPreviewDelegate=_renderPreviewDelegate - In the implementation block
@property (assign,nonatomic) unsigned long long renderPreviewMode;                                  //@synthesize renderPreviewMode=_renderPreviewMode - In the implementation block
@property (nonatomic,readonly) CGRect inkBounds; 
@property (nonatomic,retain) UIColor * strokeColor;                                                 //@synthesize strokeColor=_strokeColor - In the implementation block
@property (assign,nonatomic) double minPressure;                                                    //@synthesize minPressure=_minPressure - In the implementation block
@property (assign,nonatomic) double maxPressure;                                                    //@synthesize maxPressure=_maxPressure - In the implementation block
@property (assign,nonatomic) double minThickness;                                                   //@synthesize minThickness=_minThickness - In the implementation block
@property (assign,nonatomic) double maxThickness;                                                   //@synthesize maxThickness=_maxThickness - In the implementation block
@property (nonatomic,copy) DKDrawing * currentDrawing;                                              //@synthesize currentDrawing=_currentDrawing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGPoint)normalizeVectorPoint:(CGPoint)arg1 ;
+(double)lengthOfVector:(CGVector)arg1 ;
+(CGVector)normalizeVector:(CGVector)arg1 ;
+(BOOL)gpuAvailable;
+(double)windowBackingScaleFactor:(id)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)teardown;
-(void)_commonInit;
-(void)setStrokeColor:(UIColor *)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(void)didMoveToSuperview;
-(void)willMoveToSuperview:(id)arg1 ;
-(CADisplayLink *)displayLink;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(unsigned long long)mode;
-(UIColor *)strokeColor;
-(void)_display;
-(void)setMode:(unsigned long long)arg1 ;
-(void)clear;
-(void)setAnimationType:(unsigned long long)arg1 ;
-(unsigned long long)animationType;
-(void)setRenderer:(UIView*<DKInkRenderer>)arg1 ;
-(double)drawingScale;
-(void)setCurrentWeight:(double)arg1 ;
-(void)setMinPressure:(double)arg1 ;
-(void)setMaxPressure:(double)arg1 ;
-(void)setMinThickness:(double)arg1 ;
-(void)setMaxThickness:(double)arg1 ;
-(double)interfaceScale;
-(unsigned long long)totalPointsAdded;
-(void)setTotalPointsAdded:(unsigned long long)arg1 ;
-(void)setStrokeStartTime:(double)arg1 ;
-(void)setStrokeLastLocation:(CGPoint)arg1 ;
-(CGPoint)strokeLastLocation;
-(void)setStrokeStartLocation:(CGPoint)arg1 ;
-(void)setIsAddingPointWithoutSmoothing:(BOOL)arg1 ;
-(double)strokeStartTime;
-(CGPoint)strokeStartLocation;
-(double)currentWeight;
-(void)continueStrokeWithoutSmoothing:;
-(double)minPressure;
-(double)maxPressure;
-(double)minThickness;
-(double)maxThickness;
-(BOOL)ak_forceAvailableForTouch:(id)arg1 ;
-(double)weightForValue:(double)arg1 ;
-(double)weightForTouch:(id)arg1 ;
-(void)startStroke:;
-(void)continueStroke:;
-(void)terminateStroke;
-(BOOL)isAddingPointWithoutSmoothing;
-(CGRect)aggregateInvalid;
-(void)setAggregateInvalid:(CGRect)arg1 ;
-(CGRect)unionDrawingRect;
-(void)setUnionDrawingRect:(CGRect)arg1 ;
-(UIView*<DKInkRenderer>)renderer;
-(void)resumeRendering;
-(void)inkDidRender:(id)arg1 ;
-(BOOL)scaleDrawingToFitCanvas;
-(void)setScaleDrawingToFitCanvas:(BOOL)arg1 ;
-(void)setDrawingScale:(double)arg1 ;
-(NSMutableArray *)cachedInterpolatedBrushStrokes;
-(void)setCachedInterpolatedBrushStrokes:(NSMutableArray *)arg1 ;
-(NSMutableArray *)currentInterpolatedBrushStroke;
-(void)setCurrentInterpolatedBrushStroke:(NSMutableArray *)arg1 ;
-(BOOL)_deviceSupportsGL;
-(void)setAllowInput:(BOOL)arg1 ;
-(void)setupRenderer;
-(void)setRenderPreviewMode:(unsigned long long)arg1 ;
-(void)setCurrentDrawing:(DKDrawing *)arg1 ;
-(void)setStrokeUndoManager:(NSUndoManager *)arg1 ;
-(void)_addUninterpolatedPoints:(1*)arg1 controlPoint:(2*)arg2 count:(unsigned long long)arg3 flushing:(BOOL)arg4 ;
-(DKPointSmoothing *)inputFIFO;
-(void)_renderEmittedPoints:(1*)arg1 count:(unsigned long long)arg2 ;
-(void)setInputFIFO:(DKPointSmoothing *)arg1 ;
-(void)_setDrawingOnRendererWithReplayAnimation:(id)arg1 ;
-(void)_setDrawingOnRendererWithBleedAnimation:(id)arg1 ;
-(void)_setDrawingOnRenderer:(id)arg1 ;
-(void)setCurrentDrawing:(id)arg1 scaleDrawingToFitBounds:(BOOL)arg2 withAnimationType:(unsigned long long)arg3 animationCompletionHandler:(/*^block*/id)arg4 ;
-(id<DKInkViewRenderDelegate>)renderPreviewDelegate;
-(DKDrawing *)currentDrawing;
-(NSUndoManager *)strokeUndoManager;
-(void)setLastVectorPoint:;
-(void)_notifyRenderDelegate;
-(void)_replayAnimationTick:(id)arg1 ;
-(void)_computeAnimationFramesFittingInMaxDuration:(double)arg1 ;
-(long long)countOfCurrentStroke;
-(void)_undoLastStroke:(id)arg1 ;
-(2)_vector4ForTouchSettingWeightAndVelocity:(id)arg1 average:(BOOL)arg2 ;
-(void)_postTouchesBeganNotification:(CGPoint)arg1 ;
-(void)handleCoalescedTouches:(id)arg1 forTouch:(id)arg2 average:(BOOL)arg3 ;
-(void)_postTouchesEndedNotification:(CGPoint)arg1 ;
-(void)_updateVelocityWithTouch:(id)arg1 average:(BOOL)arg2 ;
-(CGPoint)_velocityForTouch:(id)arg1 ;
-(void)inkDidCompleteRender:(id)arg1 ;
-(void)pauseRendering;
-(id)snapshotRendererState;
-(CGRect)inkBounds;
-(BOOL)canvasHasInk;
-(void)undoLastStroke;
-(BOOL)trackingTouches;
-(DKDrawingStroke *)currentBrushStroke;
-(void)setCurrentBrushStroke:(DKDrawingStroke *)arg1 ;
-()lastVectorPoint;
-(NSMutableArray *)cachedInterpolatedAnimationPoints;
-(void)setCachedInterpolatedAnimationPoints:(NSMutableArray *)arg1 ;
-(NSMutableArray *)cachedInterpolatedAnimationStrokes;
-(void)setCachedInterpolatedAnimationStrokes:(NSMutableArray *)arg1 ;
-(NSMutableArray *)computedAnimationFrames;
-(void)setComputedAnimationFrames:(NSMutableArray *)arg1 ;
-(BOOL)allowInput;
-(BOOL)isRenderingPaused;
-(void)setRenderPreviewDelegate:(id<DKInkViewRenderDelegate>)arg1 ;
-(unsigned long long)renderPreviewMode;
-(void)_startDisplayLink;
-(void)_stopDisplayLink;
@end

