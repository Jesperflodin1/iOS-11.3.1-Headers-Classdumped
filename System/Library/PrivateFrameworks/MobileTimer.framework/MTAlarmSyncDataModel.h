/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:37 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MTAlarmObserver.h>
#import <libobjc.A.dylib/MTSource.h>
#import <libobjc.A.dylib/MTSyncDataModel.h>
#import <libobjc.A.dylib/MTAgentDiagnosticDelegate.h>

@protocol MTSyncService, MTAlarmStorage, MTSyncStorage, NAScheduler;
@class NSMutableArray, NSString;

@interface MTAlarmSyncDataModel : NSObject <MTAlarmObserver, MTSource, MTSyncDataModel, MTAgentDiagnosticDelegate> {

	id<MTSyncService> _syncService;
	id<MTAlarmStorage> _alarmStorage;
	id<MTSyncStorage> _syncStorage;
	NSMutableArray* _pendingChanges;
	id<NAScheduler> _serializer;

}

@property (nonatomic,readonly) id<MTAlarmStorage> alarmStorage;                 //@synthesize alarmStorage=_alarmStorage - In the implementation block
@property (nonatomic,readonly) id<MTSyncStorage> syncStorage;                   //@synthesize syncStorage=_syncStorage - In the implementation block
@property (nonatomic,readonly) NSMutableArray * pendingChanges;                 //@synthesize pendingChanges=_pendingChanges - In the implementation block
@property (nonatomic,readonly) id<NAScheduler> serializer;                      //@synthesize serializer=_serializer - In the implementation block
@property (assign,nonatomic,__weak) id<MTSyncService> syncService;              //@synthesize syncService=_syncService - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)_snoozeActionForTriggerType:(unsigned long long)arg1 ;
+(unsigned long long)_dismissActionForTriggerType:(unsigned long long)arg1 ;
+(id)_mergeStateChange:(id)arg1 intoState:(id)arg2 ;
+(BOOL)_doesStateChange:(id)arg1 conflictWithChange:(id)arg2 ;
+(id)_mergeAlarmChange:(id)arg1 intoState:(id)arg2 ;
+(BOOL)_doesChange:(id)arg1 conflictWithChange:(id)arg2 ;
+(unsigned long long)_triggerTypeForSnoozeAction:(unsigned long long)arg1 ;
+(unsigned long long)_triggerTypeForDismissAction:(unsigned long long)arg1 ;
-(id)sourceIdentifier;
-(id<MTSyncStorage>)syncStorage;
-(NSMutableArray *)pendingChanges;
-(void)_performAction:(id)arg1 ;
-(id<NAScheduler>)serializer;
-(id<MTSyncService>)syncService;
-(void)setSyncService:(id<MTSyncService>)arg1 ;
-(void)printDiagnostics;
-(void)source:(id)arg1 didAddAlarms:(id)arg2 ;
-(void)source:(id)arg1 didUpdateAlarms:(id)arg2 ;
-(void)source:(id)arg1 didRemoveAlarms:(id)arg2 ;
-(void)source:(id)arg1 didSnoozeAlarm:(id)arg2 snoozeAction:(unsigned long long)arg3 ;
-(void)source:(id)arg1 didFireAlarm:(id)arg2 ;
-(void)source:(id)arg1 didDismissAlarm:(id)arg2 dismissAction:(unsigned long long)arg3 ;
-(void)source:(id)arg1 didChangeNextAlarm:(id)arg2 ;
-(id)initWithAlarmStorage:(id)arg1 syncStorage:(id)arg2 scheduler:(id)arg3 ;
-(id<MTAlarmStorage>)alarmStorage;
-(void)_mergeStateChange:(id)arg1 ;
-(void)_reconcileExistingChangesWithIncomingChange:(id)arg1 changeToApplyBlock:(/*^block*/id)arg2 ;
-(void)_writePendingChanges;
-(void)_mergeAndFlattenChanges:(id)arg1 ;
-(long long)supportedDataClasses;
-(void)handleIncomingAdd:(id)arg1 ;
-(void)handleIncomingUpdate:(id)arg1 ;
-(void)handleIncomingDelete:(id)arg1 ;
-(void)handleIncomingReset;
-(id)everything;
-(void)handleSentChanges:(id)arg1 ;
-(id)initWithAlarmStorage:(id)arg1 syncStorage:(id)arg2 ;
-(void)loadSyncData;
-(id)changes;
@end

