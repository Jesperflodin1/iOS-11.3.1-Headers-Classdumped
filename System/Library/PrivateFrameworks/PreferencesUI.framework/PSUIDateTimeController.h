/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PreferencesUI/PreferencesUI-Structs.h>
#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/PSUIDateTimePickerCellDelegate.h>

@class NSIndexPath, NSTimer, PSSpecifier, PSWallClockMinuteTimer;

@interface PSUIDateTimeController : PSListController <PSUIDateTimePickerCellDelegate> {

	NSIndexPath* _setDateAndTimeIndexPath;
	NSTimer* _timer;
	BOOL _localeForces24HourTime;
	CFDateFormatterRef _dateFormatter;
	CFDateFormatterRef _timeFormatter;
	PSSpecifier* _timeZoneSpecifier;
	PSSpecifier* _timePickerSpecifier;
	PSSpecifier* _currentTimeSpecifier;
	PSWallClockMinuteTimer* _minuteTimer;

}

@property (nonatomic,retain) PSWallClockMinuteTimer * minuteTimer;              //@synthesize minuteTimer=_minuteTimer - In the implementation block
@property (retain) PSSpecifier * timeZoneSpecifier;                             //@synthesize timeZoneSpecifier=_timeZoneSpecifier - In the implementation block
@property (retain) PSSpecifier * timePickerSpecifier;                           //@synthesize timePickerSpecifier=_timePickerSpecifier - In the implementation block
@property (retain) PSSpecifier * currentTimeSpecifier;                          //@synthesize currentTimeSpecifier=_currentTimeSpecifier - In the implementation block
-(id)init;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)datePickerChanged:(id)arg1 ;
-(id)specifiers;
-(void)reloadTimezone;
-(PSWallClockMinuteTimer *)minuteTimer;
-(void)newCarrierNotification;
-(void)significantTimeChange:(id)arg1 ;
-(void)localeChanged:(id)arg1 ;
-(void)_createDateTimeFormatters;
-(void)_updateCurrentTime;
-(void)setMinuteTimer:(PSWallClockMinuteTimer *)arg1 ;
-(void)setTimeZoneSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)timeZoneSpecifier;
-(id)useAutomaticTime:(id)arg1 ;
-(void)_setSpecifier:(id)arg1 valueEnabled:(BOOL)arg2 ;
-(PSSpecifier *)currentTimeSpecifier;
-(id)makeCurrentTimeSpecifier;
-(void)setCurrentTimeSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)timePickerSpecifier;
-(void)setAutomaticTimeFooter;
-(id)currentDateString;
-(id)valueForTime:(id)arg1 ;
-(BOOL)shouldDisplayTimezoneSpinner;
-(id)makeTimePickerSpecifier;
-(void)setTimePickerSpecifier:(PSSpecifier *)arg1 ;
-(id)is24HourTime:(id)arg1 ;
-(void)setTimeZoneValue:(id)arg1 specifier:(id)arg2 ;
-(void)setUseAutomaticTime:(id)arg1 specifier:(id)arg2 ;
-(void)set24HourTime:(id)arg1 specifier:(id)arg2 ;
-(id)timeZoneValue:(id)arg1 ;
-(id)currentTimeString;
@end

