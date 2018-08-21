/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:11:39 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/OSXServerSettings.bundle/OSXServerSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ACUIAccountViewsProviderProtocol <NSObject>
@optional
-(Class)controllerClassForCreatingAccountWithType:(id)arg1;

@required
-(Class)viewControllerClassForCreatingAccountWithType:(id)arg1;
-(id)configurationInfoForCreatingAccountWithType:(id)arg1;
-(Class)viewControllerClassForViewingAccount:(id)arg1;
-(id)configurationInfoForViewingAccount:(id)arg1;
-(id)supportedAccountTypeIdentifiers;

@end

