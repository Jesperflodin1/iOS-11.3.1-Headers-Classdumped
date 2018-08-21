/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:44 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>
#import <AVFoundation/AVObjectMonitoring.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class AVWeakReference, NSObject, NSArray, NSString;

@interface AVWaitForNotificationOrDeallocationOperation : NSOperation <AVObjectMonitoring> {

	AVWeakReference* _weakReferenceToSelf;
	AVWeakReference* _weakReferenceToMonitoredObject;
	NSObject*<OS_dispatch_queue> _operationStateSerializationQueue;
	NSObject*<OS_dispatch_semaphore> _monitoringIsFinishedSemaphore;
	NSArray* _notificationNames;
	BOOL _registeredForObjectNotifications;
	BOOL _started;
	BOOL _finished;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_registerForObjectNotifications;
-(void)_balanceMonitoringIsFinishedSemaphore;
-(void)_unregisterForObjectNotifications;
-(void)_signalMonitoringIsFinishedIfNeeded;
-(void)_waitUntilFinishedIfNeeded;
-(void)monitoredObjectHasDeparted;
-(id)initWithObject:(id)arg1 notificationNames:(id)arg2 ;
-(id)_monitoredObject;
-(void)cancel;
-(void)dealloc;
-(void)main;
-(void)finalize;
@end

