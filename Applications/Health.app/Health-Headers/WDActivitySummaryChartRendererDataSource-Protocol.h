//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, WDActivitySummaryChartRenderer;

@protocol WDActivitySummaryChartRendererDataSource <NSObject>
- (long long)activitySummaryTimeScopeForRenderer:(WDActivitySummaryChartRenderer *)arg1;
- (NSArray *)activitySummaryChartPointsForRenderer:(WDActivitySummaryChartRenderer *)arg1;
- (_Bool)activitySummaryDataSourceIsLoadingForRenderer:(WDActivitySummaryChartRenderer *)arg1;
@end
