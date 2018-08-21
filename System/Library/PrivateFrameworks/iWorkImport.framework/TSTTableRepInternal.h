/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:07 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class TSDTilingLayer, TSTTableReferences, TSTSelectionDragController, NSSet, NSMutableDictionary;


@protocol TSTTableRepInternal
@property (assign,nonatomic) CGRect searchSelectionBounds; 
@property (nonatomic,readonly) TSDTilingLayer * overlayFrozenHeaderRows; 
@property (nonatomic,readonly) TSDTilingLayer * overlayFrozenHeaderCorner; 
@property (nonatomic,readonly) TSDTilingLayer * overlayFrozenHeaderColumns; 
@property (assign,nonatomic) TSUCellCoord ratingsDragCellID; 
@property (nonatomic,readonly) TSTTableReferences * references; 
@property (nonatomic,readonly) BOOL aspectOperationIsInProgress; 
@property (nonatomic,readonly) BOOL zoomOperationIsInProgress; 
@property (assign,nonatomic,__weak) TSTSelectionDragController * cellDragController; 
@property (assign,nonatomic) BOOL selectionDragAbortedOnNewSelection; 
@property (nonatomic,readonly) BOOL selectionUsesBezierPath; 
@property (nonatomic,readonly) BOOL selectsCellOnInitialTap; 
@property (nonatomic,readonly) BOOL usesWholeChromeResizer; 
@property (nonatomic,copy) NSSet * visibleFillKnobs; 
@property (nonatomic,readonly) NSMutableDictionary * childTextReps; 
@required
-(NSMutableDictionary *)childTextReps;
-(TSDTilingLayer *)overlayFrozenHeaderRows;
-(TSDTilingLayer *)overlayFrozenHeaderColumns;
-(CGRect)searchSelectionBounds;
-(void)setSearchSelectionBounds:(CGRect)arg1;
-(TSDTilingLayer *)overlayFrozenHeaderCorner;
-(BOOL)aspectOperationIsInProgress;
-(BOOL)zoomOperationIsInProgress;
-(BOOL)selectionDragAbortedOnNewSelection;
-(void)setSelectionDragAbortedOnNewSelection:(BOOL)arg1;
-(NSSet *)visibleFillKnobs;
-(void)setVisibleFillKnobs:(id)arg1;
-(TSTTableReferences *)references;
-(BOOL)selectionUsesBezierPath;
-(BOOL)selectsCellOnInitialTap;
-(BOOL)usesWholeChromeResizer;
-(TSTSelectionDragController *)cellDragController;
-(void)setCellDragController:(id)arg1;
-(TSUCellCoord)ratingsDragCellID;
-(void)setRatingsDragCellID:(TSUCellCoord)arg1;

@end

