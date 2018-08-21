/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSWPTextHostLayout.h>
#import <TSReading/TSKSearchTarget.h>
#import <TSReading/TSWPColumnMetrics.h>
#import <TSReading/TSWPLayoutParent.h>
#import <TSReading/TSWPStorageObserver.h>

@class TSTMasterLayout, TSTLayoutHint, TSTLayoutSpaceBundle, TSWPLayout, TSTTableInfo, TSTTableModel, TSTEditingState, NSString, TSWPPadding;

@interface TSTLayout : TSWPTextHostLayout <TSKSearchTarget, TSWPColumnMetrics, TSWPLayoutParent, TSWPStorageObserver> {

	TSTMasterLayout* mMasterLayout;
	TSTLayoutHint* mLayoutHint;
	CGRect mCanvasVisibleRect;
	CGRect mPreviousVisibleStrokeFrame;
	BOOL mProcessChangesFiltering;
	BOOL mTabsVisible;
	BOOL mTableNameVisibilityIsValid;
	BOOL mTableNameVisible;
	BOOL mNewCanvasRevealedHorizontally;
	BOOL mNewCanvasRevealedVertically;
	BOOL mLayoutDirectionIsLeftToRight;
	TSTLayoutSpaceBundle* mSpaceBundle;
	SCD_Struct_TS183 mCached;
	CGRect mRenderingFrameForLayoutGeometryFromInfo;
	TSWPLayout* mContainedTextEditingLayout;
	UIEdgeInsets mCachedPaddingForEditingCell;
	CGRect mComputedEditingCellContentFrame;
	unsigned mCachedVerticalAlignmentForEditingCell;
	CGSize mTableSizeWithoutStrokes;
	CGSize mStrokeDelta;
	CGSize mCapturedStrokeFrameSizeForInline;
	SCD_Struct_TS140 mEditingSpillingTextRange;
	unsigned mContainedTextEditorParagraphAlignment;
	BOOL mContainedTextEditorTextWraps;
	BOOL mContainedTextEditorSpills;
	CGSize mSpillingTextSize;
	int mCoordinatesChangedMaskForChrome;

}

