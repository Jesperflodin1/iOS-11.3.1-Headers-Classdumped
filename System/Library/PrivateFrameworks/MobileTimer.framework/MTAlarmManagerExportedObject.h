/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:38 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MTAlarmClient.h>

@class MTAlarmManager, NSString;

@interface MTAlarmManagerExportedObject : NSObject <MTAlarmClient> {

	MTAlarmManager* _alarmManager;

}

@property (nonatomic,__weak,readonly) MTAlarmManager * alarmManager;              //@synthesize alarmManager=_alarmManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(MTAlarmManager *)alarmManager;
-(id)initWithAlarmManager:(id)arg1 ;
-(void)_didReceiveAlarmServerReadyNotification:(id)arg1 ;
-(void)alarmsAdded:(id)arg1 ;
-(void)alarmsUpdated:(id)arg1 ;
-(void)alarmsRemoved:(id)arg1 ;
-(void)alarmSnoozed:(id)arg1 ;
-(void)alarmDismissed:(id)arg1 ;
-(void)alarmFired:(id)arg1 ;
-(void)nextAlarmChanged:(id)arg1 ;
@end

