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

@class HKCodedQuantity, NSArray, HKMedicalDate, HKMedicalCoding, HKMedicationDispenseRecordType;

@interface HKMedicationDispenseRecord : HKMedicalRecord <NSSecureCoding, NSCopying> {

	HKCodedQuantity* _daysSupplyQuantity;
	NSArray* _dosages;
	HKMedicalDate* _earliestDosageDate;
	HKMedicalDate* _handOverDate;
	NSArray* _medicationCodings;
	HKMedicalDate* _preparationDate;
	HKCodedQuantity* _quantityDispensed;
	HKMedicalCoding* _statusCoding;

}

@property (nonatomic,readonly) HKMedicationDispenseRecordType * medicationDispenseRecordType; 
@property (nonatomic,copy,readonly) HKCodedQuantity * daysSupplyQuantity;                                  //@synthesize daysSupplyQuantity=_daysSupplyQuantity - In the implementation block
@property (nonatomic,copy,readonly) NSArray * dosages;                                                     //@synthesize dosages=_dosages - In the implementation block
@property (nonatomic,copy,readonly) HKMedicalDate * earliestDosageDate;                                    //@synthesize earliestDosageDate=_earliestDosageDate - In the implementation block
@property (nonatomic,copy,readonly) HKMedicalDate * handOverDate;                                          //@synthesize handOverDate=_handOverDate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * medicationCodings;                                           //@synthesize medicationCodings=_medicationCodings - In the implementation block
@property (nonatomic,copy,readonly) HKMedicalDate * preparationDate;                                       //@synthesize preparationDate=_preparationDate - In the implementation block
@property (nonatomic,copy,readonly) HKCodedQuantity * quantityDispensed;                                   //@synthesize quantityDispensed=_quantityDispensed - In the implementation block
@property (nonatomic,copy,readonly) HKMedicalCoding * statusCoding;                                        //@synthesize statusCoding=_statusCoding - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)medicationDispenseRecordWithNote:(id)arg1 enteredInError:(BOOL)arg2 modifiedDate:(id)arg3 FHIRIdentifier:(id)arg4 extractionVersion:(long long)arg5 device:(id)arg6 metadata:(id)arg7 medicationCodings:(id)arg8 quantityDispensed:(id)arg9 preparationDate:(id)arg10 handOverDate:(id)arg11 dosages:(id)arg12 earliestDosageDate:(id)arg13 statusCoding:(id)arg14 daysSupplyQuantity:(id)arg15 ;
+(BOOL)supportsEquivalence;
+(BOOL)_isConcreteObjectClass;
+(id)defaultDisplayString;
+(id)medicationCodingsPreferredSystems;
+(id)statusCodingPreferredSystems;
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
-(NSArray *)medicationCodings;
-(HKCodedQuantity *)quantityDispensed;
-(HKMedicalDate *)preparationDate;
-(HKMedicalDate *)handOverDate;
-(NSArray *)dosages;
-(HKMedicalDate *)earliestDosageDate;
-(HKMedicalCoding *)statusCoding;
-(HKCodedQuantity *)daysSupplyQuantity;
-(void)_setStatusCoding:(id)arg1 ;
-(id)_validateConfiguration;
-(void)_setMedicationCodings:(id)arg1 ;
-(void)_setDosages:(id)arg1 ;
-(void)_setEarliestDosageDate:(id)arg1 ;
-(void)_setQuantityDispensed:(id)arg1 ;
-(void)_setPreparationDate:(id)arg1 ;
-(void)_setHandOverDate:(id)arg1 ;
-(void)_setDaysSupplyQuantity:(id)arg1 ;
-(HKMedicationDispenseRecordType *)medicationDispenseRecordType;
-(BOOL)isEquivalent:(id)arg1 ;
@end

