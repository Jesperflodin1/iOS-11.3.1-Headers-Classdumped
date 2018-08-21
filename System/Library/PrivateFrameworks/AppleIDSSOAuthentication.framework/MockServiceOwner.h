/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:41 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AppleIDSSOAuthentication.framework/AppleIDSSOAuthentication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AIDAServiceOwnerProtocol.h>

@class ACAccountStore, NSString;

@interface MockServiceOwner : NSObject <AIDAServiceOwnerProtocol> {

	ACAccountStore* _accountStore;
	NSString* _serviceType;
	/*^block*/id _signInHandler;
	/*^block*/id _signOutHandler;

}

@property (nonatomic,copy) id signInHandler;                        //@synthesize signInHandler=_signInHandler - In the implementation block
@property (nonatomic,copy) id signOutHandler;                       //@synthesize signOutHandler=_signOutHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setSupportedServices:(id)arg1 ;
+(id)supportedServices;
-(id)init;
-(id)initWithAccountStore:(id)arg1 service:(id)arg2 ;
-(id)signInHandler;
-(id)signOutHandler;
-(id)nameComponentsForAccount:(id)arg1 service:(id)arg2 ;
-(void)signOutService:(id)arg1 withContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setSignInHandler:(id)arg1 ;
-(void)setSignOutHandler:(id)arg1 ;
-(id)initWithAccountStore:(id)arg1 ;
-(void)signInService:(id)arg1 withContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)altDSIDForAccount:(id)arg1 service:(id)arg2 ;
-(id)DSIDForAccount:(id)arg1 service:(id)arg2 ;
-(id)accountForService:(id)arg1 ;
@end

