/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:36 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface HMFPowerManager : HMFObject {

	unsigned _interestNotification;
	BOOL _hasBattery;
	BOOL _running;
	float _batteryLevel;
	long long _batteryState;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	IONotificationPortRef _notificationPort;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> propertyQueue;              //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (assign,getter=isRunning,nonatomic) BOOL running;                             //@synthesize running=_running - In the implementation block
@property (nonatomic,readonly) IONotificationPortRef notificationPort;                  //@synthesize notificationPort=_notificationPort - In the implementation block
@property (nonatomic,readonly) unsigned interestNotification;                           //@synthesize interestNotification=_interestNotification - In the implementation block
@property (assign) long long batteryState;                                              //@synthesize batteryState=_batteryState - In the implementation block
@property (assign) float batteryLevel;                                                  //@synthesize batteryLevel=_batteryLevel - In the implementation block
@property (readonly) BOOL hasBattery;                                                   //@synthesize hasBattery=_hasBattery - In the implementation block
+(void)initialize;
+(id)sharedManager;
-(id)init;
-(void)dealloc;
-(BOOL)isRunning;
-(void)stop;
-(void)start;
-(long long)batteryState;
-(float)batteryLevel;
-(void)setRunning:(BOOL)arg1 ;
-(void)setBatteryLevel:(float)arg1 ;
-(void)_deregisterForPowerSourceNotifications:(BOOL)arg1 ;
-(void)_registerForPowerSourceNotifications;
-(void)notifyBatteryStateChange:(long long)arg1 ;
-(void)notifyBatteryLevelChange:(float)arg1 ;
-(unsigned)interestNotification;
-(void)updateBatteryState:(unsigned)arg1 ;
-(void)setBatteryState:(long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(BOOL)hasBattery;
-(IONotificationPortRef)notificationPort;
@end

