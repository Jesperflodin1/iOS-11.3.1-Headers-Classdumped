/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TNPageControllerDelegate;
#import <iWorkImport/iWorkImport-Structs.h>
@class NSObject, TNDocumentRoot, TNSheet, TNPageCoordinateDictionary, TSUPointerKeyDictionary, TNPrintProperties;

@interface TNPageController : NSObject {

	BOOL _pageCountsValid;
	BOOL _computingPageCounts;
	BOOL _maxPageCoordinateValid;
	BOOL _processingChanges;
	BOOL _updateViewScaleForDrawablesChangeAfterProcessingChanges;
	BOOL _postAutoFitContentScaleDidChangeNotificationAfterProcessingChanges;
	BOOL _inDynamicContentScaleChange;
	TSUCellCoord _maxPageCoordinate;
	NSObject*<TNPageControllerDelegate> _delegate;
	TNDocumentRoot* _documentRoot;
	TNSheet* _sheet;
	double _userViewScale;
	double _headerTextHeight;
	double _footerTextHeight;
	TNPageCoordinateDictionary* _pageLayoutCache;
	TSUPointerKeyDictionary* _hintCacheDictionary;
	TSUPointerKeyDictionary* _sheetPageCountCache;
	TNPageCoordinateDictionary* _headerLayerCache;
	TNPageCoordinateDictionary* _footerLayerCache;
	long long _cachedPageCountDuringDynamicContentScaleChange;
	long long _priorPageCount;
	long long _subsequentPageCount;
	TNPrintProperties* _printProperties;

}

