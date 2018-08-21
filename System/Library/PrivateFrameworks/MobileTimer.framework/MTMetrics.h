/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:38 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NAScheduler;
@interface MTMetrics : NSObject {

	id<NAScheduler> _serializer;
	unsigned long long _operationStartTime;

}

@property (nonatomic,retain) id<NAScheduler> serializer;                         //@synthesize serializer=_serializer - In the implementation block
@property (assign,nonatomic) unsigned long long operationStartTime;              //@synthesize operationStartTime=_operationStartTime - In the implementation block
+(id)_sharedPublicMetrics;
-(id)init;
-(unsigned long long)operationStartTime;
-(void)setOperationStartTime:(unsigned long long)arg1 ;
-(id<NAScheduler>)serializer;
-(void)service:(id)arg1 didRequestSyncOperation:(id)arg2 ;
-(void)service:(id)arg1 didBeginSyncOperation:(id)arg2 ;
-(void)service:(id)arg1 didCompleteSyncOperation:(id)arg2 ;
-(void)service:(id)arg1 didFailSyncOperation:(id)arg2 withError:(id)arg3 ;
-(void)service:(id)arg1 didScheduleRetryOfSyncOperation:(id)arg2 forError:(id)arg3 ;
-(void)setSerializer:(id<NAScheduler>)arg1 ;
-(void)logSyncingEnabled;
-(void)logSyncingDisabled;
-(void)logAlarmAdded:(BOOL)arg1 ;
-(void)logAlarmDeleted:(BOOL)arg1 ;
-(void)logAlarmUpdated:(BOOL)arg1 ;
-(void)logAlarmSnoozeAction:(unsigned long long)arg1 ;
-(void)logAlarmDismissAction:(unsigned long long)arg1 ;
-(void)logTimerAdded;
-(void)logTimerDeleted;
-(void)logTimerUpdated;
-(void)logTimerDismissed;
-(void)logTimerRepeated;
@end

