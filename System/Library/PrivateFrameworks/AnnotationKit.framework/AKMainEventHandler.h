/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:27 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <UIKit/UIResponder.h>
#import <libobjc.A.dylib/AKFormFeatureDetectorDelegate.h>

@class AKAnnotationEventHandler, AKPageController, AKAlignmentGuideController, UIEvent, AKAnnotation, AKHighlightColorEditorController, AKController, NSString;

@interface AKMainEventHandler : UIResponder <AKFormFeatureDetectorDelegate> {

	BOOL _mainEventHandlerIsInTrackingLoop;
	BOOL _mainEventHandlerIsInDoodleTrackingLoop;
	BOOL _mainEventHandlerIsInRotationLoop;
	BOOL _shouldEatNextLeftMouseUp;
	BOOL _shouldEatNextRightMouseUp;
	BOOL _dragDidCopySelectedAnnotations;
	BOOL _undoManagerWasGroupingByEvent;
	BOOL _wasSelectedByLongPressRecognizer;
	AKAnnotationEventHandler* _annotationEventHandler;
	unsigned long long _currentModifierFlags;
	AKPageController* _dragPageController;
	AKAlignmentGuideController* _dragAlignmentGuideController;
	double _draggedAnnotationsMaxLeftEdge;
	double _draggedAnnotationsMinRightEdge;
	double _draggedAnnotationsMaxBottomEdge;
	double _draggedAnnotationsMinTopEdge;
	UIEvent* _lastEventWithValidLocationForAutoscroll;
	UIEvent* _lastLeftMouseDownEvent;
	AKAnnotation* _annotationToBeginEditingOnDragEnd;
	AKHighlightColorEditorController* _highlightColorEditor;
	AKController* _controller;
	CGPoint _leftMouseDownPoint;
	CGPoint _lastDragPoint;
	CGPoint _lastDragActualLocation;
	CGPoint _lastDragActualLocationInWindow;
	CGPoint _firstDragPoint;
	CGPoint _panGestureStartPointInWindow;

}

