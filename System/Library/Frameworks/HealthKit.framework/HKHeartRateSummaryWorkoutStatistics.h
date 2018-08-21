/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HKHeartRateSummaryStatistics.h>

@class HKQuantity;

@interface HKHeartRateSummaryWorkoutStatistics : HKHeartRateSummaryStatistics {

	HKQuantity* _averageHeartRate;
	HKQuantity* _maximumHeartRate;

}

@property (setter=_setAverageHeartRate:,nonatomic,retain) HKQuantity * averageHeartRate;              //@synthesize averageHeartRate=_averageHeartRate - In the implementation block
@property (setter=_setMaximumHeartRate:,nonatomic,retain) HKQuantity * maximumHeartRate;              //@synthesize maximumHeartRate=_maximumHeartRate - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(HKQuantity *)maximumHeartRate;
-(void)_setAverageHeartRate:(id)arg1 ;
-(void)_setMaximumHeartRate:(id)arg1 ;
-(HKQuantity *)averageHeartRate;
@end
