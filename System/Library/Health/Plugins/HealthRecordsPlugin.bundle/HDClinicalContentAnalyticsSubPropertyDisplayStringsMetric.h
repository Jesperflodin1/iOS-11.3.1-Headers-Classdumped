/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthRecordsPlugin/HDClinicalContentAnalyticsSubPropertyMetric.h>

@class HDClinicalContentAnalyticsDisplayStringsMetric;

@interface HDClinicalContentAnalyticsSubPropertyDisplayStringsMetric : HDClinicalContentAnalyticsSubPropertyMetric {

	HDClinicalContentAnalyticsDisplayStringsMetric* _metric;
	long long _extractionRulesVersion;
	long long _resourceType;
	long long _property;

}
-(id)initWithDisplayStringsMetric:(id)arg1 extractionRulesVersion:(long long)arg2 resourceType:(long long)arg3 property:(long long)arg4 ;
-(void)addDisplayStringsMetricWithBlock:(/*^block*/id)arg1 ;
-(void)addDisplayStringsMetricForSubProperty:(long long)arg1 coding:(id)arg2 ;
@end

