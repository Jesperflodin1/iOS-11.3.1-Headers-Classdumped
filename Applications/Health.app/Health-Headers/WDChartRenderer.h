//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WDChartDataGroupDataSource.h"

@class NSDate, NSNumber, NSObject<OS_dispatch_queue>, NSOperationQueue, NSString, UIImage, WDChartDataGroup;

@interface WDChartRenderer : NSObject <WDChartDataGroupDataSource>
{
    NSObject<OS_dispatch_queue> *_renderQueue;
    NSOperationQueue *_operationQueue;
    _Bool _finishedLoadingData;
    id <WDChartRendererDataSource> _dataSource;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSDate *_minXValue;
    NSDate *_maxXValue;
    NSNumber *_minYValue;
    NSNumber *_maxYValue;
    NSNumber *_maxYValueInData;
    long long _decimalPrecision;
    WDChartDataGroup *_dataGroup;
    long long _dataState;
    UIImage *_chartImage;
    UIImage *_chartFillImage;
    UIImage *_chartSecondaryFillImage;
    struct UIEdgeInsets _chartInsets;
}

@property(readonly, nonatomic) _Bool finishedLoadingData; // @synthesize finishedLoadingData=_finishedLoadingData;
@property(readonly, nonatomic) UIImage *chartSecondaryFillImage; // @synthesize chartSecondaryFillImage=_chartSecondaryFillImage;
@property(readonly, nonatomic) UIImage *chartFillImage; // @synthesize chartFillImage=_chartFillImage;
@property(readonly, nonatomic) UIImage *chartImage; // @synthesize chartImage=_chartImage;
@property(readonly, nonatomic) long long dataState; // @synthesize dataState=_dataState;
@property(readonly, nonatomic) WDChartDataGroup *dataGroup; // @synthesize dataGroup=_dataGroup;
@property(readonly, nonatomic) long long decimalPrecision; // @synthesize decimalPrecision=_decimalPrecision;
@property(readonly, nonatomic) NSNumber *maxYValueInData; // @synthesize maxYValueInData=_maxYValueInData;
@property(readonly, nonatomic) NSNumber *maxYValue; // @synthesize maxYValue=_maxYValue;
@property(readonly, nonatomic) NSNumber *minYValue; // @synthesize minYValue=_minYValue;
@property(nonatomic) struct UIEdgeInsets chartInsets; // @synthesize chartInsets=_chartInsets;
@property(retain, nonatomic) NSDate *maxXValue; // @synthesize maxXValue=_maxXValue;
@property(retain, nonatomic) NSDate *minXValue; // @synthesize minXValue=_minXValue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(readonly, nonatomic) __weak id <WDChartRendererDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (id)dataGroup:(id)arg1 pointForSetAtIndex:(unsigned long long)arg2 pointIndex:(unsigned long long)arg3;
- (unsigned long long)dataGroup:(id)arg1 numberOfPointsInSetAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfDataSetsInGroup:(id)arg1;
- (id)_getDataPointAtIndex:(unsigned long long)arg1 forSeriesAtIndex:(unsigned long long)arg2;
- (unsigned long long)_getNumberOfDataPointsForSeriesAtIndex:(unsigned long long)arg1;
- (id)_getSeriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)_getNumberOfSeries;
- (void)_drawSeriesSecondaryFill:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)_drawSeriesFill:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)_drawSeries:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)_prepareSeriesForDrawing:(id)arg1 chartSize:(struct CGSize)arg2 minXValue:(id)arg3 maxXValue:(id)arg4 minYValue:(id)arg5 maxYValue:(id)arg6 insets:(struct UIEdgeInsets)arg7 dataGroup:(id)arg8;
- (id)_getChartSeries;
- (void)_nts_adjustMinMaxValues;
- (id)unitController;
- (id)displayType;
- (void)_renderChartWithSize:(struct CGSize)arg1 renderInsets:(struct UIEdgeInsets)arg2 viewScale:(double)arg3 shouldRenderFillSeparately:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
@property(readonly, nonatomic) _Bool shouldInvertAxis;
- (void)_reloadData:(CDUnknownBlockType)arg1;
- (void)_clearCachedImages;
- (void)renderChartWithSize:(struct CGSize)arg1 renderInsets:(struct UIEdgeInsets)arg2 viewScale:(double)arg3 shouldRenderFillSeparately:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (_Bool)dataForChartRendererIsFinishedLoading;
- (id)initWithClientQueue:(id)arg1 dataSource:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
