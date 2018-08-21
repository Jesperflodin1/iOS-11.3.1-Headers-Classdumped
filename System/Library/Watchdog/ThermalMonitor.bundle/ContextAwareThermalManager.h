/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Watchdog/ThermalMonitor.bundle/ThermalMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ThermalMonitor/ThermalMonitor-Structs.h>
@interface ContextAwareThermalManager : NSObject {

	CFArrayRef ctxObjects;

}
+(id)sharedInstance;
-(BOOL)isContextTriggered:(int)arg1 ;
-(void)setInfoOnlySensorsActive:(BOOL)arg1 ;
-(void)updateSystemPowerState:(BOOL)arg1 ;
-(int)getContextState:(int)arg1 ;
-(void)iterateAndUpdateContexts;
-(id)createNewSolarContext:(BOOL)arg1 ;
-(id)createNewInPocketContext:(id)arg1 ;
-(id)init;
@end

