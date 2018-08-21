/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Watchdog/ThermalMonitor.bundle/ThermalMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ThermalMonitor/ThermalMonitor-Structs.h>
#import <ThermalMonitor/tGraphDataSource.h>

@class AggDThermalMonitor, NSMutableArray, TableDrivenDecisionTree, Navigation, CameraTS, LifetimeServoController, ContextualClampController, ArcController, AWDServerConnection, NSArray;

@interface CommonProduct : NSObject <tGraphDataSource> {

	AggDThermalMonitor* aggdTM;
	BOOL thermalTrap;
	NSMutableArray* listofComponentControl;
	NSMutableArray* listOfSupervisorControl;
	int calibrationResistorSensor;
	int calibrationResistorTempDefault;
	TableDrivenDecisionTree* decisionTree;
	int thermalState;
	unsigned long long componentThermalStatusLevel;
	unsigned long long previousOSThermalNotificationLevel;
	long long thermalPressureLevel;
	long long previousThermalPressureLevel;
	Navigation* navi;
	CameraTS* camSensor;
	BOOL canForceThermalLevels;
	BOOL usesFastDieTempControl;
	BOOL suppressesTrapSubCountLogging;
	BOOL needsAppleConnectThermalTrapLogging;
	int tsfdIndex;
	BOOL _blendStillNeeded;
	BOOL _haveUsedDeferral;
	int _forcedThermalLevelLower;
	int _forcedThermalLevelUpper;
	LifetimeServoController* lifetimeServoController;
	ContextualClampController* contextualClampController;
	ArcController* _arcController;
	AWDServerConnection* awdConnection;
	NSArray* _maximumDieTempSensorIndexSet;
	NSArray* _averageDieTempSensorIndexSet;
	NSArray* _filteredAverageDieTempSensorIndexSet;
	int _totalSensorCount;
	int _powerSensorCount;
	unsigned long long _PMUtcalAdjustMask;
	BOOL _reducedRateModeActive;
	BOOL _skipRegularAggdCountUpdate;
	BOOL _isBackLightOn;
	int _displayToken;
	int _chargerToken;
	int _chargerState;

}

