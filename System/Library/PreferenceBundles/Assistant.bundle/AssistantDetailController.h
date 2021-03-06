/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:11:45 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/Assistant.bundle/Assistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class NSMutableSet, PSSpecifier;

@interface AssistantDetailController : PSListController {

	NSMutableSet* _disabledSpotlightBundles;
	NSMutableSet* _disabledSpotlightApps;
	PSSpecifier* _personalizationSpecifier;
	PSSpecifier* _appSearchGroupSpecifier;
	PSSpecifier* _appSearchSpecifier;

}
-(void)_fetchIntentsSpecifiersWithCompletion:(/*^block*/id)arg1 ;
-(void)setPersonalizationAndSearchEnabled:(id)arg1 ;
-(id)isPersonalizationAndSearchEnabled;
-(void)setAppSearchEnabled:(id)arg1 ;
-(id)isAppSearchEnabled;
-(void)setEventsFoundInAppsEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)eventsFoundInAppsEnabled:(id)arg1 ;
-(void)setContactsFoundInAppsEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)contactsFoundInAppsEnabled:(id)arg1 ;
-(void)setLocationsFoundInAppsEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)locationsFoundInAppsEnabled:(id)arg1 ;
-(void)setTopicsFoundInAppsEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)topicsFoundInAppsEnabled:(id)arg1 ;
-(void)_savePersonalizationAndSearchEnabled:(BOOL)arg1 ;
-(void)_saveAppSearchEnabled:(BOOL)arg1 ;
-(void)setSiriKitIntentAccess:(id)arg1 forSpecifier:(id)arg2 ;
-(id)SiriKitIntentAccesssForSpecifier:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)specifiers;
@end

