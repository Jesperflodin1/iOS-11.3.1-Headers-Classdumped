/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMLogItem.h>

@class NSNumber;

@interface CMAltitudeData : CMLogItem {

	id _internal;

}

@property (nonatomic,readonly) NSNumber * relativeAltitude; 
@property (nonatomic,readonly) NSNumber * pressure; 
+(BOOL)supportsSecureCoding;
-(id)initWithAltitude:(float)arg1 andTimestamp:(double)arg2 atBaseAltitude:(float)arg3 ;
-(id)initWithTimestamp:(double)arg1 pressure:(float)arg2 relativeAltitude:(float)arg3 ;
-(NSNumber *)relativeAltitude;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)pressure;
@end

