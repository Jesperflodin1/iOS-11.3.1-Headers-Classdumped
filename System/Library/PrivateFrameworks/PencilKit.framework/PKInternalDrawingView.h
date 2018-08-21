/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:36 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PencilKit/PencilKit-Structs.h>
#import <PencilKit/PKInternalDrawingLightView.h>
#import <libobjc.A.dylib/PKControllerDelegate.h>
#import <libobjc.A.dylib/PKDrawingGestureTarget.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol PKInternalDrawingViewDelegate;
@class UIView, CADisplayLink, PKInk, PKDrawingGestureRecognizer, PKFreeTransformGestureRecognizer, PKController, PKOpenGLESView, UIActivityIndicatorView, NSTimer, PKUndoSwipeGestureRecognizer, PKSelectionController, NSString;

@interface PKInternalDrawingView : PKInternalDrawingLightView <PKControllerDelegate, PKDrawingGestureTarget, UIGestureRecognizerDelegate> {

	UIView* _transitionBackgroundView;
	UIView* _transitionImageView;
	CADisplayLink* _displayLink;
	BOOL _shouldPause;
	CGAffineTransform _imageTransform;
	BOOL _didCancelSelection;
	BOOL _isSelecting;
	CGPoint _drawingBeganLocation;
	BOOL _isErasingObjects;
	CGPoint _oldEraseLocation;
	long long _undoGroupCount;
	BOOL _isDrawing;
	BOOL _disableWideGamut;
	BOOL _zooming;
	BOOL _allowLiveInteraction;
	BOOL _editable;
	BOOL _pinchingFromSmallestState;
	BOOL _pinchValid;
	BOOL _fullySetup;
	BOOL _claimedLiveDrawing;
	BOOL _layerFixedPixelSize;
	id<PKInternalDrawingViewDelegate> _delegate;
	PKInk* _ink;
	PKDrawingGestureRecognizer* _drawingGestureRecognizer;
	PKFreeTransformGestureRecognizer* _pinchGestureRecognizer;
	PKController* _drawingController;
	PKOpenGLESView* _glView;
	id _undoTarget;
	SEL _undoSelector;
	UIActivityIndicatorView* _activityView;
	double _minimumZoomScale;
	double _maximumZoomScale;
	double _drawingStartTimestamp;
	NSTimer* _imageTransformTimer;
	double _initialDrawingBoundsYOrigin;
	PKUndoSwipeGestureRecognizer* _undoGestureRecognizer;
	PKUndoSwipeGestureRecognizer* _redoGestureRecognizer;
	PKSelectionController* _selectionController;
	CGPoint _drawingStartPointInScreenSpace;
	CGAffineTransform _strokeTransform;
	CGAffineTransform _pinchStartAffineTransform;

}

