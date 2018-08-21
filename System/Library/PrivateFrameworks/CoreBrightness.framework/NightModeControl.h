/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:19:52 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NightShiftSupportProtocol, OS_dispatch_queue, OS_dispatch_source;
#import <CoreBrightness/CoreBrightness-Structs.h>
@class NSMutableDictionary, SunriseSunsetProvider, NSDictionary, NSObject, NSString;

@interface NightModeControl : NSObject {

	NSMutableDictionary* _properties;
	SunriseSunsetProvider* _sunriseSunsetProvider;
	int _sunriseSunsetInfoQueryTimeout;
	NSDictionary* _sunriseSunsetInfo;
	id<NightShiftSupportProtocol> _supportObj;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _nextTransitionTimer;
	NSObject*<OS_dispatch_source> _transitionTimer;
	NSObject*<OS_dispatch_source> _aggdUpdateTimer;
	BLRAggdInfo _aggdKeysInfo;
	int _algoState;
	float _transitionLength;
	float _transitionLengthActual;
	float _transitionsTimesCoeff;
	float _transitionRate;
	float _minFactor;
	float _maxFactor;
	NMFactorState _factorState;
	CFTimeZoneRef _currentTimeZone;
	double _sunsetAbsolute;
	double _sunsetPreviousAbsolute;
	double _sunriseAbsolute;
	double _sunrisePreviousAbsolute;
	double _offTransitionTimeAbsoluteUnrestricted;
	double _offTransitionTimeAbsoluteUnrestrictedPrev;
	BOOL _transitionTimesValid;
	BOOL _isDaylight;
	int _currentScheduledTransitionType;
	double _displayOffTimestamp;
	double _untilNexTransitionTimestamp;
	float _inactivityTimeout;
	BOOL _checkInactivity;
	BOOL _displayOff;
	int _logLevel;
	/*^block*/id _callbackBlock;
	SCD_Struct_Ni5 _status;
	SCD_Struct_Ni4 _backupSchedule;
	BOOL _statusUpdated;
	NSString* _currentSunriseKey;
	NSString* _currentSunsetKey;
	NSString* _previousSunriseKey;
	NSString* _previousSunsetKey;
	NSString* _nextSunriseKey;
	NSString* _nextSunsetKey;
	NSString* _isDaylightKey;
	int _notifyUserAboutScheduleCounter;
	CFUserNotificationRef _enableNotification;
	BOOL _notificationInProgress;
	BOOL _revertToSunriseSunset;

}
-(void)saveStatusToPrefs:(id)arg1 ;
-(void)updateSunriseSunsetInfo:(id)arg1 ;
-(void)reevaluateCurrentState;
-(void)clockChanged;
-(id)copyStatusDictionaryFromPrefs;
-(id)copyLowPowerModeState;
-(void)updateLowPowerModeState:(id)arg1 ;
-(BOOL)parseStatusDictionary:(id)arg1 intoStruct:(SCD_Struct_Ni7*)arg2 shouldUpdatePrefs:(BOOL*)arg3 ;
-(id)copyDictionaryFromStatus:(SCD_Struct_Ni7*)arg1 ;
-(void)updateStatusDictionaryWithValue:(id)arg1 forKey:(id)arg2 ;
-(void)tearDownAllTimers;
-(void)aggdKeysUpdate;
-(void)scheduleAggdKeysUpdate;
-(void)reevaluateCurrentStateWithFactorFadeOption:(float)arg1 ;
-(void)updateOptionTimestamp:(double)arg1 ;
-(void)enableBlueLightReduction:(BOOL)arg1 withOption:(int)arg2 ;
-(void)setNightModeFactor:(float)arg1 ;
-(void)setAlgoState:(int)arg1 ;
-(void)displayAlertInteractive:(BOOL)arg1 ;
-(void)transitionTimerHandler;
-(void)setNightModeFactor:(float)arg1 withFadePeriod:(float)arg2 ;
-(BOOL)updateTransitionTimesFromSunriseSunset:(double)arg1 ;
-(BOOL)updateTransitionTimesFromSchedule:(double)arg1 ;
-(void)initiateTransitionTo:(float)arg1 andRampLength:(float)arg2 ;
-(void)cancelSchedule;
-(void)updateTransitionTimes:(double)arg1 ;
-(void)initiateRestrictedMaxTransition;
-(void)scheduleNextTransition:(double)arg1 withType:(int)arg2 ;
-(void)initiateFullMinTransition;
-(void)setSunPermitted:(BOOL)arg1 ;
-(void)updateSunriseSunsetBackup;
-(void)retrieveSunriseSunsetTimesFromBackup:(double)arg1 ;
-(void)cancelAggdPeriodicUpdate;
-(id)copyTimeStringWithHour:(int)arg1 minute:(int)arg2 second:(int)arg3 ;
-(id)initWithSupportObject:(id)arg1 queue:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)initiateFullMaxTransition;
-(void)dealloc;
-(void)cancelTransition;
-(void)setMode:(int)arg1 ;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)timeZoneChanged;
-(void)setSchedule:(id)arg1 ;
-(id)getPropertyForKey:(id)arg1 ;
@end

