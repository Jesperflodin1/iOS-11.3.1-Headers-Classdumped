/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMLogItem.h>

@class CMAttitude;

@interface CMDeviceMotion : CMLogItem {

	id _internal;

}

@property (nonatomic,readonly) BOOL doingYawCorrection; 
@property (nonatomic,readonly) BOOL doingBiasEstimation; 
@property (nonatomic,readonly) int magneticFieldCalibrationLevel; 
@property (nonatomic,readonly) CMAttitude * attitude; 
@property (nonatomic,readonly) SCD_Struct_CM4 rotationRate; 
@property (nonatomic,readonly) SCD_Struct_CM4 gravity; 
@property (nonatomic,readonly) SCD_Struct_CM4 userAcceleration; 
@property (nonatomic,readonly) SCD_Struct_CM7 magneticField; 
@property (nonatomic,readonly) double heading; 
+(BOOL)supportsSecureCoding;
-(id)initWithDeviceMotion:(SCD_Struct_CM6)arg1 andTimestamp:(double)arg2 ;
-(int)magneticFieldCalibrationLevel;
-(BOOL)doingYawCorrection;
-(BOOL)doingBiasEstimation;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(double)heading;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CMAttitude *)attitude;
-(SCD_Struct_CM7)magneticField;
-(SCD_Struct_CM4)gravity;
-(SCD_Struct_CM4)userAcceleration;
-(SCD_Struct_CM4)rotationRate;
@end

