/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:05 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKTimelineEntryModel.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/CLKTimelineEntry.h>

@class HKQuantity, NSString;

@interface NTKWellnessEntryModel : NTKTimelineEntryModel <NSCopying, CLKTimelineEntry> {

	BOOL _databaseLoading;
	BOOL _deviceLocked;
	HKQuantity* _activeEnergy;
	HKQuantity* _activeEnergyTotal;
	HKQuantity* _activeEnergyGoal;
	double _briskMinutes;
	double _briskMinutesTotal;
	double _briskMinutesGoal;
	unsigned long long _standHourState;
	long long _standHoursTotal;
	long long _standHoursGoal;
	NTKWellnessEntryModel* _previousEntryModel;

}

@property (assign,nonatomic,__weak) NTKWellnessEntryModel * previousEntryModel;              //@synthesize previousEntryModel=_previousEntryModel - In the implementation block
@property (assign,nonatomic) BOOL databaseLoading;                                           //@synthesize databaseLoading=_databaseLoading - In the implementation block
@property (nonatomic,retain) HKQuantity * activeEnergy;                                      //@synthesize activeEnergy=_activeEnergy - In the implementation block
@property (nonatomic,retain) HKQuantity * activeEnergyTotal;                                 //@synthesize activeEnergyTotal=_activeEnergyTotal - In the implementation block
@property (nonatomic,retain) HKQuantity * activeEnergyGoal;                                  //@synthesize activeEnergyGoal=_activeEnergyGoal - In the implementation block
@property (assign,nonatomic) double briskMinutes;                                            //@synthesize briskMinutes=_briskMinutes - In the implementation block
@property (assign,nonatomic) double briskMinutesTotal;                                       //@synthesize briskMinutesTotal=_briskMinutesTotal - In the implementation block
@property (assign,nonatomic) double briskMinutesGoal;                                        //@synthesize briskMinutesGoal=_briskMinutesGoal - In the implementation block
@property (assign,nonatomic) unsigned long long standHourState;                              //@synthesize standHourState=_standHourState - In the implementation block
@property (assign,nonatomic) long long standHoursTotal;                                      //@synthesize standHoursTotal=_standHoursTotal - In the implementation block
@property (assign,nonatomic) long long standHoursGoal;                                       //@synthesize standHoursGoal=_standHoursGoal - In the implementation block
@property (nonatomic,readonly) BOOL userHasDoneActivitySetup; 
@property (nonatomic,readonly) BOOL deviceLocked;                                            //@synthesize deviceLocked=_deviceLocked - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)idealizedEntryModel;
+(id)lockedEntryModel;
+(id)formattingManager;
+(id)_activityTemplateWithFamily:(long long)arg1 entryModel:(id)arg2 ;
+(id)largeModular:(id)arg1 ;
+(id)largeUtility:(id)arg1 ;
+(id)_LocalizedStringWithActiveEnergy:(id)arg1 ;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)date;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDate:(id)arg1 ;
-(double)briskMinutes;
-(void)setBriskMinutes:(double)arg1 ;
-(double)briskMinutesGoal;
-(void)setBriskMinutesGoal:(double)arg1 ;
-(HKQuantity *)activeEnergy;
-(double)activeEnergyGoalCompletionPercentage;
-(double)briskMinuteGoalCompletionPercentage;
-(double)standHourGoalCompletionPercentage;
-(HKQuantity *)activeEnergyTotal;
-(double)briskMinutesTotal;
-(long long)standHoursTotal;
-(void)setActiveEnergyTotal:(HKQuantity *)arg1 ;
-(void)setActiveEnergyGoal:(HKQuantity *)arg1 ;
-(void)setStandHoursTotal:(long long)arg1 ;
-(void)setStandHoursGoal:(long long)arg1 ;
-(void)setBriskMinutesTotal:(double)arg1 ;
-(id)templateForComplicationFamily:(long long)arg1 ;
-(HKQuantity *)activeEnergyGoal;
-(long long)standHoursGoal;
-(BOOL)userHasDoneActivitySetup;
-(BOOL)deviceLocked;
-(BOOL)databaseLoading;
-(void)setActiveEnergy:(HKQuantity *)arg1 ;
-(void)setStandHourState:(unsigned long long)arg1 ;
-(long long)availabilityState;
-(unsigned long long)standHourState;
-(void)setDatabaseLoading:(BOOL)arg1 ;
-(NTKWellnessEntryModel *)previousEntryModel;
-(void)setPreviousEntryModel:(NTKWellnessEntryModel *)arg1 ;
@end

