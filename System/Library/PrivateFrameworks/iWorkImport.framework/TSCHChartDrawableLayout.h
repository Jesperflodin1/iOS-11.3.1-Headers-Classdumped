/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:54 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPTextHostLayout.h>

@class TSCHChartLayout, TSDLayoutGeometry, TSCHChartDrawableLayoutLegendResizer, TSCHChartInfo, NSIndexSet, NSArray, NSDictionary, TSCHChartModel;

@interface TSCHChartDrawableLayout : TSWPTextHostLayout {

	struct {
		unsigned chartLayoutState : 1;
		unsigned chartLayoutStructure : 1;
	}  mChartInvalidFlags;
	TSCHChartLayout* mChartLayout;
	BOOL mForceLayoutSettingsOmitLabelPlacement;
	TSDLayoutGeometry* mLayoutGeometryWhileCallingSuperComputeLayoutGeometry;
	TSDLayoutGeometry* mLastPureGeometry;
	TSDLayoutGeometry* mLastChartAreaGeometry;
	CGSize mMinSizeCache;
	BOOL mInResize;
	BOOL mSuppressChartLayoutInvalidation;
	TSDLayoutGeometry* mLegendGeometryForResize;
	TSCHChartDrawableLayoutLegendResizer* mLegendResizer;

}

