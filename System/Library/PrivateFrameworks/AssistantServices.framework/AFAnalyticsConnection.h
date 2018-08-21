/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:45 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFAnalyticsServiceDelegate.h>
#import <libobjc.A.dylib/AFAnalyticsService.h>

@protocol OS_dispatch_queue, OS_dispatch_source, OS_dispatch_group;
@class NSObject, NSXPCConnection, NSString;

@interface AFAnalyticsConnection : NSObject <AFAnalyticsServiceDelegate, AFAnalyticsService> {

	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_source> _idleTimer;
	unsigned long long _numberOfEventsBeingSent;
	NSObject*<OS_dispatch_group> _group;
	BOOL _needsCleanUpConnection;

}

@property (assign) BOOL needsCleanUpConnection;                     //@synthesize needsCleanUpConnection=_needsCleanUpConnection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)_idleTimerFired;
-(void)_connectionInterrupted;
-(void)_connectionInvalidated;
-(void)_stopIdleTimer;
-(void)_cleanUpConnection;
-(oneway void)stageEvents:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_willStartSendingEvents:(id)arg1 ;
-(void)_didFinishSendingEvents:(id)arg1 ;
-(void)_sendEvents:(id)arg1 numberOfRetries:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)_handleFailureCallbackForEvents:(id)arg1 error:(id)arg2 numberOfRetries:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)_handleSuccessCallbackForEvents:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_startIdleTimer;
-(void)_cleanUpConnectionIfNeeded;
-(void)setNeedsCleanUpConnection:(BOOL)arg1 ;
-(BOOL)needsCleanUpConnection;
-(oneway void)flushStagedEventsWithReply:(/*^block*/id)arg1 ;
-(oneway void)beginEventsGrouping;
-(oneway void)endEventsGrouping;
-(oneway void)stageEvent:(id)arg1 ;
-(oneway void)stageEvents:(id)arg1 ;
-(id)_connection;
@end

