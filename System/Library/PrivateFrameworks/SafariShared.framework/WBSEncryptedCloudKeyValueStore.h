/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:41 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SafariShared/SafariShared-Structs.h>
@class NSString, NSUbiquitousKeyValueStore;

@interface WBSEncryptedCloudKeyValueStore : NSObject {

	id _accountUpdateObserver;
	NSString* _dsid;
	RetainPtr<_PCSIdentitySetData *>* _pcsIdentitySet;
	RetainPtr<_OpaquePCSShareProtection *>* _pcsShareProtection;
	RetainPtr<const __CFData *>* _serializedPCSObject;
	NSUbiquitousKeyValueStore* _backingStore;

}

@property (nonatomic,readonly) NSUbiquitousKeyValueStore * backingStore;              //@synthesize backingStore=_backingStore - In the implementation block
+(id)additionalStoreWithIdentifier:(id)arg1 ;
+(id)defaultStore;
-(void)setArray:(id)arg1 forKey:(id)arg2 ;
-(void)setDictionary:(id)arg1 forKey:(id)arg2 ;
-(id)initWithStore:(id)arg1 ;
-(void)synchronize;
-(void)dealloc;
-(void)removeObjectForKey:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)dictionaryForKey:(id)arg1 ;
-(void)synchronizeWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_dsidForPrimaryAccount;
-(int)_currentPCSConfiguration;
-(id)decryptEntry:(id)arg1 ;
-(id)encryptPropertyList:(id)arg1 ;
-(id)_objectForKey:(id)arg1 ofClass:(Class)arg2 ;
-(id)arrayForKey:(id)arg1 ;
-(NSUbiquitousKeyValueStore *)backingStore;
-(void)_setObject:(id)arg1 forKey:(id)arg2 ;
@end
