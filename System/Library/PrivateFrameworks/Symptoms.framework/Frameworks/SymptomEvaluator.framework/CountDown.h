/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:01 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSObject, NSDate;

@interface CountDown : NSObject {

	NSObject*<OS_dispatch_source> timer;
	unsigned count;
	NSDate* _startTime;

}

@property (nonatomic,readonly) NSDate * startTime;              //@synthesize startTime=_startTime - In the implementation block
-(id)init;
-(void)stop;
-(NSDate *)startTime;
-(void)goOffNext:(unsigned long long)arg1 fromTime:(id)arg2 forEpoch:(id)arg3 timesTotal:(unsigned long long)arg4 onQueue:(id)arg5 withIterationBlock:(/*^block*/id)arg6 completionBlock:(/*^block*/id)arg7 ;
@end

