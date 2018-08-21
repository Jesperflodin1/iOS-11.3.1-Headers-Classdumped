/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:11:38 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/MailAccountSettings.bundle/MailAccountSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ACUIAccountViewsProviderProtocol.h>

@class NSString;

@interface MailAccountViewsProvider : NSObject <ACUIAccountViewsProviderProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(Class)controllerClassForCreatingAccountWithType:(id)arg1 ;
-(Class)viewControllerClassForCreatingAccountWithType:(id)arg1 ;
-(id)configurationInfoForCreatingAccountWithType:(id)arg1 ;
-(Class)viewControllerClassForViewingAccount:(id)arg1 ;
-(id)configurationInfoForViewingAccount:(id)arg1 ;
-(id)supportedAccountTypeIdentifiers;
@end

