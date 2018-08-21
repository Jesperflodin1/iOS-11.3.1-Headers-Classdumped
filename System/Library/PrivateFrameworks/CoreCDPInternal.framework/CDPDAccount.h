/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:19:55 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CDPDAccount : NSObject

@property (assign,nonatomic) BOOL hasDisabledKeychainExplicitly; 
+(id)sharedInstance;
-(id)authToken;
-(id)sharedAccountStore;
-(BOOL)isICDPEnabledForDSID:(id)arg1 ;
-(id)iCloudEnv;
-(id)escrowURL;
-(id)primaryAccountAltDSID;
-(id)primaryAccountUsername;
-(unsigned long long)primaryAccountSecurityLevel;
-(id)primaryAccountDSID;
-(id)_primaryAppleAccount;
-(BOOL)isICDPEnabledForDSID:(id)arg1 checkWithServer:(BOOL)arg2 ;
-(BOOL)hasDisabledKeychainExplicitly;
-(void)setHasDisabledKeychainExplicitly:(BOOL)arg1 ;
-(id)contextForPrimaryAccount;
@end
