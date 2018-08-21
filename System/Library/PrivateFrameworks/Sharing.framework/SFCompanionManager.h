/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:06 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SFCompanionServiceManagerClient.h>
#import <libobjc.A.dylib/SFCompanionXPCManagerObserver.h>

@protocol SFCompanionServiceManagerProtocol, OS_dispatch_queue, OS_dispatch_semaphore;
@class NSString, NSMutableDictionary, NSObject;

@interface SFCompanionManager : NSObject <SFCompanionServiceManagerClient, SFCompanionXPCManagerObserver> {

	NSString* _identifier;
	id<SFCompanionServiceManagerProtocol> _managerProxy;
	NSString* _deviceID;
	NSString* _deviceIP;
	NSString* _deviceName;
	NSMutableDictionary* _services;
	NSMutableDictionary* _streamHandlers;
	NSObject*<OS_dispatch_queue> _serviceIdentifierQueue;
	NSObject*<OS_dispatch_semaphore> _managerSemaphore;

}

@property (copy) NSString * identifier;                                              //@synthesize identifier=_identifier - In the implementation block
@property (retain) id<SFCompanionServiceManagerProtocol> managerProxy;               //@synthesize managerProxy=_managerProxy - In the implementation block
@property (copy) NSString * deviceID;                                                //@synthesize deviceID=_deviceID - In the implementation block
@property (copy) NSString * deviceIP;                                                //@synthesize deviceIP=_deviceIP - In the implementation block
@property (copy) NSString * deviceName;                                              //@synthesize deviceName=_deviceName - In the implementation block
@property (retain) NSMutableDictionary * services;                                   //@synthesize services=_services - In the implementation block
@property (retain) NSMutableDictionary * streamHandlers;                             //@synthesize streamHandlers=_streamHandlers - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> serviceIdentifierQueue;              //@synthesize serviceIdentifierQueue=_serviceIdentifierQueue - In the implementation block
@property (retain) NSObject*<OS_dispatch_semaphore> managerSemaphore;                //@synthesize managerSemaphore=_managerSemaphore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serviceManager;
-(id)init;
-(void)dealloc;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setDeviceName:(NSString *)arg1 ;
-(void)xpcManagerConnectionInterrupted;
-(void)xpcManagerDidInvalidate:(id)arg1 ;
-(id)streamDataForIdentifier:(id)arg1 ;
-(void)getStreamsForData:(id)arg1 withStreamHandler:(/*^block*/id)arg2 ;
-(void)supportStreamsWithIdentifier:(id)arg1 withStreamHandler:(/*^block*/id)arg2 ;
-(void)disableStreamSupportForIdentifier:(id)arg1 ;
-(void)streamToService:(id)arg1 withFileHandle:(id)arg2 acceptReply:(/*^block*/id)arg3 ;
-(void)retrieveManagerProxy;
-(void)signalSemaphore;
-(NSObject*<OS_dispatch_queue>)serviceIdentifierQueue;
-(void)setServiceIdentifierQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id<SFCompanionServiceManagerProtocol>)managerProxy;
-(id)serviceForIdentifier:(id)arg1 ;
-(void)setManagerProxy:(id<SFCompanionServiceManagerProtocol>)arg1 ;
-(void)setDeviceIP:(NSString *)arg1 ;
-(void)streamsFromFileHandle:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(NSString *)deviceIP;
-(NSMutableDictionary *)streamHandlers;
-(void)setStreamHandlers:(NSMutableDictionary *)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)managerSemaphore;
-(void)setManagerSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(NSString *)deviceName;
-(NSMutableDictionary *)services;
-(NSString *)deviceID;
-(void)setDeviceID:(NSString *)arg1 ;
-(void)setServices:(NSMutableDictionary *)arg1 ;
@end

