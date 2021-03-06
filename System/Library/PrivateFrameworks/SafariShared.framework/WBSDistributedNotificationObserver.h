/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:41 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSString, NSObject;

@interface WBSDistributedNotificationObserver : NSObject {

	NSString* _notificationName;
	long long _notificationType;
	BOOL _observing;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_source> _timeoutTimer;
	/*^block*/id _notificationHandler;
	/*^block*/id _timeoutHandler;

}

@property (copy) id notificationHandler; 
@property (copy) id timeoutHandler; 
-(id)init;
-(id)initWithNotificationName:(id)arg1 type:(long long)arg2 ;
-(void)_scheduleTimeoutTimerWithTimeout:(double)arg1 ;
-(void)_didReceiveNotification:(id)arg1 ;
-(void)_invalidateTimeoutTimer;
-(void)_didTimeOut;
-(id)initWithNotificationName:(id)arg1 ;
-(void)setNotificationHandler:(id)arg1 ;
-(id)notificationHandler;
-(void)setTimeoutHandler:(id)arg1 ;
-(id)timeoutHandler;
-(void)waitWithTimeout:(double)arg1 ;
-(void)stopWaiting;
-(void)_startObserving;
-(void)_stopObserving;
@end

