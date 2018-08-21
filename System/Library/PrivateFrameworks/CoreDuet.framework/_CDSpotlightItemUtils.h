/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:19:58 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _CDSpotlightItemUtils : NSObject
+(id)querySpotlightItemsWithStartDate:(id)arg1 endDate:(id)arg2 getMail:(BOOL)arg3 getMessages:(BOOL)arg4 ;
+(id)interactionForSearchableItem:(id)arg1 ;
+(long long)getInteractionMechanismForContentUTI:(id)arg1 typeTree:(id)arg2 ;
+(id)interactionUUIDForSearchableItemWithUID:(id)arg1 bundleID:(id)arg2 ;
+(id)_contactsForPersons:(id)arg1 ;
+(id)_contactsForEmailAddresses:(id)arg1 names:(id)arg2 ;
+(BOOL)shouldFilterEmailAddress:(id)arg1 ;
+(id)_metadataForSearchableItem:(id)arg1 userAction:(id)arg2 ;
+(BOOL)isLocationBasedItem:(id)arg1 ;
+(id)_locationMetadataForSearchableItem:(id)arg1 userAction:(id)arg2 ;
+(id)knowledgeEventsForSearchableItem:(id)arg1 userAction:(id)arg2 ;
+(id)contextDictionaryForSearchableItem:(id)arg1 userAction:(id)arg2 ;
+(id)collectionEventForSearchableItem:(id)arg1 userAction:(id)arg2 ;
+(id)mechanismUtiMap;
+(id)safariUTIs;
+(BOOL)utType:(id)arg1 conformsTo:(id)arg2 ;
+(BOOL)contentTypeTree:(id)arg1 conformsToUTIType:(id)arg2 ;
+(id)utiConformCache;
+(BOOL)uncachedUtType:(id)arg1 conformsTo:(id)arg2 ;
+(id)expectedUTIsForMechanism:(long long)arg1 ;
+(BOOL)contentTypeTree:(id)arg1 conformsToUTITypes:(id)arg2 ;
+(id)expectedSupportedUTIs;
+(id)policies;
@end