@property (nonatomic,readonly) TSTTableInfo * tableInfo; 
@property (nonatomic,readonly) TSTTableModel * tableModel; 
@property (nonatomic,retain) TSTMasterLayout * masterLayout; 
@property (nonatomic,retain) TSTLayoutHint * layoutHint; 
@property (nonatomic,retain) TSTLayoutSpaceBundle * spaceBundle; 
@property (assign,nonatomic) BOOL processChangesFiltering; 
@property (nonatomic,readonly) TSTEditingState * editingState; 
@property (assign,nonatomic) BOOL newCanvasRevealedHorizontally; 
@property (assign,nonatomic) BOOL newCanvasRevealedVertically; 
@property (nonatomic,readonly) BOOL layoutDirectionIsLeftToRight; 
@property (assign,nonatomic) CGSize scaleToFit; 
@property (nonatomic,retain) TSWPLayout * containedTextEditingLayout; 
@property (nonatomic,readonly) UIEdgeInsets paddingForEditingCell; 
@property (nonatomic,readonly) CGRect computedEditingCellContentFrame; 
@property (nonatomic,readonly) SCD_Struct_TS141 editingSpillingTextRange; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGSize adjustedInsets; 
@property (nonatomic,readonly) TSWPPadding * layoutMargins; 
@property (nonatomic,readonly) unsigned long long columnCount; 
@property (nonatomic,readonly) BOOL alwaysStartsNewTarget; 
@property (nonatomic,readonly) BOOL shrinkTextToFit; 
@property (nonatomic,readonly) BOOL columnsAreLeftToRight; 
@property (nonatomic,readonly) double textScaleFactor; 
-(void)invalidate;
-(void)setNeedsDisplay;
-(void)dealloc;
-(TSWPPadding *)layoutMargins;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(CGRect)rectForSelection:(id)arg1 ;
-(CGSize)minimumSize;
-(id)children;
-(void)validate;
-(unsigned long long)columnCount;
-(void)layoutSearchForString:(id)arg1 options:(unsigned long long)arg2 hitBlock:(/*^block*/id)arg3 ;
-(id)childSearchTargets;
-(void)layoutSearchForAnnotationWithHitBlock:(/*^block*/id)arg1 ;
-(BOOL)orderedBefore:(id)arg1 ;
-(void)processChanges:(id)arg1 ;
-(BOOL)inPrintPreviewMode;
-(id)initWithInfo:(id)arg1 ;
-(BOOL)supportsRotation;
-(void)updateChildrenFromInfo;
-(id)dependentLayouts;
-(void)invalidateSize;
-(CGPoint)capturedInfoPositionForAttachment;
-(id)computeLayoutGeometry;
-(CGRect)alignmentFrame;
-(id)layoutGeometryFromInfo;
-(CGPoint)calculatePointFromSearchReference:(id)arg1 ;
-(void)layoutSearchForSpellingErrorsWithHitBlock:(/*^block*/id)arg1 stop:(BOOL*)arg2 ;
-(void)willBeAddedToLayoutController:(id)arg1 ;
-(void)willBeRemovedFromLayoutController:(id)arg1 ;
-(CGPoint)infoGeometryPositionForCurrentAttachedLayoutGeometry;
-(BOOL)resizeMayChangeAspectRatio;
-(BOOL)canAspectRatioLockBeChangedByUser;
-(BOOL)isBeingManipulated;
-(id)initialInfoGeometry;
-(CGRect)rectForPresentingAnnotationPopoverForSelection:(id)arg1 ;
-(void)offsetGeometryBy:(CGPoint)arg1 ;
-(CGRect)alignmentFrameForProvidingGuidesInRoot;
-(BOOL)canRotateChildLayout:(id)arg1 ;
-(int)wrapFitType;
-(BOOL)inFindReplaceMode;
-(void)storage:(id)arg1 didChangeRange:(NSRange)arg2 delta:(long long)arg3 broadcastKind:(int)arg4 ;
-(BOOL)textIsVertical;
-(unsigned)autosizeFlagsForTextLayout:(id)arg1 ;
-(unsigned)verticalAlignmentForTextLayout:(id)arg1 ;
-(void)invalidateForAutosizingTextLayout:(id)arg1 ;
-(CGRect)nonAutosizedFrameForTextLayout:(id)arg1 ;
-(CGRect)autosizedFrameForTextLayout:(id)arg1 textSize:(CGSize)arg2 ;
-(id)dependentsOfTextLayout:(id)arg1 ;
-(Class)repClassForTextLayout:(id)arg1 ;
-(double)maxAutoGrowWidthForTextLayout:(id)arg1 ;
-(CGRect)maskRectForTextLayout:(id)arg1 ;
-(unsigned)naturalAlignmentForTextLayout:(id)arg1 ;
-(CGSize)initialTextSize;
-(CGSize)adjustedInsets;
-(double)widthForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 ;
-(double)gapForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 ;
-(double)positionForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 outWidth:(double*)arg3 outGap:(double*)arg4 ;
-(BOOL)alwaysStartsNewTarget;
-(BOOL)shrinkTextToFit;
-(BOOL)columnsAreLeftToRight;
-(TSTTableInfo *)tableInfo;
-(CGSize)scaleToFit;
-(TSTTableModel *)tableModel;
-(TSTEditingState *)editingState;
-(TSTMasterLayout *)masterLayout;
-(SCD_Struct_TS141)editingSpillingTextRange;
-(BOOL)newCanvasRevealedVertically;
-(void)setNewCanvasRevealedVertically:(BOOL)arg1 ;
-(BOOL)newCanvasRevealedHorizontally;
-(void)setNewCanvasRevealedHorizontally:(BOOL)arg1 ;
-(TSTLayoutSpaceBundle *)spaceBundle;
-(TSTLayoutHint *)layoutHint;
-(BOOL)layoutDirectionIsLeftToRight;
-(BOOL)p_getLayoutDirectionLeftToRight;
-(void)setScaleToFit:(CGSize)arg1 ;
-(id)initWithInfo:(id)arg1 layoutHint:(id)arg2 ;
-(void)removeContainedTextEditingLayout;
-(void)validateTableNameVisibility;
-(TSWPLayout *)containedTextEditingLayout;
-(BOOL)isZoomedEditing;
-(void)setupContainedTextEditingLayout:(SCD_Struct_TS139)arg1 ;
-(void)p_updateCachedStyleInformationFromCellID:(SCD_Struct_TS139)arg1 ;
-(unsigned)p_naturalAlignmentForCellID:(SCD_Struct_TS139)arg1 ;
-(unsigned)p_defaultAlignmentForTableWritingDirection;
-(CGRect)computedEditingCellContentFrame;
-(BOOL)p_layoutWhollyContainsGridRange:(SCD_Struct_TS175)arg1 ;
-(CGSize)p_rangeUpAndLeftOfIntersectionRangeOfGridRange:(SCD_Struct_TS175)arg1 ;
-(CGRect)p_computeSpillingTextFrameForLayout:(id)arg1 textSize:(CGSize)arg2 editingSpillRange:(SCD_Struct_TS141*)arg3 ;
-(void)invalidateTableNameVisibility;
-(void)p_processChange:(id)arg1 forChangeSource:(id)arg2 actions:(id)arg3 ;
-(void)p_processChangeActions:(id)arg1 ;
-(void)setLayoutHint:(TSTLayoutHint *)arg1 ;
-(void)bezierPathsForCellRegion:(id)arg1 transform:(CGAffineTransform)arg2 viewScale:(double)arg3 inset:(double)arg4 block:(/*^block*/id)arg5 ;
-(int)reapCoordinatesChangedMaskForChrome;
-(void)setContainedTextEditingLayout:(TSWPLayout *)arg1 ;
-(UIEdgeInsets)paddingForEditingCell;
-(void)setSpaceBundle:(TSTLayoutSpaceBundle *)arg1 ;
-(void)setMasterLayout:(TSTMasterLayout *)arg1 ;
-(BOOL)processChangesFiltering;
-(void)setProcessChangesFiltering:(BOOL)arg1 ;
@end

