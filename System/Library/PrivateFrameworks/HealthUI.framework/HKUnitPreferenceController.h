/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:42 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, HKHealthStore, NSDictionary;

@interface HKUnitPreferenceController : NSObject {

	NSMutableDictionary* _unitStrings;
	HKHealthStore* _healthStore;
	NSDictionary* _unitPreferencesByObjectType;

}
-(void)dealloc;
-(void)_localeDidChange:(id)arg1 ;
-(void)_unitPreferencesDidUpdate:(id)arg1 ;
-(void)_initHKUnitPreferences;
-(id)unitForDisplayType:(id)arg1 ;
-(id)_displayNameKeyForDisplayType:(id)arg1 withNumber:(BOOL)arg2 ;
-(id)localizedHealthUIStringForDisplayType:(id)arg1 key:(id)arg2 value:(id)arg3 ;
-(id)_displayNameKeyForUnit:(id)arg1 ;
-(id)_displayNameKey:(id)arg1 withNumber:(BOOL)arg2 ;
-(id)_longDisplayNameOverrideForDisplayType:(id)arg1 ;
-(id)_longDisplayNameForUnit:(id)arg1 ;
-(id)localizedDisplayNameForDisplayType:(id)arg1 ;
-(void)_postNotificationWithChangedKeys:(id)arg1 ;
-(void)_fetchHKUnitPreferencesWithAttempt:(long long)arg1 ;
-(id)_generateDefaultHKUnitPreferences;
-(void)_refreshHKUnitPreferencesWithCompletion:(/*^block*/id)arg1 ;
-(void)_updateHKUnitPreferences:(id)arg1 ;
-(id)_changedKeysBetweenDictionary:(id)arg1 andDictionary:(id)arg2 ;
-(id)localizedDisplayNameForDisplayType:(id)arg1 value:(id)arg2 ;
-(id)localizedDisplayNameForUnit:(id)arg1 value:(id)arg2 ;
-(id)localizedLongDisplayNameForDisplayType:(id)arg1 ;
-(void)updatePreferredUnit:(id)arg1 forDisplayType:(id)arg2 ;
-(double)scaleFactorForYAxisLabeling:(id)arg1 ;
-(id)displayRangeForDisplayType:(id)arg1 ;
-(id)initWithHealthStore:(id)arg1 ;
@end
