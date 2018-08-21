/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CoreSuggestions/CoreSuggestions-Structs.h>
@class NSString, NSXPCInterface, NSObject, NSMutableArray, NSXPCConnection;

@interface SGDaemonConnection : NSObject {

	NSString* _machServiceName;
	NSXPCInterface* _xpcInterface;
	NSObject*<OS_dispatch_queue> _connectLock;
	NSMutableArray* _abortBlocks;
	opaque_pthread_mutex_t _abortLock;
	NSXPCConnection* _xpcConnection;

}
-(void)dealloc;
-(void)disconnect;
-(void)_connectToServer;
-(id)initWithMachServiceName:(id)arg1 xpcInterface:(id)arg2 ;
-(void)_callAbortBlocks;
-(id)waitUntilReturn:(/*^block*/id)arg1 error:(id*)arg2 ;
-(void)addConnectionInterruptedHandler:(/*^block*/id)arg1 ;
-(id)xpcConnection;
@end

