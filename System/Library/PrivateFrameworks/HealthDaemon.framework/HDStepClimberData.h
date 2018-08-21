/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:39 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDFitnessMachineDataCharacteristicBase.h>
#import <libobjc.A.dylib/HDDatumRendering.h>

@class HDFitnessMachineCharacteristicUInt16Field, HDFitnessMachineCharacteristicUInt8Field, NSDate;

@interface HDStepClimberData : HDFitnessMachineDataCharacteristicBase <HDDatumRendering> {

	HDFitnessMachineCharacteristicUInt16Field* _floorsField;
	HDFitnessMachineCharacteristicUInt16Field* _stepCountField;
	HDFitnessMachineCharacteristicUInt16Field* _stepPerMinuteField;
	HDFitnessMachineCharacteristicUInt16Field* _averageStepRateField;
	HDFitnessMachineCharacteristicUInt16Field* _positiveElevationGainField;
	HDFitnessMachineCharacteristicUInt16Field* _totalEnergyField;
	HDFitnessMachineCharacteristicUInt16Field* _energyPerHourField;
	HDFitnessMachineCharacteristicUInt8Field* _energyPerMinuteField;
	HDFitnessMachineCharacteristicUInt8Field* _heartRateField;
	HDFitnessMachineCharacteristicUInt8Field* _metabolicEquivalentField;
	HDFitnessMachineCharacteristicUInt16Field* _elapsedTimeField;
	HDFitnessMachineCharacteristicUInt16Field* _remainingTimeField;

}

@property (nonatomic,readonly) NSDate * updateTime; 
@property (nonatomic,readonly) BOOL floorsIsSet; 
@property (nonatomic,readonly) unsigned short floors; 
@property (nonatomic,readonly) BOOL stepCountIsSet; 
@property (nonatomic,readonly) unsigned short stepCount; 
@property (nonatomic,readonly) BOOL stepPerMinuteIsSet; 
@property (nonatomic,readonly) unsigned short stepPerMinute; 
@property (nonatomic,readonly) BOOL averageStepRateIsSet; 
@property (nonatomic,readonly) unsigned short averageStepRate; 
@property (nonatomic,readonly) BOOL positiveElevationGainIsSet; 
@property (nonatomic,readonly) unsigned short positiveElevationGain; 
@property (nonatomic,readonly) BOOL totalEnergyIsSet; 
@property (nonatomic,readonly) unsigned short totalEnergy; 
@property (nonatomic,readonly) BOOL energyPerHourIsSet; 
@property (nonatomic,readonly) unsigned short energyPerHour; 
@property (nonatomic,readonly) BOOL energyPerMinuteIsSet; 
@property (nonatomic,readonly) unsigned char energyPerMinute; 
@property (nonatomic,readonly) BOOL heartRateIsSet; 
@property (nonatomic,readonly) unsigned char heartRate; 
@property (nonatomic,readonly) BOOL metabolicEquivalentIsSet; 
@property (nonatomic,readonly) unsigned char metabolicEquivalent; 
@property (nonatomic,readonly) BOOL elapsedTimeIsSet; 
@property (nonatomic,readonly) unsigned short elapsedTime; 
@property (nonatomic,readonly) BOOL remainingTimeIsSet; 
@property (nonatomic,readonly) unsigned short remainingTime; 
+(id)uuid;
+(unsigned char)flagFieldLength;
-(unsigned short)stepCount;
-(unsigned short)remainingTime;
-(id)init;
-(id)description;
-(unsigned short)elapsedTime;
-(id)allFields;
-(BOOL)stepPerMinuteIsSet;
-(unsigned short)stepPerMinute;
-(BOOL)averageStepRateIsSet;
-(unsigned short)averageStepRate;
-(BOOL)positiveElevationGainIsSet;
-(unsigned short)positiveElevationGain;
-(BOOL)totalEnergyIsSet;
-(unsigned short)totalEnergy;
-(BOOL)energyPerHourIsSet;
-(unsigned short)energyPerHour;
-(BOOL)energyPerMinuteIsSet;
-(unsigned char)energyPerMinute;
-(BOOL)heartRateIsSet;
-(unsigned char)heartRate;
-(BOOL)metabolicEquivalentIsSet;
-(unsigned char)metabolicEquivalent;
-(BOOL)elapsedTimeIsSet;
-(BOOL)remainingTimeIsSet;
-(id)generateDatums:(id)arg1 ;
-(BOOL)floorsIsSet;
-(unsigned short)floors;
-(BOOL)stepCountIsSet;
@end

