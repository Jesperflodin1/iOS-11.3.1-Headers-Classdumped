/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/MobileSafariSettings.bundle/MobileSafariSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafariSettings/MobileSafariSettings-Structs.h>
#import <Preferences/PSListController.h>

@interface SafariSettingsListController : PSListController
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)loadSpecifiersFromPlistName:(id)arg1 target:(id)arg2 bundle:(id)arg3 ;
-(void)reloadSpecifierAtIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(BOOL)prepareHandlingURLForSpecifierID:(id)arg1 resourceDictionary:(id)arg2 animatePush:(BOOL*)arg3 ;
-(void)postDistributedNotificationNamed:(CFStringRef)arg1 ;
-(void)updateRestrictionsForSpecifiers:(id)arg1 ;
-(id)safariDefaultsValueForKey:(id)arg1 ;
-(void)setSafariDefaultsValue:(id)arg1 forKey:(id)arg2 ;
-(void)synchronizeSafariDefaults;
-(void)_promptForPasscodeIfNeededWithTitle:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_evaluateBoolSelectorWithPropertyKey:(id)arg1 specifier:(id)arg2 defaultValue:(BOOL)arg3 ;
-(BOOL)userInterfaceIdiomIsPhone:(id)arg1 ;
-(BOOL)userInterfaceIdiomIsPad:(id)arg1 ;
@end

