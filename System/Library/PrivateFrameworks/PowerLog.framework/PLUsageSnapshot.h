/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:06 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PowerLog.framework/PowerLog
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface PLUsageSnapshot : NSObject {

	NSDate* _timestamp;
	double _cpuUsage;

}

@property (retain) NSDate * timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign) double cpuUsage;                 //@synthesize cpuUsage=_cpuUsage - In the implementation block
-(id)description;
-(NSDate *)timestamp;
-(void)setTimestamp:(NSDate *)arg1 ;
-(double)cpuUsage;
-(void)setCpuUsage:(double)arg1 ;
@end
