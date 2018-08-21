/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:00:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Accounts/ServiceOwners/GCCloudServiceOwner.bundle/GCCloudServiceOwner
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AIDAServiceOwnerProtocol.h>

@class ACAccountStore, NSString;

@interface GKCloudServiceOwner : NSObject <AIDAServiceOwnerProtocol> {

	ACAccountStore* _accountStore;

}

@property (nonatomic,retain) ACAccountStore * accountStore;              //@synthesize accountStore=_accountStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedServices;
-(id)_gameCenterAccountType;
-(id)nameComponentsForAccount:(id)arg1 service:(id)arg2 ;
-(void)signOutService:(id)arg1 withContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(ACAccountStore *)accountStore;
-(id)initWithAccountStore:(id)arg1 ;
-(void)signInService:(id)arg1 withContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)altDSIDForAccount:(id)arg1 service:(id)arg2 ;
-(id)DSIDForAccount:(id)arg1 service:(id)arg2 ;
-(id)accountForService:(id)arg1 ;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
@end

