/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:22 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSRecursiveLock, NSObject, Protocol, NSString;

@interface IMRemoteObjectInternal : NSObject {

	NSRecursiveLock* _lock;
	NSObject*<OS_xpc_object> _connection;
	NSObject*<OS_dispatch_queue> _queue;
	long long _deathPostPredicate;
	Protocol* _protocol;
	NSString* _portName;
	NSString* _processName;
	BOOL _willBeTerminated;
	int _pid;

}
@end

