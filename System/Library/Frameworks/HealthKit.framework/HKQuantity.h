/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:29 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HKUnit;

@interface HKQuantity : NSObject <NSSecureCoding, NSCopying> {

	double _value;
	HKUnit* _unit;

}

@property (getter=_unit,nonatomic,readonly) HKUnit * unit;              //@synthesize unit=_unit - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)quantityWithUnit:(id)arg1 doubleValue:(double)arg2 ;
+(id)_quantityWithBeatsPerMinute:(double)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)compare:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_initWithUnit:(id)arg1 doubleValue:(double)arg2 ;
-(id)_foundationMeasurement;
-(BOOL)hk_isLessThanQuantity:(id)arg1 ;
-(BOOL)hk_isGreaterThanQuantity:(id)arg1 ;
-(double)_beatsPerMinute;
-(double)doubleValueForUnit:(id)arg1 ;
-(id)_unit;
-(BOOL)isCompatibleWithUnit:(id)arg1 ;
-(BOOL)_isZero;
-(id)_quantityByAddingQuantity:(id)arg1 ;
@end

