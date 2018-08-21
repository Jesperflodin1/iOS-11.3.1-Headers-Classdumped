/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthRecordsPlugin/HDClinicalIngestionAnalyticsMetricKey.h>
#import <HealthRecordsPlugin/HDClinicalIngestionAnalyticsMetricElement.h>

@class HDClinicalIngestionAnalyticsMetricKey, NSString;

@interface HDClinicalIngestionRequestFailureMetricElement : HDClinicalIngestionAnalyticsMetricKey <HDClinicalIngestionAnalyticsMetricElement> {

	unsigned long long _statusCode;

}

@property (nonatomic,copy,readonly) HDClinicalIngestionAnalyticsMetricKey * keyElement; 
@property (nonatomic,readonly) unsigned long long statusCode;                                        //@synthesize statusCode=_statusCode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsString;
-(id)initWithHost:(id)arg1 resourceType:(long long)arg2 interactionType:(long long)arg3 statusCode:(unsigned long long)arg4 ;
-(HDClinicalIngestionAnalyticsMetricKey *)keyElement;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)statusCode;
@end
