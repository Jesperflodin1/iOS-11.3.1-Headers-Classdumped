/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CLSensorRecorderRecordSensorTypeFor : NSObject <NSSecureCoding> {

	int _dataType;
	double _duration;

}

@property (assign) double duration;              //@synthesize duration=_duration - In the implementation block
@property (assign) int dataType;                 //@synthesize dataType=_dataType - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setDataType:(int)arg1 ;
-(int)dataType;
@end

