/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class BRCDeadlineScheduler, NSString, NSObject;

@interface BRCDeadlineSource : NSObject {

	long long _deadline;
	BRCDeadlineScheduler* _scheduler;
	int _suspendCount;
	BOOL _cancelled;
	BOOL _signaled;
	NSString* _name;
	/*^block*/id _eventHandler;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) id eventHandler;                                   //@synthesize eventHandler=_eventHandler - In the implementation block
-(void)cancel;
-(id)description;
-(void)suspend;
-(void)resume;
-(void)signal;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setEventHandler:(id)arg1 ;
-(id)eventHandler;
-(id)initWithScheduler:(id)arg1 name:(id)arg2 ;
-(void)signalWithDeadline:(long long)arg1 ;
-(BOOL)willRunEvenHandler;
-(void)runEventHandler;
@end

