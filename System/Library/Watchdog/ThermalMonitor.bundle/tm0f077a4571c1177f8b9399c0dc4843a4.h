/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Watchdog/ThermalMonitor.bundle/ThermalMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ThermalMonitor/CommonProduct.h>

@interface tm0f077a4571c1177f8b9399c0dc4843a4 : CommonProduct
-(void)updateAllThermalLoad:(BOOL)arg1 ;
-(int)canaryTempSensorIndex;
-(int)canaryTempThreshold;
-(void)canaryModeExitEarly:(int)arg1 ;
-(int)desiredLoopInterval;
-(int)gasGaugeBatteryTemperature;
@end
