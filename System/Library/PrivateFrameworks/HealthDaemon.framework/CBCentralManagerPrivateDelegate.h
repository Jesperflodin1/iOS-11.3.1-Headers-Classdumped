/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:40 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CBCentralManagerPrivateDelegate <CBCentralManagerDelegate>
@optional
-(void)centralManager:(id)arg1 didUpdatePeripheralConnectionState:(id)arg2;
-(void)centralManager:(id)arg1 didLosePeripheral:(id)arg2 forType:(id)arg3;
-(void)centralManager:(id)arg1 didLoseZone:(id)arg2 mask:(id)arg3;
-(void)centralManager:(id)arg1 didUpdateConnectionParameters:(id)arg2 interval:(id)arg3 latency:(id)arg4 supervisionTimeout:(id)arg5;
-(void)centralManager:(id)arg1 application:(id)arg2 isActive:(BOOL)arg3;

@end

