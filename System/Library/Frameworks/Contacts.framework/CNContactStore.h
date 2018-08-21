/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNiOSAddressBookDataMapper, CNiOSAddressBook;

@interface CNContactStore : NSObject

@property (nonatomic,readonly) CNiOSAddressBookDataMapper * iOSMapper; 
@property (nonatomic,readonly) CNiOSAddressBook * addressBook; 
@property (nonatomic,readonly) BOOL hasMultipleGroupsOrAccounts; 
+(void)initialize;
+(id)storeWithEnvironment:(id)arg1 options:(unsigned long long)arg2 ;
+(Class)storeClassWithIdentifier:(id)arg1 ;
+(id)storeInfoClasses;
+(id)contactIdentifierFromInternalIdentifier:(id)arg1 ;
+(id)storeIdentifierFromContactIdentifier:(id)arg1 ;
+(id)internalIdentifierFromContactIdentifier:(id)arg1 ;
+(BOOL)eraseAllDataAtURL:(id)arg1 error:(id*)arg2 ;
+(BOOL)eraseAllDataAtLocationWithName:(id)arg1 error:(id*)arg2 ;
+(id)_contactStoreForPublicAddressBook:(void*)arg1 ;
+(id)contactStoreForPublicAddressBook:(void*)arg1 ;
+(id)standardLabelsForPropertyWithKey:(id)arg1 ;
+(long long)authorizationStatusForEntityType:(long long)arg1 ;
+(id)storeWithOptions:(unsigned long long)arg1 ;
+(id)storeIdentifier;
-(id)init;
-(id)initWithEnvironment:(id)arg1 ;
-(void)reindexSearchableItemsWithIdentifiers:(id)arg1 ;
-(id)requestAccessForEntityType:(long long)arg1 ;
-(id)meContactIdentifiers:(id*)arg1 ;
-(id)groupWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)membersOfGroupWithIdentifier:(id)arg1 keysToFetch:(id)arg2 error:(id*)arg3 ;
-(id)subgroupsOfGroupWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)setMeContact:(id)arg1 forContainer:(id)arg2 error:(id*)arg3 ;
-(BOOL)supportsSaveRequest:(id)arg1 ;
-(id)contactWithUserActivityUserInfo:(id)arg1 keysToFetch:(id)arg2 ;
-(id)_unifiedMeContactWithKeysToFetch:(id)arg1 error:(id*)arg2 ;
-(BOOL)executeSaveRequest:(id)arg1 response:(id*)arg2 error:(id*)arg3 ;
-(id)identifierWithError:(id*)arg1 ;
-(BOOL)setBestMeIfNeededForGivenName:(id)arg1 familyName:(id)arg2 email:(id)arg3 error:(id*)arg4 ;
-(id)contactIdentifierWithMatchingDictionary:(id)arg1 ;
-(id)verifyIndexWithError:(id*)arg1 ;
-(id)contactFromPerson:(void*)arg1 keysToFetch:(id)arg2 mutable:(BOOL)arg3 ;
-(id)initWithEnvironment:(id)arg1 options:(unsigned long long)arg2 ;
-(id)unifiedMeContactMatchingEmailAddresses:(id)arg1 keysToFetch:(id)arg2 error:(id*)arg3 ;
-(id)_ios_meContactIdentifierWithError:(id*)arg1 ;
-(id)unifiedMeContactWithKeysToFetch:(id)arg1 error:(id*)arg2 ;
-(id)executeFetchRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)synchronousRemoteObjectProxyForContactsXPCService;
-(CNiOSAddressBookDataMapper *)iOSMapper;
-(BOOL)setDefaultContainer:(id)arg1 forAccount:(id)arg2 error:(id*)arg3 ;
-(id)contactFromPerson:(void*)arg1 mutable:(BOOL)arg2 ;
-(id)_contactFromPersonID:(int)arg1 keysToFetch:(id)arg2 ;
-(id)contactFromPerson:(void*)arg1 ;
-(id)contactFromPersonID:(int)arg1 ;
-(id)_contactFromPublicABPerson:(void*)arg1 keysToFetch:(id)arg2 ;
-(void*)_publicABPersonFromContact:(id)arg1 publicAddressBook:(const void*)arg2 ;
-(int)_publicMultiValueIdentifierFromLabeledValue:(id)arg1 ;
-(id)_labeledValueFromPublicMultiValueIdentifier:(int)arg1 contact:(id)arg2 key:(id)arg3 ;
-(int)publicMultiValueIdentifierFromLabeledValue:(id)arg1 ;
-(id)labeledValueFromPublicMultiValueIdentifier:(int)arg1 contact:(id)arg2 key:(id)arg3 ;
-(id)_fetchRequestInfosForEmailOrPhoneForContact:(id)arg1 ;
-(id)_executeFetchRequestsWithInfos:(id)arg1 unifyResults:(BOOL)arg2 keysToFetch:(id)arg3 error:(id*)arg4 ;
-(id)contactsMatchingPropertiesOfContact:(id)arg1 unifyResults:(BOOL)arg2 keysToFetch:(id)arg3 error:(id*)arg4 ;
-(id)contactFromPersonID:(int)arg1 keysToFetch:(id)arg2 ;
-(id)contactWithMatchingDictionary:(id)arg1 keysToFetch:(id)arg2 ;
-(id)descriptorForRequiredKeysForMatchingDictionary;
-(BOOL)setMeContact:(id)arg1 error:(id*)arg2 ;
-(id)initWithEnvironment:(id)arg1 options:(unsigned long long)arg2 managedConfiguration:(id)arg3 ;
-(id)defaultContainerIdentifier;
-(id)containersMatchingPredicate:(id)arg1 error:(id*)arg2 ;
-(id)userActivityUserInfoForContact:(id)arg1 ;
-(id)groupsMatchingPredicate:(id)arg1 error:(id*)arg2 ;
-(id)usedLabelsForPropertyWithKey:(id)arg1 error:(id*)arg2 ;
-(id)policyForContainerWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)mainContactStore;
-(id)serverSearchContainersMatchingPredicate:(id)arg1 error:(id*)arg2 ;
-(id)originForSuggestion:(id)arg1 error:(id*)arg2 ;
-(id)accountsMatchingPredicate:(id)arg1 error:(id*)arg2 ;
-(BOOL)hasMultipleGroupsOrAccounts;
-(id)unifiedContactCountWithError:(id*)arg1 ;
-(BOOL)enumerateNonUnifiedContactsWithFetchRequest:(id)arg1 error:(id*)arg2 usingBlock:(/*^block*/id)arg3 ;
-(BOOL)executeSaveRequest:(id)arg1 error:(id*)arg2 ;
-(id)executeFetchRequest:(id)arg1 progressiveResults:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(id)contactFromPublicABPerson:(void*)arg1 keysToFetch:(id)arg2 ;
-(void*)publicABPersonFromContact:(id)arg1 publicAddressBook:(const void*)arg2 ;
-(BOOL)enumerateContactsAndMatchInfoWithFetchRequest:(id)arg1 error:(id*)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)matchingDictionaryForContact:(id)arg1 ;
-(id)_crossPlatformUnifiedMeContactWithKeysToFetch:(id)arg1 error:(id*)arg2 ;
-(BOOL)enumerateContactsWithFetchRequest:(id)arg1 error:(id*)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)contactFromPerson:(void*)arg1 keysToFetch:(id)arg2 ;
-(void*)personFromContact:(id)arg1 ;
-(int)multiValueIdentifierFromLabeledValue:(id)arg1 ;
-(id)contactIdentifierFromPersonID:(int)arg1 ;
-(void)requestAccessForEntityType:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)unifiedContactWithIdentifier:(id)arg1 keysToFetch:(id)arg2 error:(id*)arg3 ;
-(CNiOSAddressBook *)addressBook;
-(id)labeledValueFromMultiValueIdentifier:(int)arg1 contact:(id)arg2 key:(id)arg3 ;
-(id)unifiedMeContactMatchingEmailAddress:(id)arg1 keysToFetch:(id)arg2 error:(id*)arg3 ;
-(id)_ios_meContactWithKeysToFetch:(id)arg1 error:(id*)arg2 ;
-(BOOL)clearChangeHistoryForClientIdentifier:(id)arg1 toChangeAnchor:(id)arg2 error:(id*)arg3 ;
-(id)changeHistoryWithFetchRequest:(id)arg1 error:(id*)arg2 ;
-(BOOL)unregisterChangeHistoryClientIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)registerChangeHistoryClientIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)unifiedContactsMatchingPredicate:(id)arg1 keysToFetch:(id)arg2 error:(id*)arg3 ;
@end

