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

@class NSArray, NSString, HKMedicalCoding, HKMedicalDate, HKAllergyRecordType;

@interface HKAllergyRecord : HKMedicalRecord <NSSecureCoding, NSCopying> {

	NSArray* _allergyCodings;
	NSString* _asserter;
	HKMedicalCoding* _criticalityCoding;
	HKMedicalDate* _lastOccurenceDate;
	HKMedicalDate* _onsetDate;
	NSArray* _reactions;
	HKMedicalDate* _recordedDate;

}

@property (nonatomic,readonly) HKAllergyRecordType * allergyRecordType; 
@property (nonatomic,copy,readonly) NSArray * allergyCodings;                         //@synthesize allergyCodings=_allergyCodings - In the implementation block
@property (nonatomic,copy,readonly) NSString * asserter;                              //@synthesize asserter=_asserter - In the implementation block
@property (nonatomic,copy,readonly) HKMedicalCoding * criticalityCoding;              //@synthesize criticalityCoding=_criticalityCoding - In the implementation block
@property (nonatomic,copy,readonly) HKMedicalDate * lastOccurenceDate;                //@synthesize lastOccurenceDate=_lastOccurenceDate - In the implementation block
@property (nonatomic,copy,readonly) HKMedicalDate * onsetDate;                        //@synthesize onsetDate=_onsetDate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * reactions;                              //@synthesize reactions=_reactions - In the implementation block
@property (nonatomic,copy,readonly) HKMedicalDate * recordedDate;                     //@synthesize recordedDate=_recordedDate - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)supportsEquivalence;
+(BOOL)_isConcreteObjectClass;
+(id)defaultDisplayString;
+(id)allergyCodingsPreferredSystems;
+(id)criticalityCodingPreferredSystems;
+(id)allergyRecordWithNote:(id)arg1 enteredInError:(BOOL)arg2 modifiedDate:(id)arg3 FHIRIdentifier:(id)arg4 extractionVersion:(long long)arg5 device:(id)arg6 metadata:(id)arg7 allergyCodings:(id)arg8 onsetDate:(id)arg9 asserter:(id)arg10 reactions:(id)arg11 criticalityCoding:(id)arg12 lastOccurenceDate:(id)arg13 recordedDate:(id)arg14 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)_init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)indexKeywords;
-(id)medicalRecordCodings;
-(id)medicalRecordPreferredSystems;
-(id)allergyCodingsTasks;
-(id)criticalityCodingTasks;
-(id)_validateConfiguration;
-(NSString *)asserter;
-(HKMedicalDate *)recordedDate;
-(void)_setAsserter:(id)arg1 ;
-(NSArray *)allergyCodings;
-(HKMedicalDate *)onsetDate;
-(NSArray *)reactions;
-(HKMedicalCoding *)criticalityCoding;
-(HKMedicalDate *)lastOccurenceDate;
-(void)_setAllergyCodings:(id)arg1 ;
-(void)_setOnsetDate:(id)arg1 ;
-(void)_setReactions:(id)arg1 ;
-(void)_setCriticalityCoding:(id)arg1 ;
-(void)_setLastOccurenceDate:(id)arg1 ;
-(void)_setRecordedDate:(id)arg1 ;
-(HKAllergyRecordType *)allergyRecordType;
-(BOOL)isEquivalent:(id)arg1 ;
@end

