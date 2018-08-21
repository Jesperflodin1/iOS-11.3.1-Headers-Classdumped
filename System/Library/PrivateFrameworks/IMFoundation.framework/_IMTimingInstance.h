/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:21 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _IMTimingInstance : NSObject {

	double _startTiming;
	double _stopTiming;
	double _totalTime;
	BOOL _isRunning;

}

@property (assign,nonatomic) double totalTime;              //@synthesize totalTime=_totalTime - In the implementation block
@property (assign,nonatomic) BOOL isRunning;                //@synthesize isRunning=_isRunning - In the implementation block
+(id)createTimingInstanceWithStartTime:(float)arg1 ;
-(void)setTotalTime:(double)arg1 ;
-(double)totalTime;
-(id)init;
-(id)description;
-(BOOL)isRunning;
-(void)startUsingTime:(double)arg1 ;
-(void)stopUsingTime:(double)arg1 ;
-(void)setIsRunning:(BOOL)arg1 ;
@end

