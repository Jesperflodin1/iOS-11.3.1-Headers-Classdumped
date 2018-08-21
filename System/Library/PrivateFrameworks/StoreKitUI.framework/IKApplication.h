/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IKApplication <NSObject>
@optional
-(id)activeDocument;
-(id)appJSCachePath;
-(id)appLocalJSURL;
-(BOOL)shouldAllowRemoteInspection;
-(BOOL)appIsTrusted;
-(BOOL)appIsPrivileged;
-(id)appLaunchParams;
-(id)viewElementRegistry;
-(BOOL)appUsesDefaultStyleSheets;
-(id)appTraitCollection;

@required
-(id)appIdentifier;
-(BOOL)shouldIgnoreJSValidation;
-(id)appJSURL;
-(id)vendorIdentifier;
-(id)localStorage;
-(id)vendorStorage;
-(id)userDefaultsStorage;

@end

