/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:10 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PDFKit/PDFKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class PDFViewPrivate, PDFDocument, PDFPage, PDFDestination, UIColor, PDFSelection, NSArray, UIView, NSString;

@interface PDFView : UIView <UIGestureRecognizerDelegate> {

	PDFViewPrivate* _private;

}

@property (nonatomic,retain) PDFDocument * document; 
@property (nonatomic,readonly) BOOL canGoToFirstPage; 
@property (nonatomic,readonly) BOOL canGoToLastPage; 
@property (nonatomic,readonly) BOOL canGoToNextPage; 
@property (nonatomic,readonly) BOOL canGoToPreviousPage; 
@property (nonatomic,readonly) BOOL canGoBack; 
@property (nonatomic,readonly) BOOL canGoForward; 
@property (nonatomic,readonly) PDFPage * currentPage; 
@property (nonatomic,readonly) PDFDestination * currentDestination; 
@property (assign,nonatomic) long long displayMode; 
@property (assign,nonatomic) long long displayDirection; 
@property (assign,nonatomic) BOOL displaysPageBreaks; 
@property (assign,nonatomic) UIEdgeInsets pageBreakMargins; 
@property (assign,nonatomic) long long displayBox; 
@property (assign,nonatomic) BOOL displaysAsBook; 
@property (assign,nonatomic) BOOL displaysRTL; 
@property (nonatomic,retain) UIColor * backgroundColor; 
@property (assign,nonatomic) long long interpolationQuality; 
@property (nonatomic,readonly) BOOL isUsingPageViewController; 
@property (assign,nonatomic,__weak) id<PDFViewDelegate> delegate; 
@property (assign,nonatomic) double scaleFactor; 
@property (assign,nonatomic) double minScaleFactor; 
@property (assign,nonatomic) double maxScaleFactor; 
@property (assign,nonatomic) BOOL autoScales; 
@property (nonatomic,readonly) double scaleFactorForSizeToFit; 
@property (nonatomic,readonly) BOOL canZoomIn; 
@property (nonatomic,readonly) BOOL canZoomOut; 
@property (nonatomic,retain) PDFSelection * currentSelection; 
@property (nonatomic,copy) NSArray * highlightedSelections; 
@property (nonatomic,readonly) UIView * documentView; 
@property (nonatomic,readonly) NSArray * visiblePages; 
@property (assign,nonatomic) BOOL enableDataDetectors; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)EnableAnnotationKit;
-(void)setDisplayMode:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)removeFromSuperview;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id<PDFViewDelegate>)delegate;
-(void)setNeedsDisplay;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIColor *)backgroundColor;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<PDFViewDelegate>)arg1 ;
-(void)dealloc;
-(void)setBounds:(CGRect)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(id)panGestureRecognizer;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)_commonInit;
-(BOOL)canBecomeFirstResponder;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(void)scrollSelectionToVisible:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)selectAll:(id)arg1 ;
-(double)scaleFactor;
-(PDFPage *)currentPage;
-(UIView *)documentView;
-(id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2 ;
-(id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3 ;
-(void)dragInteraction:(id)arg1 willAnimateLiftWithAnimator:(id)arg2 session:(id)arg3 ;
-(void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(unsigned long long)arg3 ;
-(id)dragInteraction:(id)arg1 itemsForAddingToSession:(id)arg2 withTouchAtPoint:(CGPoint)arg3 ;
-(void)clearSelection;
-(void)goBack:(id)arg1 ;
-(void)goForward:(id)arg1 ;
-(BOOL)canGoBack;
-(BOOL)canGoForward;
-(PDFDocument *)document;
-(long long)displayMode;
-(double)gutterWidth;
-(void)setGutterWidth:(double)arg1 ;
-(id)longPressGestureRecognizer;
-(void)setScaleFactor:(double)arg1 ;
-(void)setDocument:(PDFDocument *)arg1 ;
-(void)performAction:(id)arg1 ;
-(id)tapGestureRecognizer;
-(long long)displayBox;
-(BOOL)shouldAntiAlias;
-(double)greekingThreshold;
-(long long)interpolationQuality;
-(double)lineWidthThreshold;
-(id)pageColor;
-(void)setDisplayBox:(long long)arg1 ;
-(void)setShouldAntiAlias:(BOOL)arg1 ;
-(void)setGreekingThreshold:(double)arg1 ;
-(void)setInterpolationQuality:(long long)arg1 ;
-(void)setLineWidthThreshold:(double)arg1 ;
-(void)setPageColor:(id)arg1 ;
-(void)forceWebKitMainThread:(BOOL)arg1 ;
-(BOOL)isForcingWebKitMainThread;
-(void)setEnablePageShadows:(BOOL)arg1 ;
-(void)setEnableTileUpdates:(BOOL)arg1 ;
-(id)pageViewForPageAtIndex:(unsigned long long)arg1 ;
-(id)renderingProperties;
-(double)autoScaleFactor;
-(BOOL)autoScales;
-(void)setAutoScales:(BOOL)arg1 ;
-(void)callPageVisibilityDelegateMethod:(int)arg1 forPageView:(id)arg2 atPageIndex:(unsigned long long)arg3 ;
-(PDFSelection *)currentSelection;
-(void)setCurrentSelection:(PDFSelection *)arg1 ;
-(void)_updateAnnotations;
-(BOOL)enableSelectionDrawing;
-(void)setEnableSelectionDrawing:(BOOL)arg1 ;
-(NSArray *)highlightedSelections;
-(CGRect)convertRectToRootView:(CGRect)arg1 fromPageLayer:(id)arg2 ;
-(void)setPageBreakMargins:(UIEdgeInsets)arg1 ;
-(void)drawPage:(id)arg1 toContext:(CGContextRef)arg2 ;
-(void)drawPagePost:(id)arg1 toContext:(CGContextRef)arg2 ;
-(BOOL)displaysRTL;
-(BOOL)showsScrollIndicators;
-(CGPoint)convertPoint:(CGPoint)arg1 toPage:(id)arg2 ;
-(void)clearTextSelectionHandles;
-(void)enableTextSelectionHandles;
-(UIEdgeInsets)pageBreakMargins;
-(double)minScaleFactor;
-(double)maxScaleFactor;
-(void)setDisplaysRTL:(BOOL)arg1 ;
-(id)pageForPoint:(CGPoint)arg1 nearest:(BOOL)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromPage:(id)arg2 ;
-(CGRect)rootViewBounds;
-(CGRect)extendedRootViewBounds;
-(CGRect)convertRootViewRect:(CGRect)arg1 toPageLayer:(id)arg2 ;
-(BOOL)flipsTileContents;
-(id)PDFLayout;
-(BOOL)displaysAsBook;
-(void)syncPageIndexToScrollView;
-(CGRect)convertRect:(CGRect)arg1 fromPage:(id)arg2 ;
-(BOOL)isUsingPageViewController;
-(id)documentViewController;
-(void)clearTextSelectionMagnifier;
-(void)clearLollipopMagnifier;
-(BOOL)displaysBookmarksForPages;
-(void)colorWidgetBackgrounds:(BOOL)arg1 ;
-(void)removeActiveAnnotation;
-(void)setForcesTopAlignment:(BOOL)arg1 ;
-(id)akToolbarView;
-(CGRect)convertRect:(CGRect)arg1 toPage:(id)arg2 ;
-(id)akOverlayAdaptor;
-(void)goToRect:(CGRect)arg1 onPage:(id)arg2 ;
-(void)setCurrentSelectionNoClear:(id)arg1 ;
-(void)setTextSelectionMagnifierPage:(id)arg1 forPagePoint:(CGPoint)arg2 ;
-(void)setLollipopMagnifierPage:(id)arg1 forPagePoint:(CGPoint)arg2 ;
-(void)interactWithAnnotation:(id)arg1 ;
-(void)documentWasUnlocked;
-(long long)displayDirection;
-(CGRect)normalizedPageBounds:(id)arg1 ;
-(void)goToPage:(id)arg1 ;
-(BOOL)displaysPageBreaks;
-(BOOL)scrollingChangesPages;
-(id)popupManager;
-(void)setDocument:(id)arg1 waitDuration:(double)arg2 ;
-(void)appendPasswordUI;
-(void)removePasswordUI;
-(void)_setupPageViewController;
-(void)setNewPageVisibilityDelegate:(id)arg1 withOldDelegate:(id)arg2 ;
-(void)_releaseDocument;
-(void)performOverlayAdaptorPageVisibilityTrueUpAfterSettingDocument;
-(BOOL)canGoToFirstPage;
-(PDFDestination *)currentDestination;
-(void)pushDestination:(id)arg1 ;
-(void)goToPageNoPush:(id)arg1 ;
-(unsigned long long)lastPageIndex;
-(BOOL)canGoToLastPage;
-(id)nextPage;
-(id)previousPage;
-(void)goToDestinationNoPush:(id)arg1 ;
-(void)_goToPage:(id)arg1 animated:(BOOL)arg2 withBackgroundUpdate:(BOOL)arg3 ;
-(void)goToPageNoPush:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)isRectVisible:(CGRect)arg1 onPage:(id)arg2 ;
-(void)goToDestination:(id)arg1 ;
-(double)PDFViewWillChangeScaleFactor:(id)arg1 toScale:(double)arg2 ;
-(void)internalSetScaleFactor:(double)arg1 ;
-(double)_unboundAutoScaleFactorForPage:(id)arg1 ;
-(void)performBeep;
-(void)goToNextPage:(id)arg1 ;
-(void)goToPreviousPage:(id)arg1 ;
-(void)goToFirstPage:(id)arg1 ;
-(void)goToLastPage:(id)arg1 ;
-(BOOL)canZoomIn;
-(void)zoomIn:(id)arg1 ;
-(BOOL)canZoomOut;
-(void)zoomOut:(id)arg1 ;
-(void)findVisiblePages;
-(void)resizeDisplayView:(id)arg1 ;
-(double)pageViewHeight:(id)arg1 ;
-(void)setDisplaysPageBreaks:(BOOL)arg1 ;
-(void)setDisplayDirection:(long long)arg1 ;
-(void)setMinScaleFactor:(double)arg1 ;
-(void)setMaxScaleFactor:(double)arg1 ;
-(void)setDisplaysAsBook:(BOOL)arg1 ;
-(void)setEnableDataDetectors:(BOOL)arg1 ;
-(void)_updateBookmarksForPages;
-(id)visiblePageViews;
-(void)_syncPageIndexToScrollView;
-(void)scrollViewSaysPageMayHaveChanged:(id)arg1 ;
-(void)documentDidBeginWrite:(id)arg1 ;
-(void)documentDidEndWrite:(id)arg1 ;
-(void)pdfViewDidChangeScale:(id)arg1 ;
-(void)pdfViewDidChangePage:(id)arg1 ;
-(void)gestureInit;
-(CGAffineTransform)_transformFromPageToPageView:(id)arg1 ;
-(id)_getDocumentAKController;
-(BOOL)_isOverWidgetAnnotation:(CGPoint)arg1 ;
-(BOOL)_shouldHandleAnnotationAtLocation:(CGPoint)arg1 ;
-(BOOL)_hasDraggableSelectionAtLocation:(CGPoint)arg1 ;
-(id)_dragItemsAtLocationInView:(CGPoint)arg1 ;
-(void)showTextSelectionMenuIfPossible;
-(double)_unboundAutoScaleFactorForPageWithSize:(CGSize)arg1 ;
-(void)positionInternalViews:(id)arg1 ;
-(void)updateCurrentPageUsingViewCenter;
-(id)determineCurrentPage;
-(void)constrainedScrollToPoint:(CGPoint)arg1 ;
-(BOOL)canGoToNextPage;
-(BOOL)canGoToPreviousPage;
-(CGPoint)scrollOriginForPageTopLeft:(id)arg1 ;
-(void)scrollVerticalBy:(double)arg1 ;
-(NSArray *)visiblePages;
-(void)reflectNewPageOn;
-(void)_forceTileRefresh;
-(void)callPageVisibilityDelegateMethodForOverlayAdaptorOnly:(int)arg1 forPageView:(id)arg2 atPageIndex:(unsigned long long)arg3 ;
-(void)setDocument:(id)arg1 withInitialPageIndex:(unsigned long long)arg2 ;
-(void)goToPage:(id)arg1 animated:(BOOL)arg2 ;
-(void)goToPageWithoutBackgroundUpdate:(id)arg1 ;
-(void)goToSelection:(id)arg1 ;
-(void)takeBackgroundColorFrom:(id)arg1 ;
-(void)usePageViewController:(BOOL)arg1 withViewOptions:(id)arg2 ;
-(void)_doNotQueryScaleFactor;
-(double)scaleFactorForSizeToFit;
-(long long)areaOfInterestForMouse:(id)arg1 ;
-(long long)areaOfInterestForPoint:(CGPoint)arg1 ;
-(void)setCurrentSelection:(id)arg1 animate:(BOOL)arg2 ;
-(void)setHighlightedSelections:(NSArray *)arg1 ;
-(void)takePasswordFrom:(id)arg1 ;
-(void)annotationsChangedOnPage:(id)arg1 ;
-(CGSize)rowSizeForPage:(id)arg1 ;
-(BOOL)enableDataDetectors;
-(id)viewForPage:(id)arg1 ;
-(BOOL)isDrawingAccessibilityNodeType:(int)arg1 ;
-(void)drawAccessibilityNodeType:(int)arg1 enableDrawing:(BOOL)arg2 ;
-(CGAffineTransform)_transformFromPageViewToPage:(id)arg1 ;
-(double)autoScaleFactorForPage:(id)arg1 ;
-(double)autoScaleFactorForPageWithSize:(CGSize)arg1 ;
-(void)beginPDFViewRotation;
-(void)endPDFViewRotation;
-(void)setDoPeriodicFlush:(BOOL)arg1 ;
-(BOOL)doPeriodicFlush;
-(void)selfDidResize:(id)arg1 ;
-(CGSize)pageViewSizeForPage:(id)arg1 ;
-(void)scrollHorizontalBy:(double)arg1 ;
-(void)scrollByPage:(BOOL)arg1 ;
-(void)animateTransitionFromPage:(id)arg1 toPage:(id)arg2 ;
-(void)hintScrollDirectionHorizontal:(unsigned long long)arg1 andVertical:(unsigned long long)arg2 ;
-(void)setScaleFactor:(double)arg1 anchorPoint:(CGPoint)arg2 ;
-(long long)currentHistoryIndex;
-(void)setUsesPageLabels:(BOOL)arg1 ;
-(BOOL)usesPageLabels;
-(void)setScrollingChangesPages:(BOOL)arg1 ;
-(void)setDisplaysBookmarksForPages:(BOOL)arg1 ;
-(BOOL)displaysMarkupAnnotations;
-(void)setPopupManager:(id)arg1 ;
-(void)endEditingAnnotation;
-(BOOL)handleTabInTextWidget:(id)arg1 ;
-(BOOL)handleBackTabInTextWidget:(id)arg1 ;
-(BOOL)PDFKitHandleTabInTextWidget:(id)arg1 ;
-(BOOL)PDFKitHandleBackTabInTextWidget:(id)arg1 ;
-(BOOL)isOverLinkAnnotation:(CGPoint)arg1 ;
-(double)defaultGutterWidth;
-(BOOL)automaticallyHandleGutter;
-(void)startEditingTextWidgetAnnotation:(id)arg1 ;
-(void)setAkToolbarViewTintColor:(id)arg1 ;
-(id)akToolbarViewTintColor;
-(void)setAkToolbarViewItemTintColor:(id)arg1 ;
-(id)akToolbarViewItemTintColor;
-(id)akUndoToolbarItem;
-(id)akRedoToolbarItem;
-(BOOL)akAnnotationEditingEnabled;
-(void)setAkAnnotationEditingEnabled:(BOOL)arg1 ;
-(void)setShowsScrollIndicators:(BOOL)arg1 ;
-(BOOL)shouldAcceptTouch:(id)arg1 ofGestureRecognizer:(id)arg2 ;
-(void)layoutDocumentView;
-(id)documentScrollView;
-(void)PDFViewWillClickOnLink:(id)arg1 withURL:(id)arg2 ;
-(id)swipeGestureRecognizer;
-(id)history;
@end

