/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:15 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCore/IMCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class IMAccount, NSString, NSDictionary, NSDate, NSSet, IMPerson, NSArray, NSData, NSAttributedString, NSMutableArray, NSNumber, MKMapItem, IMServiceImpl;

@interface IMHandle : NSObject <NSSecureCoding> {

	IMAccount* _account;
	NSString* _id;
	NSString* _uncanonicalID;
	NSString* _countryCode;
	NSDictionary* _otherServiceIDs;
	NSDate* _idleSince;
	NSDate* _feedUpdatedDate;
	NSDictionary* _extraProps;
	NSDictionary* _certs;
	NSSet* _groups;
	IMPerson* _person;
	NSString* _abFirstName;
	NSString* _abLastName;
	NSString* _abFullName;
	NSString* _abNickname;
	NSString* _displayID;
	NSString* _firstName;
	NSString* _lastName;
	NSString* _fullName;
	NSString* _nickname;
	NSArray* _emails;
	NSString* _normalizedFormOfID;
	NSString* _IDWithoutResource;
	NSString* _IDWithTrimmedServer;
	NSString* _uniqueName;
	NSData* _pictureData;
	NSString* _statusMsg;
	NSString* _processedStatusMsg;
	NSAttributedString* _richStatusMsg;
	NSDate* _whenWentOffline;
	NSDate* _whenStatusChanged;
	NSString* _prevStatusMsg;
	NSMutableArray* _notificationNameQueue;
	NSMutableArray* _notificationQueue;
	CFPhoneNumberRef _phoneNumberRef;
	NSString* _formattedNumber;
	BOOL _hasCheckedPhoneNumber;
	unsigned long long _status;
	unsigned long long _prevStatus;
	unsigned long long _capabilities;
	unsigned _authRequestStatus;
	unsigned long long _resourceIndex;
	long long _IDStatus;
	BOOL _blockNotifications;
	BOOL _hasTemporaryWatch;
	BOOL _isMobile;
	BOOL _isBot;
	BOOL _isAnonymous;
	BOOL _beingTornDown;
	BOOL _hasCheckedCardMap;
	long long _priority;
	int _addressBookIdentifier;
	int _notificationQueueCount;
	NSNumber* _isBusiness;
	NSNumber* _isMako;
	NSNumber* _isApple;
	NSString* _guid;
	MKMapItem* _mapItem;
	NSData* _mapItemImageData;
	NSData* _mapItemBannerImageData;
	NSString* _suggestedName;

}

