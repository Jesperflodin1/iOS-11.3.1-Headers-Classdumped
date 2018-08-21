/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <Contacts/CNContact.h>

@class NSString, NSArray, CNContactKeyVector, NSDictionary, NSDate, CNContact, NSData, CNActivityAlert, NSDateComponents;

@interface CNMutableContact : CNContact {

	BOOL _hasChanges;

}

@property (copy) NSString * nameTitle; 
@property (copy) NSString * firstName; 
@property (copy) NSString * lastName; 
@property (copy) NSString * maidenName; 
@property (copy) NSString * phoneticFirstName; 
@property (copy) NSString * phoneticLastName; 
@property (copy) NSString * companyName; 
@property (copy) NSArray * relatedNames; 
@property (assign,nonatomic) int iOSLegacyIdentifier; 
@property (assign,nonatomic) BOOL imageDataAvailable; 
@property (nonatomic,copy) NSArray * calendarURIs; 
@property (nonatomic,copy) NSString * cardDAVUID; 
@property (nonatomic,copy) CNContactKeyVector * availableKeyDescriptor; 
@property (nonatomic,copy) NSString * storeIdentifier; 
@property (nonatomic,copy) NSDictionary * storeInfo; 
@property (nonatomic,copy) NSString * searchIndex; 
@property (nonatomic,copy) NSDictionary * activityAlerts; 
@property (nonatomic,copy) NSString * sectionForSortingByGivenName; 
@property (nonatomic,copy) NSString * sectionForSortingByFamilyName; 
@property (nonatomic,copy) NSDate * modificationDate; 
@property (nonatomic,copy) NSDate * creationDate; 
@property (nonatomic,copy) CNContact * snapshot; 
@property (assign,getter=isPreferredForName,nonatomic) BOOL preferredForName; 
@property (assign,getter=isPreferredForImage,nonatomic) BOOL preferredForImage; 
@property (nonatomic,copy) NSArray * linkedContacts; 
@property (nonatomic,copy) NSString * linkIdentifier; 
@property (assign,nonatomic) CGRect cropRect; 
@property (nonatomic,copy) NSData * thumbnailImageData; 
@property (nonatomic,copy) NSData * fullscreenImageData; 
@property (nonatomic,copy) CNActivityAlert * callAlert; 
@property (nonatomic,copy) CNActivityAlert * textAlert; 
@property (nonatomic,copy) NSString * phonemeData; 
@property (nonatomic,copy) NSString * phoneticCompanyName; 
@property (nonatomic,copy) NSString * mapsData; 
@property (nonatomic,readonly) BOOL hasChanges;                                              //@synthesize hasChanges=_hasChanges - In the implementation block
@property (nonatomic,copy) NSString * pronunciationGivenName; 
@property (nonatomic,copy) NSString * pronunciationFamilyName; 
@property (nonatomic,copy) NSString * preferredLikenessSource; 
@property (nonatomic,copy) NSString * preferredApplePersonaIdentifier; 
@property (assign,nonatomic) long long contactType; 
@property (nonatomic,copy) NSString * namePrefix; 
@property (nonatomic,copy) NSString * givenName; 
@property (nonatomic,copy) NSString * middleName; 
@property (nonatomic,copy) NSString * familyName; 
@property (nonatomic,copy) NSString * previousFamilyName; 
@property (nonatomic,copy) NSString * nameSuffix; 
@property (nonatomic,copy) NSString * nickname; 
@property (nonatomic,copy) NSString * organizationName; 
@property (nonatomic,copy) NSString * departmentName; 
@property (nonatomic,copy) NSString * jobTitle; 
@property (nonatomic,copy) NSString * phoneticGivenName; 
@property (nonatomic,copy) NSString * phoneticMiddleName; 
@property (nonatomic,copy) NSString * phoneticFamilyName; 
@property (nonatomic,copy) NSString * phoneticOrganizationName; 
@property (nonatomic,copy) NSString * note; 
@property (nonatomic,copy) NSData * imageData; 
@property (nonatomic,copy) NSArray * phoneNumbers; 
@property (nonatomic,copy) NSArray * emailAddresses; 
@property (nonatomic,copy) NSArray * postalAddresses; 
@property (nonatomic,copy) NSArray * urlAddresses; 
@property (nonatomic,copy) NSArray * contactRelations; 
@property (nonatomic,copy) NSArray * socialProfiles; 
@property (nonatomic,copy) NSArray * instantMessageAddresses; 
@property (nonatomic,copy) NSDateComponents * birthday; 
@property (nonatomic,copy) NSDateComponents * nonGregorianBirthday; 
@property (nonatomic,copy) NSArray * dates; 
+(id)imageDataDescriptions;
+(id)unifyContacts:(id)arg1 ;
-(NSString *)mapsData;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)freeze;
-(NSString *)familyName;
-(void)setSnapshot:(CNContact *)arg1 ;
-(void)setImageData:(NSData *)arg1 ;
-(void)setModificationDate:(NSDate *)arg1 ;
-(NSDate *)modificationDate;
-(NSString *)pronunciationGivenName;
-(NSString *)pronunciationFamilyName;
-(NSString *)phoneticOrganizationName;
-(NSString *)cardDAVUID;
-(NSString *)preferredApplePersonaIdentifier;
-(NSArray *)calendarURIs;
-(NSString *)linkIdentifier;
-(void)setIOSLegacyIdentifier:(int)arg1 ;
-(void)setStoreInfo:(NSDictionary *)arg1 ;
-(void)setPreviousFamilyName:(NSString *)arg1 ;
-(void)setPhoneticMiddleName:(NSString *)arg1 ;
-(void)setPhoneticOrganizationName:(NSString *)arg1 ;
-(void)setPronunciationGivenName:(NSString *)arg1 ;
-(void)setPronunciationFamilyName:(NSString *)arg1 ;
-(void)setSectionForSortingByGivenName:(NSString *)arg1 ;
-(void)setSectionForSortingByFamilyName:(NSString *)arg1 ;
-(void)setJobTitle:(NSString *)arg1 ;
-(void)setImageDataAvailable:(BOOL)arg1 ;
-(void)setLinkIdentifier:(NSString *)arg1 ;
-(void)setPreferredForName:(BOOL)arg1 ;
-(void)setPreferredForImage:(BOOL)arg1 ;
-(void)setPreferredApplePersonaIdentifier:(NSString *)arg1 ;
-(void)setCalendarURIs:(NSArray *)arg1 ;
-(void)setDates:(NSArray *)arg1 ;
-(NSArray *)contactRelations;
-(void)setContactRelations:(NSArray *)arg1 ;
-(CNActivityAlert *)callAlert;
-(void)setCallAlert:(CNActivityAlert *)arg1 ;
-(CNActivityAlert *)textAlert;
-(void)setTextAlert:(CNActivityAlert *)arg1 ;
-(void)setFrozenSelfAsSnapshot;
-(id)freezeWithSelfAsSnapshot;
-(void)setAvailableKeyDescriptor:(CNContactKeyVector *)arg1 ;
-(void)updateImageDataAvailableFromCurrentState;
-(void)resetToNewContact;
-(void)overwriteStateFromContact:(id)arg1 ;
-(id)copyWithSelfAsSnapshot;
-(void)setPhoneticCompanyName:(NSString *)arg1 ;
-(BOOL)preferredForName;
-(BOOL)preferredForImage;
-(void)setCardDAVUID:(NSString *)arg1 ;
-(void)setActivityAlerts:(NSDictionary *)arg1 ;
-(void)updateStateFromContact:(id)arg1 ;
-(void)setNameTitle:(NSString *)arg1 ;
-(void)setMaidenName:(NSString *)arg1 ;
-(void)setPhoneticFirstName:(NSString *)arg1 ;
-(void)setPhoneticLastName:(NSString *)arg1 ;
-(void)setCompanyName:(NSString *)arg1 ;
-(NSString *)phonemeData;
-(void)setPhonemeData:(NSString *)arg1 ;
-(void)setRelatedNames:(NSArray *)arg1 ;
-(void)setSocialProfiles:(NSArray *)arg1 ;
-(void)setNamePrefix:(NSString *)arg1 ;
-(void)setNameSuffix:(NSString *)arg1 ;
-(BOOL)imageDataAvailable;
-(NSString *)departmentName;
-(void)setLinkedContacts:(NSArray *)arg1 ;
-(NSData *)fullscreenImageData;
-(void)setFullscreenImageData:(NSData *)arg1 ;
-(NSString *)preferredLikenessSource;
-(void)setPreferredLikenessSource:(NSString *)arg1 ;
-(CNContactKeyVector *)availableKeyDescriptor;
-(NSArray *)socialProfiles;
-(NSDateComponents *)nonGregorianBirthday;
-(void)setNonGregorianBirthday:(NSDateComponents *)arg1 ;
-(NSString *)sectionForSortingByFamilyName;
-(NSString *)sectionForSortingByGivenName;
-(NSArray *)postalAddresses;
-(NSArray *)urlAddresses;
-(void)setUrlAddresses:(NSArray *)arg1 ;
-(void)setMapsData:(NSString *)arg1 ;
-(NSString *)phoneticMiddleName;
-(NSString *)jobTitle;
-(void)setContactType:(long long)arg1 ;
-(void)setOrganizationName:(NSString *)arg1 ;
-(void)setPostalAddresses:(NSArray *)arg1 ;
-(void)setDepartmentName:(NSString *)arg1 ;
-(void)setBirthday:(NSDateComponents *)arg1 ;
-(void)setMiddleName:(NSString *)arg1 ;
-(NSDateComponents *)birthday;
-(NSString *)middleName;
-(NSString *)namePrefix;
-(NSString *)nameSuffix;
-(NSArray *)instantMessageAddresses;
-(long long)contactType;
-(CGRect)cropRect;
-(void)setCropRect:(CGRect)arg1 ;
-(BOOL)hasChanges;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(NSString *)searchIndex;
-(void)setSearchIndex:(NSString *)arg1 ;
-(NSData *)imageData;
-(NSArray *)emailAddresses;
-(NSArray *)phoneNumbers;
-(void)setNickname:(NSString *)arg1 ;
-(void)setStoreIdentifier:(NSString *)arg1 ;
-(void)setEmailAddresses:(NSArray *)arg1 ;
-(void)setPhoneNumbers:(NSArray *)arg1 ;
-(id)initWithContact:(id)arg1 ;
-(NSString *)organizationName;
-(void)setPhoneticGivenName:(NSString *)arg1 ;
-(void)setPhoneticFamilyName:(NSString *)arg1 ;
-(NSArray *)dates;
-(NSString *)givenName;
-(NSString *)phoneticFamilyName;
-(NSString *)phoneticGivenName;
-(NSString *)previousFamilyName;
-(NSString *)nickname;
-(void)setNote:(NSString *)arg1 ;
-(NSString *)note;
-(void)setGivenName:(NSString *)arg1 ;
-(void)setFamilyName:(NSString *)arg1 ;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(void)setThumbnailImageData:(NSData *)arg1 ;
-(NSData *)thumbnailImageData;
-(void)setInstantMessageAddresses:(NSArray *)arg1 ;
-(void)setNilValueForKey:(id)arg1 ;
@end

