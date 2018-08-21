/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:07 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue, WebBookmarksXPCConnectionDelegate;
@class NSMutableDictionary, NSObject;

@interface WebBookmarksXPCConnection : NSObject {

	NSMutableDictionary* _messageHandlers;
	NSMutableDictionary* _entitlementLookupCache;
	NSObject*<OS_xpc_object> _connection;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	id<WebBookmarksXPCConnectionDelegate> _delegate;

}

@property (nonatomic,readonly) NSObject*<OS_xpc_object> connection;                       //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) id<WebBookmarksXPCConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<WebBookmarksXPCConnectionDelegate>)delegate;
-(void)setDelegate:(id<WebBookmarksXPCConnectionDelegate>)arg1 ;
-(NSObject*<OS_xpc_object>)connection;
-(void)sendMessage:(id)arg1 withReplyHandler:(/*^block*/id)arg2 ;
-(void)_handleMessage:(id)arg1 ;
-(void)setMessageHandlers:(id)arg1 ;
-(BOOL)hasBoolEntitlement:(id)arg1 ;
-(id)messageWithName:(const char*)arg1 ;
-(id)initClientForMachService:(const char*)arg1 ;
-(void)sendMessage:(id)arg1 ;
-(id)initWithConnection:(id)arg1 ;
-(void)setHandler:(/*^block*/id)arg1 forMessageNamed:(const char*)arg2 ;
@end
