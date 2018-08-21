/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HKHeartRateSummaryStatistics.h>

@class HKHeartRateSummaryReading;

@interface HKHeartRateSummaryBreatheStatistics : HKHeartRateSummaryStatistics {

	HKHeartRateSummaryReading* _finalReading;

}

@property (setter=_setFinalReading:,nonatomic,retain) HKHeartRateSummaryReading * finalReading;              //@synthesize finalReading=_finalReading - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(HKHeartRateSummaryReading *)finalReading;
-(void)_setFinalReading:(id)arg1 ;
@end

