/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:33 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol ICUserIdentityStoreBackend;
@class ICValueHistory, ICDelegateAccountStoreOptions;

@interface ICUserIdentityStoreCoding : NSObject <NSSecureCoding> {

	os_unfair_lock_s _lock;
	long long _identityStoreStyle;
	long long _uniqueIdentifier;
	ICValueHistory* _activeAccountHistory;
	ICValueHistory* _activeLockerAccountHistory;
	id<ICUserIdentityStoreBackend> _backend;
	ICDelegateAccountStoreOptions* _delegateAccountStoreOptions;

}

@property (nonatomic,readonly) long long identityStoreStyle;                                         //@synthesize identityStoreStyle=_identityStoreStyle - In the implementation block
@property (nonatomic,readonly) long long uniqueIdentifier;                                           //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,copy) ICValueHistory * activeAccountHistory;                                    //@synthesize activeAccountHistory=_activeAccountHistory - In the implementation block
@property (nonatomic,copy) ICValueHistory * activeLockerAccountHistory;                              //@synthesize activeLockerAccountHistory=_activeLockerAccountHistory - In the implementation block
@property (nonatomic,copy) id<ICUserIdentityStoreBackend> backend;                                   //@synthesize backend=_backend - In the implementation block
@property (nonatomic,copy) ICDelegateAccountStoreOptions * delegateAccountStoreOptions;              //@synthesize delegateAccountStoreOptions=_delegateAccountStoreOptions - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)uniqueIdentifier;
-(id)initWithIdentityStoreStyle:(long long)arg1 ;
-(long long)identityStoreStyle;
-(ICValueHistory *)activeAccountHistory;
-(void)setActiveAccountHistory:(ICValueHistory *)arg1 ;
-(ICValueHistory *)activeLockerAccountHistory;
-(void)setActiveLockerAccountHistory:(ICValueHistory *)arg1 ;
-(id<ICUserIdentityStoreBackend>)backend;
-(void)setBackend:(id<ICUserIdentityStoreBackend>)arg1 ;
-(ICDelegateAccountStoreOptions *)delegateAccountStoreOptions;
-(void)setDelegateAccountStoreOptions:(ICDelegateAccountStoreOptions *)arg1 ;
-(id)_initCommon;
-(void)lock:(/*^block*/id)arg1 ;
@end

