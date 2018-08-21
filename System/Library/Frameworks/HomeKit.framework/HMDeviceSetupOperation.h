/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:33 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>
#import <libobjc.A.dylib/HMDeviceSetupSessionDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class NSError, HMAccessory, TRSession, NSObject, HMDeviceSetupSession, NSString;

@interface HMDeviceSetupOperation : NSOperation <HMDeviceSetupSessionDelegate, HMFLogging> {

	BOOL _executing;
	BOOL _finished;
	NSError* _error;
	HMAccessory* _accessory;
	TRSession* _session;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	HMDeviceSetupSession* _setupSession;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> propertyQueue;              //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (nonatomic,readonly) HMDeviceSetupSession * setupSession;                     //@synthesize setupSession=_setupSession - In the implementation block
@property (getter=isExecuting) BOOL executing;                                          //@synthesize executing=_executing - In the implementation block
@property (getter=isFinished) BOOL finished;                                            //@synthesize finished=_finished - In the implementation block
@property (__weak,readonly) TRSession * session;                                        //@synthesize session=_session - In the implementation block
@property (readonly) NSError * error;                                                   //@synthesize error=_error - In the implementation block
@property (readonly) HMAccessory * accessory;                                           //@synthesize accessory=_accessory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)logCategory;
-(void)setFinished:(BOOL)arg1 ;
-(id)init;
-(void)cancel;
-(void)start;
-(TRSession *)session;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(void)finish;
-(void)cancelWithError:(id)arg1 ;
-(BOOL)isAsynchronous;
-(id)initWithSession:(id)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(HMDeviceSetupSession *)setupSession;
-(void)setupSession:(id)arg1 didReceiveExchangeData:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_reallyStart;
-(id)logIdentifier;
-(HMAccessory *)accessory;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(void)setAccessory:(HMAccessory *)arg1 ;
-(void)setupSession:(id)arg1 didCloseWithError:(id)arg2 ;
-(void)setExecuting:(BOOL)arg1 ;
@end
