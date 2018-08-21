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

@class NSArray, NSString, HKMedicalDate, HKMedicalCoding, HKInspectableValueCollection, HKDiagnosticTestResultType;

@interface HKDiagnosticTestResult : HKMedicalRecord <NSSecureCoding, NSCopying> {

	NSArray* _bodySiteCodings;
	NSString* _category;
	NSString* _comments;
	NSArray* _diagnosticTestCodings;
	HKMedicalDate* _effectiveEndDate;
	HKMedicalDate* _effectiveStartDate;
	NSArray* _interpretationCodings;
	HKMedicalDate* _issueDate;
	NSArray* _methodCodings;
	NSArray* _performers;
	NSArray* _referenceRanges;
	HKMedicalCoding* _statusCoding;
	HKInspectableValueCollection* _value;

}

@property (nonatomic,readonly) HKDiagnosticTestResultType * diagnosticTestResultType; 
@property (nonatomic,copy,readonly) NSArray * bodySiteCodings;                                     //@synthesize bodySiteCodings=_bodySiteCodings - In the implementation block
@property (nonatomic,copy,readonly) NSString * category;                                           //@synthesize category=_category - In the implementation block
@property (nonatomic,copy,readonly) NSString * comments;                                           //@synthesize comments=_comments - In the implementation block
@property (nonatomic,copy,readonly) NSArray * diagnosticTestCodings;                               //@synthesize diagnosticTestCodings=_diagnosticTestCodings - In the implementation block
@property (nonatomic,copy,readonly) HKMedicalDate * effectiveEndDate;                              //@synthesize effectiveEndDate=_effectiveEndDate - In the implementation block
@property (nonatomic,copy,readonly) HKMedicalDate * effectiveStartDate;                            //@synthesize effectiveStartDate=_effectiveStartDate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * interpretationCodings;                               //@synthesize interpretationCodings=_interpretationCodings - In the implementation block
@property (nonatomic,copy,readonly) HKMedicalDate * issueDate;                                     //@synthesize issueDate=_issueDate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * methodCodings;                                       //@synthesize methodCodings=_methodCodings - In the implementation block
@property (nonatomic,copy,readonly) NSArray * performers;                                          //@synthesize performers=_performers - In the implementation block
@property (nonatomic,copy,readonly) NSArray * referenceRanges;                                     //@synthesize referenceRanges=_referenceRanges - In the implementation block
@property (nonatomic,copy,readonly) HKMedicalCoding * statusCoding;                                //@synthesize statusCoding=_statusCoding - In the implementation block
@property (nonatomic,copy,readonly) HKInspectableValueCollection * value;                          //@synthesize value=_value - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)supportsEquivalence;
+(BOOL)_isConcreteObjectClass;
+(id)defaultDisplayString;
+(id)diagnosticTestCodingsPreferredSystems;
+(id)diagnosticTestResultWithNote:(id)arg1 enteredInError:(BOOL)arg2 modifiedDate:(id)arg3 FHIRIdentifier:(id)arg4 extractionVersion:(long long)arg5 device:(id)arg6 metadata:(id)arg7 diagnosticTestCodings:(id)arg8 value:(id)arg9 referenceRanges:(id)arg10 effectiveStartDate:(id)arg11 category:(id)arg12 issueDate:(id)arg13 effectiveEndDate:(id)arg14 statusCoding:(id)arg15 interpretationCodings:(id)arg16 comments:(id)arg17 bodySiteCodings:(id)arg18 methodCodings:(id)arg19 performers:(id)arg20 ;
+(id)bodySiteCodingsPreferredSystems;
+(id)interpretationCodingsPreferredSystems;
+(id)methodCodingsPreferredSystems;
+(id)statusCodingPreferredSystems;
-(NSString *)comments;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)category;
-(id)_init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HKInspectableValueCollection *)value;
-(void)_setCategory:(id)arg1 ;
-(void)_setValue:(id)arg1 ;
-(id)indexKeywords;
-(id)medicalRecordCodings;
-(id)medicalRecordPreferredSystems;
-(id)diagnosticTestCodingsTasks;
-(id)bodySiteCodingsTasks;
-(id)interpretationCodingsTasks;
-(id)methodCodingsTasks;
-(id)statusCodingTasks;
-(HKMedicalCoding *)statusCoding;
-(NSArray *)performers;
-(void)_setPerformers:(id)arg1 ;
-(void)_setStatusCoding:(id)arg1 ;
-(id)_validateConfiguration;
-(NSArray *)diagnosticTestCodings;
-(HKMedicalDate *)effectiveStartDate;
-(HKMedicalDate *)effectiveEndDate;
-(HKMedicalDate *)issueDate;
-(void)_setDiagnosticTestCodings:(id)arg1 ;
-(void)_setEffectiveStartDate:(id)arg1 ;
-(void)_setEffectiveEndDate:(id)arg1 ;
-(void)_setIssueDate:(id)arg1 ;
-(NSArray *)referenceRanges;
-(NSArray *)interpretationCodings;
-(NSArray *)bodySiteCodings;
-(NSArray *)methodCodings;
-(void)_setReferenceRanges:(id)arg1 ;
-(void)_setInterpretationCodings:(id)arg1 ;
-(void)_setComments:(id)arg1 ;
-(void)_setBodySiteCodings:(id)arg1 ;
-(void)_setMethodCodings:(id)arg1 ;
-(HKDiagnosticTestResultType *)diagnosticTestResultType;
-(BOOL)isEquivalent:(id)arg1 ;
@end

