/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:41 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface WBSCyclerOperation : NSObject {

	unsigned long long _numberOfRemainingAttempts;
	float _backoffRatio;
	BOOL _finished;
	BOOL _executing;
	/*^block*/id _block;
	double _nextBackoffTimeInterval;

}

@property (nonatomic,copy) id block;                                           //@synthesize block=_block - In the implementation block
@property (getter=isFinished,nonatomic,readonly) BOOL finished;                //@synthesize finished=_finished - In the implementation block
@property (getter=isExecuting,nonatomic,readonly) BOOL executing;              //@synthesize executing=_executing - In the implementation block
@property (nonatomic,readonly) double nextBackoffTimeInterval;                 //@synthesize nextBackoffTimeInterval=_nextBackoffTimeInterval - In the implementation block
-(id)init;
-(id)block;
-(void)setBlock:(id)arg1 ;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(id)initWithMaximumNumberOfAttempts:(unsigned long long)arg1 backoffRatio:(float)arg2 ;
-(double)nextBackoffTimeInterval;
-(void)executeWithCompletionHandler:(/*^block*/id)arg1 ;
@end

