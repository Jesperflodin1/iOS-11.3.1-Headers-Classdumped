/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject, NSMapTable;

@interface ISObservable : NSObject {

	long long _nestedChanges;
	NSMutableArray* _pendingChangeBlocks;
	long long _numAppliedPendingChanges;
	unsigned long long _currentChange;
	BOOL _isEnumeratingObservers;
	NSObject*<OS_dispatch_queue> _observersQueue;
	BOOL _observersQueue_shouldCopyChangeObserversOnWrite;
	NSMapTable* _observersQueue_changeObserversWithContexts;
	BOOL _hasObservers;

}

@property (nonatomic,readonly) BOOL hasObservers;              //@synthesize hasObservers=_hasObservers - In the implementation block
-(id)init;
-(BOOL)hasObservers;
-(void)enumerateObserversUsingBlock:(/*^block*/id)arg1 ;
-(void)_observersQueue_copyChangeObserversForWriteIfNeeded;
-(void)willPerformChanges;
-(void)performChanges:(/*^block*/id)arg1 ;
-(void)registerChangeObserver:(id)arg1 context:(void*)arg2 ;
-(void)didPublishChanges;
-(void)unregisterChangeObserver:(id)arg1 context:(void*)arg2 ;
-(void)signalChange:(unsigned long long)arg1 ;
-(id)mutableChangeObject;
-(void)_willChange;
-(void)_didChange;
-(void)didPerformChanges;
-(void)_publishChanges;
-(void)_applyPendingChanges;
-(void)_setHasObservers:(BOOL)arg1 ;
-(void)hasObserversDidChange;
@end

