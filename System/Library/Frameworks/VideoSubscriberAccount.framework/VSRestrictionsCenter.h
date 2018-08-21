/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@class MCProfileConnection, NSString;

@interface VSRestrictionsCenter : NSObject <MCProfileConnectionObserver> {

	BOOL _accountModificationAllowed;
	MCProfileConnection* _profileConnection;

}

@property (assign,getter=isAcountModificationAllowed,nonatomic) BOOL accountModificationAllowed;              //@synthesize accountModificationAllowed=_accountModificationAllowed - In the implementation block
@property (nonatomic,retain) MCProfileConnection * profileConnection;                                         //@synthesize profileConnection=_profileConnection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultRestrictionsCenter;
-(id)init;
-(void)dealloc;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)_updateAccountModificationAllowed;
-(MCProfileConnection *)profileConnection;
-(BOOL)_canInstallAppsAtAll;
-(BOOL)canInstallAppWithRating:(long long)arg1 ;
-(void)setProfileConnection:(MCProfileConnection *)arg1 ;
-(void)setAccountModificationAllowed:(BOOL)arg1 ;
-(BOOL)isAcountModificationAllowed;
@end