@property (nonatomic,readonly) NSMutableArray * listofComponentControl; 
@property (nonatomic,readonly) NSMutableArray * listOfSupervisorControl; 
@property (nonatomic,readonly) int calibrationResistorSensor; 
@property (nonatomic,readonly) int calibrationResistorTempDefault; 
@property (assign,nonatomic) unsigned long long componentThermalStatusLevel; 
@property (assign,nonatomic) int thermalState; 
@property (assign,nonatomic) BOOL isBackLightOn;                                          //@synthesize isBackLightOn=_isBackLightOn - In the implementation block
@property (assign,nonatomic) int displayToken;                                            //@synthesize displayToken=_displayToken - In the implementation block
@property (assign,nonatomic) int chargerToken;                                            //@synthesize chargerToken=_chargerToken - In the implementation block
@property (assign,nonatomic) int chargerState;                                            //@synthesize chargerState=_chargerState - In the implementation block
-(void)updateAllThermalLoad:(BOOL)arg1 ;
-(id)findComponent:(int)arg1 ;
-(int)totalSensors;
-(int)powerSensors;
-(int)numberOfFields;
-(CFStringRef)copyHeaderForIndex:(int)arg1 ;
-(CFStringRef)copyFieldCurrentValueForIndex:(int)arg1 ;
-(BOOL)getNaviStatus;
-(int)maxControlEffort;
-(int)dieTempMaxAverage;
-(unsigned long long)getMaxSensorValue;
-(BOOL)getPotentialForcedThermalPressureLevel;
-(void)createConnectionToCT;
-(void)updateSystemPowerState:(BOOL)arg1 ;
-(BOOL)canSystemSleep;
-(unsigned long long)getWatchDogMode;
-(int)canaryTempSensorIndex;
-(int)canaryTempThreshold;
-(void)canaryModeExitEarly:(int)arg1 ;
-(BOOL)useTcalAdjust:(unsigned)arg1 ;
-(void)probeAllSupervisorControlLoadingIndex;
-(int)desiredLoopInterval;
-(int)gasGaugeBatteryTemperature;
-(id)createBacklightComponentController:(CFDictionaryRef)arg1 ;
-(void)registerDisplayNotification;
-(void)registerChargerNotification;
-(int)sensorIndexFromList:(CFArrayRef)arg1 fourCharCode:(CFStringRef)arg2 ;
-(id)copyDieTempSensorIndexSetForFourthChar:(char)arg1 sensors:(CFArrayRef)arg2 ;
-(BOOL)fourCharCodeNeedsPMUtcal:(CFStringRef)arg1 ;
-(CFArrayRef)copyHotspotsArray:(id)arg1 ;
-(void)setup2DGridDisplayDriver;
-(BOOL)shouldSuppressStandardBehaviors:(CFDictionaryRef)arg1 ;
-(void)suppressStandardBehaviors;
-(void)postDeviceTempMetric:(int)arg1 ;
-(BOOL)fourCharCodeMatchesDieTempType:(char)arg1 fourCharCode:(CFStringRef)arg2 ;
-(void)setIsBackLightOn:(BOOL)arg1 ;
-(void)setChargerState:(int)arg1 ;
-(int)getHighestSkinTemp;
-(unsigned long long)getPotentialForcedThermalLevel:(unsigned long long)arg1 ;
-(int)chargerToken;
-(unsigned long long)componentThermalStatusLevel;
-(void)replaceOrAppendHotspotEntry:(CFDictionaryRef)arg1 existingHotspots:(CFArrayRef)arg2 ;
-(void)setThermalState:(int)arg1 ;
-(void)setChargerToken:(int)arg1 ;
-(int)chargerState;
-(void)logTrapEntryForAC:(id)arg1 ;
-(void)evaluteMitigationMaxLoadingIndex;
-(void)writeAllCornerTemperatures:(int)arg1 ;
-(id)getGridX;
-(id)getGridY;
-(int)dieTempMaxMax;
-(int)thermalSensorValuesMaxFromIndexSet:(id)arg1 ;
-(id)initProduct:(id)arg1 ;
-(int)calibrationResistorTempDefault;
-(int)calibrationResistorSensor;
-(iir_filter_t*)getFilterValues;
-(void)tryTakeAction;
-(void)getAllComponentID:(SCPreferencesRef)arg1 ;
-(void)updateMaxLIFor:(int)arg1 :(unsigned)arg2 ;
-(void)clearLoadingIndexOverrides;
-(void)updateControlEffortFor:(int)arg1 :(unsigned)arg2 ;
-(void)clearControlEffortOverrides;
-(void)updateHotSpotPIDTargetFor:(int)arg1 :(unsigned)arg2 ;
-(void)removeHotspotTargetOverrides;
-(void)updateTrapTargetFor:(int)arg1 :(unsigned)arg2 ;
-(void)updateSleepTargetFor:(int)arg1 :(unsigned)arg2 ;
-(void)overrideLifetimeServoParam:(id)arg1 value:(int)arg2 ;
-(void)overrideArcParam:(id)arg1 value:(int)arg2 ;
-(void)updateDisplayDriver:(BOOL)arg1 ;
-(int*)compute2DGridTemps;
-(void)send2DGridTempsToDisplayDriver:(int*)arg1 ;
-(void)updateAggdInfo;
-(void)updateLifetimeServo;
-(void)updateContextualClamp;
-(NSMutableArray *)listofComponentControl;
-(NSMutableArray *)listOfSupervisorControl;
-(int)arcModuleTemperature;
-(void)setComponentThermalStatusLevel:(unsigned long long)arg1 ;
-(int)dieTempFilteredMaxAverage;
-(int)getChargerState;
-(BOOL)mitigationsFullyReleased;
-(int)arcVirtualTemperature;
-(BOOL)isBackLightOn;
-(BOOL)isInternalInstall;
-(void)dealloc;
-(int)thermalState;
-(void)setDisplayToken:(int)arg1 ;
-(int)displayToken;
@end