@property (assign) BOOL shouldEatNextLeftMouseUp;                                          //@synthesize shouldEatNextLeftMouseUp=_shouldEatNextLeftMouseUp - In the implementation block
@property (assign) BOOL shouldEatNextRightMouseUp;                                         //@synthesize shouldEatNextRightMouseUp=_shouldEatNextRightMouseUp - In the implementation block
@property (assign) BOOL dragDidCopySelectedAnnotations;                                    //@synthesize dragDidCopySelectedAnnotations=_dragDidCopySelectedAnnotations - In the implementation block
@property (assign) BOOL undoManagerWasGroupingByEvent;                                     //@synthesize undoManagerWasGroupingByEvent=_undoManagerWasGroupingByEvent - In the implementation block
@property (assign) CGPoint leftMouseDownPoint;                                             //@synthesize leftMouseDownPoint=_leftMouseDownPoint - In the implementation block
@property (retain) AKPageController * dragPageController;                                  //@synthesize dragPageController=_dragPageController - In the implementation block
@property (retain) AKAlignmentGuideController * dragAlignmentGuideController;              //@synthesize dragAlignmentGuideController=_dragAlignmentGuideController - In the implementation block
@property (assign) CGPoint lastDragPoint;                                                  //@synthesize lastDragPoint=_lastDragPoint - In the implementation block
@property (assign) CGPoint lastDragActualLocation;                                         //@synthesize lastDragActualLocation=_lastDragActualLocation - In the implementation block
@property (assign) CGPoint lastDragActualLocationInWindow;                                 //@synthesize lastDragActualLocationInWindow=_lastDragActualLocationInWindow - In the implementation block
@property (assign) double draggedAnnotationsMaxLeftEdge;                                   //@synthesize draggedAnnotationsMaxLeftEdge=_draggedAnnotationsMaxLeftEdge - In the implementation block
@property (assign) double draggedAnnotationsMinRightEdge;                                  //@synthesize draggedAnnotationsMinRightEdge=_draggedAnnotationsMinRightEdge - In the implementation block
@property (assign) double draggedAnnotationsMaxBottomEdge;                                 //@synthesize draggedAnnotationsMaxBottomEdge=_draggedAnnotationsMaxBottomEdge - In the implementation block
@property (assign) double draggedAnnotationsMinTopEdge;                                    //@synthesize draggedAnnotationsMinTopEdge=_draggedAnnotationsMinTopEdge - In the implementation block
@property (retain) UIEvent * lastEventWithValidLocationForAutoscroll;                      //@synthesize lastEventWithValidLocationForAutoscroll=_lastEventWithValidLocationForAutoscroll - In the implementation block
@property (retain) UIEvent * lastLeftMouseDownEvent;                                       //@synthesize lastLeftMouseDownEvent=_lastLeftMouseDownEvent - In the implementation block
@property (assign) BOOL wasSelectedByLongPressRecognizer;                                  //@synthesize wasSelectedByLongPressRecognizer=_wasSelectedByLongPressRecognizer - In the implementation block
@property (__weak) AKAnnotation * annotationToBeginEditingOnDragEnd;                       //@synthesize annotationToBeginEditingOnDragEnd=_annotationToBeginEditingOnDragEnd - In the implementation block
@property (retain) AKHighlightColorEditorController * highlightColorEditor;                //@synthesize highlightColorEditor=_highlightColorEditor - In the implementation block
@property (__weak) AKController * controller;                                              //@synthesize controller=_controller - In the implementation block
@property (assign) unsigned long long currentModifierFlags;                                //@synthesize currentModifierFlags=_currentModifierFlags - In the implementation block
@property (assign) BOOL mainEventHandlerIsInTrackingLoop;                                  //@synthesize mainEventHandlerIsInTrackingLoop=_mainEventHandlerIsInTrackingLoop - In the implementation block
@property (assign) BOOL mainEventHandlerIsInDoodleTrackingLoop;                            //@synthesize mainEventHandlerIsInDoodleTrackingLoop=_mainEventHandlerIsInDoodleTrackingLoop - In the implementation block
@property (assign) BOOL mainEventHandlerIsInRotationLoop;                                  //@synthesize mainEventHandlerIsInRotationLoop=_mainEventHandlerIsInRotationLoop - In the implementation block
@property (assign) CGPoint firstDragPoint;                                                 //@synthesize firstDragPoint=_firstDragPoint - In the implementation block
@property (assign) CGPoint panGestureStartPointInWindow;                                   //@synthesize panGestureStartPointInWindow=_panGestureStartPointInWindow - In the implementation block
@property (retain) AKAnnotationEventHandler * annotationEventHandler;                      //@synthesize annotationEventHandler=_annotationEventHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newMainEventHandlerForCurrentPlatformWithController:(id)arg1 ;
-(void)teardown;
-(void)setController:(AKController *)arg1 ;
-(AKController *)controller;
-(void)setLastDragPoint:(CGPoint)arg1 ;
-(CGPoint)lastDragPoint;
-(CGPoint)firstDragPoint;
-(BOOL)handleDownEvent:(id)arg1 orRecognizer:(id)arg2 ;
-(BOOL)hitTestAnnotationsIncludingPOI:(BOOL)arg1 ignoreIfDeselected:(BOOL)arg2 atPointInWindow:(CGPoint)arg3 outAnnotation:(id*)arg4 ;
-(BOOL)mainEventHandlerIsInTrackingLoop;
-(AKAnnotationEventHandler *)annotationEventHandler;
-(BOOL)mainEventHandlerIsInRotationLoop;
-(BOOL)mainHandleEvent:(id)arg1 orRecognizer:(id)arg2 ;
-(CGPoint)windowPointFromEvent:(id)arg1 orRecognizer:(id)arg2 ;
-(void)setAnnotationEventHandler:(AKAnnotationEventHandler *)arg1 ;
-(void)setWasSelectedByLongPressRecognizer:(BOOL)arg1 ;
-(void)updateCropHandleVisibilityForEvent:(id)arg1 ;
-(BOOL)continueDragEventTrackingLoopWithEvent:(id)arg1 orRecognizer:(id)arg2 ;
-(void)setMainEventHandlerIsInTrackingLoop:(BOOL)arg1 ;
-(void)setLeftMouseDownPoint:(CGPoint)arg1 ;
-(BOOL)continueRotateEventTrackingLoopWithEvent:(id)arg1 orRecognizer:(id)arg2 ;
-(void)setMainEventHandlerIsInRotationLoop:(BOOL)arg1 ;
-(BOOL)handleRotateEvent:(id)arg1 orRecognizer:(id)arg2 ;
-(CGPoint)modelPointFromWindowPoint:(CGPoint)arg1 foundOnPageController:(id*)arg2 ;
-(void)setPanGestureStartPointInWindow:(CGPoint)arg1 ;
-(CGPoint)panGestureStartPointInWindow;
-(void)setAnnotationToBeginEditingOnDragEnd:(AKAnnotation *)arg1 ;
-(CGPoint)modelPointFromEvent:(id)arg1 orRecognizer:(id)arg2 onPageController:(id*)arg3 ;
-(BOOL)handleDoubleDownEvent:(id)arg1 orRecognizer:(id)arg2 ;
-(void)setMainEventHandlerIsInDoodleTrackingLoop:(BOOL)arg1 ;
-(void)_setCurrentPageBasedOnPageController:(id)arg1 ;
-(BOOL)mainEventHandlerIsInDoodleTrackingLoop;
-(id)annotationsPassingBoundingBoxHitTestsWithPoint:(CGPoint)arg1 onPageController:(id)arg2 ;
-(BOOL)wasSelectedByLongPressRecognizer;
-(BOOL)hitTestPointsOfInterestsAtPoint:(CGPoint)arg1 onPageController:(id)arg2 inAnnotations:(id)arg3 event:(id)arg4 recognizer:(id)arg5 cursorUpdateOnly:(BOOL)arg6 ;
-(id)topmostAnnotationForBorderAndInteriorHitTestAtPoint:(CGPoint)arg1 inAnnotations:(id)arg2 onPageController:(id)arg3 wasOnBorder:(BOOL*)arg4 wasOnText:(BOOL*)arg5 ;
-(void)_updateSelectionWithAnnotation:(id)arg1 onPageController:(id)arg2 ;
-(BOOL)enterDragEventTrackingLoopWithEvent:(id)arg1 orRecognizer:(id)arg2 ;
-(BOOL)_detectFormElementInCurrentPageControllerUnderPointInWindow:(CGPoint)arg1 ;
-(BOOL)_didNotHandleEventSoDeselect;
-(BOOL)enterRotateEventTrackingLoopWithEvent:(id)arg1 orRecognizer:(id)arg2 ;
-(void)setDraggedAnnotationsMaxLeftEdge:(double)arg1 ;
-(void)setDraggedAnnotationsMinRightEdge:(double)arg1 ;
-(void)setDraggedAnnotationsMaxBottomEdge:(double)arg1 ;
-(void)setDraggedAnnotationsMinTopEdge:(double)arg1 ;
-(double)draggedAnnotationsMaxLeftEdge;
-(double)draggedAnnotationsMinRightEdge;
-(double)draggedAnnotationsMaxBottomEdge;
-(double)draggedAnnotationsMinTopEdge;
-(void)setDragPageController:(AKPageController *)arg1 ;
-(void)setDragAlignmentGuideController:(AKAlignmentGuideController *)arg1 ;
-(CGPoint)_alignedAnnotationDragPointForPoint:(CGPoint)arg1 withEvent:(id)arg2 orRecognizer:(id)arg3 ;
-(void)setFirstDragPoint:(CGPoint)arg1 ;
-(void)setLastDragActualLocationInWindow:(CGPoint)arg1 ;
-(void)setLastEventWithValidLocationForAutoscroll:(UIEvent *)arg1 ;
-(CGPoint)lastDragActualLocation;
-(CGPoint)lastDragActualLocationInWindow;
-(AKPageController *)dragPageController;
-(CGPoint)_modelPointFromPointInWindow:(CGPoint)arg1 usingPageController:(id)arg2 ;
-(void)setLastDragActualLocation:(CGPoint)arg1 ;
-(void)applyTranslationToAllSelectedAnnotations:(CGPoint)arg1 ;
-(void)finishTranslationOfAllSelectedAnnotations;
-(void)applyToAllSelectedAnnotationsRotateEvent:(id)arg1 orRecognizer:(id)arg2 ;
-(void)setDragDidCopySelectedAnnotations:(BOOL)arg1 ;
-(void)setUndoManagerWasGroupingByEvent:(BOOL)arg1 ;
-(AKAlignmentGuideController *)dragAlignmentGuideController;
-(CGPoint)leftMouseDownPoint;
-(BOOL)handleRightDownEvent:(id)arg1 ;
-(BOOL)handleKeyboardEvent:(id)arg1 ;
-(void)updateCursorForEvent:(id)arg1 ;
-(BOOL)_detectFormElementInCurrentPageControllerUnderPointInWindow:(CGPoint)arg1 withStartingPoint:(CGPoint)arg2 ;
-(unsigned long long)currentModifierFlags;
-(void)setCurrentModifierFlags:(unsigned long long)arg1 ;
-(BOOL)shouldEatNextLeftMouseUp;
-(void)setShouldEatNextLeftMouseUp:(BOOL)arg1 ;
-(BOOL)shouldEatNextRightMouseUp;
-(void)setShouldEatNextRightMouseUp:(BOOL)arg1 ;
-(BOOL)dragDidCopySelectedAnnotations;
-(BOOL)undoManagerWasGroupingByEvent;
-(UIEvent *)lastEventWithValidLocationForAutoscroll;
-(UIEvent *)lastLeftMouseDownEvent;
-(void)setLastLeftMouseDownEvent:(UIEvent *)arg1 ;
-(AKAnnotation *)annotationToBeginEditingOnDragEnd;
-(AKHighlightColorEditorController *)highlightColorEditor;
-(void)setHighlightColorEditor:(AKHighlightColorEditorController *)arg1 ;
-(id)initWithController:(id)arg1 ;
@end

