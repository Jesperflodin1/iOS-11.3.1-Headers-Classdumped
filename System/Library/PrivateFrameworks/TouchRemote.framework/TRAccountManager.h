/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:33 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TRAccountManager : NSObject
+(id)idmsAccountForAccountService:(unsigned long long)arg1 ;
+(id)associatedAccountServicesForIDMSAccount:(id)arg1 ;
+(id)_idmsAccountForICloudService;
+(id)_idmsAccountForITunesService;
+(id)_idmsAccountForGameCenterService;
+(id)_primaryICloudAccount;
+(id)_idmsAccountForAccountWithUsername:(id)arg1 altDSID:(id)arg2 DSID:(id)arg3 ;
+(id)_primaryITunesAccount;
+(id)_primaryGameCenterAccount;
@end

