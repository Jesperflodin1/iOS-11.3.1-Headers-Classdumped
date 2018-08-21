/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol TNUIStateDelegate;
@class TSKSelectionPath, NSArray, TSDFreehandDrawingToolkitUIState, NSMutableDictionary;

@interface TNUIState : NSObject <NSCopying> {

	BOOL _removedAllQuickCalcFunctions;
	BOOL _showsComments;
	BOOL _showsRulers;
	BOOL _showCanvasGuides;
	BOOL _inspectorPaneIsVisible;
	BOOL _inspectorPaneIsAutoHidden;
	int _inspectorPaneViewMode;
	TSKSelectionPath* _selectionPath;
	id<TNUIStateDelegate> _delegate;
	long long _documentMode;
	NSArray* _selectedQuickCalcFunctions;
	TSDFreehandDrawingToolkitUIState* _freehandDrawingToolkitUIState;
	NSMutableDictionary* _chartUIState;
	NSMutableDictionary* _sheetUIStates;
	NSMutableDictionary* _editModeSheetUIStates;
	CGSize _desktopScreenSize;
	CGRect _desktopWindowFrame;

}

@property (nonatomic,readonly) NSMutableDictionary * chartUIState;                                          //@synthesize chartUIState=_chartUIState - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * sheetUIStates;                                         //@synthesize sheetUIStates=_sheetUIStates - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * editModeSheetUIStates;                                 //@synthesize editModeSheetUIStates=_editModeSheetUIStates - In the implementation block
@property (assign,getter=inspectorPaneIsVisible,nonatomic) BOOL inspectorPaneIsVisible;                     //@synthesize inspectorPaneIsVisible=_inspectorPaneIsVisible - In the implementation block
@property (assign,getter=inspectorPaneIsAutoHidden,nonatomic) BOOL inspectorPaneIsAutoHidden;               //@synthesize inspectorPaneIsAutoHidden=_inspectorPaneIsAutoHidden - In the implementation block
@property (nonatomic,retain) TSKSelectionPath * selectionPath;                                              //@synthesize selectionPath=_selectionPath - In the implementation block
@property (nonatomic,readonly) CGPoint scrollPosition; 
@property (nonatomic,readonly) CGPoint previousScrollPosition; 
@property (nonatomic,readonly) BOOL hasVisibleRect; 
@property (nonatomic,readonly) BOOL hasPreviousVisibleRect; 
@property (nonatomic,readonly) float viewScale; 
@property (nonatomic,readonly) float previousViewScale; 
@property (assign,nonatomic) CGRect visibleRect; 
@property (assign,nonatomic) CGRect previousVisibleRect; 
@property (assign,nonatomic,__weak) id<TNUIStateDelegate> delegate;                                         //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long documentMode;                                                        //@synthesize documentMode=_documentMode - In the implementation block
@property (assign,nonatomic) long long inspectorPaneHiddenState; 
@property (assign,nonatomic) int inspectorPaneViewMode;                                                     //@synthesize inspectorPaneViewMode=_inspectorPaneViewMode - In the implementation block
@property (nonatomic,copy) NSArray * selectedQuickCalcFunctions;                                            //@synthesize selectedQuickCalcFunctions=_selectedQuickCalcFunctions - In the implementation block
@property (assign,nonatomic) BOOL removedAllQuickCalcFunctions;                                             //@synthesize removedAllQuickCalcFunctions=_removedAllQuickCalcFunctions - In the implementation block
@property (assign,nonatomic) BOOL showsComments;                                                            //@synthesize showsComments=_showsComments - In the implementation block
@property (assign,nonatomic) BOOL showsRulers;                                                              //@synthesize showsRulers=_showsRulers - In the implementation block
@property (nonatomic,retain) TSDFreehandDrawingToolkitUIState * freehandDrawingToolkitUIState;              //@synthesize freehandDrawingToolkitUIState=_freehandDrawingToolkitUIState - In the implementation block
@property (assign,nonatomic) CGRect desktopWindowFrame;                                                     //@synthesize desktopWindowFrame=_desktopWindowFrame - In the implementation block
@property (assign,nonatomic) CGSize desktopScreenSize;                                                      //@synthesize desktopScreenSize=_desktopScreenSize - In the implementation block
@property (assign,nonatomic) BOOL showCanvasGuides;                                                         //@synthesize showCanvasGuides=_showCanvasGuides - In the implementation block
+(double)maximumViewScale;
+(double)minimumViewScale;
-(id)initWithArchive:(const UIStateArchive*)arg1 unarchiver:(id)arg2 ;
-(TSDFreehandDrawingToolkitUIState *)freehandDrawingToolkitUIState;
-(TSKSelectionPath *)selectionPath;
-(void)setSelectionPath:(TSKSelectionPath *)arg1 ;
-(id)UIStateForChart:(id)arg1 ;
-(void)setUIState:(id)arg1 forChart:(id)arg2 ;
-(void)saveToArchive:(UIStateArchive*)arg1 archiver:(id)arg2 context:(id)arg3 ;
-(id)archivedUIStateInContext:(id)arg1 ;
-(void)setFreehandDrawingToolkitUIState:(TSDFreehandDrawingToolkitUIState *)arg1 ;
-(void)setInspectorPaneViewMode:(int)arg1 ;
-(int)inspectorPaneViewMode;
-(long long)inspectorPaneHiddenState;
-(void)setInspectorPaneHiddenState:(long long)arg1 ;
-(void)setPreviousVisibleRect:(CGRect)arg1 ;
-(void)clearVisibleRect;
-(void)clearPreviousVisibleRect;
-(CGPoint)previousScrollPosition;
-(CGRect)previousVisibleRect;
-(BOOL)hasVisibleRect;
-(BOOL)hasPreviousVisibleRect;
-(float)previousViewScale;
-(void)setSelectedQuickCalcFunctions:(NSArray *)arg1 ;
-(NSArray *)selectedQuickCalcFunctions;
-(void)setRemovedAllQuickCalcFunctions:(BOOL)arg1 ;
-(BOOL)removedAllQuickCalcFunctions;
-(id)p_uiStateForActiveSheet;
-(id)uiStateForSheet:(id)arg1 ;
-(float)p_calculateViewScaleForVisibleRect:(CGRect)arg1 ;
-(void)setVisibleRect:(CGRect)arg1 forSheet:(id)arg2 ;
-(void)setPreviousVisibleRect:(CGRect)arg1 forSheet:(id)arg2 ;
-(float)viewScaleForSheet:(id)arg1 ;
-(float)p_defaultViewScale;
-(void)removeUIStateForSheet:(id)arg1 ;
-(id)uiStateForSheet:(id)arg1 createIfNeeded:(BOOL)arg2 ;
-(NSMutableDictionary *)chartUIState;
-(void)p_enterPaginatedMode;
-(void)p_exitPaginatedMode;
-(NSMutableDictionary *)editModeSheetUIStates;
-(NSMutableDictionary *)sheetUIStates;
-(void)setInspectorPaneIsAutoHidden:(BOOL)arg1 ;
-(void)setInspectorPaneIsVisible:(BOOL)arg1 ;
-(BOOL)inspectorPaneIsAutoHidden;
-(BOOL)inspectorPaneIsVisible;
-(BOOL)showCanvasGuides;
-(BOOL)showsRulers;
-(CGRect)desktopWindowFrame;
-(CGSize)desktopScreenSize;
-(id)p_fixedUpSelectionPathForRestoration:(id)arg1 forcingUnpagination:(BOOL)arg2 ;
-(void)setUIState:(id)arg1 forSheet:(id)arg2 ;
-(void)enumerateSheetUIStatesWithBlock:(/*^block*/id)arg1 ;
-(void)fixupSelectionPathsForRestorationForcingUnpagination:(BOOL)arg1 ;
-(void)setShowsRulers:(BOOL)arg1 ;
-(void)setDesktopWindowFrame:(CGRect)arg1 ;
-(void)setDesktopScreenSize:(CGSize)arg1 ;
-(void)setShowCanvasGuides:(BOOL)arg1 ;
-(id)init;
-(id<TNUIStateDelegate>)delegate;
-(void)setDelegate:(id<TNUIStateDelegate>)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGRect)visibleRect;
-(void)setVisibleRect:(CGRect)arg1 ;
-(CGPoint)scrollPosition;
-(float)viewScale;
-(BOOL)showsComments;
-(void)setShowsComments:(BOOL)arg1 ;
-(long long)documentMode;
-(void)setDocumentMode:(long long)arg1 ;
@end
