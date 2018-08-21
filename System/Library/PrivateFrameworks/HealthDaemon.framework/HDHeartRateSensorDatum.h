/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:41 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDQuantityDatum.h>

@class HKQuantity;

@interface HDHeartRateSensorDatum : HDQuantityDatum {

	long long _heartRateContext;

}

@property (nonatomic,readonly) HKQuantity * heartRate; 
@property (nonatomic,readonly) long long heartRateContext;              //@synthesize heartRateContext=_heartRateContext - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(HKQuantity *)heartRate;
-(id)initWithIdentifier:(id)arg1 dateInterval:(id)arg2 heartRate:(id)arg3 heartRateContext:(long long)arg4 resumeContext:(id)arg5 ;
-(long long)heartRateContext;
@end

