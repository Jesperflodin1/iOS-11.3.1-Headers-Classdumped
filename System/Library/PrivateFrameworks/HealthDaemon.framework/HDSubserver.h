/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:40 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDDiagnosticObject.h>

@protocol OS_dispatch_queue;
@class HDDaemon, HDHealthStoreServer, HDXPCClient, HDProfile, NSObject, NSString;

@interface HDSubserver : NSObject <HDDiagnosticObject> {

	HDDaemon* _daemon;
	HDHealthStoreServer* _server;
	HDXPCClient* _client;
	HDProfile* _profile;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,__weak,readonly) HDDaemon * daemon;                         //@synthesize daemon=_daemon - In the implementation block
@property (nonatomic,__weak,readonly) HDHealthStoreServer * server;              //@synthesize server=_server - In the implementation block
@property (nonatomic,readonly) HDXPCClient * client;                             //@synthesize client=_client - In the implementation block
@property (nonatomic,readonly) HDProfile * profile;                              //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;               //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HDDaemon *)daemon;
-(void)invalidate;
-(HDHealthStoreServer *)server;
-(NSObject*<OS_dispatch_queue>)queue;
-(HDProfile *)profile;
-(HDXPCClient *)client;
-(id)diagnosticDescription;
-(id)initWithParentServer:(id)arg1 ;
-(void)requirePrivateHealthKitEntitlementUsingBlock:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)requireEntitlement:(id)arg1 usingBlock:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
@end

