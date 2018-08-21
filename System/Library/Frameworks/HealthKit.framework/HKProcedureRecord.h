/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKMedicalRecord.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, HKMedicalDate, HKMedicalCoding, HKProcedureRecordType;

@interface HKProcedureRecord : HKMedicalRecord <NSSecureCoding, NSCopying> {

	BOOL _notPerformed;
	NSArray* _bodySitesCodings;
	NSArray* _categoryCodings;
	NSArray* _complicationsCodings;
	HKMedicalDate* _executionEndDate;
	HKMedicalDate* _executionStartDate;
	NSArray* _followUpsCodings;
	NSArray* _outcomeCodings;
	NSArray* _performers;
	NSArray* _procedureCodings;
	NSArray* _reasonCodings;
	NSArray* _reasonsNotPerformedCodings;
	HKMedicalCoding* _statusCoding;

}

@property (nonatomic,readonly) HKProcedureRecordType * procedureRecordType; 
@property (nonatomic,copy,readonly) NSArray * bodySitesCodings;                          //@synthesize bodySitesCodings=_bodySitesCodings - In the implementation block
@property (nonatomic,copy,readonly) NSArray * categoryCodings;                           //@synthesize categoryCodings=_categoryCodings - In the implementation block
@property (nonatomic,copy,readonly) NSArray * complicationsCodings;                      //@synthesize complicationsCodings=_complicationsCodings - In the implementation block
@property (nonatomic,copy,readonly) HKMedicalDate * executionEndDate;                    //@synthesize executionEndDate=_executionEndDate - In the implementation block
@property (nonatomic,copy,readonly) HKMedicalDate * executionStartDate;                  //@synthesize executionStartDate=_executionStartDate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * followUpsCodings;                          //@synthesize followUpsCodings=_followUpsCodings - In the implementation block
@property (nonatomic,readonly) BOOL notPerformed;                                        //@synthesize notPerformed=_notPerformed - In the implementation block
@property (nonatomic,copy,readonly) NSArray * outcomeCodings;                            //@synthesize outcomeCodings=_outcomeCodings - In the implementation block
@property (nonatomic,copy,readonly) NSArray * performers;                                //@synthesize performers=_performers - In the implementation block
@property (nonatomic,copy,readonly) NSArray * procedureCodings;                          //@synthesize procedureCodings=_procedureCodings - In the implementation block
@property (nonatomic,copy,readonly) NSArray * reasonCodings;                             //@synthesize reasonCodings=_reasonCodings - In the implementation block
@property (nonatomic,copy,readonly) NSArray * reasonsNotPerformedCodings;                //@synthesize reasonsNotPerformedCodings=_reasonsNotPerformedCodings - In the implementation block
@property (nonatomic,copy,readonly) HKMedicalCoding * statusCoding;                      //@synthesize statusCoding=_statusCoding - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)supportsEquivalence;
+(BOOL)_isConcreteObjectClass;
+(id)defaultDisplayString;
+(id)procedureCodingsPreferredSystems;
+(id)bodySitesCodingsPreferredSystems;
+(id)categoryCodingsPreferredSystems;
+(id)statusCodingPreferredSystems;
+(id)reasonCodingsPreferredSystems;
+(id)complicationsCodingsPreferredSystems;
+(id)followUpsCodingsPreferredSystems;
+(id)outcomeCodingsPreferredSystems;
+(id)reasonsNotPerformedCodingsPreferredSystems;
+(id)procedureRecordWithNote:(id)arg1 enteredInError:(BOOL)arg2 modifiedDate:(id)arg3 FHIRIdentifier:(id)arg4 extractionVersion:(long long)arg5 device:(id)arg6 metadata:(id)arg7 procedureCodings:(id)arg8 performers:(id)arg9 executionStartDate:(id)arg10 executionEndDate:(id)arg11 notPerformed:(BOOL)arg12 statusCoding:(id)arg13 categoryCodings:(id)arg14 reasonCodings:(id)arg15 reasonsNotPerformedCodings:(id)arg16 outcomeCodings:(id)arg17 complicationsCodings:(id)arg18 followUpsCodings:(id)arg19 bodySitesCodings:(id)arg20 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)_init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)indexKeywords;
-(id)medicalRecordCodings;
-(id)medicalRecordPreferredSystems;
-(id)bodySitesCodingsTasks;
-(id)categoryCodingsTasks;
-(id)statusCodingTasks;
-(id)reasonCodingsTasks;
-(id)complicationsCodingsTasks;
-(id)followUpsCodingsTasks;
-(id)outcomeCodingsTasks;
-(id)procedureCodingsTasks;
-(id)reasonsNotPerformedCodingsTasks;
-(HKMedicalCoding *)statusCoding;
-(NSArray *)procedureCodings;
-(NSArray *)performers;
-(HKMedicalDate *)executionStartDate;
-(HKMedicalDate *)executionEndDate;
-(BOOL)notPerformed;
-(NSArray *)categoryCodings;
-(NSArray *)reasonCodings;
-(NSArray *)reasonsNotPerformedCodings;
-(NSArray *)outcomeCodings;
-(NSArray *)complicationsCodings;
-(NSArray *)followUpsCodings;
-(NSArray *)bodySitesCodings;
-(void)_setProcedureCodings:(id)arg1 ;
-(void)_setPerformers:(id)arg1 ;
-(void)_setExecutionStartDate:(id)arg1 ;
-(void)_setExecutionEndDate:(id)arg1 ;
-(void)_setNotPerformed:(BOOL)arg1 ;
-(void)_setStatusCoding:(id)arg1 ;
-(void)_setCategoryCodings:(id)arg1 ;
-(void)_setReasonCodings:(id)arg1 ;
-(void)_setReasonsNotPerformedCodings:(id)arg1 ;
-(void)_setOutcomeCodings:(id)arg1 ;
-(void)_setComplicationsCodings:(id)arg1 ;
-(void)_setFollowUpsCodings:(id)arg1 ;
-(void)_setBodySitesCodings:(id)arg1 ;
-(id)_validateConfiguration;
-(HKProcedureRecordType *)procedureRecordType;
-(BOOL)isEquivalent:(id)arg1 ;
@end

