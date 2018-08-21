/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Watchdog/ThermalMonitor.bundle/ThermalMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ThermalMonitor/ThermalMonitor-Structs.h>
@interface PowerlogSubkeyController : NSObject {

	CFDictionaryRef _state;
	CFDictionaryRef _stateLastLogged;
	CFStringRef _subkey;

}
-(id)initForSubkey:(CFStringRef)arg1 ;
-(id)cacheArray;
-(void)setIntValue:(int)arg1 forKey:(CFStringRef)arg2 ;
-(void)logHIPStatusToPowerlogLite:(id)arg1 ;
-(void)logToPowerlogLite;
-(void)logToPowerlog:(CFStringRef)arg1 ;
@end
