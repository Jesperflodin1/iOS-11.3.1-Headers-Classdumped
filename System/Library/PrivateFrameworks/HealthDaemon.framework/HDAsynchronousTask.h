/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:38 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface HDAsynchronousTask : NSObject {

	BOOL _hasTimeout;
	/*^block*/id _handler;
	NSObject*<OS_dispatch_queue> _queue;
	double _timeout;
	/*^block*/id _checkpointHandler;

}

@property (nonatomic,copy) id handler;                                        //@synthesize handler=_handler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) double timeout;                                  //@synthesize timeout=_timeout - In the implementation block
@property (assign,nonatomic) BOOL hasTimeout;                                 //@synthesize hasTimeout=_hasTimeout - In the implementation block
@property (nonatomic,copy) id checkpointHandler;                              //@synthesize checkpointHandler=_checkpointHandler - In the implementation block
-(void)setTimeout:(double)arg1 ;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(double)timeout;
-(void)setHasTimeout:(BOOL)arg1 ;
-(void)setCheckpointHandler:(id)arg1 ;
-(id)checkpointHandler;
-(BOOL)hasTimeout;
@end

