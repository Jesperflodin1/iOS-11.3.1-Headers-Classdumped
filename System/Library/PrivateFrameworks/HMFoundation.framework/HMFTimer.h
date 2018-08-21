/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:36 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@protocol HMFTimerDelegate, OS_dispatch_queue, OS_dispatch_source;
@class NSObject;

@interface HMFTimer : HMFObject {

	double _timeInterval;
	unsigned long long _leeway;
	BOOL _running;
	id<HMFTimerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSObject*<OS_dispatch_source> _timer;
	unsigned long long _options;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;              //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_source> timer;                   //@synthesize timer=_timer - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                            //@synthesize options=_options - In the implementation block
@property (assign,getter=isRunning,nonatomic) BOOL running;                           //@synthesize running=_running - In the implementation block
@property (__weak) id<HMFTimerDelegate> delegate;                                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) double timeInterval;                                   //@synthesize timeInterval=_timeInterval - In the implementation block
@property (nonatomic,readonly) unsigned long long leeway;                             //@synthesize leeway=_leeway - In the implementation block
+(id)shortDescription;
-(id)init;
-(id<HMFTimerDelegate>)delegate;
-(void)setDelegate:(id<HMFTimerDelegate>)arg1 ;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(BOOL)isRunning;
-(void)suspend;
-(unsigned long long)options;
-(void)resume;
-(double)timeInterval;
-(id)shortDescription;
-(void)setRunning:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_source>)timer;
-(void)fire;
-(unsigned long long)leeway;
-(void)_suspend;
-(void)_resume;
-(void)_fire;
-(void)_kick;
-(id)initWithTimeInterval:(double)arg1 options:(unsigned long long)arg2 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(void)kick;
-(void)_handleExpiration;
@end

