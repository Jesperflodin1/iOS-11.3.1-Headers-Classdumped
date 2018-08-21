//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WDChartSeries.h"

@class NSArray, UIColor;

@interface WDMinMaxSeries : WDChartSeries
{
    NSArray *_dataPoints;
    long long _maxPointStyle;
    long long _minPointStyle;
    UIColor *_pointColor;
    UIColor *_fillColor;
    double _pointRadius;
    double _pointLineWidth;
}

@property(nonatomic) double pointLineWidth; // @synthesize pointLineWidth=_pointLineWidth;
@property(nonatomic) double pointRadius; // @synthesize pointRadius=_pointRadius;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(retain, nonatomic) UIColor *pointColor; // @synthesize pointColor=_pointColor;
@property(nonatomic) long long minPointStyle; // @synthesize minPointStyle=_minPointStyle;
@property(nonatomic) long long maxPointStyle; // @synthesize maxPointStyle=_maxPointStyle;
- (void).cxx_destruct;
- (id)_getPointsFromDataSet;
- (_Bool)_shouldUseCenterPointForMin:(struct CGPoint)arg1 max:(struct CGPoint)arg2;
- (void)_renderChartPoint:(id)arg1 atPosition:(struct CGPoint)arg2 context:(struct CGContext *)arg3 shouldApplyToCurrentState:(_Bool)arg4;
- (void)_enumerateChartPointsWithMinMaxHandler:(CDUnknownBlockType)arg1 centerPointHandler:(CDUnknownBlockType)arg2;
- (void)_addPointClipToContext:(struct CGContext *)arg1;
- (void)_renderPointMarkersInContext:(struct CGContext *)arg1;
- (void)renderFillInContext:(struct CGContext *)arg1;
- (void)renderChartInContext:(struct CGContext *)arg1;
- (void)prepareForRenderingWithSize:(struct CGSize)arg1 minXValue:(id)arg2 maxXValue:(id)arg3 minYValue:(id)arg4 maxYValue:(id)arg5 insets:(struct UIEdgeInsets)arg6 dataSet:(id)arg7;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
