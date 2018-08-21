/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:01 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection, NSLock, NSXPCListenerEndpoint;

@interface FLDaemon : NSObject {

	NSXPCConnection* _conn;
	NSLock* _connLock;
	NSXPCListenerEndpoint* _daemonXPCEndpoint;

}

@property (nonatomic,retain) NSXPCListenerEndpoint * daemonXPCEndpoint;              //@synthesize daemonXPCEndpoint=_daemonXPCEndpoint - In the implementation block
+(id)sharedInstance;
+(id)daemonWithErrorHandler:(/*^block*/id)arg1 ;
-(id)init;
-(id)connection;
-(id)daemonWithErrorHandler:(/*^block*/id)arg1 ;
-(id)remoteObjectInterface;
-(void)setDaemonXPCEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(id)synchronousDaemonWithErrorHandler:(/*^block*/id)arg1 ;
-(NSXPCListenerEndpoint *)daemonXPCEndpoint;
-(void)invalidateConnection;
@end
