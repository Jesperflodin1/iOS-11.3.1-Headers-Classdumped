/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:40 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSMutableSet, CBUUID, NSObject;

@interface _HDHealthServiceDiscoveryInfo : NSObject {

	NSMutableSet* _peripheralsUUIDs;
	BOOL _alwaysNotify;
	BOOL _requiresActiveScan;
	unsigned long long _discoveryIdentifier;
	/*^block*/id _discoveryHandler;
	CBUUID* _serviceUUID;
	NSObject*<OS_dispatch_source> _timeoutTimer;

}

@property (assign,nonatomic) unsigned long long discoveryIdentifier;                  //@synthesize discoveryIdentifier=_discoveryIdentifier - In the implementation block
@property (nonatomic,readonly) id discoveryHandler;                                   //@synthesize discoveryHandler=_discoveryHandler - In the implementation block
@property (nonatomic,readonly) CBUUID * serviceUUID;                                  //@synthesize serviceUUID=_serviceUUID - In the implementation block
@property (nonatomic,readonly) BOOL alwaysNotify;                                     //@synthesize alwaysNotify=_alwaysNotify - In the implementation block
@property (nonatomic,readonly) BOOL requiresActiveScan;                               //@synthesize requiresActiveScan=_requiresActiveScan - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timeoutTimer;              //@synthesize timeoutTimer=_timeoutTimer - In the implementation block
-(CBUUID *)serviceUUID;
-(id)initWithHandler:(/*^block*/id)arg1 serviceUUID:(id)arg2 alwaysNotify:(BOOL)arg3 requiresActiveScan:(BOOL)arg4 ;
-(void)setDiscoveryIdentifier:(unsigned long long)arg1 ;
-(void)setTimeoutTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(id)discoveryHandler;
-(NSObject*<OS_dispatch_source>)timeoutTimer;
-(unsigned long long)discoveryIdentifier;
-(BOOL)requiresActiveScan;
-(BOOL)_addPeripheralUUID:(id)arg1 ;
-(BOOL)alwaysNotify;
@end

