/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:55 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHElementBuilder.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface TSCHLineAreaScatterElementBuilder : TSCHElementBuilder {

	NSMutableDictionary* mPathCache;
	NSObject*<OS_dispatch_queue> mPathCacheQueue;

}
-(unsigned long long)countOfLabelsForSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outNewTransforms:(CGAffineTransform*)arg4 outNewElementSizes:(CGSize*)arg5 outNewClipRect:(CGRect*)arg6 outNewStrings:(id*)arg7 ;
-(unsigned long long)countOfPointsForSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outElementSize:(CGSize*)arg4 outClipRect:(CGRect*)arg5 outUnitSymbolPath:(const CGPath*)arg6 outNewTransformArray:(CGAffineTransform*)arg7 outNewGroupIndexArray:(unsigned long long*)arg8 ;
-(CGAffineTransform)transformForRenderingSeriesElementTopStrokeForSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outElementSize:(CGSize*)arg4 outClipRect:(CGRect*)arg5 outNewElementPath:(const CGPath*)arg6 ;
-(CGAffineTransform)transformForRenderingSeriesElementForSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outElementSize:(CGSize*)arg4 outClipRect:(CGRect*)arg5 outNewElementPath:(const CGPath*)arg6 ;
-(BOOL)symbolTypeIsClosed:(int)arg1 ;
-(unsigned long long)countOfElementsInSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outNewElementBounds:(CGRect*)arg4 outNewClipRects:(CGRect*)arg5 outNewElementPaths:(const CGPath*)arg6 outSelectionKnobLocations:(id*)arg7 ;
-(unsigned long long)countOfErrorBarsInSeries:(id)arg1 forGroups:(id)arg2 forAxisID:(id)arg3 forBodyLayout:(id)arg4 outClipRect:(CGRect*)arg5 outNewErrorBarDescriptors:(/*function pointer*/void**)arg6 ;
-(CGAffineTransform)transformForRenderingLabelInBody:(id)arg1 forSeries:(unsigned long long)arg2 forGroup:(unsigned long long)arg3 outElementSize:(CGSize*)arg4 outClipRect:(CGRect*)arg5 ;
-(long long)hitCheckPoint:(CGPoint)arg1 inSeries:(id)arg2 withBodyLayout:(id)arg3 ;
-(unsigned long long)countOfHitCheckRegionsInSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outNewElementPaths:(const CGPath*)arg4 outSelectionKnobLocations:(id*)arg5 ;
-(CGPathRef)p_newPathForSymbol:(int)arg1 context:(CGContextRef)arg2 at:(CGPoint)arg3 width:(double)arg4 pathLocation:(long long)arg5 stroke:(id)arg6 ;
-(CGPathRef)p_newCirclePath:(CGPoint)arg1 width:(double)arg2 pathLocation:(long long)arg3 stroke:(id)arg4 ;
-(CGPathRef)p_newTrianglePath:(CGPoint)arg1 width:(double)arg2 pathLocation:(long long)arg3 stroke:(id)arg4 ;
-(CGPathRef)p_newYieldPath:(CGPoint)arg1 width:(double)arg2 pathLocation:(long long)arg3 stroke:(id)arg4 ;
-(CGPathRef)p_newSquarePath:(CGPoint)arg1 width:(double)arg2 pathLocation:(long long)arg3 stroke:(id)arg4 context:(CGContextRef)arg5 ;
-(CGPathRef)p_newDiamondPath:(CGPoint)arg1 width:(double)arg2 pathLocation:(long long)arg3 stroke:(id)arg4 ;
-(CGPathRef)p_newCrossPath:(CGPoint)arg1 width:(double)arg2 pathLocation:(long long)arg3 stroke:(id)arg4 ;
-(CGPathRef)p_newPlusPath:(CGPoint)arg1 width:(double)arg2 pathLocation:(long long)arg3 stroke:(id)arg4 context:(CGContextRef)arg5 ;
-(float)dataPointDimension:(id)arg1 symbolType:(int)arg2 stroke:(id)arg3 ;
-(CGPathRef)p_newUncachedUnitPathForSymbol:(int)arg1 symbolSize:(double)arg2 stroke:(id)arg3 forHitCheck:(BOOL)arg4 ;
-(SCD_Struct_TS563*)p_centerPointsForSeries:(id)arg1 forGroupIndexes:(NSRange)arg2 xAxis:(id)arg3 yAxis:(id)arg4 nullsUseIntercept:(BOOL)arg5 plotAreaFrame:(CGRect)arg6 ;
-(void)p_addCurvedTopStroke:(SCD_Struct_TS564*)arg1 toPath:(CGPathRef)arg2 withPointsArray:(SCD_Struct_TS562*)arg3 withCount:(unsigned long long)arg4 ;
-(double)p_bubbleMaxForSeries:(id)arg1 inChartBodyLayoutSize:(CGSize)arg2 ;
-(SCD_Struct_TS563*)p_centerPointsForSeries:(id)arg1 forGroupIndexes:(NSRange)arg2 xAxis:(id)arg3 yAxis:(id)arg4 plotAreaFrame:(CGRect)arg5 ;
-(SCD_Struct_TS562*)p_createPointArrayForSeries:(id)arg1 inAreaFrame:(CGRect)arg2 valueStart:(unsigned long long)arg3 valueEnd:(unsigned long long)arg4 cullBadPoints:(BOOL)arg5 outCount:(unsigned long long*)arg6 ;
-(id)p_calculateSelectionKnobSet:(id)arg1 ;
-(SCD_Struct_TS562*)p_createPointArrayForSeries:(id)arg1 inAreaFrame:(CGRect)arg2 valueStart:(long long)arg3 valueEnd:(long long)arg4 outCount:(unsigned long long*)arg5 ;
-(void)p_addTopStroke:(SCD_Struct_TS564*)arg1 toPath:(CGPathRef)arg2 withPointsArray:(SCD_Struct_TS562*)arg3 withCount:(unsigned long long)arg4 lineType:(int)arg5 ;
-(BOOL)p_addBottomStroke:(SCD_Struct_TS564*)arg1 toPath:(CGPathRef)arg2 seriesIndex:(unsigned long long)arg3 valuesStart:(unsigned long long)arg4 valuesEnd:(unsigned long long)arg5 withPointsArray:(SCD_Struct_TS562*)arg6 withCount:(unsigned long long)arg7 ;
-(CGPathRef)p_newUnitPathForSymbol:(int)arg1 symbolSize:(double)arg2 stroke:(id)arg3 forHitCheck:(BOOL)arg4 ;
-(void)p_addKnobsForPoint:(CGPoint)arg1 strokedUnitSymbolRect:(CGRect)arg2 toKnobSet:(id)arg3 symbolsShowing:(BOOL)arg4 includePoint:(BOOL)arg5 ;
-(void)p_createElementsForSeries:(id)arg1 forGroups:(id)arg2 inBodyLayout:(id)arg3 outTopStrokePath:(const CGPath*)arg4 outTopStrokeClipRect:(CGRect*)arg5 outSeriesElementPath:(const CGPath*)arg6 outSeriesElementClipRect:(CGRect*)arg7 outSymbolElementPath:(const CGPath*)arg8 outSymbolElementClipRect:(CGRect*)arg9 outSymbolElementHitCheckPath:(const CGPath*)arg10 outSelectionKnobLocations:(id*)arg11 ;
-(BOOL)p_hitCheckPoint:(CGPoint)arg1 inSymbolsOfSeries:(id)arg2 withBodyLayout:(id)arg3 ;
-(CGPoint)labelPointForPosition:(unsigned)arg1 rect:(CGRect)arg2 stringSize:(CGSize)arg3 symbolType:(int)arg4 ;
-(BOOL)p_centerPointForSeries:(id)arg1 forGroupIndex:(unsigned long long)arg2 xAxis:(id)arg3 yAxis:(id)arg4 plotAreaFrame:(CGRect)arg5 nullsUseIntercept:(BOOL)arg6 outPoint:(CGPoint*)arg7 ;
-(id)p_symbolKnobLocationsForSeries:(id)arg1 forGroups:(id)arg2 inBodyLayout:(id)arg3 ;
-(void)p_trendlineInfoForSeries:(id)arg1 forBodyLayout:(id)arg2 outVertical:(BOOL*)arg3 outOffsetInBody:(double*)arg4 ;
-(BOOL)needsSeparateHitTestingPaths;
-(CGAffineTransform)transformForRenderingSeriesElementSymbolsForSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outElementSize:(CGSize*)arg4 outClipRect:(CGRect*)arg5 outNewElementPath:(const CGPath*)arg6 ;
-(id)init;
-(void)dealloc;
@end

