/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:53 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSCHChartSeriesTypeColumn.h>

@interface TSCHChartSeriesTypeStackedColumn : TSCHChartSeriesTypeColumn
-(id)elementBuilder;
-(unsigned)adjustLabelPosition:(unsigned)arg1 forAxisValue:(double)arg2 intercept:(double)arg3 ;
-(id)legalChartLabelPositions;
-(unsigned)filterChartLabelPosition:(unsigned)arg1 ;
-(id)genericToSpecificPropertyMap;
-(BOOL)supportsBarGap;
-(id)userInterfaceNameForLabelPosition:(id)arg1 ;
-(double)beginValueForSeries:(unsigned long long)arg1 index:(unsigned long long)arg2 unitSpaceIntercept:(double)arg3 relativelyPositive:(BOOL)arg4 valueAxis:(id)arg5 ;
-(double)beginDataValueForSeries:(id)arg1 groupIndex:(unsigned long long)arg2 valueAxisID:(id)arg3 ;
-(unsigned long long)seriesIndexForDrawing:(id)arg1 ;
-(unsigned long long)numberOfSeriesForCalculatingBarWidth:(id)arg1 ;
-(id)g_genericToSpecificPropertyMapStackedColumn;
-(id)init;
@end

