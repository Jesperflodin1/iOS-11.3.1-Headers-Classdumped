/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:43 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <libobjc.A.dylib/HKSimpleDataEntryItemDelegate.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol HKOrganDonationRegistrantDelegate;
@class NSMutableDictionary, NSString, NSNumber;

@interface HKOrganDonationRegistrant : NSObject <HKSimpleDataEntryItemDelegate, NSCopying, NSSecureCoding> {

	NSMutableDictionary* _dataEntryItems;
	BOOL _hasEdits;
	id<HKOrganDonationRegistrantDelegate> _delegate;
	NSString* _email;
	NSString* _firstname;
	NSString* _middlename;
	NSString* _lastname;
	NSString* _address1;
	NSString* _address2;
	NSString* _zip;
	NSString* _city;
	NSString* _state;
	NSString* _last4SSN;
	NSString* _sex;
	NSString* _dob;

}

@property (assign,nonatomic,__weak) id<HKOrganDonationRegistrantDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * email;                                                   //@synthesize email=_email - In the implementation block
@property (nonatomic,retain) NSString * firstname;                                               //@synthesize firstname=_firstname - In the implementation block
@property (nonatomic,retain) NSString * middlename;                                              //@synthesize middlename=_middlename - In the implementation block
@property (nonatomic,retain) NSString * lastname;                                                //@synthesize lastname=_lastname - In the implementation block
@property (nonatomic,retain) NSString * address1;                                                //@synthesize address1=_address1 - In the implementation block
@property (nonatomic,retain) NSString * address2;                                                //@synthesize address2=_address2 - In the implementation block
@property (nonatomic,retain) NSString * zip;                                                     //@synthesize zip=_zip - In the implementation block
@property (nonatomic,retain) NSString * city;                                                    //@synthesize city=_city - In the implementation block
@property (nonatomic,retain) NSString * state;                                                   //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSString * last4SSN;                                                //@synthesize last4SSN=_last4SSN - In the implementation block
@property (nonatomic,retain) NSString * sex;                                                     //@synthesize sex=_sex - In the implementation block
@property (nonatomic,retain) NSString * dob;                                                     //@synthesize dob=_dob - In the implementation block
@property (nonatomic,readonly) NSNumber * age; 
@property (nonatomic,readonly) BOOL hasEdits;                                                    //@synthesize hasEdits=_hasEdits - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)organDonationRegistrantWithDemographicsInformation:(id)arg1 ;
+(id)organDonationRegistrantWithJSONDictionary:(id)arg1 ;
+(BOOL)_isNumericStringValid:(id)arg1 withLength:(long long)arg2 ;
+(void)_loadStateInformationIfNeeded;
+(id)exportDateFormatter;
+(id)zipcodeNumberFormatter;
+(id)convertLocalizedNumericStringToLatin:(id)arg1 withNumberFormatter:(id)arg2 ;
+(id)ssnNumberFormatter;
+(id)_importNumberFormatter;
-(NSString *)city;
-(void)setCity:(NSString *)arg1 ;
-(NSNumber *)age;
-(id)init;
-(id<HKOrganDonationRegistrantDelegate>)delegate;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<HKOrganDonationRegistrantDelegate>)arg1 ;
-(NSString *)state;
-(void)setState:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)jsonDictionaryRepresentation;
-(void)setEmail:(NSString *)arg1 ;
-(NSString *)email;
-(id)dataEntryItemsValidOnly:(BOOL)arg1 ;
-(BOOL)hasEdits;
-(BOOL)isRegistrantValid;
-(void)dataEntryItemDidUpdateValue:(id)arg1 ;
-(NSString *)address1;
-(NSString *)address2;
-(NSString *)zip;
-(void)setFirstname:(NSString *)arg1 ;
-(void)setMiddlename:(NSString *)arg1 ;
-(void)setLastname:(NSString *)arg1 ;
-(void)setDob:(NSString *)arg1 ;
-(void)setSex:(NSString *)arg1 ;
-(void)setAddress1:(NSString *)arg1 ;
-(void)setAddress2:(NSString *)arg1 ;
-(void)setZip:(NSString *)arg1 ;
-(void)setLast4SSN:(NSString *)arg1 ;
-(void)_addDataEntryItemIntoArray:(id)arg1 validOnly:(BOOL)arg2 forField:(long long)arg3 ;
-(BOOL)isFieldValid:(long long)arg1 ;
-(id)dataEntryItemForRegistrantField:(long long)arg1 ;
-(NSString *)firstname;
-(unsigned long long)_placeHolderTypeForField:(long long)arg1 ;
-(NSString *)middlename;
-(NSString *)lastname;
-(id)_createDateOfBirthEntryItem;
-(NSString *)sex;
-(id)_stateChoiceValues;
-(id)_stateChoiceDisplayNames;
-(NSString *)last4SSN;
-(id)_todayBirthdayDateComponents;
-(NSString *)dob;
@end

