/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:38 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSHashTable, SBFMobileKeyBagState;

@interface SBFMobileKeyBag : NSObject {

	NSObject*<OS_dispatch_queue> _calloutQueue;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _queue_observerStateChangedCallbackBlocks;
	NSHashTable* _queue_observers;
	BOOL _queue_hasPasscodeSet;
	BOOL _queue_hasUnlockedSinceBoot;
	int _stateChangedNotifyToken;
	int _firstUnlockNotification;

}

@property (nonatomic,copy,readonly) SBFMobileKeyBagState * state; 
@property (nonatomic,copy,readonly) SBFMobileKeyBagState * extendedState; 
@property (nonatomic,readonly) BOOL hasBeenUnlockedSinceBoot; 
@property (nonatomic,readonly) BOOL hasPasscodeSet; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(SBFMobileKeyBagState *)state;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)_queue_handleKeybagStatusChanged;
-(void)_queue_firstUnlockOccurred;
-(id)_queue_lockStateExtended:(BOOL)arg1 ;
-(void)_queue_setHasPasscodeIfNecessary:(id)arg1 ;
-(void)_queue_createStashBag:(id)arg1 ;
-(void)createStashBag:(id)arg1 completion:(/*^block*/id)arg2 completionQueue:(id)arg3 ;
-(BOOL)_queue_verifyExpectedStashState:(long long)arg1 ;
-(void)lockSkippingGracePeriod:(BOOL)arg1 ;
-(BOOL)unlockWithPasscode:(id)arg1 error:(id*)arg2 ;
-(BOOL)hasPasscodeSet;
-(void)createStashBag:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)hasBeenUnlockedSinceBoot;
-(SBFMobileKeyBagState *)extendedState;
-(BOOL)beginRecovery:(id)arg1 error:(id*)arg2 ;
-(void)waitForUnlockWithTimeout:(float)arg1 ;
@end

