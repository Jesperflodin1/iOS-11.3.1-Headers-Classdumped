/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:39 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSArray, WBSKeychainCredentialNotificationMonitor;

@interface WBSSavedPasswordStore : NSObject {

	NSMutableDictionary* _domainToUsers;
	NSArray* _savedPasswords;
	WBSKeychainCredentialNotificationMonitor* _keychainMonitor;
	id _keychainNotificationRegistrationToken;
	BOOL _hasPasswordsEligibleForAutoFill;

}

@property (nonatomic,readonly) NSArray * savedPasswords; 
@property (nonatomic,readonly) BOOL hasPasswordsEligibleForAutoFill;              //@synthesize hasPasswordsEligibleForAutoFill=_hasPasswordsEligibleForAutoFill - In the implementation block
+(id)sharedStore;
+(void)removePassword:(id)arg1 ;
+(id)savedPasswordForURL:(id)arg1 user:(id)arg2 password:(id)arg3 ;
-(id)init;
-(void)dealloc;
-(void)reset;
-(void)_postSavedPasswordStoreDidChangeNotification;
-(id)_allInternetPasswordEntriesFromKeychain;
-(void)_removePassword:(id)arg1 ;
-(void)removeSite:(id)arg1 fromPassword:(id)arg2 ;
-(BOOL)canChangeSavedPassword:(id)arg1 toUser:(id)arg2 password:(id)arg3 ;
-(BOOL)changeSavedPassword:(id)arg1 toUser:(id)arg2 password:(id)arg3 ;
-(BOOL)hasPasswordsEligibleForAutoFill;
-(BOOL)canSaveUser:(id)arg1 password:(id)arg2 forProtectionSpace:(id)arg3 highLevelDomain:(id)arg4 ;
-(id)saveUser:(id)arg1 password:(id)arg2 forProtectionSpace:(id)arg3 highLevelDomain:(id)arg4 ;
-(NSArray *)savedPasswords;
-(void)removePassword:(id)arg1 ;
@end

