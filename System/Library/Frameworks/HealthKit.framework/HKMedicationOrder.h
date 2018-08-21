/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:29 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKMedicalRecord.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, HKMedicalDate, NSString, HKMedicalCoding, HKMedicationOrderType;

@interface HKMedicationOrder : HKMedicalRecord <NSSecureCoding, NSCopying> {

	NSArray* _dosages;
	HKMedicalDate* _earliestDosageDate;
	HKMedicalDate* _endedDate;
	NSArray* _medicationCodings;
	long long _numberOfFills;
	NSString* _prescriber;
	NSArray* _reasonCodings;
	NSArray* _reasonEndedCodings;
	HKMedicalCoding* _statusCoding;
	HKMedicalDate* _writtenDate;

}

@property (nonatomic,readonly) HKMedicationOrderType * medicationOrderType; 
@property (nonatomic,copy,readonly) NSArray * dosages;                                   //@synthesize dosages=_dosages - In the implementation block
@property (nonatomic,copy,readonly) HKMedicalDate * earliestDosageDate;                  //@synthesize earliestDosageDate=_earliestDosageDate - In the implementation block
@property (nonatomic,copy,readonly) HKMedicalDate * endedDate;                           //@synthesize endedDate=_endedDate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * medicationCodings;                         //@synthesize medicationCodings=_medicationCodings - In the implementation block
@property (nonatomic,readonly) long long numberOfFills;                                  //@synthesize numberOfFills=_numberOfFills - In the implementation block
@property (nonatomic,copy,readonly) NSString * prescriber;                               //@synthesize prescriber=_prescriber - In the implementation block
@property (nonatomic,copy,readonly) NSArray * reasonCodings;                             //@synthesize reasonCodings=_reasonCodings - In the implementation block
@property (nonatomic,copy,readonly) NSArray * reasonEndedCodings;                        //@synthesize reasonEndedCodings=_reasonEndedCodings - In the implementation block
@property (nonatomic,copy,readonly) HKMedicalCoding * statusCoding;                      //@synthesize statusCoding=_statusCoding - In the implementation block
@property (nonatomic,copy,readonly) HKMedicalDate * writtenDate;                         //@synthesize writtenDate=_writtenDate - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)supportsEquivalence;
+(BOOL)_isConcreteObjectClass;
+(id)medicationOrderWithNote:(id)arg1 enteredInError:(BOOL)arg2 modifiedDate:(id)arg3 FHIRIdentifier:(id)arg4 extractionVersion:(long long)arg5 device:(id)arg6 metadata:(id)arg7 medicationCodings:(id)arg8 prescriber:(id)arg9 numberOfFills:(long long)arg10 dosages:(id)arg11 earliestDosageDate:(id)arg12 writtenDate:(id)arg13 endedDate:(id)arg14 statusCoding:(id)arg15 reasonCodings:(id)arg16 reasonEndedCodings:(id)arg17 ;
+(id)defaultDisplayString;
+(id)medicationCodingsPreferredSystems;
+(id)statusCodingPreferredSystems;
+(id)reasonCodingsPreferredSystems;
+(id)reasonEndedCodingsPreferredSystems;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)_init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)indexKeywords;
-(id)medicalRecordCodings;
-(id)medicalRecordPreferredSystems;
-(id)statusCodingTasks;
-(id)medicationCodingsTasks;
-(id)reasonCodingsTasks;
-(id)reasonEndedCodingsTasks;
-(NSArray *)medicationCodings;
-(NSArray *)dosages;
-(HKMedicalDate *)earliestDosageDate;
-(HKMedicalCoding *)statusCoding;
-(NSArray *)reasonCodings;
-(void)_setStatusCoding:(id)arg1 ;
-(void)_setReasonCodings:(id)arg1 ;
-(id)_validateConfiguration;
-(void)_setMedicationCodings:(id)arg1 ;
-(void)_setDosages:(id)arg1 ;
-(void)_setEarliestDosageDate:(id)arg1 ;
-(NSString *)prescriber;
-(long long)numberOfFills;
-(HKMedicalDate *)writtenDate;
-(HKMedicalDate *)endedDate;
-(NSArray *)reasonEndedCodings;
-(void)_setPrescriber:(id)arg1 ;
-(void)_setNumberOfFills:(long long)arg1 ;
-(void)_setWrittenDate:(id)arg1 ;
-(void)_setEndedDate:(id)arg1 ;
-(void)_setReasonEndedCodings:(id)arg1 ;
-(HKMedicationOrderType *)medicationOrderType;
-(BOOL)isEquivalent:(id)arg1 ;
@end
