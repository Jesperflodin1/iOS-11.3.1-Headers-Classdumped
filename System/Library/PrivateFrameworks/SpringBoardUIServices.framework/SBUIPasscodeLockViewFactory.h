/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:41 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SBUIPasscodeLockViewFactory : NSObject
+(id)passcodeLockViewForStyle:(int)arg1 ;
+(id)_passcodeLockViewForStyle:(int)arg1 withLightStyle:(BOOL)arg2 ;
+(id)lightPasscodeLockViewForStyle:(int)arg1 ;
+(void)_commonInitPasscodeView:(id)arg1 forStyle:(int)arg2 ;
+(id)_defaultPasscodeBiometricResource;
+(void)_warmupKBDIfNecessary;
+(id)lightPasscodeLockViewForUsersCurrentStyle;
+(id)installTonightPasscodeLockViewForUsersCurrentStyle;
+(void)setPasscodeBiometricResource:(id)arg1 ;
+(id)passcodeLockViewForUsersCurrentStyle;
@end

