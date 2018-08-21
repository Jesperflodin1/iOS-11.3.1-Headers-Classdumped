/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:40 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PHPhotoLibraryAvailabilityObserver.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_source, OS_xpc_object;
@class NSMutableSet, NSMutableDictionary, NSObject, PHAPhotoLibraryList, PHASleepWakeMonitor, NSString;

@interface PHAExecutive : NSObject <PHPhotoLibraryAvailabilityObserver, NSXPCListenerDelegate> {

	BOOL _isPhotoAnalysisAgent;
	BOOL _backgroundAnalysisActivityTriggered;
	unsigned char _state;
	NSMutableSet* _clients;
	NSMutableDictionary* _managersByLibraryPath;
	NSObject*<OS_dispatch_queue> _executiveStateQueue;
	PHAPhotoLibraryList* _photoLibraryList;
	PHASleepWakeMonitor* _sleepWakeMonitor;
	long long _countOfCoordinatorsRunningBackgroundAnalysis;
	NSObject*<OS_dispatch_source> _backgroundAnalysisMonitorTimer;
	NSObject*<OS_xpc_object> _backgroundAnalysisActivity;

}

@property (retain) NSMutableSet * clients;                                                    //@synthesize clients=_clients - In the implementation block
@property (retain) NSMutableDictionary * managersByLibraryPath;                               //@synthesize managersByLibraryPath=_managersByLibraryPath - In the implementation block
@property (assign) unsigned char state;                                                       //@synthesize state=_state - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> executiveStateQueue;                          //@synthesize executiveStateQueue=_executiveStateQueue - In the implementation block
@property (retain) PHAPhotoLibraryList * photoLibraryList;                                    //@synthesize photoLibraryList=_photoLibraryList - In the implementation block
@property (retain) PHASleepWakeMonitor * sleepWakeMonitor;                                    //@synthesize sleepWakeMonitor=_sleepWakeMonitor - In the implementation block
@property (assign) long long countOfCoordinatorsRunningBackgroundAnalysis;                    //@synthesize countOfCoordinatorsRunningBackgroundAnalysis=_countOfCoordinatorsRunningBackgroundAnalysis - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> backgroundAnalysisMonitorTimer;              //@synthesize backgroundAnalysisMonitorTimer=_backgroundAnalysisMonitorTimer - In the implementation block
@property (retain) NSObject*<OS_xpc_object> backgroundAnalysisActivity;                       //@synthesize backgroundAnalysisActivity=_backgroundAnalysisActivity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)registerEmptyBackgroundActivity;
-(id)init;
-(void)dealloc;
-(unsigned char)state;
-(void)setState:(unsigned char)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)dumpAnalysisStatusWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)_localeDidChangeNotification:(id)arg1 ;
-(void)setClients:(NSMutableSet *)arg1 ;
-(void)shutdown;
-(NSMutableSet *)clients;
-(id)statusAsDictionary;
-(void)removeClientHandler:(id)arg1 ;
-(void)dispatchAsyncToExecutiveStateQueue:(/*^block*/id)arg1 ;
-(id)managerForPhotoLibraryURL:(id)arg1 ;
-(void)startup;
-(NSObject*<OS_dispatch_queue>)executiveStateQueue;
-(void)setManagersByLibraryPath:(NSMutableDictionary *)arg1 ;
-(void)setExecutiveStateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setPhotoLibraryList:(PHAPhotoLibraryList *)arg1 ;
-(void)setSleepWakeMonitor:(PHASleepWakeMonitor *)arg1 ;
-(BOOL)_photoAnalysisEnabled;
-(void)_registerBackgroundActivity;
-(id)_urlForSystemPhotoLibrary;
-(PHAPhotoLibraryList *)photoLibraryList;
-(void)_stopAllBackgroundAnalysisWithCompletion:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)_cleanupAfterBackgroundActivityFinishedForDefer:(BOOL)arg1 skipActivityStateCheck:(BOOL)arg2 message:(id)arg3 ;
-(NSMutableDictionary *)managersByLibraryPath;
-(id)clientInfoForManager:(id)arg1 ;
-(BOOL)hasConnectedClientsForManager:(id)arg1 ;
-(void)terminateManagerForPhotoLibraryURL:(id)arg1 ;
-(void)_dispatchAsyncToQueue:(id)arg1 withTransactionBlock:(/*^block*/id)arg2 ;
-(void)terminateManagerIfQuiescentAndNoConnectedClients:(id)arg1 ;
-(void)_backgroundActivityDidBegin;
-(void)_installBackgroundAnalysisMonitor;
-(void)photoLibraryDidBecomeUnavailable:(id)arg1 ;
-(void)dumpStatusToLog;
-(void)checkQuiescenceForManager:(id)arg1 ;
-(void)triggerBackgroundActivity;
-(void)stopBackgroundActivityForManager:(id)arg1 ;
-(PHASleepWakeMonitor *)sleepWakeMonitor;
-(long long)countOfCoordinatorsRunningBackgroundAnalysis;
-(void)setCountOfCoordinatorsRunningBackgroundAnalysis:(long long)arg1 ;
-(NSObject*<OS_dispatch_source>)backgroundAnalysisMonitorTimer;
-(void)setBackgroundAnalysisMonitorTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_xpc_object>)backgroundAnalysisActivity;
-(void)setBackgroundAnalysisActivity:(NSObject*<OS_xpc_object>)arg1 ;
@end

