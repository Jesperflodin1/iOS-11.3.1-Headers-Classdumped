/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:01 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Health/Plugins/ActivitySharingPlugin.bundle/ActivitySharingPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActivitySharingPlugin/ASCloudKitManagerChangesObserver.h>
#import <ActivitySharingPlugin/ASActivitySharingManagerReadyObserver.h>

@protocol OS_dispatch_queue;
@class ASFriendListManager, ASCloudKitManager, NSObject, NSHashTable, NSString;

@interface ASGatewayManager : NSObject <ASCloudKitManagerChangesObserver, ASActivitySharingManagerReadyObserver> {

	ASFriendListManager* _friendListManager;
	ASCloudKitManager* _cloudKitManager;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_queue> _observerQueue;
	BOOL _currentlyPairedWatchMeetsMinimumVersion;
	NSHashTable* _observers;

}

@property (nonatomic,readonly) BOOL hasReachedMaximumNumberOfFriends; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)hasReachedMaximumNumberOfFriends;
-(BOOL)shouldFilterIncomingMessageFrom:(id)arg1 ;
-(BOOL)isInviteVersionCompatible:(unsigned)arg1 ;
-(void)gatewayStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)activitySharingManagerReady:(id)arg1 ;
-(void)cloudKitManagerDidUpdateAccountStatus:(id)arg1 ;
-(void)updateState;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)_queue_notifyObservers;
@end

