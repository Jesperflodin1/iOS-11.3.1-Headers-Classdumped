/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AKAppleIDAuthenticationDelegate.h>

@class AKAppleIDAuthenticationContext, UMUserSwitchContext, NSString;

@interface BYManagedAppleIDBootstrap : NSObject <AKAppleIDAuthenticationDelegate> {

	AKAppleIDAuthenticationContext* _authContext;
	UMUserSwitchContext* _userSwitchContext;

}

@property (nonatomic,readonly) UMUserSwitchContext * userSwitchContext; 
@property (nonatomic,copy,readonly) NSString * shortLivedToken; 
@property (nonatomic,readonly) BOOL passwordChangeFlowNeedsToRun; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
+(id)delegateBundleIDsForManagedAccount;
+(BOOL)isSettingUpMultiUser;
+(BOOL)isMultiUser;
-(BOOL)isLoginUser;
-(id)init;
-(void)dealloc;
-(UMUserSwitchContext *)userSwitchContext;
-(NSString *)shortLivedToken;
-(void)postUserSwitchContextHasBeenUsed;
-(void)recoverEMCSWithCompletion:(/*^block*/id)arg1 ;
-(void)_upgradeShortLivedTokenCompletion:(/*^block*/id)arg1 ;
-(BOOL)needsToUpgradeShortLivedToken;
-(BOOL)passwordChangeFlowNeedsToRun;
-(void)switchToLoginWindowDueToError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_runSilentLoginUpgradeWithCompletion:(/*^block*/id)arg1 ;
-(void)_createAppleAccountWithUsername:(id)arg1 password:(id)arg2 rawPassword:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_languageConfigurationDictionary;
-(void)userSwitchContextHasBeenUsed;
-(void)ingestManagedBuddyData;
-(void)runSilentLoginUpgradeIfNeededWithCompletion:(/*^block*/id)arg1 ;
-(void)writeAccountConfigurationIfNeededWithCompletion:(/*^block*/id)arg1 ;
@end
