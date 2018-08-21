/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:27 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/SecondaryCloudCallingSettingsBundle.bundle/SecondaryCloudCallingSettingsBundle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <SecondaryCloudCallingSettingsBundle/PHSettingsCloudCallingURLControllerDelegate.h>

@class NSString;

@interface PHSettingsCloudCallingListController : PSListController <PHSettingsCloudCallingURLControllerDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)presentPrivacySplashController;
-(void)privacySplashControllerDidRequestDismissal:(id)arg1 ;
-(void)presentOrUpdateViewController:(id)arg1 ;
-(void)appendAboutWiFiCallingFooterToGroupSpecifier:(id)arg1 ;
@end

