/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:32 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, _UIRemoteViewService, NSObject, NSError, _UIAsyncInvocation, BKSProcessAssertion, NSXPCConnection;

@interface _UIViewServiceInterfaceConnectionRequest : NSObject {

	/*^block*/id _connectionHandler;
	NSString* _serviceBundleIdentifier;
	_UIRemoteViewService* _service;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _isCancelled;
	NSError* _cancellationError;
	_UIAsyncInvocation* _cancellationInvocation;
	int _sessionRequestNotifyToken;
	BKSProcessAssertion* _serviceProcessAssertion;
	NSXPCConnection* _serviceSessionConnection;
	int __automatic_invalidation_retainCount;
	BOOL __automatic_invalidation_invalidated;

}
+(id)_connectToViewServiceWithBundleIdentifier:(id)arg1 service:(id)arg2 connectionHandler:(/*^block*/id)arg3 ;
+(id)connectToViewServiceWithBundleIdentifier:(id)arg1 connectionHandler:(/*^block*/id)arg2 ;
+(id)connectToViewService:(id)arg1 connectionHandler:(/*^block*/id)arg2 ;
-(oneway void)release;
-(id)retain;
-(void)dealloc;
-(unsigned long long)retainCount;
-(BOOL)_isDeallocating;
-(int)__automatic_invalidation_logic;
-(BOOL)_tryRetain;
-(void)_cancelUnconditionallyThen:(/*^block*/id)arg1 ;
-(void)_cancelWithError:(id)arg1 ;
-(void)_launchService;
-(void)_createPlugInProcessAssertion;
-(void)_createProcessAssertion;
-(void)_createAndEstablishConnection;
-(void)_createProcessAssertionForPID:(int)arg1 orBundleIdentifier:(id)arg2 acquiredHandler:(/*^block*/id)arg3 ;
-(void)_establishConnection;
-(void)_didConnectToService;
@end
