/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:39 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDHealthStoreEndpointInterface.h>
#import <libobjc.A.dylib/_HKXPCExportable.h>

@protocol OS_dispatch_queue;
@class HDDaemon, HDXPCClient, NSObject, HDHealthStoreServer, NSString;

@interface HDHealthStoreEndpoint : NSObject <HDHealthStoreEndpointInterface, _HKXPCExportable> {

	HDDaemon* _daemon;
	HDXPCClient* _client;
	NSObject*<OS_dispatch_queue> _queue;
	HDHealthStoreServer* _server;

}

@property (nonatomic,__weak,readonly) HDDaemon * daemon;                        //@synthesize daemon=_daemon - In the implementation block
@property (nonatomic,readonly) HDXPCClient * client;                            //@synthesize client=_client - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) HDHealthStoreServer * server;                    //@synthesize server=_server - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)endpointWithClient:(id)arg1 healthDaemon:(id)arg2 ;
+(BOOL)_isDeviceSupportedWithBehavior:(id)arg1 error:(id*)arg2 ;
+(BOOL)_isClientEntitled:(id)arg1 error:(id*)arg2 ;
-(HDDaemon *)daemon;
-(void)invalidate;
-(HDHealthStoreServer *)server;
-(id)exportedInterface;
-(NSObject*<OS_dispatch_queue>)queue;
-(HDXPCClient *)client;
-(id)remoteInterface;
-(void)connectionInvalidated;
-(id)initWithClient:(id)arg1 daemon:(id)arg2 ;
-(void)remote_serverForConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

