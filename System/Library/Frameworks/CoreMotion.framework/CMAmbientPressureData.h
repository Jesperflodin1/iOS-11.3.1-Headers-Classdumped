/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMLogItem.h>

@interface CMAmbientPressureData : CMLogItem {

	id _internal;

}

@property (nonatomic,readonly) SCD_Struct_CM11 ambientPressure; 
+(BOOL)supportsSecureCoding;
-(id)initWithPressure:(SCD_Struct_CM10)arg1 andTimestamp:(double)arg2 ;
-(SCD_Struct_CM11)ambientPressure;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

