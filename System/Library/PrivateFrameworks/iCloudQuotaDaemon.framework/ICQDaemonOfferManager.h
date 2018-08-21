/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:29 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuotaDaemon.framework/iCloudQuotaDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURLSession, FLFollowUpController, NSNumber;

@interface ICQDaemonOfferManager : NSObject {

	NSURLSession* _sharedURLSession;
	FLFollowUpController* _followUpController;

}

@property (assign,nonatomic) BOOL shouldDirectToStorageManagement; 
@property (assign,nonatomic) BOOL useHysteresisForDeviceStorageAlmostFull; 
@property (assign,getter=isBuddyOfferEnabled,nonatomic) BOOL buddyOfferEnabled; 
@property (assign,getter=isSimulatedDeviceStorageAlmostFull,nonatomic) BOOL simulatedDeviceStorageAlmostFull; 
@property (nonatomic,retain) NSNumber * simulatedPhotosLibrarySize; 
@property (assign,getter=isLegacyDeviceStorageLevelNotificationEnabled,nonatomic) BOOL legacyDeviceStorageLevelNotificationEnabled; 
+(id)sharedDaemonOfferManager;
+(id)ckBackupDeviceID;
-(id)init;
-(BOOL)isSimulatedDeviceStorageAlmostFull;
-(BOOL)useHysteresisForDeviceStorageAlmostFull;
-(void)setUseHysteresisForDeviceStorageAlmostFull:(BOOL)arg1 ;
-(NSNumber *)simulatedPhotosLibrarySize;
-(void)setSimulatedDeviceStorageAlmostFull:(BOOL)arg1 ;
-(void)daemonBuddyOfferDictionaryForAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_postDaemonOfferChangedDueToPushDarwinNotification;
-(void)_postFollowupForDaemonOffer:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_fetchDaemonOfferForAccount:(id)arg1 stub:(id)arg2 notificationID:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_reconsiderOffersForAccount:(id)arg1 isForBuddy:(BOOL)arg2 choiceHandler:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_processPushNotificationDictionary:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_teardownCachedOffersAndNotify:(BOOL)arg1 ;
-(id)_storageManagementFollowupActions;
-(id)_storageManagementFollowupNotification;
-(id)_storageManagementFollowupItem;
-(BOOL)shouldDirectToStorageManagement;
-(void)setShouldDirectToStorageManagement:(BOOL)arg1 ;
-(void)_postStorageManagementFollowup;
-(void)_clearStorageManagementFollowup;
-(void)_fetchDaemonOfferStubsForAccount:(id)arg1 isForBuddy:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)_sanitizedNotificationDictionary:(id)arg1 account:(id)arg2 ;
-(void)_showDaemonAlertForOffer:(id)arg1 notificationDictionary:(id)arg2 store:(id)arg3 account:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_updateOffer:(id)arg1 buttonId:(id)arg2 info:(id)arg3 account:(id)arg4 accountStore:(id)arg5 completion:(/*^block*/id)arg6 ;
-(BOOL)_useFetchOffersDataDirectly;
-(id)URLForAccount:(id)arg1 quotaKey:(id)arg2 ;
-(void)_addEntriesToPostDictionary:(id)arg1 forStub:(id)arg2 ;
-(unsigned long long)daemonOfferSource;
-(BOOL)_isBackupEnabledForAccount:(id)arg1 ;
-(BOOL)_attemptSetRequest:(id)arg1 toPostWithJSONDict:(id)arg2 ;
-(void)_addCommonHeadersToRequest:(id)arg1 account:(id)arg2 ;
-(void)_updateQuotaForAccount:(id)arg1 withServerDictionary:(id)arg2 ;
-(id)_placeholderOfferForAccount:(id)arg1 isForBuddy:(BOOL)arg2 error:(id)arg3 ;
-(void)_fetchDictionaryForAccount:(id)arg1 quotaKey:(id)arg2 stub:(id)arg3 notificationID:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)clearFollowupsWithCompletion:(/*^block*/id)arg1 ;
-(void)_teardownCachedBuddyOffer;
-(void)_teardownCachedOfferAndNotify:(BOOL)arg1 ;
-(void)_daemonOfferStubsDictionaryForAccount:(id)arg1 isForBuddy:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_postOfferType:(id)arg1 isForBuddy:(BOOL)arg2 ;
-(void)daemonOfferDictionaryForAccount:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)processPushNotificationDictionary:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)teardownOffersForAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)soonestOfferOrStubExpirationDate;
-(void)startDirectingToStorageManagement;
-(void)stopDirectingToStorageManagement;
-(void)reconsiderOffersWithCompletion:(/*^block*/id)arg1 ;
-(id)_pushNotificationDictionary;
-(void)updateOfferForAccount:(id)arg1 offerId:(id)arg2 buttonId:(id)arg3 info:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)postOfferType:(id)arg1 ;
-(void)postBuddyOfferType:(id)arg1 ;
-(void)forcePostFollowup;
-(void)teardownCachedOffer;
-(void)teardownCachedBuddyOffer;
-(void)teardownCachedOffers;
-(void)setBuddyOfferEnabled:(BOOL)arg1 ;
-(void)setSimulatedPhotosLibrarySize:(NSNumber *)arg1 ;
-(BOOL)isLegacyDeviceStorageLevelNotificationEnabled;
-(void)setLegacyDeviceStorageLevelNotificationEnabled:(BOOL)arg1 ;
-(BOOL)isBuddyOfferEnabled;
@end

