/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:00 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NanoRegistry/NanoRegistry-Structs.h>
@class NSString;

@interface NRServerRequestReporter : NSObject {

	BOOL _submitted;
	NSString* _requestType;
	mach_timebase_info _timebaseInfo;
	double _startTime;

}

@property (nonatomic,retain) NSString * requestType;                       //@synthesize requestType=_requestType - In the implementation block
@property (assign,nonatomic) mach_timebase_info timebaseInfo;              //@synthesize timebaseInfo=_timebaseInfo - In the implementation block
@property (assign,nonatomic) double startTime;                             //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) BOOL submitted;                               //@synthesize submitted=_submitted - In the implementation block
-(NSString *)requestType;
-(void)setRequestType:(NSString *)arg1 ;
-(void)dealloc;
-(void)setStartTime:(double)arg1 ;
-(double)startTime;
-(id)initWithRequestType:(id)arg1 ;
-(double)abs_to_seconds:(unsigned long long)arg1 ;
-(mach_timebase_info)timebaseInfo;
-(unsigned long long)abs_to_nanos:(unsigned long long)arg1 ;
-(void)requestCompletedWithErrorCode:(unsigned)arg1 andDuration:(double)arg2 ;
-(void)setTimebaseInfo:(mach_timebase_info)arg1 ;
-(void)requestCompletedWithErrorCode:(unsigned)arg1 ;
-(void)requestTimedOut;
-(void)setSubmitted:(BOOL)arg1 ;
-(BOOL)submitted;
@end
