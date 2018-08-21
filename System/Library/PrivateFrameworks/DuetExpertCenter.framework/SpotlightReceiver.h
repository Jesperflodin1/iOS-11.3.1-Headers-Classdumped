/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:00 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SpotlightReceiver <NSObject>
@optional
-(id)supportedContentTypes;
-(id)supportedBundleIDs;
-(void)addOrUpdateSearchableItems:(id)arg1 bundleID:(id)arg2;
-(void)deleteSearchableItemsWithIdentifiers:(id)arg1 bundleID:(id)arg2;
-(void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 bundleID:(id)arg2;
-(void)deleteAllSearchableItemsWithBundleID:(id)arg1;
-(void)deleteSearchableItemsSinceDate:(id)arg1 bundleID:(id)arg2;
-(void)purgeSearchableItemsWithIdentifiers:(id)arg1 bundleID:(id)arg2;
-(void)addUserAction:(id)arg1 withItem:(id)arg2;
-(id)supportedINIntentClassNames;
-(void)addInteractions:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3;
-(void)deleteInteractionsWithIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3;
-(void)deleteInteractionsWithGroupIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3;
-(void)deleteAllInteractionsWithBundleID:(id)arg1 protectionClass:(id)arg2;

@end

