/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:02 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/TTYUtilities.framework/TTYUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSLock, NSMutableSet, NSMutableDictionary, NSString;

@interface TTYSettings : NSObject {

	NSLock* _synchronizeDomainsLock;
	NSMutableSet* _registeredNotifications;
	NSMutableSet* _synchronizePreferences;
	NSMutableDictionary* _updateBlocks;

}

@property (nonatomic,retain) NSMutableSet * registeredNotifications;              //@synthesize registeredNotifications=_registeredNotifications - In the implementation block
@property (nonatomic,retain) NSMutableSet * synchronizePreferences;               //@synthesize synchronizePreferences=_synchronizePreferences - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * updateBlocks;                  //@synthesize updateBlocks=_updateBlocks - In the implementation block
@property (assign,nonatomic) BOOL TTYHardwareEnabled; 
@property (assign,nonatomic) BOOL TTYSoftwareEnabled; 
@property (assign,nonatomic) BOOL incomingCallsTTY; 
@property (assign,nonatomic) BOOL ttyShouldBeRealtime; 
@property (nonatomic,retain) NSString * preferredRelayNumber; 
@property (assign,nonatomic) BOOL hasReceivedRTTCall; 
@property (assign,nonatomic) long long incomingTTYCallCount; 
@property (assign,nonatomic) long long outgoingTTYCallCount; 
@property (assign,nonatomic) double lastCallCountReset; 
@property (assign,nonatomic) double lastDBVacuum; 
@property (assign,nonatomic) BOOL internalOverrideTTYAvailability; 
@property (assign,nonatomic) BOOL enableRTTOniPadsAndiPods; 
@property (assign,nonatomic) BOOL enableRTTOnAlliPhones; 
+(id)sharedInstance;
+(void)initialize;
-(id)init;
-(void)dealloc;
-(NSMutableSet *)synchronizePreferences;
-(void)setUpdateBlocks:(NSMutableDictionary *)arg1 ;
-(void)registerUpdateBlock:(/*^block*/id)arg1 forRetrieveSelector:(SEL)arg2 withListener:(id)arg3 ;
-(void)_setValue:(id)arg1 forPreferenceKey:(id)arg2 ;
-(id)_notificationForPreferenceKey:(id)arg1 ;
-(id)_valueForPreferenceKey:(id)arg1 ;
-(void)_registerForNotification:(id)arg1 ;
-(void)_handlePreferenceChanged:(id)arg1 ;
-(id)_preferenceKeyForSelector:(SEL)arg1 ;
-(BOOL)ttyShouldBeRealtime;
-(BOOL)TTYHardwareEnabled;
-(BOOL)TTYSoftwareEnabled;
-(BOOL)incomingCallsTTY;
-(NSString *)preferredRelayNumber;
-(BOOL)hasReceivedRTTCall;
-(BOOL)internalOverrideTTYAvailability;
-(BOOL)enableRTTOniPadsAndiPods;
-(BOOL)enableRTTOnAlliPhones;
-(id)_selectorMap;
-(void)_synchronizeIfNecessary:(id)arg1 ;
-(SEL)selectorForPreferenceKey:(id)arg1 ;
-(id)notificationForSelector:(SEL)arg1 ;
-(void)setTTYHardwareEnabled:(BOOL)arg1 ;
-(void)setTTYSoftwareEnabled:(BOOL)arg1 ;
-(void)setIncomingCallsTTY:(BOOL)arg1 ;
-(long long)incomingTTYCallCount;
-(void)setIncomingTTYCallCount:(long long)arg1 ;
-(long long)outgoingTTYCallCount;
-(void)setOutgoingTTYCallCount:(long long)arg1 ;
-(double)lastCallCountReset;
-(void)setLastCallCountReset:(double)arg1 ;
-(double)lastDBVacuum;
-(void)setLastDBVacuum:(double)arg1 ;
-(void)setTtyShouldBeRealtime:(BOOL)arg1 ;
-(void)setPreferredRelayNumber:(NSString *)arg1 ;
-(void)setHasReceivedRTTCall:(BOOL)arg1 ;
-(void)setInternalOverrideTTYAvailability:(BOOL)arg1 ;
-(void)setEnableRTTOniPadsAndiPods:(BOOL)arg1 ;
-(void)setEnableRTTOnAlliPhones:(BOOL)arg1 ;
-(void)setSynchronizePreferences:(NSMutableSet *)arg1 ;
-(void)setRegisteredNotifications:(NSMutableSet *)arg1 ;
-(NSMutableDictionary *)updateBlocks;
-(NSMutableSet *)registeredNotifications;
@end

