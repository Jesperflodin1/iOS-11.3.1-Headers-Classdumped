/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:37 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NAScheduler;
@class MTXPCConnectionInfo, NSXPCConnection, NSDate;

@interface MTXPCConnectionProvider : NSObject {

	MTXPCConnectionInfo* _info;
	/*^block*/id _errorHandler;
	/*^block*/id _reconnectHandler;
	id<NAScheduler> _serializer;
	NSXPCConnection* _connection;
	NSDate* _lastLifecycleNotification;

}

@property (nonatomic,retain) id<NAScheduler> serializer;                      //@synthesize serializer=_serializer - In the implementation block
@property (nonatomic,retain) MTXPCConnectionInfo * info;                      //@synthesize info=_info - In the implementation block
@property (nonatomic,copy) id errorHandler;                                   //@synthesize errorHandler=_errorHandler - In the implementation block
@property (nonatomic,copy) id reconnectHandler;                               //@synthesize reconnectHandler=_reconnectHandler - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                    //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSDate * lastLifecycleNotification;              //@synthesize lastLifecycleNotification=_lastLifecycleNotification - In the implementation block
+(id)providerWithConnectionInfo:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
+(id)providerWithConnectionInfo:(id)arg1 reconnectHandler:(/*^block*/id)arg2 ;
-(void)setErrorHandler:(id)arg1 ;
-(id)errorHandler;
-(void)dealloc;
-(id)description;
-(MTXPCConnectionInfo *)info;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)setInfo:(MTXPCConnectionInfo *)arg1 ;
-(id)_remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id<NAScheduler>)serializer;
-(void)setSerializer:(id<NAScheduler>)arg1 ;
-(id)initWithConnectionInfo:(id)arg1 errorHandler:(/*^block*/id)arg2 reconnectHandler:(/*^block*/id)arg3 ;
-(void)didReceiveLifecycleNotification;
-(void)_didInterruptConnection;
-(void)_didInvalidateConnection;
-(void)_didTerminateConnection;
-(NSDate *)lastLifecycleNotification;
-(void)_retryConnectionWithRecover:(BOOL)arg1 ;
-(void)setLastLifecycleNotification:(NSDate *)arg1 ;
-(id)reconnectHandler;
-(void)performRemoteBlock:(/*^block*/id)arg1 withErrorHandler:(/*^block*/id)arg2 ;
-(id)_retryConnection;
-(void)performRemoteBlock:(/*^block*/id)arg1 ;
-(void)setReconnectHandler:(id)arg1 ;
@end

