/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, HKHealthStore;

@interface FIUIUnitManager : NSObject {

	NSMutableDictionary* _preferredUnits;
	HKHealthStore* _healthStore;

}
+(id)sharedManager;
-(void)dealloc;
-(id)_loadPreferredUnitsFromDefaults;
-(void)_updatePreferredUnits;
-(void)_storePreferredUnitsInDefaults:(id)arg1 ;
-(void)_notifyUnitPreferencesChanged;
-(id)_preferredHKUnitForQuantityType:(id)arg1 ;
-(id)userDistanceHKUnitForDistanceType:(unsigned long long)arg1 ;
-(id)userDistanceCyclingHKUnit;
-(id)userLapLengthHKUnit;
-(id)userDistanceElevationHKUnit;
-(id)userDistanceWalkingRunningHKUnit;
-(void)_setPreferredHKUnit:(id)arg1 forQuantityType:(id)arg2 ;
-(unsigned long long)userDistanceWalkingRunningUnit;
-(unsigned long long)userDistanceElevationUnit;
-(unsigned long long)userDistanceUnitForDistanceType:(unsigned long long)arg1 ;
-(void)setUserDistanceUnit:(unsigned long long)arg1 forDistanceType:(unsigned long long)arg2 ;
-(void)setUserDistanceWalkingRunningUnit:(unsigned long long)arg1 ;
-(unsigned long long)userDistanceCyclingUnit;
-(void)setUserDistanceCyclingUnit:(unsigned long long)arg1 ;
-(void)setUserActiveEnergyBurnedUnit:(id)arg1 ;
-(id)userBasalEnergyBurnedUnit;
-(void)setUserBasalEnergyBurnedUnit:(id)arg1 ;
-(void)setPreferredUnitsForTesting:(id)arg1 ;
-(void)_userPreferencesDidChange:(id)arg1 ;
-(void)_localeDidChange:(id)arg1 ;
-(id)initWithHealthStore:(id)arg1 ;
-(id)userActiveEnergyBurnedUnit;
@end

