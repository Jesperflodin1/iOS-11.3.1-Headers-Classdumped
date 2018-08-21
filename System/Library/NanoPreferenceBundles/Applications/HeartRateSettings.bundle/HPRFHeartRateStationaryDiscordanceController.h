/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:43 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/NanoPreferenceBundles/Applications/HeartRateSettings.bundle/HeartRateSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class NPSManager;

@interface HPRFHeartRateStationaryDiscordanceController : PSListController {

	NPSManager* _syncManager;

}
+(BOOL)_isStationaryDiscordanceDetectionEnabled;
+(BOOL)isHeartRateEnabled;
+(long long)_minimumHeartRate;
+(id)minimumHeartRateString;
+(id)_allHeartRateOptions;
+(id)footerText;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)bundle;
-(id)localizedPaneTitle;
-(id)specifiers;
-(id)applicationBundleIdentifier;
@end

