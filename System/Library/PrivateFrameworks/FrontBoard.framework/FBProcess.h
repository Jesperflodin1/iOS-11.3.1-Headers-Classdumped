/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:16 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/FBUIProcess.h>
#import <libobjc.A.dylib/FBSProcessInternal.h>
#import <libobjc.A.dylib/FBSProcessIdentity.h>

@protocol OS_dispatch_queue, FBProcessDelegate;
@class NSString, FBSProcessHandle, BSMachPortTaskNameRight, NSObject, FBProcessState, BSProcessHandle, FBWorkspace, NSHashTable, BSProcessDeathWatcher;

@interface FBProcess : NSObject <BSDescriptionProviding, FBUIProcess, FBSProcessInternal, FBSProcessIdentity> {

	NSObject*<OS_dispatch_queue> _queue;
	FBProcessState* _state;
	NSString* _name;
	NSString* _jobLabel;
	NSString* _bundleIdentifier;
	NSString* _executablePath;
	BSProcessHandle* _handle;
	NSObject*<OS_dispatch_queue> _callOutQueue;
	FBWorkspace* _workspace;
	NSHashTable* _observers;
	id<FBProcessDelegate> _delegate;
	long long _backgroundingPolicy;
	BOOL _supportsSuspendOnLock;
	int _pid;
	BOOL _running;
	BSProcessDeathWatcher* _processDeathObserver;
	BOOL _updatingState;
	long long _executableOnSystemPartition;

}

@property (assign,nonatomic) id<FBProcessDelegate> delegate; 
@property (nonatomic,readonly) BOOL executableLivesOnSystemPartition; 
@property (nonatomic,readonly) long long backgroundingPolicy;                                                                                     //@synthesize backgroundingPolicy=_backgroundingPolicy - In the implementation block
@property (assign,setter=_queue_setPid:,getter=_queue_pid,nonatomic) int queue_pid; 
@property (setter=_queue_setName:,getter=_queue_name,nonatomic,copy) NSString * queue_name; 
@property (setter=_queue_setJobLabel:,getter=_queue_jobLabel,nonatomic,copy) NSString * queue_jobLabel; 
@property (setter=_queue_setExecutablePath:,getter=_queue_executablePath,nonatomic,copy) NSString * queue_executablePath; 
@property (assign,setter=_queue_setRunning:,getter=_queue_isRunning,nonatomic) BOOL queue_running; 
@property (assign,setter=_queue_setTaskState:,getter=_queue_taskState,nonatomic) int queue_taskState; 
@property (assign,setter=_queue_setVisibility:,getter=_queue_visibility,nonatomic) int queue_visibility; 
@property (assign,setter=_queue_setSupportsSuspendOnLock:,getter=_queue_supportsSuspendOnLock,nonatomic) BOOL supportsSuspendOnLock;              //@synthesize supportsSuspendOnLock=_supportsSuspendOnLock - In the implementation block
@property (nonatomic,copy,readonly) FBProcessState * state; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * jobLabel; 
@property (nonatomic,copy,readonly) NSString * bundleIdentifier; 
@property (nonatomic,readonly) int pid;                                                                                                           //@synthesize pid=_pid - In the implementation block
@property (getter=isRunning,nonatomic,readonly) BOOL running;                                                                                     //@synthesize running=_running - In the implementation block
@property (getter=isForeground,nonatomic,readonly) BOOL foreground; 
@property (nonatomic,retain,readonly) FBWorkspace * workspace;                                                                                    //@synthesize workspace=_workspace - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long type; 
@property (nonatomic,retain,readonly) FBSProcessHandle * handle; 
@property (nonatomic,retain,readonly) BSMachPortTaskNameRight * taskNameRight; 
-(BOOL)hasEntitlement:(id)arg1 ;
-(FBSProcessHandle *)handle;
-(id)init;
-(id<FBProcessDelegate>)delegate;
-(void)setDelegate:(id<FBProcessDelegate>)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(NSString *)debugDescription;
-(FBProcessState *)state;
-(NSString *)name;
-(id)_workspace;
-(void)addObserver:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(BOOL)isRunning;
-(long long)type;
-(void)removeObserver:(id)arg1 ;
-(id)_queue;
-(id)valueForEntitlement:(id)arg1 ;
-(BOOL)isApplicationProcess;
-(id)initWithBundleID:(id)arg1 pid:(int)arg2 callOutQueue:(id)arg3 ;
-(BOOL)isExtensionProcess;
-(BOOL)isSystemApplicationProcess;
-(BOOL)_isEffectivelyForegroundForSceneSettings:(id)arg1 underLock:(BOOL)arg2 ;
-(int)_queue_pid;
-(void)_queue_configureWithHandle:(id)arg1 ;
-(id)_createWorkspace;
-(id)_queue_name;
-(id)_queue_jobLabel;
-(BOOL)_queue_executableLivesOnSystemPartition;
-(id)_queue_executablePath;
-(void)_queue_enumerateObserversWithBlock:(/*^block*/id)arg1 ;
-(void)_queue_updateStateWithBlock:(/*^block*/id)arg1 ;
-(void)_queue_toggleProcessDeathObserver:(BOOL)arg1 ;
-(void)_queue_setTaskState:(int)arg1 ;
-(void)_queue_setVisibility:(int)arg1 ;
-(BOOL)_queue_consideredUnderLock;
-(int)_effectiveVisibilityForVisibility:(int)arg1 underLock:(BOOL)arg2 ;
-(long long)backgroundingPolicy;
-(int)_effectiveVisibilityForSceneSettings:(id)arg1 underLock:(BOOL)arg2 ;
-(int)_queue_effectiveVisibilityForVisibility:(int)arg1 ;
-(void)_queue_setName:(id)arg1 ;
-(NSString *)jobLabel;
-(void)_queue_setJobLabel:(id)arg1 ;
-(void)_queue_setPid:(int)arg1 ;
-(void)_queue_setRunning:(BOOL)arg1 ;
-(void)_queue_setExecutablePath:(id)arg1 ;
-(void)_queue_callExitObservers;
-(void)_queue_processDidExit;
-(BSMachPortTaskNameRight *)taskNameRight;
-(void)_watchdogStarted:(id)arg1 ;
-(void)_watchdogStopped:(id)arg1 ;
-(BOOL)_watchdog:(id)arg1 shouldTerminateWithDeclineReason:(out id*)arg2 ;
-(id)_watchdog:(id)arg1 terminationRequestForViolatedProvision:(id)arg2 error:(id)arg3 ;
-(void)_terminateWithRequest:(id)arg1 forWatchdog:(id)arg2 ;
-(id)initWithProcessHandle:(id)arg1 callOutQueue:(id)arg2 ;
-(BOOL)executableLivesOnSystemPartition;
-(BOOL)_queue_isRunning;
-(BOOL)_queue_isForeground;
-(int)_queue_taskState;
-(id)_queue_newWatchdogForContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(int)_queue_visibility;
-(void)_queue_sceneLifecycleStateChanged:(id)arg1 ;
-(BOOL)_queue_supportsSuspendOnLock;
-(void)_queue_setSupportsSuspendOnLock:(BOOL)arg1 ;
-(FBWorkspace *)workspace;
-(int)pid;
-(BOOL)isForeground;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
@end

