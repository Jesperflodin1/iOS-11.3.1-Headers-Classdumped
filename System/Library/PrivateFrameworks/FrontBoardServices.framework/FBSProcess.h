/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FBSProcessInternal.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString, BSMachPortTaskNameRight, FBSProcessHandle;

@interface FBSProcess : NSObject <FBSProcessInternal, BSDescriptionProviding> {

	int _pid;
	NSString* _name;
	NSString* _bundleIdentifier;
	NSString* _launchdLabel;
	long long _type;
	BSMachPortTaskNameRight* _taskNameRight;

}

@property (getter=isRunning,nonatomic,readonly) BOOL running; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int pid;                                                     //@synthesize pid=_pid - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                            //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                        //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * jobLabel;                                    //@synthesize launchdLabel=_launchdLabel - In the implementation block
@property (nonatomic,readonly) long long type;                                              //@synthesize type=_type - In the implementation block
@property (nonatomic,retain,readonly) FBSProcessHandle * handle; 
@property (nonatomic,retain,readonly) BSMachPortTaskNameRight * taskNameRight;              //@synthesize taskNameRight=_taskNameRight - In the implementation block
+(id)currentProcess;
-(id)_initWithPID:(int)arg1 bundleID:(id)arg2 ;
-(id)_initForCurrentProcess;
-(FBSProcessHandle *)handle;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(NSString *)name;
-(NSString *)bundleIdentifier;
-(BOOL)isRunning;
-(long long)type;
-(NSString *)jobLabel;
-(BSMachPortTaskNameRight *)taskNameRight;
-(void)_watchdogStarted:(id)arg1 ;
-(void)_watchdogStopped:(id)arg1 ;
-(BOOL)_watchdog:(id)arg1 shouldTerminateWithDeclineReason:(out id*)arg2 ;
-(id)_watchdog:(id)arg1 terminationRequestForViolatedProvision:(id)arg2 error:(id)arg3 ;
-(void)_terminateWithRequest:(id)arg1 forWatchdog:(id)arg2 ;
-(int)pid;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
@end