@property (nonatomic,retain) TSCHChartLayout * p_chartLayoutNoCreate; 
@property (nonatomic,readonly) TSCHChartLayout * p_chartLayout; 
@property (nonatomic,retain) TSCHChartDrawableLayoutLegendResizer * p_legendResizer; 
@property (nonatomic,copy) TSDLayoutGeometry * p_lastPureGeometry; 
@property (nonatomic,copy) TSDLayoutGeometry * p_lastChartAreaGeometry; 
@property (nonatomic,copy) TSDLayoutGeometry * p_legendGeometryForResize; 
@property (nonatomic,readonly) TSCHChartInfo * chartInfo; 
@property (nonatomic,retain,readonly) TSCHChartLayout * chartLayout; 
@property (nonatomic,readonly) BOOL is3DChart; 
@property (assign,nonatomic) BOOL forceLayoutSettingsOmitLabelPlacement; 
@property (nonatomic,readonly) NSIndexSet * pieWedgeExplosionSeriesIndices; 
@property (nonatomic,copy) NSArray * pieWedgeExplosions; 
@property (nonatomic,copy) NSDictionary * seriesIndexedPieWedgeExplosions; 
@property (nonatomic,copy,readonly) NSDictionary * seriesIndexedPieNormalizedLabelDistancesFromWedgeTips; 
@property (nonatomic,readonly) TSCHChartModel * model; 
@property (assign,nonatomic) unsigned long long dataSetIndex; 
@property (nonatomic,copy) TSDLayoutGeometry * legendGeometry; 
@property (nonatomic,copy) TSDLayoutGeometry * legendModelGeometry; 
-(TSCHChartInfo *)chartInfo;
-(id)propertiesThatInvalidateLayout;
-(void)setSeriesIndexedPieWedgeExplosions:(NSDictionary *)arg1 ;
-(void)setForceLayoutSettingsOmitLabelPlacement:(BOOL)arg1 ;
-(TSCHChartLayout *)chartLayout;
-(id)renderersWithRep:(id)arg1 ;
-(unsigned long long)dataSetIndex;
-(void)setDataSetIndex:(unsigned long long)arg1 ;
-(NSDictionary *)seriesIndexedPieWedgeExplosions;
-(NSDictionary *)seriesIndexedPieNormalizedLabelDistancesFromWedgeTips;
-(BOOL)is3DChart;
-(BOOL)p_isPrintingInBackground;
-(BOOL)p_isRenderingForKPF;
-(TSCHChartLayout *)p_chartLayoutNoCreate;
-(void)setP_chartLayoutNoCreate:(TSCHChartLayout *)arg1 ;
-(id)chartDrawableInfo;
-(void)p_validateChartLayout;
-(TSCHChartLayout *)p_chartLayout;
-(void)p_postLayoutPropertyValueDidChangeNotification;
-(NSIndexSet *)pieWedgeExplosionSeriesIndices;
-(id)pieWedgeExplosionsForSeriesIndices:(id)arg1 ;
-(id)p_chartLayout2D;
-(void)p_setLegendSize:(CGSize)arg1 ;
-(void)p_setLegendGeometry:(id)arg1 fromTransform:(CGAffineTransform)arg2 onLayout:(id)arg3 shouldUpdateLayoutItemSize:(BOOL)arg4 ;
-(void)p_clearChartLayout;
-(void)invalidateChartLayoutState;
-(void)p_forceValidateChartLayout;
-(TSDLayoutGeometry *)p_lastPureGeometry;
-(void)setP_lastPureGeometry:(TSDLayoutGeometry *)arg1 ;
-(void)setP_lastChartAreaGeometry:(TSDLayoutGeometry *)arg1 ;
-(void)p_convertValidChartLayout:(id)arg1 andInfoGeometry:(id)arg2 toPureGeometry:(id*)arg3 toChartAreaGeometry:(id*)arg4 toShadowGeometry:(id*)arg5 ;
-(TSDLayoutGeometry *)p_lastChartAreaGeometry;
-(TSDLayoutGeometry *)p_legendGeometryForResize;
-(void)setP_legendGeometryForResize:(TSDLayoutGeometry *)arg1 ;
-(id)p_constrainAndResizePureGeometry:(id)arg1 withValidChartLayout:(id)arg2 toChartAreaGeometry:(id*)arg3 toShadowGeometry:(id*)arg4 toInfoGeometry:(id*)arg5 ;
-(BOOL)changesShouldClearLayout:(id)arg1 ;
-(void)invalidateChartLayoutStructure;
-(BOOL)changesShouldSetNeedsLayout:(id)arg1 ;
-(CGSize)p_calcMinSize;
-(double)p_approximateMultiDataControlUnscaledHeight;
-(double)p_approximatedAdditionalHeightForMultiDataControlWithMinimumAccommodatingScale:(double)arg1 ;
-(double)p_approximateMultiDataControlUnscaledMinimumWidth;
-(CGRect)p_addMultiDataControlToInlineWrapBounds:(CGRect)arg1 ;
-(void)setChartLayoutPropertyValue:(id)arg1 forKey:(id)arg2 ;
-(NSArray *)pieWedgeExplosions;
-(void)setPieWedgeExplosions:(NSArray *)arg1 ;
-(TSDLayoutGeometry *)legendGeometry;
-(void)setLegendGeometry:(TSDLayoutGeometry *)arg1 ;
-(TSDLayoutGeometry *)legendModelGeometry;
-(void)setLegendModelGeometry:(TSDLayoutGeometry *)arg1 ;
-(id)computeInfoGeometryFromPureLayoutGeometry:(id)arg1 ;
-(void)p_addEdgeAlignmentGuidesForRect:(CGRect)arg1 array:(id)arg2 ;
-(void)take3DDepth;
-(CGRect)insertionFrame;
-(id)i_computeUnitedWrapPath;
-(double)viewScaleForZoomingToSelectionPath:(id)arg1 targetPointSize:(double)arg2 ;
-(BOOL)forceLayoutSettingsOmitLabelPlacement;
-(TSCHChartDrawableLayoutLegendResizer *)p_legendResizer;
-(void)setP_legendResizer:(TSCHChartDrawableLayoutLegendResizer *)arg1 ;
-(id)optimizedLabelRectsToPreventOverlapWithCheckTitle:(BOOL)arg1 ;
-(void)invalidate;
-(void)dealloc;
-(TSCHChartModel *)model;
-(CGSize)minimumSize;
-(void)validate;
-(void)processChanges:(id)arg1 ;
-(CGRect)boundsForStandardKnobs;
-(id)initWithInfo:(id)arg1 ;
-(void)processChangedProperty:(int)arg1 ;
-(Class)repClassOverride;
-(void)invalidateSize;
-(id)computeLayoutGeometry;
-(CGRect)alignmentFrame;
-(id)layoutGeometryFromInfo;
-(void)willBeAddedToLayoutController:(id)arg1 ;
-(id)computeInfoGeometryDuringResize;
-(CGRect)frameForCulling;
-(void)offsetGeometryBy:(CGPoint)arg1 ;
-(id)visibleGeometries;
-(CGRect)alignmentFrameForProvidingGuidesInRoot;
-(BOOL)canRotateChildLayout:(id)arg1 ;
-(id)i_computeWrapPath;
-(CGRect)boundsInfluencingExteriorWrap;
-(int)wrapFitType;
@end

