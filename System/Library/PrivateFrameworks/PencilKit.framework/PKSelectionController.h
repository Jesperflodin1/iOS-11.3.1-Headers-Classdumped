/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:36 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKit/UIDropInteractionDelegate_Private.h>

@protocol PKSelectionDelegate;
@class NSUUID, UIDropInteraction, PKStrokeSelection, PKSelectionView, NSString;

@interface PKSelectionController : NSObject <UIDropInteractionDelegate_Private> {

	CGPoint _dropPosition;
	NSUUID* _previousDrawingUUIDForSelection;
	int _selectionViewCount;
	UIDropInteraction* _dropInteraction;
	BOOL _hasCurrentSelection;
	id<PKSelectionDelegate> _selectionDelegate;
	PKStrokeSelection* _currentStrokeSelection;
	PKSelectionView* _selectionView;
	CGAffineTransform _selectionTransform;

}

@property (assign,nonatomic,__weak) id<PKSelectionDelegate> selectionDelegate;              //@synthesize selectionDelegate=_selectionDelegate - In the implementation block
@property (assign,nonatomic) BOOL hasCurrentSelection;                                      //@synthesize hasCurrentSelection=_hasCurrentSelection - In the implementation block
@property (nonatomic,retain) PKStrokeSelection * currentStrokeSelection;                    //@synthesize currentStrokeSelection=_currentStrokeSelection - In the implementation block
@property (assign,nonatomic) CGAffineTransform selectionTransform;                          //@synthesize selectionTransform=_selectionTransform - In the implementation block
@property (nonatomic,retain) PKSelectionView * selectionView;                               //@synthesize selectionView=_selectionView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(PKSelectionView *)selectionView;
-(void)paste:(id)arg1 ;
-(void)cut:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)delete:(id)arg1 ;
-(void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2 ;
-(id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2 ;
-(void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2 ;
-(void)dropInteraction:(id)arg1 performDrop:(id)arg2 ;
-(id)dropInteraction:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3 ;
-(long long)_dropInteraction:(id)arg1 dataOwnerForSession:(id)arg2 ;
-(BOOL)dropInteraction:(id)arg1 canHandleSession:(id)arg2 ;
-(void)setSelectionView:(PKSelectionView *)arg1 ;
-(void)setSelectionDelegate:(id<PKSelectionDelegate>)arg1 ;
-(id<PKSelectionDelegate>)selectionDelegate;
-(id)initWithSelectionDelegate:(id)arg1 ;
-(void)clearSelectionIfNecessary;
-(BOOL)hasCurrentSelection;
-(CGAffineTransform)selectionTransform;
-(void)moveSelectionViewBasedOnStrokeTransform:(CGAffineTransform)arg1 drawing:(id)arg2 ;
-(void)setSelectionTransform:(CGAffineTransform)arg1 ;
-(void)didSelect:(id)arg1 withLassoStroke:(id)arg2 withTransform:(CGAffineTransform)arg3 drawing:(id)arg4 ;
-(void)resetStrokesAndClearSelectionForceRefresh:(BOOL)arg1 ;
-(void)clearSelectionIfNecessaryWithCompletion:(/*^block*/id)arg1 ;
-(PKStrokeSelection *)currentStrokeSelection;
-(void)didSelectStrokesNotification:(id)arg1 ;
-(void)didSelect:(id)arg1 withLassoStroke:(id)arg2 withTransform:(CGAffineTransform)arg3 ;
-(void)addViewForStrokeSelection:(id)arg1 isDragSource:(BOOL)arg2 drawing:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)registerCommandWithUndoManager:(id)arg1 ;
-(id)_rotateImageIfNecessary:(id)arg1 ;
-(id)rotateUIImage:(id)arg1 clockwise:(BOOL)arg2 ;
-(void)_removeSelectionViewWithCompletion:(/*^block*/id)arg1 ;
-(void)_commitStrokeSelection:(id)arg1 toDrawing:(id)arg2 removeStrokesFromSource:(BOOL)arg3 createSelection:(BOOL)arg4 withCompletion:(/*^block*/id)arg5 ;
-(id)newStrokesForSelection:(id)arg1 toDrawing:(id)arg2 ;
-(void)_removeSelectionView;
-(void)eraseSelection;
-(void)addItemsToPasteboard;
-(void)_pasteStrokeSelection:(id)arg1 atPoint:(CGPoint)arg2 inDrawing:(id)arg3 ;
-(CGSize)viewSizeForStrokeSelection:(id)arg1 ;
-(CGAffineTransform)_selectionTransformForStrokes:(id)arg1 atLocation:(CGPoint)arg2 dragOffsetInDragView:(CGPoint)arg3 constrainSelection:(BOOL)arg4 inDrawing:(id)arg5 ;
-(void)_commitStrokeSelection:(id)arg1 toDrawing:(id)arg2 removeStrokesFromSource:(BOOL)arg3 createSelection:(BOOL)arg4 ;
-(void)_createSelectionViewForDropSession:(id)arg1 removeFromSource:(BOOL)arg2 withStrokeSelection:(id)arg3 ;
-(void)moveStrokeSelectionToLocation:(CGPoint)arg1 ;
-(void)_createSelectionViewForDropSession:(id)arg1 removeFromSource:(BOOL)arg2 ;
-(void)_moveCurrentStrokeSelectionForDrop:(id)arg1 atLocation:(CGPoint)arg2 offsetInTouchView:(CGPoint)arg3 ;
-(void)didSelect:(id)arg1 withLassoStroke:(id)arg2 ;
-(void)_commitStrokeSelection:(id)arg1 toDrawing:(id)arg2 removeStrokesFromSource:(BOOL)arg3 ;
-(void)setHasCurrentSelection:(BOOL)arg1 ;
-(void)setCurrentStrokeSelection:(PKStrokeSelection *)arg1 ;
-(void)duplicate:(id)arg1 ;
@end
