/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:10 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/MobileCalSettings.bundle/MobileCalSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class PSSpecifier;

@interface CSTimeZoneController : PSListController {

	PSSpecifier* _calendarTimeZoneSpecifier;
	PSSpecifier* _timeZoneSupportSpecifier;
	BOOL _timeZoneSupportEnabled;

}
-(id)specifiers;
-(id)timeZoneSupportEnabled:(id)arg1 ;
-(void)setCalendarTimeZone:(id)arg1 specifier:(id)arg2 ;
-(BOOL)_timeZoneSupportEnabled;
-(void)setTimeZoneSupportEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)calendarTimeZone:(id)arg1 ;
@end

