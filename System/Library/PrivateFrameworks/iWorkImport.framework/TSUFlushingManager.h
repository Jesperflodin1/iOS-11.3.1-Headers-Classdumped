/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:45 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSUiOSMemoryWarningFlushable;
#import <iWorkImport/iWorkImport-Structs.h>
@class TSURetainedPointerKeyDictionary, TSUPointerKeyDictionary, NSCondition, NSThread;

@interface TSUFlushingManager : NSObject {

	TSURetainedPointerKeyDictionary* _objects;
	set<TSUFlushableObjectInfo *, TSUFlushableObjectInfoPointerFlushingOrderLess, std::__1::allocator<TSUFlushableObjectInfo *> >* _sortedObjects;
	set<TSUFlushableObjectInfo *, TSUFlushableObjectInfoPointerTimeStampLess, std::__1::allocator<TSUFlushableObjectInfo *> >* _sortedNewObjects;
	TSUPointerKeyDictionary* _inactiveObjects;
	unsigned _clock;
	BOOL _alwaysFlushing;
	BOOL _stopFlushing;
	BOOL _stopFlushingWhenQueueEmpty;
	BOOL _isFlushing;
	id<TSUiOSMemoryWarningFlushable> _flushingObject;
	NSCondition* _cond;
	NSCondition* _isFlushingCond;
	NSThread* _bgThread;
	unsigned long long _backgroundTransitionTaskId;
	unsigned long long _activeBgThreadTask;

}
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sharedManager;
+(id)_singletonAlloc;
-(id)init;
-(oneway void)release;
-(id)autorelease;
-(id)retain;
-(void)addObject:(id)arg1 ;
-(void)removeObject:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)retainCount;
-(void)didReceiveMemoryWarning;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)willEnterForeground;
-(void)didEnterBackground;
-(void)_startFlushingObjects;
-(void)_stopFlushingObjects;
-(void)advanceClock;
-(void)_didUseObject:(id)arg1 ;
-(TSUFlushableObjectInfo*)eraseInfoForObject:(id)arg1 ;
-(void)insertObjectInfo:(TSUFlushableObjectInfo*)arg1 ;
-(void)_flushAllEligible;
-(void)_bgTaskStarted;
-(void)_backgroundThread:(id)arg1 ;
-(void)_bgThreadActive;
-(void)_bgThreadInactive;
-(void)_bgTaskFinished;
-(BOOL)isNewObject:(TSUFlushableObjectInfo*)arg1 ;
-(void)transferNewObjects;
-(void)doneWithObject:(id)arg1 ;
-(void)unsafeToFlush:(id)arg1 ;
-(void)safeToFlush:(id)arg1 wasAccessed:(BOOL)arg2 ;
-(BOOL)controlsActiveObject:(id)arg1 ;
-(BOOL)controlsInactiveObject:(id)arg1 ;
@end
