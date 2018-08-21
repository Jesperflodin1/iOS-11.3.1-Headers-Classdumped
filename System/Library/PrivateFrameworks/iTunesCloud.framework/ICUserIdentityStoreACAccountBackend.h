/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:33 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/ICUserIdentityStoreBackend.h>

@protocol OS_dispatch_queue, ICUserIdentityStoreBackendDelegate;
@class ACAccountStore, NSMapTable, NSArray, NSMutableDictionary, ACAccountType, NSObject, NSOperationQueue, NSString;

@interface ICUserIdentityStoreACAccountBackend : NSObject <ICUserIdentityStoreBackend> {

	id _activeAccountDSIDValue;
	id _activeLockerAccountDSIDValue;
	ACAccountStore* _accountStore;
	NSMapTable* _accountToIdentityProperties;
	NSArray* _allStoreAccounts;
	NSMutableDictionary* _dsidToAccount;
	id _primaryICloudAccountIdentityPropertiesValue;
	ACAccountType* _storeAccountType;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSOperationQueue* _operationQueue;
	id<ICUserIdentityStoreBackendDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<ICUserIdentityStoreBackendDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id<ICUserIdentityStoreBackendDelegate>)delegate;
-(void)synchronize;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<ICUserIdentityStoreBackendDelegate>)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithACAccountStore:(id)arg1 ;
-(void)_allStoreAccountsWithCompletion:(/*^block*/id)arg1 ;
-(void)_storeAccountForDSID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_newUserIdentityPropertiesForAccount:(id)arg1 ;
-(void)_applyIdentityProperties:(id)arg1 toAccount:(id)arg2 ;
-(void)_storeAccountTypeWithCompletion:(/*^block*/id)arg1 ;
-(void)_handleITunesStoreAccountsChanged;
-(void)activeAccountDSIDWithCompletion:(/*^block*/id)arg1 ;
-(void)updateActiveAccountDSID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)activeLockerAccountDSIDWithCompletion:(/*^block*/id)arg1 ;
-(void)updateActiveLockerAccountDSID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)identityPropertiesForDSID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)identityPropertiesForPrimaryICloudAccountWithCompletion:(/*^block*/id)arg1 ;
-(void)removeIdentityForDSID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)replaceIdentityProperties:(id)arg1 forDSID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setIdentityProperties:(id)arg1 forDSID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)verificationContextForDSID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)verificationContextForAccountEstablishmentWithCompletion:(/*^block*/id)arg1 ;
-(id)_primaryICloudAccountIdentityProperties;
-(void)_synchronize;
-(void)_accountStoreDidChangeNotification:(id)arg1 ;
@end

