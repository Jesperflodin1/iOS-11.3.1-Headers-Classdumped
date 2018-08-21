/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:37 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDProcessStateObserver.h>
#import <libobjc.A.dylib/HDDiagnosticObject.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, HDDaemon, NSString;

@interface HDQueryManager : NSObject <HDProcessStateObserver, HDDiagnosticObject> {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _queryServersByUUID;
	NSMutableDictionary* _queryCollectionsByProcessBundleIdentifier;
	HDDaemon* _daemon;

}

@property (nonatomic,__weak,readonly) HDDaemon * daemon;              //@synthesize daemon=_daemon - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HDDaemon *)daemon;
-(void)dealloc;
-(void)_queue_startQueryServer:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)_queue_registerQueryServer:(id)arg1 ;
-(void)_logQueryActivationWithServer:(id)arg1 ;
-(void)_queryServerDidFinish:(id)arg1 ;
-(void)_queue_unregisterQueryServer:(id)arg1 ;
-(id)_queue_queryCollectionForBundleIdentifier:(id)arg1 createIfNecessary:(BOOL)arg2 ;
-(void)_queue_processWithBundleIdentifier:(id)arg1 didSuspend:(BOOL)arg2 ;
-(id)diagnosticDescription;
-(void)processSuspended:(id)arg1 ;
-(void)processResumed:(id)arg1 ;
-(id)initWithDaemon:(id)arg1 ;
-(void)startQueryServer:(id)arg1 handler:(/*^block*/id)arg2 ;
@end
