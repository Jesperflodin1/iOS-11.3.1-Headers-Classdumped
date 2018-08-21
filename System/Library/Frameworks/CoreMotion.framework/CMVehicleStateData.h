/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CMMotionTimeRange, NSString;

@interface CMVehicleStateData : NSObject <NSSecureCoding, NSCopying> {

	CMMotionTimeRange* fTimeRange;
	NSString* fDeviceId;

}

@property (nonatomic,readonly) CMMotionTimeRange * timeRange; 
@property (nonatomic,readonly) NSString * deviceId; 
+(BOOL)supportsSecureCoding;
-(id)initWithTimeRange:(id)arg1 deviceId:(id)arg2 ;
-(CMMotionTimeRange *)timeRange;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)deviceId;
@end
