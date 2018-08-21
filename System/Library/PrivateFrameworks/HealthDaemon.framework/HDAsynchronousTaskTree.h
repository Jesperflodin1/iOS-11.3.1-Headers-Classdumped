/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:38 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSString, NSArray;

@interface HDAsynchronousTaskTree : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _queue_pendingTasks;
	NSMutableArray* _queue_pendingSubtasks;
	NSMutableArray* _queue_taskErrors;
	int _canceled;
	BOOL _queue_started;
	BOOL _queue_finished;
	/*^block*/id _queue_completion;
	NSObject*<OS_dispatch_queue> _default_task_queue;
	BOOL _rejectAddTask;
	NSString* _groupDescription;

}

@property (nonatomic,copy,readonly) NSString * groupDescription;              //@synthesize groupDescription=_groupDescription - In the implementation block
@property (nonatomic,readonly) NSArray * allErrors; 
-(void)cancel;
-(id)description;
-(void)begin;
-(void)addTask:(/*^block*/id)arg1 ;
-(id)initWithDescription:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addTaskOnQueue:(id)arg1 task:(/*^block*/id)arg2 ;
-(void)addCheckpointTask:(/*^block*/id)arg1 ;
-(NSArray *)allErrors;
-(void)addTaskOnQueue:(id)arg1 timeout:(double)arg2 task:(/*^block*/id)arg3 ;
-(void)_queue_beginNextTask;
-(void)_queue_insertPendingSubtasks;
-(void)_queue_runPendingCheckpointTasks:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_queue_reportResult:(long long)arg1 ;
-(void)_queue_completeCurrentTaskWithResult:(long long)arg1 error:(id)arg2 ;
-(void)addTaskWithTimeout:(double)arg1 task:(/*^block*/id)arg2 ;
-(NSString *)groupDescription;
@end
