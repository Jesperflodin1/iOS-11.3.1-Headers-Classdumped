/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:19 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProactiveSupport/ProactiveSupport-Structs.h>
@interface _PASDeviceState : NSObject
+(void)setSystemCallbacks:(const PASDeviceStateSystemCallbacks*)arg1 ;
+(void)setDefaultSystemCallbacks;
+(BOOL)isConstrainedDevice;
+(void)blockUntilFirstUnlock;
+(void)runBlockWhenDeviceIsClassCUnlocked:(/*^block*/id)arg1 ;
+(int)lockState;
+(BOOL)isClassCLocked;
+(BOOL)isUnlocked;
+(void)unregisterForLockStateChangeNotifications:(id)arg1 ;
+(id)registerForLockStateChangeNotifications:(/*^block*/id)arg1 ;
+(id)currentOsBuild;
+(BOOL)isDeviceFormattedForProtection;
@end

