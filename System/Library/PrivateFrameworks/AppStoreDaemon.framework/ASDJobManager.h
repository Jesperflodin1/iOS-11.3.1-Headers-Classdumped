/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:32 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreDaemon/ASDBaseClient.h>
#import <libobjc.A.dylib/ASDJobManagerClient.h>
#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection, NSArray, NSHashTable, ASDJobManagerOptions, NSMutableSet, NSString;

@interface ASDJobManager : ASDBaseClient <ASDJobManagerClient, LSApplicationWorkspaceObserverProtocol, NSXPCListenerDelegate> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSXPCConnection* _connection;
	NSArray* _jobs;
	int _launchNotificationToken;
	NSObject*<OS_dispatch_queue> _observerQueue;
	NSHashTable* _observers;
	ASDJobManagerOptions* _options;
	NSMutableSet* _removedJobs;
	BOOL _useLaunchServicesProgress;
	NSObject*<OS_dispatch_queue> _xpcQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_setupConnection;
-(id)init;
-(void)invalidate;
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)initWithOptions:(id)arg1 ;
-(void)_invalidate;
-(void)_connectToDaemon;
-(void)finishJobs:(id)arg1 ;
-(void)pauseJobsWithIDs:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)resumeJobsWithIDs:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_willFinishJobs:(id)arg1 ;
-(void)_finishJobsWithIDs:(id)arg1 ;
-(void)_getJobsUsingBlock:(/*^block*/id)arg1 ;
-(void)_getJobsWithIDs:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_sendJobsChanged:(id)arg1 ;
-(void)didCompleteJobs:(id)arg1 finalPhases:(id)arg2 ;
-(id)_mapAllJobsToIDs;
-(void)_sendJobsCompleted:(id)arg1 ;
-(void)_applyUpdates:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_sendProgressUpdated:(id)arg1 ;
-(void)_registerManagerWithOptions:(id)arg1 ;
-(BOOL)_shouldAutomaticallyReconnect;
-(void)_updateActiveIDs:(id)arg1 ;
-(void)didChangeJobs:(id)arg1 ;
-(void)didUpdateProgress:(id)arg1 ;
-(void)didUpdateStates:(id)arg1 ;
-(void)_handleInvalidatedConnection:(id)arg1 ;
-(void)_handleInterruptedConnection:(id)arg1 ;
-(void)getJobsWithIDs:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)didCompleteJobs:(id)arg1 ;
-(void)_sendStatesUpdated:(id)arg1 ;
-(void)cancelJobsWithIDs:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)getJobsUsingBlock:(/*^block*/id)arg1 ;
-(void)applicationInstallsDidChange:(id)arg1 ;
@end

