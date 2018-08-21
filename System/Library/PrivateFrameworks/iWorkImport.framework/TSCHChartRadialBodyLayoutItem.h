/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:55 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHChartBodyLayoutItem.h>

@class TSCHRadialBodyLayoutItemPathCache, NSArray, NSDictionary;

@interface TSCHChartRadialBodyLayoutItem : TSCHChartBodyLayoutItem {

	TSCHRadialBodyLayoutItemPathCache* mPathCache;
	NSArray* mWedgeLayoutInfosInLocalSpace;

}

@property (retain) TSCHRadialBodyLayoutItemPathCache * p_pathCache; 
@property (nonatomic,readonly) NSDictionary * wedgeLayoutInfosInChartCoordinateSpaceForSeriesIndex; 
-(CGRect)calcDrawingRect;
-(CGPathRef)newElementPathWithPercentage:(double)arg1 radius:(double)arg2 center:(CGPoint)arg3 startAngle:(double)arg4 midAngle:(double)arg5 endAngle:(double)arg6 withInnerRadius:(id)arg7 ;
-(id)knobsWithRadius:(double)arg1 center:(CGPoint)arg2 startAngle:(double)arg3 midAngle:(double)arg4 endAngle:(double)arg5 ;
-(NSDictionary *)wedgeLayoutInfosInChartCoordinateSpaceForSeriesIndex;
-(id)newPathsForRenderingCalloutLineForSeries:(unsigned long long)arg1 outStartLineEndPath:(id*)arg2 outEndLineEndPath:(id*)arg3 stroke:(id)arg4 outStroke:(id*)arg5 context:(CGContextRef)arg6 contextScale:(float)arg7 ;
-(id)renderersWithRep:(id)arg1 ;
-(id)seriesIndexedPieNormalizedLabelDistancesFromWedgeTips;
-(CGRect)calcOverhangRect;
-(CGSize)bodySizeForOverhangSize:(CGSize)arg1 ;
-(CGSize)titleSizeToUseForOverlapPreventionWithLabels;
-(double)normalizedLabelDistanceFromWedgeTipForSeries:(id)arg1 ;
-(id)wedgeLayoutInfosInChartCoordinateSpace;
-(id)seriesIndexToWedgeLayoutInfoMapWithWedgeLayoutInfos:(id)arg1 ;
-(id)createWedgeLayoutInfos;
-(id)optimizedWedgeLayoutInfoPlacementForWedgeLayoutInfos:(id)arg1 ;
-(TSCHChartPieLabelGeometries)labelGeometriesForRenderingLabelsForSeriesModelCache:(id)arg1 topLabelType:(long long)arg2 bottomLabelType:(long long)arg3 ;
-(id)labelStringForType:(long long)arg1 seriesModelCache:(id)arg2 ;
-(TSCHChartPieLabelGeometry)labelGeometryForRenderingLabelForSeriesModelCache:(id)arg1 labelType:(long long)arg2 ;
-(id)defaultPieWedgeLayoutInfoForSeriesModelCache:(id)arg1 pieLabels:(id)arg2 combinedLabelTransform:(CGAffineTransform)arg3 ;
-(void)p_collectMaxRatio:(double*)arg1 maxLabelOverhang:(double*)arg2 maxWedgeExplosion:(float*)arg3 maxComboExplosion:(float*)arg4 ;
-(id)createAndOptimallyPlaceWedgeLayoutInfos;
-(CGSize)overhangSizeForBodySize:(CGSize)arg1 ;
-(id)defaultPieWedgeElementForSeriesModelCache:(id)arg1 ;
-(id)pathCacheForSeries:(unsigned long long)arg1 withInnerRadius:(id)arg2 ;
-(TSCHRadialBodyLayoutItemPathCache *)p_pathCache;
-(void)setP_pathCache:(TSCHRadialBodyLayoutItemPathCache *)arg1 ;
-(id)wedgeLayoutInfosInLocalSpaceForSeriesIndex;
-(CGAffineTransform)transformToShiftStraightLineLabelRectOutForEnableCalloutLineONSetting:(CGRect)arg1 wedgeElement:(id)arg2 ;
-(CGAffineTransform)transformToMaintainLabelSameDistanceAwayFromWedge:(CGRect)arg1 wedgeElement:(id)arg2 ;
-(CGAffineTransform)transformForRenderingElementForSeries:(unsigned long long)arg1 outElementSize:(CGSize*)arg2 outClipRect:(CGRect*)arg3 withInnerRadius:(id)arg4 ;
-(CGRect)calloutLineBoundingBoxForSeries:(unsigned long long)arg1 ;
-(CGPathRef)pathOfElementForSeries:(unsigned long long)arg1 outWedgeCenterPoint:(CGPoint*)arg2 withInnerRadius:(id)arg3 ;
-(id)knobsOfElementForSeries:(unsigned long long)arg1 withInnerRadius:(id)arg2 ;
-(void)setLayoutSize:(CGSize)arg1 ;
@end

