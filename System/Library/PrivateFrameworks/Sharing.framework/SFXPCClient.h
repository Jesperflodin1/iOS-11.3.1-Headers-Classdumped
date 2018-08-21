/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:07 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCConnectionDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection, NSString;

@interface SFXPCClient : NSObject <NSXPCConnectionDelegate> {

	BOOL _activateCalled;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSXPCConnection* _connection;

}

@property (nonatomic,retain) NSXPCConnection * connection;                            //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id)exportedInterface;
-(void)_invalidate;
-(void)invalidated;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(BOOL)arg3 ;
-(id)remoteObjectInterface;
-(id)machServiceName;
-(void)connectionEstablished;
-(void)getRemoteObjectProxyOnQueue:(/*^block*/id)arg1 ;
-(BOOL)shouldEscapeXpcTryCatch;
-(void)onqueue_activate;
-(void)onqueue_invalidate;
-(void)onqueue_getRemoteObjectProxyOnQueue:(/*^block*/id)arg1 ;
-(void)onqueue_connectionEstablished;
-(void)onqueue_connectionInterrupted;
-(void)onqueue_connectionInvalidated;
-(void)onqueue_ensureXPCStarted;
-(void)onqueue_invalidated;
-(void)onqueue_interrupted;
-(void)onqueue_ensureConnectionEstablished;
-(void)interrupted;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_activate;
@end