@property (nonatomic,retain) NSDictionary * otherServiceIDs;                                //@synthesize otherServiceIDs=_otherServiceIDs - In the implementation block
@property (assign,nonatomic) long long priority;                                            //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic) long long IDStatus;                                            //@synthesize IDStatus=_IDStatus - In the implementation block
@property (nonatomic,retain) MKMapItem * mapItem;                                           //@synthesize mapItem=_mapItem - In the implementation block
@property (nonatomic,retain) NSData * mapItemImageData;                                     //@synthesize mapItemImageData=_mapItemImageData - In the implementation block
@property (nonatomic,retain) NSData * mapItemBannerImageData;                               //@synthesize mapItemBannerImageData=_mapItemBannerImageData - In the implementation block
@property (nonatomic,copy) NSString * suggestedName;                                        //@synthesize suggestedName=_suggestedName - In the implementation block
@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain,readonly) NSString * _displayNameWithAbbreviation; 
@property (nonatomic,retain,readonly) NSString * ID;                                        //@synthesize id=_id - In the implementation block
@property (nonatomic,retain,readonly) NSString * originalID;                                //@synthesize uncanonicalID=_uncanonicalID - In the implementation block
@property (nonatomic,retain,readonly) NSString * countryCode; 
@property (nonatomic,retain,readonly) NSString * displayID; 
@property (nonatomic,retain,readonly) NSString * normalizedID; 
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain,readonly) NSString * name; 
@property (nonatomic,retain,readonly) NSString * fullName; 
@property (nonatomic,retain,readonly) NSString * uniqueName;                                //@synthesize uniqueName=_uniqueName - In the implementation block
@property (nonatomic,retain,readonly) NSString * nameAndID; 
@property (nonatomic,retain,readonly) NSString * nameAndEmail; 
@property (nonatomic,retain,readonly) NSString * firstName; 
@property (nonatomic,retain,readonly) NSString * lastName; 
@property (nonatomic,retain,readonly) NSString * nickname; 
@property (nonatomic,retain,readonly) IMAccount * account;                                  //@synthesize account=_account - In the implementation block
@property (nonatomic,retain,readonly) IMServiceImpl * service; 
@property (nonatomic,readonly) unsigned long long status; 
@property (nonatomic,retain,readonly) NSString * statusMessage; 
@property (nonatomic,retain,readonly) NSString * nameOfStatus; 
@property (nonatomic,retain,readonly) NSAttributedString * richStatusMessage;               //@synthesize richStatusMsg=_richStatusMsg - In the implementation block
@property (nonatomic,retain,readonly) NSString * offlineString; 
@property (nonatomic,readonly) unsigned long long previousStatus;                           //@synthesize prevStatus=_prevStatus - In the implementation block
@property (nonatomic,retain,readonly) NSString * previousStatusMessage;                     //@synthesize prevStatusMsg=_prevStatusMsg - In the implementation block
@property (nonatomic,readonly) double timeSinceWentOffline; 
@property (nonatomic,readonly) double timeSinceStatusChanged; 
@property (nonatomic,readonly) unsigned authRequestStatus;                                  //@synthesize authRequestStatus=_authRequestStatus - In the implementation block
@property (nonatomic,readonly) double idleTime; 
@property (nonatomic,retain,readonly) NSString * idleString; 
@property (nonatomic,retain,readonly) NSDate * feedUpdatedDate;                             //@synthesize feedUpdatedDate=_feedUpdatedDate - In the implementation block
@property (nonatomic,readonly) BOOL canBeAdded; 
@property (nonatomic,readonly) BOOL canBeDeleted; 
@property (nonatomic,readonly) unsigned long long capabilities; 
@property (nonatomic,readonly) BOOL isBot;                                                  //@synthesize isBot=_isBot - In the implementation block
@property (nonatomic,readonly) BOOL isBuddy; 
@property (nonatomic,readonly) BOOL isLoginIMHandle; 
@property (nonatomic,readonly) BOOL isVisiblyBlocked; 
@property (assign,setter=setBlocked:,nonatomic) BOOL isBlocked; 
@property (nonatomic,readonly) BOOL isAnonymous; 
@property (nonatomic,readonly) BOOL isSystemUser; 
@property (nonatomic,readonly) BOOL isMobile;                                               //@synthesize isMobile=_isMobile - In the implementation block
@property (nonatomic,readonly) BOOL isLoginIMHandleForAnyAccount; 
@property (nonatomic,retain,readonly) NSString * mobileDeviceName; 
@property (nonatomic,readonly) BOOL watchingIMHandle; 
@property (nonatomic,retain,readonly) NSData * pictureData;                                 //@synthesize pictureData=_pictureData - In the implementation block
@property (nonatomic,retain,readonly) NSDictionary * extraProperties;                       //@synthesize extraProps=_extraProps - In the implementation block
@property (nonatomic,retain,readonly) NSString * email; 
@property (nonatomic,retain,readonly) NSArray * emails; 
@property (setter=setIMPerson:,nonatomic,retain) IMPerson * person; 
@property (nonatomic,readonly) int addressBookIdentifier;                                   //@synthesize addressBookIdentifier=_addressBookIdentifier - In the implementation block
@property (nonatomic,retain,readonly) NSArray * groupsArray; 
@property (nonatomic,retain,readonly) NSSet * groups; 
@property (nonatomic,readonly) BOOL hasOtherSiblings; 
@property (nonatomic,retain,readonly) NSSet * siblings; 
@property (nonatomic,retain,readonly) NSArray * siblingsArray; 
@property (nonatomic,retain,readonly) NSArray * accountSiblingsArray; 
@property (nonatomic,retain,readonly) NSArray * existingAccountSiblingsArray; 
@property (nonatomic,readonly) id bestSibling; 
@property (nonatomic,retain,readonly) id bestAccountSibling; 
@property (nonatomic,readonly) BOOL isConferenceAvailable; 
@property (nonatomic,readonly) BOOL hasConferencing; 
@property (nonatomic,readonly) BOOL hasVideo; 
@property (nonatomic,readonly) BOOL hasMultiwayVideo; 
@property (nonatomic,readonly) BOOL hasAudio; 
@property (nonatomic,readonly) BOOL hasMultiwayAudio; 
@property (nonatomic,retain,readonly) NSString * resource; 
@property (nonatomic,retain,readonly) NSString * IDWithoutResource; 
@property (nonatomic,retain,readonly) NSString * server; 
@property (nonatomic,retain,readonly) NSString * accountTypeName; 
@property (nonatomic,retain,readonly) NSString * guid;                                      //@synthesize guid=_guid - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)filterIMHandlesForBestAccountSiblings:(id)arg1 ;
+(id)imHandlesForIMPerson:(id)arg1 ;
+(void)_loadStatusNames;
+(id)bestIMHandleInArray:(id)arg1 ;
+(id)nameOfStatus:(unsigned long long)arg1 ;
+(id)filterIMHandlesForAccountSiblings:(id)arg1 onAccount:(id)arg2 ;
+(void)bestHandlesForPersons:(id)arg1 useExtendedAsyncLookup:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
+(void)handlesForPersons:(id)arg1 useBestHandle:(BOOL)arg2 useExtendedAsyncLookup:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
+(void)validHandlesForPersons:(id)arg1 useExtendedAsyncLookup:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
+(void)bestHandlesForPersons:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)validHandlesForPersons:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)setNotificationsEnabled:(BOOL)arg1 ;
+(BOOL)notificationsEnabled;
-(void)_postNotificationName:(id)arg1 userInfo:(id)arg2 ;
-(NSString *)suggestedName;
-(BOOL)hasLocation;
-(NSString *)countryCode;
-(BOOL)hasName;
-(MKMapItem *)mapItem;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(IMServiceImpl *)service;
-(NSString *)resource;
-(NSSet *)siblings;
-(void)setBlocked:(BOOL)arg1 ;
-(NSString *)guid;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(NSString *)server;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPriority:(long long)arg1 ;
-(long long)priority;
-(unsigned long long)status;
-(NSString *)displayID;
-(NSSet *)groups;
-(NSString *)uniqueName;
-(void)setSuggestedName:(NSString *)arg1 ;
-(IMPerson *)person;
-(void)setImageData:(id)arg1 ;
-(NSDictionary *)extraProperties;
-(NSArray *)emails;
-(BOOL)hasVideo;
-(NSString *)statusMessage;
-(NSData *)pictureData;
-(void)_registerForNotifications;
-(NSString *)firstName;
-(NSString *)lastName;
-(id)bestAccountSibling;
-(id)publicAPIPropertiesDictionary;
-(id)immediateNameWithNeedsSuggestedNameFetch:(BOOL*)arg1 useSuggestedName:(BOOL)arg2 ;
-(long long)compareAccountNames:(id)arg1 ;
-(unsigned)authRequestStatus;
-(BOOL)isBuddy;
-(void)setCustomPictureData:(id)arg1 key:(id)arg2 ;
-(void)beginNotificationQueue;
-(void)releaseNotificationQueue;
-(void)_stopRetainingAccount:(id)arg1 ;
-(void)postNotificationName:(id)arg1 ;
-(void)propertiesChanged:(id)arg1 ;
-(void)_updateOriginalID:(id)arg1 ;
-(void)_setOriginalID:(id)arg1 ;
-(BOOL)_setCapabilities:(unsigned long long)arg1 ;
-(NSDictionary *)otherServiceIDs;
-(BOOL)watchingIMHandle;
-(void)setHasTemporaryWatch:(BOOL)arg1 ;
-(BOOL)resetABPerson;
-(id)_cachedPerson;
-(void)setIMPerson:(id)arg1 ;
-(void)statusChanged:(unsigned long long)arg1 message:(id)arg2 ;
-(void)statusChanged:(unsigned long long)arg1 ;
-(long long)compareStatus:(id)arg1 ;
-(BOOL)_isChatSiblingOf:(id)arg1 ;
-(BOOL)isMako;
-(void)_fetchBusinessInfo;
-(void)_setOriginalID:(id)arg1 updateSiblings:(BOOL)arg2 ;
-(void)_setCountryCode:(id)arg1 updateSiblings:(BOOL)arg2 ;
-(id)existingChatSiblingsArray;
-(void)setAnonymous:(BOOL)arg1 ;
-(BOOL)isAnonymous;
-(NSArray *)groupsArray;
-(id)bestIMHandleForService:(id)arg1 ;
-(BOOL)shouldQueueNotifications;
-(void)_postNotification:(id)arg1 ;
-(id)existingIMHandleWithoutResource;
-(BOOL)areABPropertiesRecent;
-(void)resetABProperties;
-(void)_clearABProperties;
-(void)sendNotificationABPersonChanged;
-(BOOL)_hasABName;
-(BOOL)_hasServiceNameProperties;
-(id)_formattedPhoneNumber;
-(BOOL)hasServer;
-(id)_IDWithTrimmedServer;
-(id)_abPersonCreateIfNeeded;
-(void)setFirstName:(id)arg1 lastName:(id)arg2 ;
-(void)_setABPersonFirstName:(id)arg1 lastName:(id)arg2 ;
-(void)_setBaseFirstName:(id)arg1 lastName:(id)arg2 fullName:(id)arg3 ;
-(void)setEmails:(id)arg1 andUpdateABPerson:(BOOL)arg2 ;
-(void)setFirstName:(id)arg1 lastName:(id)arg2 fullName:(id)arg3 andUpdateABPerson:(BOOL)arg4 ;
-(void)setEmail:(id)arg1 andUpdateABPerson:(BOOL)arg2 ;
-(BOOL)hasResource;
-(NSString *)IDWithoutResource;
-(NSArray *)accountSiblingsArray;
-(void)_createPhoneNumberRefIfNeeded;
-(BOOL)isMobile;
-(double)timeSinceWentOffline;
-(id)bestIMHandleForAccount:(id)arg1 onService:(id)arg2 inGroup:(id)arg3 otherThan:(id)arg4 ;
-(NSArray *)existingAccountSiblingsArray;
-(BOOL)isBetterThanIMHandle:(id)arg1 ;
-(void)_setExtraProperties:(id)arg1 ;
-(BOOL)_isMyIDInList:(id)arg1 ;
-(id)imHandleWithoutResource;
-(void)setStatus:(unsigned long long)arg1 message:(id)arg2 richMessage:(id)arg3 ;
-(void)_updateStatusBasedOnAuthRequestStatus;
-(double)timeSinceStatusChanged;
-(double)idleTime;
-(void)_filterStatusMessage;
-(void)_clearStatusMessageURLCache;
-(id)_nameForComparisonPreferFirst:(BOOL)arg1 ;
-(id)chatSiblingsArray;
-(id)_chatSiblingsArray;
-(BOOL)hasAudio;
-(void)customPictureDataChanged:(id)arg1 key:(id)arg2 ;
-(void)_mapItemFetchedWithMapItems:(id)arg1 error:(id)arg2 ;
-(void)_fetchMapItemImageDataForMapItem:(id)arg1 ;
-(void)_fetchMapItemBannerImageDataForMapItem:(id)arg1 ;
-(void)_mapItemImageDataFetchedWithResponse:(id)arg1 statusCode:(long long)arg2 resultData:(id)arg3 remoteURLConnectionError:(id)arg4 ;
-(void)setMapItemImageData:(NSData *)arg1 ;
-(void)_mapItemBannerImageDataFetchedWithResponse:(id)arg1 statusCode:(long long)arg2 resultData:(id)arg3 remoteURLConnectionError:(id)arg4 ;
-(void)setMapItemBannerImageData:(NSData *)arg1 ;
-(id)initWithAccount:(id)arg1 ID:(id)arg2 ;
-(id)_handleInfo;
-(void)_setOriginalID:(id)arg1 countryCode:(id)arg2 updateSiblings:(BOOL)arg3 ;
-(NSString *)nameAndEmail;
-(void)clearABPerson;
-(void)_clearABPersonLookup;
-(void)resetUniqueName;
-(void)setLocalNickname:(id)arg1 ;
-(BOOL)canBeAdded;
-(BOOL)isSystemUser;
-(void)setIsMobile:(BOOL)arg1 ;
-(void)setIsBot:(BOOL)arg1 ;
-(NSString *)mobileDeviceName;
-(BOOL)isLoginIMHandleForAnyAccount;
-(CFPhoneNumberRef)phoneNumberRef;
-(void)requestValueOfProperty:(id)arg1 ;
-(void)setValue:(id)arg1 ofExtraProperty:(id)arg2 ;
-(id)bestIMHandleForAccount:(id)arg1 ;
-(id)bestSibling;
-(BOOL)isVisiblyBlocked;
-(unsigned)sortOrderInGroup:(id)arg1 ;
-(NSString *)accountTypeName;
-(id)dependentIMHandles;
-(void)setAuthRequestStatus:(unsigned)arg1 ;
-(void)setPersonStatus:(unsigned long long)arg1 ;
-(void)statusMessageChanged:(id)arg1 ;
-(NSString *)nameOfStatus;
-(long long)IDStatus;
-(void)_setIDStatus:(long long)arg1 ;
-(void)setIdleSince:(id)arg1 ;
-(void)setFeedUpdatedDate:(NSDate *)arg1 ;
-(NSString *)offlineString;
-(NSString *)idleString;
-(long long)compareFirstNames:(id)arg1 ;
-(long long)compareLastNames:(id)arg1 ;
-(long long)compareNormalizedIDs:(id)arg1 ;
-(BOOL)hasOtherSiblings;
-(NSArray *)siblingsArray;
-(BOOL)isAccountSiblingOf:(id)arg1 ;
-(BOOL)isSiblingOf:(id)arg1 ;
-(id)_chatSiblings;
-(id)_bestChatSibling;
-(BOOL)hasConferencing;
-(BOOL)isConferenceAvailable;
-(BOOL)hasMultiwayVideo;
-(BOOL)hasMultiwayAudio;
-(void)_sendAutomationData:(id)arg1 properties:(id)arg2 ;
-(void)_sendCommand:(id)arg1 properties:(id)arg2 ;
-(void)_imPersonPictureChanged:(id)arg1 ;
-(id)customPictureData;
-(void)setCustomPictureData:(id)arg1 ;
-(unsigned long long)previousStatus;
-(NSString *)previousStatusMessage;
-(NSAttributedString *)richStatusMessage;
-(NSDate *)feedUpdatedDate;
-(BOOL)isBot;
-(void)setOtherServiceIDs:(NSDictionary *)arg1 ;
-(void)setIDStatus:(long long)arg1 ;
-(void)_sendRemoteLogDumpRequest;
-(BOOL)hasCapability:(unsigned long long)arg1 ;
-(void)setEmail:(NSString *)arg1 ;
-(NSString *)_displayNameWithAbbreviation;
-(NSString *)ID;
-(id)fmfSiblingHandles;
-(void)_sendRemoteLogDumpRequest:(id)arg1 ;
-(BOOL)isBusiness;
-(IMAccount *)account;
-(long long)compareIDs:(id)arg1 ;
-(BOOL)isContact;
-(NSString *)normalizedID;
-(BOOL)matchesIMHandle:(id)arg1 ;
-(id)imHandleForOtherAccount:(id)arg1 ;
-(NSData *)mapItemImageData;
-(BOOL)isLoginIMHandle;
-(int)addressBookIdentifier;
-(NSString *)originalID;
-(NSString *)email;
-(void)setEmails:(NSArray *)arg1 ;
-(id)initWithAccount:(id)arg1 ID:(id)arg2 alreadyCanonical:(BOOL)arg3 ;
-(id)fmfHandle;
-(id)displayNameForChat:(id)arg1 ;
-(NSData *)mapItemBannerImageData;
-(BOOL)isApple;
-(NSString *)nameAndID;
-(NSString *)nickname;
-(NSString *)fullName;
-(unsigned long long)capabilities;
-(BOOL)isBlocked;
-(void)setCapabilities:(unsigned long long)arg1 ;
-(BOOL)canBeDeleted;
-(void)setUniqueName:(NSString *)arg1 ;
@end

