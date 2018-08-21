/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DChartStackedColumnSceneObject.h>

@interface TSCH3DChartStackedBarSceneObject : TSCH3DChartStackedColumnSceneObject
+(BOOL)isHorizontalChart;
+(id)chartSeriesType;
+(TSCH3DScenePart)partWithEnumerator:(id)arg1 layoutSettings:(SCD_Struct_TS458)arg2 ;
+(BOOL)isStacked;
-(void)updateLightingEffectsState:(id)arg1 scene:(id)arg2 ;
-(tvec2<float>)labelObjectSpacePosition:(unsigned)arg1 axisValue:(double)arg2 intercept:(double)arg3 ;
@end