@property (nonatomic,retain) NSTimer * imageTransformTimer;                                          //@synthesize imageTransformTimer=_imageTransformTimer - In the implementation block
@property (assign,nonatomic) double initialDrawingBoundsYOrigin;                                     //@synthesize initialDrawingBoundsYOrigin=_initialDrawingBoundsYOrigin - In the implementation block
@property (assign,nonatomic) BOOL isDrawing;                                                         //@synthesize isDrawing=_isDrawing - In the implementation block
@property (nonatomic,retain) PKUndoSwipeGestureRecognizer * undoGestureRecognizer;                   //@synthesize undoGestureRecognizer=_undoGestureRecognizer - In the implementation block
@property (nonatomic,retain) PKUndoSwipeGestureRecognizer * redoGestureRecognizer;                   //@synthesize redoGestureRecognizer=_redoGestureRecognizer - In the implementation block
@property (assign,nonatomic) BOOL pinchingFromSmallestState;                                         //@synthesize pinchingFromSmallestState=_pinchingFromSmallestState - In the implementation block
@property (assign,nonatomic) CGAffineTransform pinchStartAffineTransform;                            //@synthesize pinchStartAffineTransform=_pinchStartAffineTransform - In the implementation block
@property (assign,nonatomic) BOOL pinchValid;                                                        //@synthesize pinchValid=_pinchValid - In the implementation block
@property (assign,nonatomic) BOOL fullySetup;                                                        //@synthesize fullySetup=_fullySetup - In the implementation block
@property (assign,nonatomic) BOOL claimedLiveDrawing;                                                //@synthesize claimedLiveDrawing=_claimedLiveDrawing - In the implementation block
@property (assign,nonatomic) BOOL didCancelSelection;                                                //@synthesize didCancelSelection=_didCancelSelection - In the implementation block
@property (nonatomic,__weak,readonly) PKSelectionController * selectionController;                   //@synthesize selectionController=_selectionController - In the implementation block
@property (assign,nonatomic) BOOL layerFixedPixelSize;                                               //@synthesize layerFixedPixelSize=_layerFixedPixelSize - In the implementation block
@property (nonatomic,readonly) id pkaxOpenGLView; 
@property (assign,nonatomic,__weak) id<PKInternalDrawingViewDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CGAffineTransform imageTransform; 
@property (assign,nonatomic) CGAffineTransform strokeTransform;                                      //@synthesize strokeTransform=_strokeTransform - In the implementation block
@property (nonatomic,retain) PKInk * ink;                                                            //@synthesize ink=_ink - In the implementation block
@property (nonatomic,readonly) BOOL isRendering; 
@property (assign,nonatomic) BOOL disableWideGamut;                                                  //@synthesize disableWideGamut=_disableWideGamut - In the implementation block
@property (nonatomic,retain) PKDrawingGestureRecognizer * drawingGestureRecognizer;                  //@synthesize drawingGestureRecognizer=_drawingGestureRecognizer - In the implementation block
@property (nonatomic,retain) PKFreeTransformGestureRecognizer * pinchGestureRecognizer;              //@synthesize pinchGestureRecognizer=_pinchGestureRecognizer - In the implementation block
@property (assign,nonatomic) BOOL zooming;                                                           //@synthesize zooming=_zooming - In the implementation block
@property (assign,nonatomic) BOOL allowLiveInteraction;                                              //@synthesize allowLiveInteraction=_allowLiveInteraction - In the implementation block
@property (assign,getter=isEditable,nonatomic) BOOL editable;                                        //@synthesize editable=_editable - In the implementation block
@property (nonatomic,readonly) PKController * drawingController;                                     //@synthesize drawingController=_drawingController - In the implementation block
@property (nonatomic,readonly) PKOpenGLESView * glView;                                              //@synthesize glView=_glView - In the implementation block
@property (assign,nonatomic,__weak) id undoTarget;                                                   //@synthesize undoTarget=_undoTarget - In the implementation block
@property (assign,nonatomic) SEL undoSelector;                                                       //@synthesize undoSelector=_undoSelector - In the implementation block
@property (assign,nonatomic,__weak) UIActivityIndicatorView * activityView;                          //@synthesize activityView=_activityView - In the implementation block
@property (assign,nonatomic) BOOL contentHidden; 
@property (assign,nonatomic) double minimumZoomScale;                                                //@synthesize minimumZoomScale=_minimumZoomScale - In the implementation block
@property (assign,nonatomic) double maximumZoomScale;                                                //@synthesize maximumZoomScale=_maximumZoomScale - In the implementation block
@property (assign,nonatomic) CGPoint drawingStartPointInScreenSpace;                                 //@synthesize drawingStartPointInScreenSpace=_drawingStartPointInScreenSpace - In the implementation block
@property (assign,nonatomic) BOOL shouldPause;                                                       //@synthesize shouldPause=_shouldPause - In the implementation block
@property (assign) double drawingStartTimestamp;                                                     //@synthesize drawingStartTimestamp=_drawingStartTimestamp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(void)setupDefaults;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id<PKInternalDrawingViewDelegate>)delegate;
-(void)setOpaque:(BOOL)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<PKInternalDrawingViewDelegate>)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)canUndo;
-(BOOL)canRedo;
-(BOOL)isEditable;
-(void)_gestureRecognizerFailed:(id)arg1 ;
-(void)setContentHidden:(BOOL)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(double)minimumZoomScale;
-(void)setMinimumZoomScale:(double)arg1 ;
-(void)setMaximumZoomScale:(double)arg1 ;
-(double)maximumZoomScale;
-(PKFreeTransformGestureRecognizer *)pinchGestureRecognizer;
-(void)setBackgroundImage:(CGImageRef)arg1 ;
-(void)setupDisplayLink;
-(void)paste:(id)arg1 ;
-(void)cut:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)delete:(id)arg1 ;
-(id)accessibilityLabel;
-(void)setEditable:(BOOL)arg1 ;
-(void)done;
-(void)setActivityView:(UIActivityIndicatorView *)arg1 ;
-(UIActivityIndicatorView *)activityView;
-(id)accessibilityHint;
-(BOOL)isAccessibilityElement;
-(BOOL)accessibilityElementsHidden;
-(PKSelectionController *)selectionController;
-(id)accessibilityElements;
-(id)glLayer;
-(void)setPinchGestureRecognizer:(PKFreeTransformGestureRecognizer *)arg1 ;
-(void)performUndo:(id)arg1 ;
-(void)setImageTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)imageTransform;
-(void)setAllowLiveInteraction:(BOOL)arg1 ;
-(void)setNeedsDrawingDisplay;
-(void)drawingChanged:(id)arg1 ;
-(void)setZooming:(BOOL)arg1 ;
-(PKOpenGLESView *)glView;
-(BOOL)isDrawing;
-(void)updateImageTransform:(id)arg1 ;
-(void)setImageTransformFrom:(CGAffineTransform)arg1 toTransform:(CGAffineTransform)arg2 animated:(BOOL)arg3 duration:(double)arg4 ;
-(void)drawingBegan:(id)arg1 ;
-(CGPoint)applyTransformToTouchLocation:(CGPoint)arg1 ;
-(void)drawingMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)drawingEnded:(id)arg1 ;
-(id)pkaxOpenGLView;
-(void)cancelNonDrawingGestures;
-(NSTimer *)imageTransformTimer;
-(void)setImageTransformTimer:(NSTimer *)arg1 ;
-(double)initialDrawingBoundsYOrigin;
-(void)setInitialDrawingBoundsYOrigin:(double)arg1 ;
-(void)setUndoTarget:(id)arg1 ;
-(void)setUndoSelector:(SEL)arg1 ;
-(void)performUndoModifyStrokesCommand:(id)arg1 ;
-(void)performUndoSelectionCommand:(id)arg1 ;
-(double)layerContentScale;
-(void)setStrokeTransform:(CGAffineTransform)arg1 ;
-(void)_setDrawing:(id)arg1 tiles:(id)arg2 setupComplete:(/*^block*/id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)initWithFrame:(CGRect)arg1 editable:(BOOL)arg2 pixelSize:(CGSize)arg3 drawingScale:(double)arg4 layerFixedPixelSize:(BOOL)arg5 drawingController:(id)arg6 selectionController:(id)arg7 ;
-(void)setupFullScreenTransform;
-(void)resizeBackingBuffersForPixelSize:(CGSize)arg1 drawingScale:(double)arg2 ;
-(void)setDrawing:(id)arg1 image:(id)arg2 imageDrawing:(id)arg3 completion:(/*^block*/id)arg4 fullyRenderedCompletionBlock:(/*^block*/id)arg5 ;
-(BOOL)isRendering;
-(BOOL)disableWideGamut;
-(void)drawStrokeWithPath:(CGPathRef)arg1 ;
-(void)eraseAll;
-(void)_drawingDisplay:(double)arg1 ;
-(SEL)undoSelector;
-(void)simulateHIDPoints:(id)arg1 ;
-(void)setIsDrawing:(BOOL)arg1 ;
-(void)drawingEstimatedPropertiesUpdated:(id)arg1 ;
-(CGAffineTransform)fitTransform;
-(void)setupOpenGLWithPixelSize:(CGSize)arg1 drawingSize:(CGSize)arg2 ;
-(void)incrementUndoGroupCount;
-(void)decrementUndoGroupCount;
-(void)adjustedPixelSize:(CGSize*)arg1 drawingSize:(CGSize*)arg2 ;
-(BOOL)layerFixedPixelSize;
-(void)_rebuildOpenGLView;
-(void)pinchGesture:(id)arg1 ;
-(void)updateZoomScaleCaps;
-(void)setImageTransform:(CGAffineTransform)arg1 animated:(BOOL)arg2 ;
-(void)setupOpenGLViewForWideGamut:(BOOL)arg1 withPixelSize:(CGSize)arg2 ;
-(BOOL)claimedLiveDrawing;
-(void)setClaimedLiveDrawing:(BOOL)arg1 ;
-(void)handleDrawingShouldPause:(BOOL)arg1 ;
-(void)updatePanEdgesForTransform:(CGAffineTransform)arg1 ;
-(void)setupFullScreenTransform:(CGAffineTransform)arg1 toViewOrientation:(CGAffineTransform)arg2 animated:(BOOL)arg3 ;
-(void)rotateIfNeeded;
-(BOOL)allowLiveInteraction;
-(BOOL)enableUserActionButton;
-(BOOL)canPerformUserAction;
-(void)delayCompletionBlockUntilPresentation:(/*^block*/id)arg1 ;
-(void)eraseStrokesForPoint:(CGPoint)arg1 prevPoint:(CGPoint)arg2 ;
-(void)dismissEditMenuIfNecessary;
-(void)setDrawingStartTimestamp:(double)arg1 ;
-(void)eraseStrokesForPoint:(CGPoint)arg1 ;
-(void)postDrawingBeganAnnouncementFor:(id)arg1 ;
-(SCD_Struct_PK21)drawingInputPoint:(CGPoint)arg1 forTouch:(id)arg2 predicted:(BOOL)arg3 ;
-(void)setDrawingStartPointInScreenSpace:(CGPoint)arg1 ;
-(void)_closeLassoForTouch:(id)arg1 ;
-(void)selectionBegan:(id)arg1 ;
-(void)toggleEditMenuAtLocation:(CGPoint)arg1 ;
-(void)registerUndoForStroke:(id)arg1 ;
-(void)postDrawingEndedAnnouncementFor:(id)arg1 ;
-(double)offsetForCenteringRangeMin:(double)arg1 size:(double)arg2 inSize:(double)arg3 ;
-(CGAffineTransform)pinchStartAffineTransform;
-(CGPoint)translationOffsetForTransform:(CGAffineTransform)arg1 ;
-(void)setPinchingFromSmallestState:(BOOL)arg1 ;
-(void)setPinchStartAffineTransform:(CGAffineTransform)arg1 ;
-(void)setPinchValid:(BOOL)arg1 ;
-(BOOL)pinchValid;
-(CGAffineTransform)pinchTransform:(id)arg1 elasticity:(double)arg2 ;
-(BOOL)canEraseAll;
-(BOOL)showEraseAllButton;
-(void)rotate:(id)arg1 ;
-(BOOL)contentHidden;
-(void)forceCancelDrawing;
-(void)forceEndDrawing;
-(void)setIsDrawingForRecap:(BOOL)arg1 ;
-(void)setDisplayLinkPaused:(BOOL)arg1 ;
-(void)setDrawingGestureRecognizer:(PKDrawingGestureRecognizer *)arg1 ;
-(CGPoint)drawingStartPointInScreenSpace;
-(double)drawingStartTimestamp;
-(PKUndoSwipeGestureRecognizer *)undoGestureRecognizer;
-(void)setUndoGestureRecognizer:(PKUndoSwipeGestureRecognizer *)arg1 ;
-(PKUndoSwipeGestureRecognizer *)redoGestureRecognizer;
-(void)setRedoGestureRecognizer:(PKUndoSwipeGestureRecognizer *)arg1 ;
-(BOOL)pinchingFromSmallestState;
-(BOOL)fullySetup;
-(void)setFullySetup:(BOOL)arg1 ;
-(BOOL)didCancelSelection;
-(void)setDidCancelSelection:(BOOL)arg1 ;
-(void)setLayerFixedPixelSize:(BOOL)arg1 ;
-(void)drawingBeganForHIDPoint:(id)arg1 ;
-(void)drawingMovedForHIDPoint:(id)arg1 ;
-(void)drawingEndedForHIDPoint:(id)arg1 ;
-(SCD_Struct_PK21)drawingInputPoint:(CGPoint)arg1 forHIDEvent:(id)arg2 predicted:(BOOL)arg3 ;
-(void)setInk:(PKInk *)arg1 ;
-(void)setDisableWideGamut:(BOOL)arg1 ;
-(PKDrawingGestureRecognizer *)drawingGestureRecognizer;
-(CGAffineTransform)strokeTransform;
-(void)setShouldPause:(BOOL)arg1 ;
-(PKController *)drawingController;
-(void)setupGestures;
-(void)duplicate:(id)arg1 ;
-(BOOL)zooming;
-(BOOL)shouldPause;
-(PKInk *)ink;
-(void)setDrawing:(id)arg1 ;
-(id)undoTarget;
-(void)drawingCancelled;
@end
