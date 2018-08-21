/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:54 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSCHChartInfo, TSCHChartModel;

@interface TSCHChartLayout : NSObject {

	BOOL mNeedsLayout;
	TSCHChartInfo* mChartInfo;
	SCD_Struct_TS514 mLayoutSettings;
	CGRect _legendModelGeometryFrame;

}

@property (readonly) TSCHChartInfo * chartInfo; 
@property (readonly) TSCHChartModel * model; 
@property (readonly) CGRect outerLayoutFrame; 
@property (readonly) CGRect outerShadowFrame; 
@property (readonly) CGRect chartAreaFrame; 
@property (readonly) CGRect legendFrame; 
@property (readonly) CGRect legendDrawingFrame; 
@property (assign) CGRect legendGeometryFrame; 
@property (assign) CGRect legendModelGeometryFrame;              //@synthesize legendModelGeometryFrame=_legendModelGeometryFrame - In the implementation block
@property (readonly) CGRect chartBodyFrame; 
@property (readonly) CGRect titleFrame; 
@property (assign) unsigned long long dataSetIndex; 
@property (assign) SCD_Struct_TS514 layoutSettings; 
+(id)chartLayoutWithChartInfo:(id)arg1 ;
+(id)propertiesThatInvalidateLayout;
+(CGSize)legendSizeForChartInfo:(id)arg1 initialWidth:(double)arg2 ;
-(void)setLayoutSettings:(SCD_Struct_TS514)arg1 ;
-(TSCHChartInfo *)chartInfo;
-(SCD_Struct_TS514)layoutSettings;
-(id)subselectionKnobPositionsForSelection:(id)arg1 ;
-(void)layoutForChartBodySize:(CGSize)arg1 ;
-(CGRect)chartBodyFrame;
-(CGRect)legendFrame;
-(void)setLegendSize:(CGSize)arg1 ;
-(id)initWithChartInfo:(id)arg1 ;
-(CGRect)chartAreaFrame;
-(void)layoutForChartAreaSize:(CGSize)arg1 ;
-(CGRect)boundsForResize;
-(void)layoutForResizingSize:(CGSize)arg1 ;
-(void)setForceOmitLegend:(BOOL)arg1 ;
-(void)setForceOmitLabelPlacement:(BOOL)arg1 ;
-(CGRect)outerLayoutFrame;
-(void)layoutForCircumscribingSize:(CGSize)arg1 ;
-(void)setForceTitleAtTop:(BOOL)arg1 ;
-(id)renderersWithRep:(id)arg1 ;
-(CGRect)outerShadowFrame;
-(CGRect)convertChartLayoutSpaceRectToNaturalSpaceRect:(CGRect)arg1 ;
-(unsigned long long)dataSetIndex;
-(void)setDataSetIndex:(unsigned long long)arg1 ;
-(CGRect)legendModelGeometryFrame;
-(CGPoint)convertChartLayoutSpaceToNaturalSpace:(CGPoint)arg1 ;
-(CGRect)convertNaturalSpaceRectToChartLayoutSpaceRect:(CGRect)arg1 ;
-(void)setLegendModelGeometryFrame:(CGRect)arg1 ;
-(id)hitChartElements:(CGPoint)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)subselectionHaloPositionsForSelections:(id)arg1 ;
-(CGPathRef)newDragAndDropHighlightPathForSelection:(id)arg1 ;
-(CGRect)legendDrawingFrame;
-(void)invalidateCachedOriginRelativeToChartAreaFrame;
-(CGRect)legendGeometryFrame;
-(void)setLegendGeometryFrame:(CGRect)arg1 ;
-(BOOL)layoutFrameShouldEncloseInfoGeometry;
-(CGPoint)convertNaturalSpaceToChartLayoutSpace:(CGPoint)arg1 ;
-(void)takeSizeFromTracker:(id)arg1 ;
-(void)endResize;
-(CGAffineTransform)transformToConvertChartLayoutToNatural;
-(CGRect)titleFrame;
-(void)invalidate;
-(BOOL)isValid;
-(TSCHChartModel *)model;
-(void)processChanges:(id)arg1 ;
-(void)beginDynamicOperation;
-(void)endDynamicOperation;
-(void)beginResize;
@end

