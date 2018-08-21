/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:11:45 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/Assistant.bundle/Assistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class PSSpecifier;

@interface AssistantAudioFeedbackController : PSListController {

	PSSpecifier* _switchWithRingerSpecifier;
	PSSpecifier* _alwaysSpecifier;
	PSSpecifier* _handsfreeSpecifier;
	PSSpecifier* _groupSpecifier;
	long long _useDeviceSpeakerForTTSPreference;

}
+(id)bundle;
-(id)_localizeTriggerString:(id)arg1 ;
-(id)footerVariant;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)specifiers;
-(void)_updateSpecifiersFromPreferences;
-(void)_refreshFooterForSpecifier:(id)arg1 ;
-(void)preferencesDidChange:(id)arg1 ;
@end