@property (nonatomic,retain) TNPageCoordinateDictionary * pageLayoutCache;                                         //@synthesize pageLayoutCache=_pageLayoutCache - In the implementation block
@property (nonatomic,retain) TSUPointerKeyDictionary * hintCacheDictionary;                                        //@synthesize hintCacheDictionary=_hintCacheDictionary - In the implementation block
@property (nonatomic,retain) TSUPointerKeyDictionary * sheetPageCountCache;                                        //@synthesize sheetPageCountCache=_sheetPageCountCache - In the implementation block
@property (nonatomic,retain) TNPageCoordinateDictionary * headerLayerCache;                                        //@synthesize headerLayerCache=_headerLayerCache - In the implementation block
@property (nonatomic,retain) TNPageCoordinateDictionary * footerLayerCache;                                        //@synthesize footerLayerCache=_footerLayerCache - In the implementation block
@property (assign,nonatomic) long long cachedPageCountDuringDynamicContentScaleChange;                             //@synthesize cachedPageCountDuringDynamicContentScaleChange=_cachedPageCountDuringDynamicContentScaleChange - In the implementation block
@property (assign,nonatomic) long long priorPageCount;                                                             //@synthesize priorPageCount=_priorPageCount - In the implementation block
@property (assign,nonatomic) long long subsequentPageCount;                                                        //@synthesize subsequentPageCount=_subsequentPageCount - In the implementation block
@property (assign,nonatomic) BOOL pageCountsValid;                                                                 //@synthesize pageCountsValid=_pageCountsValid - In the implementation block
@property (assign,nonatomic) BOOL computingPageCounts;                                                             //@synthesize computingPageCounts=_computingPageCounts - In the implementation block
@property (assign,nonatomic) TSUCellCoord maxPageCoordinate;                                                       //@synthesize maxPageCoordinate=_maxPageCoordinate - In the implementation block
@property (assign,nonatomic) BOOL maxPageCoordinateValid;                                                          //@synthesize maxPageCoordinateValid=_maxPageCoordinateValid - In the implementation block
@property (nonatomic,retain) TNPrintProperties * printProperties;                                                  //@synthesize printProperties=_printProperties - In the implementation block
@property (assign,getter=isProcessingChanges,nonatomic) BOOL processingChanges;                                    //@synthesize processingChanges=_processingChanges - In the implementation block
@property (assign,nonatomic) BOOL updateViewScaleForDrawablesChangeAfterProcessingChanges;                         //@synthesize updateViewScaleForDrawablesChangeAfterProcessingChanges=_updateViewScaleForDrawablesChangeAfterProcessingChanges - In the implementation block
@property (assign,nonatomic) BOOL postAutoFitContentScaleDidChangeNotificationAfterProcessingChanges;              //@synthesize postAutoFitContentScaleDidChangeNotificationAfterProcessingChanges=_postAutoFitContentScaleDidChangeNotificationAfterProcessingChanges - In the implementation block
@property (nonatomic,readonly) BOOL inDynamicContentScaleChange;                                                   //@synthesize inDynamicContentScaleChange=_inDynamicContentScaleChange - In the implementation block
@property (assign,nonatomic,__weak) TNDocumentRoot * documentRoot;                                                 //@synthesize documentRoot=_documentRoot - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<TNPageControllerDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) TNSheet * sheet;                                                               //@synthesize sheet=_sheet - In the implementation block
@property (nonatomic,readonly) CGSize pageSize; 
@property (nonatomic,readonly) CGRect contentFrame; 
@property (getter=isPortrait,nonatomic,readonly) BOOL portrait; 
@property (nonatomic,readonly) unsigned long long numPages; 
@property (nonatomic,readonly) double contentScale; 
@property (assign,nonatomic) double userViewScale;                                                                 //@synthesize userViewScale=_userViewScale - In the implementation block
@property (assign,nonatomic) double headerTextHeight;                                                              //@synthesize headerTextHeight=_headerTextHeight - In the implementation block
@property (assign,nonatomic) double footerTextHeight;                                                              //@synthesize footerTextHeight=_footerTextHeight - In the implementation block
+(double)autoFitContentScaleForSheet:(id)arg1 ;
+(id)cachedAutoFitContentScaleDictionary;
+(double)p_unclampedAutoFitContentScaleForSheet:(id)arg1 ;
-(BOOL)isPagePlaceholderAtPageCoordinate:(TSUCellCoord)arg1 ;
-(id)pageLayoutGeometryForPrintingAtPageCoordinate:(TSUCellCoord)arg1 ;
-(id)pageLayoutGeometryForPageCoordinate:(TSUCellCoord)arg1 ;
-(TSUCellCoord)pageCoordinateForPageIndex:(unsigned long long)arg1 ;
-(void)registerPageLayout:(id)arg1 atPageCoordinate:(TSUCellCoord)arg2 ;
-(void)layoutAtPageIndex:(unsigned long long)arg1 forLayoutController:(id)arg2 ;
-(TNPrintProperties *)printProperties;
-(void)i_invalidatePageLayoutCache;
-(void)i_invalidateHintCache;
-(unsigned long long)pageNumberForPageCoordinate:(TSUCellCoord)arg1 ;
-(CGRect)firstPartitionFrameForInfo:(id)arg1 outStartPageCoordinate:(out TSUCellCoord*)arg2 ;
-(void)syncPositionOfLayout:(id)arg1 atCoordinate:(TSUCellCoord)arg2 ;
-(double)userViewScale;
-(CGRect)printingLayoutRectForPageIndex:(unsigned long long)arg1 ;
-(id)pageInfoForPageIndex:(unsigned long long)arg1 ;
-(void)invalidatePageLayout;
-(void)setHeaderTextHeight:(double)arg1 ;
-(void)setFooterTextHeight:(double)arg1 ;
-(void)p_willBeginDynamicContentScaleChange:(id)arg1 ;
-(void)p_didEndDynamicContentScaleChange:(id)arg1 ;
-(void)p_invalidateCachedAutoFitContentScaleForSheet:(id)arg1 notify:(BOOL)arg2 ;
-(void)updateUserViewScale;
-(void)p_clearHintCache;
-(void)p_computePriorPageCountForCurrentSheet;
-(void)p_computeSubsequentPageCountForCurrentSheet;
-(long long)p_updateCachedPageCountForCurrentSheet;
-(long long)p_pageCountForSheet:(id)arg1 ;
-(double)headerTextHeight;
-(double)footerTextHeight;
-(void)p_measureHeadersAndFooters;
-(void)updateViewScale;
-(double)p_printViewDefaultUserViewScale;
-(void)setUserViewScale:(double)arg1 ;
-(void)invalidatePageLayoutGeometries;
-(TSCERangeCoordinate)pageRangeForContentWithUpperBound:(TSUCellCoord)arg1 ;
-(TSCERangeCoordinate)pageRangeForInfo:(id)arg1 upperBound:(TSUCellCoord)arg2 ;
-(TSUCellCoord)p_pageCoordinateForPageLayoutAtDevicePoint:(CGPoint)arg1 ;
-(TSUCellCoord)pageCoordinateForMaxVisiblePage;
-(TSCERangeCoordinate)pageRangeForContent;
-(long long)p_priorPageCount;
-(TSUCellCoord)pageCoordinateForDrawableAtUnscaledPoint:(CGPoint)arg1 ;
-(void)p_updateVisiblePageRange:(TSCERangeCoordinate)arg1 forLayoutController:(id)arg2 ;
-(CGSize)pageSizeWithGutter;
-(void)p_layoutInfo:(id)arg1 intoPageLayout:(id)arg2 atPageCoordinate:(TSUCellCoord)arg3 ;
-(void)removeLayoutsFromPages;
-(void)invalidateDrawableLayouts;
-(void)p_invalidatePageCounts;
-(BOOL)isProcessingChanges;
-(void)setPostAutoFitContentScaleDidChangeNotificationAfterProcessingChanges:(BOOL)arg1 ;
-(void)p_postAutoFitContentScaleDidChangeNotification;
-(BOOL)p_headersOrFootersContainPageNumberRelatedAttachments;
-(TSCERangeCoordinate)pageRangeWithPlaceholdersWithUpperBound:(TSUCellCoord)arg1 ;
-(id)p_pageLayoutAtCoordinate:(TSUCellCoord)arg1 ;
-(void)p_enumerateOverPageRange:(TSCERangeCoordinate)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)p_hintCacheForInfo:(id)arg1 ;
-(id)p_layoutForInfo:(id)arg1 atCoordinate:(TSUCellCoord)arg2 parentLayout:(id)arg3 ;
-(id)p_pageInfoForPageAtIndex:(unsigned long long)arg1 ;
-(TSCERangeCoordinate)pageRangeForPageIndex:(unsigned long long)arg1 ;
-(void)p_layoutInfo:(id)arg1 intoPageRange:(TSCERangeCoordinate)arg2 ;
-(void)canvasViewScaleDidChange:(double)arg1 ;
-(void)updateContentScale;
-(void)updatePrintMargins;
-(CGSize)contentSizeForCanvasLayer;
-(void)layoutInPageRange:(TSCERangeCoordinate)arg1 forLayoutController:(id)arg2 ;
-(TSUCellCoord)pageCoordinateForPageLayoutAtUnscaledPoint:(CGPoint)arg1 ;
-(void)willExitPrintView;
-(void)invalidateCachedAutoFitContentScaleForSheet:(id)arg1 ;
-(id)i_layerForHeaderType:(long long)arg1 fragment:(long long)arg2 atPageCoordinate:(TSUCellCoord)arg3 ;
-(void)i_setLayer:(id)arg1 forHeaderType:(long long)arg2 fragment:(long long)arg3 atPageCoordinate:(TSUCellCoord)arg4 ;
-(TNPageCoordinateDictionary *)pageLayoutCache;
-(void)setPageLayoutCache:(TNPageCoordinateDictionary *)arg1 ;
-(TSUPointerKeyDictionary *)hintCacheDictionary;
-(void)setHintCacheDictionary:(TSUPointerKeyDictionary *)arg1 ;
-(TSUPointerKeyDictionary *)sheetPageCountCache;
-(void)setSheetPageCountCache:(TSUPointerKeyDictionary *)arg1 ;
-(TNPageCoordinateDictionary *)headerLayerCache;
-(void)setHeaderLayerCache:(TNPageCoordinateDictionary *)arg1 ;
-(TNPageCoordinateDictionary *)footerLayerCache;
-(void)setFooterLayerCache:(TNPageCoordinateDictionary *)arg1 ;
-(long long)cachedPageCountDuringDynamicContentScaleChange;
-(void)setCachedPageCountDuringDynamicContentScaleChange:(long long)arg1 ;
-(long long)priorPageCount;
-(void)setPriorPageCount:(long long)arg1 ;
-(long long)subsequentPageCount;
-(void)setSubsequentPageCount:(long long)arg1 ;
-(BOOL)pageCountsValid;
-(void)setPageCountsValid:(BOOL)arg1 ;
-(BOOL)computingPageCounts;
-(void)setComputingPageCounts:(BOOL)arg1 ;
-(TSUCellCoord)maxPageCoordinate;
-(void)setMaxPageCoordinate:(TSUCellCoord)arg1 ;
-(BOOL)maxPageCoordinateValid;
-(void)setMaxPageCoordinateValid:(BOOL)arg1 ;
-(void)setPrintProperties:(TNPrintProperties *)arg1 ;
-(void)setProcessingChanges:(BOOL)arg1 ;
-(BOOL)updateViewScaleForDrawablesChangeAfterProcessingChanges;
-(void)setUpdateViewScaleForDrawablesChangeAfterProcessingChanges:(BOOL)arg1 ;
-(BOOL)postAutoFitContentScaleDidChangeNotificationAfterProcessingChanges;
-(BOOL)inDynamicContentScaleChange;
-(NSObject*<TNPageControllerDelegate>)delegate;
-(void)setDelegate:(NSObject*<TNPageControllerDelegate>)arg1 ;
-(void)dealloc;
-(unsigned long long)pageCount;
-(double)contentScale;
-(unsigned long long)numPages;
-(CGRect)contentFrame;
-(BOOL)isPortrait;
-(TNDocumentRoot *)documentRoot;
-(id)initWithDocumentRoot:(id)arg1 ;
-(void)setDocumentRoot:(TNDocumentRoot *)arg1 ;
-(CGSize)pageSize;
-(void)setSheet:(TNSheet *)arg1 ;
-(TNSheet *)sheet;
@end

