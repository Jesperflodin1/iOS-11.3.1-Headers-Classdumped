/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthRecordsPlugin/HDClinicalContentAnalyticsMetric.h>

@class NSMutableDictionary, NSString;

@interface HDClinicalContentAnalyticsDisplayStringsMetric : NSObject <HDClinicalContentAnalyticsMetric> {

	NSMutableDictionary* _elements;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) unsigned long long count; 
+(unsigned)AWDMetricID;
-(id)analyticsString;
-(void)addDisplayStringsMetricWithExtractionRulesVersion:(long long)arg1 resourceType:(long long)arg2 property:(long long)arg3 displayString:(id)arg4 ;
-(void)accumulateMetricForMedicalRecord:(id)arg1 ;
-(id)codableRepresentationForAWDSubmission;
-(void)addDisplayStringsMetricWithKey:(id)arg1 value:(unsigned long long)arg2 ;
-(id)metricElementValueForKey:(id)arg1 ;
-(id)init;
-(unsigned long long)count;
-(NSString *)debugDescription;
-(id)elements;
-(void)resetMetric;
@end

