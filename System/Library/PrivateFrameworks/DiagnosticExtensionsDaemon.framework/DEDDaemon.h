/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/DEDWorkerProtocol.h>

@protocol OS_os_log, OS_dispatch_queue;
@class NSObject, DEDConfiguration, DEDController, NSOperationQueue, DEDDiagnosticCollector, NSString;

@interface DEDDaemon : NSObject <DEDWorkerProtocol> {

	BOOL _embeddedInApp;
	NSObject*<OS_os_log> _log;
	DEDConfiguration* _config;
	DEDController* _controller;
	NSOperationQueue* _backgroundOpQueue;
	NSOperationQueue* _userInitiatedOpQueue;
	NSObject*<OS_dispatch_queue> _diskAccessQueue;
	DEDDiagnosticCollector* __diagnosticCollector;

}

@property (retain) NSObject*<OS_os_log> log;                                   //@synthesize log=_log - In the implementation block
@property (retain) DEDConfiguration * config;                                  //@synthesize config=_config - In the implementation block
@property (retain) DEDController * controller;                                 //@synthesize controller=_controller - In the implementation block
@property (retain) NSOperationQueue * backgroundOpQueue;                       //@synthesize backgroundOpQueue=_backgroundOpQueue - In the implementation block
@property (retain) NSOperationQueue * userInitiatedOpQueue;                    //@synthesize userInitiatedOpQueue=_userInitiatedOpQueue - In the implementation block
@property (assign) BOOL embeddedInApp;                                         //@synthesize embeddedInApp=_embeddedInApp - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> diskAccessQueue;               //@synthesize diskAccessQueue=_diskAccessQueue - In the implementation block
@property (retain) DEDDiagnosticCollector * _diagnosticCollector;              //@synthesize _diagnosticCollector=__diagnosticCollector - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(long long)transportType;
-(id)init;
-(void)start;
-(DEDConfiguration *)config;
-(NSObject*<OS_os_log>)log;
-(void)setController:(DEDController *)arg1 ;
-(DEDController *)controller;
-(void)setConfig:(DEDConfiguration *)arg1 ;
-(id)_controller;
-(void)pingSession:(id)arg1 ;
-(void)listAvailableExtensionsForSession:(id)arg1 ;
-(void)getSessionStatusWithSession:(id)arg1 ;
-(void)startDiagnosticWithIdentifier:(id)arg1 parameters:(id)arg2 session:(id)arg3 ;
-(void)adoptFiles:(id)arg1 forSession:(id)arg2 ;
-(void)commitSession:(id)arg1 ;
-(id)attachmentHandler;
-(void)terminateExtension:(id)arg1 info:(id)arg2 session:(id)arg3 ;
-(void)setEmbeddedInApp:(BOOL)arg1 ;
-(void)configureForEmbedded:(BOOL)arg1 ;
-(BOOL)embeddedInApp;
-(void)setBackgroundOpQueue:(NSOperationQueue *)arg1 ;
-(void)setUserInitiatedOpQueue:(NSOperationQueue *)arg1 ;
-(void)setDiskAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)diagnosticCollector;
-(NSObject*<OS_dispatch_queue>)diskAccessQueue;
-(NSOperationQueue *)backgroundOpQueue;
-(BOOL)observesOperations;
-(void)_logOperations;
-(NSOperationQueue *)userInitiatedOpQueue;
-(void)_getSessionStatusWithSession:(id)arg1 ;
-(DEDDiagnosticCollector *)_diagnosticCollector;
-(void)set_diagnosticCollector:(DEDDiagnosticCollector *)arg1 ;
-(void)_streamOperationStatus;
-(id)_blockOnFakeSysidagnoseWithIdentifer:(id)arg1 withBugSession:(id)arg2 ;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(void)cancelSession:(id)arg1 ;
@end

