/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:21 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PSYSyncSessionObserverDelegate.h>

@protocol OS_dispatch_queue, PSYProgressObserverDelegate;
@class PSYSyncSessionObserver, PSYSyncSession, NSObject, NSMutableSet, NSString, NSDictionary;

@interface PSYProgressObserver : NSObject <PSYSyncSessionObserverDelegate> {

	PSYSyncSessionObserver* _syncSessionObserver;
	PSYSyncSession* _currentSyncSession;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSMutableSet* _completedInitialSyncPairingIDs;
	id<PSYProgressObserverDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PSYProgressObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long progressObserverState; 
@property (nonatomic,readonly) NSString * activityLabel; 
@property (nonatomic,readonly) double activityProgress; 
@property (nonatomic,readonly) double totalProgress; 
@property (nonatomic,copy,readonly) NSDictionary * activityErrors; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<PSYProgressObserverDelegate>)delegate;
-(void)setDelegate:(id<PSYProgressObserverDelegate>)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(void)_updateState;
-(double)activityProgress;
-(BOOL)_shouldHandleSyncSession:(id)arg1 ;
-(NSDictionary *)activityErrors;
-(double)totalProgress;
-(NSString *)activityLabel;
-(long long)progressObserverState;
-(void)syncSessionObserver:(id)arg1 receivedSyncSession:(id)arg2 ;
-(void)syncSessionObserver:(id)arg1 didReceiveUpdate:(id)arg2 ;
-(void)syncSessionObserver:(id)arg1 didInvalidateSyncSession:(id)arg2 ;
-(void)supportsMigrationSync;
@end

