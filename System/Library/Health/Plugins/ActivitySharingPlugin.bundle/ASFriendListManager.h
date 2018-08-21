/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:01 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Health/Plugins/ActivitySharingPlugin.bundle/ActivitySharingPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActivitySharingPlugin/ASContactsManagerObserver.h>
#import <libobjc.A.dylib/HDFitnessAppBadgeCountProvider.h>
#import <ActivitySharingPlugin/ASActivitySharingManagerReadyObserver.h>

@protocol OS_dispatch_queue;
@class NSHashTable, NSObject, NSSet, NSDate, HDProfile, ASActivityDataManager, ASContactsManager, ASRelationshipManager, ASPeriodicUpdateManager, NSString;

@interface ASFriendListManager : NSObject <ASContactsManagerObserver, HDFitnessAppBadgeCountProvider, ASActivitySharingManagerReadyObserver> {

	NSHashTable* _observers;
	NSObject*<OS_dispatch_queue> _observerQueue;
	NSSet* _friends;
	BOOL _hasFriendsToShareWith;
	NSObject*<OS_dispatch_queue> _friendListQueue;
	int _activitySharingHasFriendsChangedToken;
	NSDate* _lastReportedFriendsDate;
	long long _lastReportedNumberOfFriends;
	BOOL _isWatch;
	HDProfile* _profile;
	ASActivityDataManager* _activityDataManager;
	ASContactsManager* _contactsManager;
	ASRelationshipManager* _relationshipManager;
	ASPeriodicUpdateManager* _periodicUpdateManager;

}

@property (assign,nonatomic,__weak) HDProfile * profile;                                          //@synthesize profile=_profile - In the implementation block
@property (assign,nonatomic,__weak) ASActivityDataManager * activityDataManager;                  //@synthesize activityDataManager=_activityDataManager - In the implementation block
@property (assign,nonatomic,__weak) ASContactsManager * contactsManager;                          //@synthesize contactsManager=_contactsManager - In the implementation block
@property (assign,nonatomic,__weak) ASRelationshipManager * relationshipManager;                  //@synthesize relationshipManager=_relationshipManager - In the implementation block
@property (assign,nonatomic,__weak) ASPeriodicUpdateManager * periodicUpdateManager;              //@synthesize periodicUpdateManager=_periodicUpdateManager - In the implementation block
@property (assign,nonatomic) BOOL isWatch;                                                        //@synthesize isWatch=_isWatch - In the implementation block
@property (readonly) BOOL hasFriendsToShareWith; 
@property (nonatomic,copy,readonly) NSSet * friends; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long badgeCount; 
-(ASActivityDataManager *)activityDataManager;
-(void)setActivityDataManager:(ASActivityDataManager *)arg1 ;
-(void)activitySharingManagerReady:(id)arg1 ;
-(ASRelationshipManager *)relationshipManager;
-(void)setRelationshipManager:(ASRelationshipManager *)arg1 ;
-(ASPeriodicUpdateManager *)periodicUpdateManager;
-(void)setPeriodicUpdateManager:(ASPeriodicUpdateManager *)arg1 ;
-(void)_handleHasFriendsChanged;
-(void)_queue_updateFriendList;
-(id)_queue_friendWithUUID:(id)arg1 ;
-(id)_allContactsPreferringPlaceholderContacts;
-(void)_queue_friendListDidUpdate;
-(void)_queue_notifyObserversOfFriendListChanges;
-(BOOL)_queue_hasFriendsToShareWith;
-(id)initWithIsWatch:(BOOL)arg1 ;
-(void)initializeFriendListAndBeginObserving;
-(void)updateFriendListWithDeletedWorkoutEvents:(id)arg1 ;
-(void)updateFriendListWithNewSnapshots:(id)arg1 achievements:(id)arg2 workouts:(id)arg3 ;
-(BOOL)hasFriendsToShareWith;
-(void)contactsManagerDidUpdateContacts:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(BOOL)isWatch;
-(void)setIsWatch:(BOOL)arg1 ;
-(void)endObserving;
-(ASContactsManager *)contactsManager;
-(void)setContactsManager:(ASContactsManager *)arg1 ;
-(HDProfile *)profile;
-(void)setProfile:(HDProfile *)arg1 ;
-(NSSet *)friends;
-(unsigned long long)badgeCount;
-(void)clearFriendListWithCompletion:(/*^block*/id)arg1 ;
-(id)friendWithUUID:(id)arg1 ;
@end
