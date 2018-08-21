/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:15 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, ACAccountStore, ACAccount;

@interface WBUFeatureManager : NSObject {

	NSObject*<OS_dispatch_queue> _internalQueue;
	ACAccountStore* _accountStore;
	ACAccount* _account;
	BOOL _autoFillAvailable;
	BOOL _bookmarksAvailable;
	BOOL _readingListAvailable;
	BOOL _offlineReadingListAvailable;
	BOOL _cloudSyncAvailable;
	BOOL _inMemoryBookmarkChangeTrackingAvailable;

}

@property (getter=isAutoFillAvailable,nonatomic,readonly) BOOL autoFillAvailable;                                                          //@synthesize autoFillAvailable=_autoFillAvailable - In the implementation block
@property (getter=isBookmarksAvailable,nonatomic,readonly) BOOL bookmarksAvailable;                                                        //@synthesize bookmarksAvailable=_bookmarksAvailable - In the implementation block
@property (getter=isReadingListAvailable,nonatomic,readonly) BOOL readingListAvailable;                                                    //@synthesize readingListAvailable=_readingListAvailable - In the implementation block
@property (getter=isOfflineReadingListAvailable,nonatomic,readonly) BOOL offlineReadingListAvailable;                                      //@synthesize offlineReadingListAvailable=_offlineReadingListAvailable - In the implementation block
@property (getter=isCloudKitBookmarksAvailable,nonatomic,readonly) BOOL cloudKitBookmarksAvailable; 
@property (getter=isCloudTabsAvailable,nonatomic,readonly) BOOL cloudTabsAvailable; 
@property (getter=isCloudSyncAvailable,nonatomic,readonly) BOOL cloudSyncAvailable;                                                        //@synthesize cloudSyncAvailable=_cloudSyncAvailable - In the implementation block
@property (getter=isCloudHistorySyncAvailable,nonatomic,readonly) BOOL cloudHistorySyncAvailable; 
@property (getter=isCreditCardStorageAvailable,nonatomic,readonly) BOOL creditCardStorageAvailable; 
@property (getter=isParsecITunesResultsAvailable,nonatomic,readonly) BOOL parsecITunesResultsAvailable; 
@property (getter=isPrivateBrowsingAvailable,nonatomic,readonly) BOOL privateBrowsingAvailable; 
@property (getter=isInMemoryBookmarkChangeTrackingAvailable,nonatomic,readonly) BOOL inMemoryBookmarkChangeTrackingAvailable;              //@synthesize inMemoryBookmarkChangeTrackingAvailable=_inMemoryBookmarkChangeTrackingAvailable - In the implementation block
+(long long)accessLevel;
+(id)webui_sharedFeatureManager;
-(id)init;
-(void)dealloc;
-(BOOL)isCloudSyncAvailable;
-(void)_updateAppleAccount;
-(void)_updateFeatureAvailabilityByAccessLevel;
-(void)_setupAccountStore;
-(BOOL)isCloudTabsAvailable;
-(BOOL)isParsecITunesResultsAvailable;
-(BOOL)isCloudKitBookmarksAvailable;
-(BOOL)_isUsingManagedAppleID;
-(BOOL)isCreditCardStorageAvailable;
-(BOOL)isCloudHistorySyncAvailable;
-(BOOL)isPrivateBrowsingAvailable;
-(BOOL)isAutoFillAvailable;
-(BOOL)isReadingListAvailable;
-(BOOL)isOfflineReadingListAvailable;
-(BOOL)isInMemoryBookmarkChangeTrackingAvailable;
-(BOOL)isBookmarksAvailable;
-(void)_accountStoreDidChange:(id)arg1 ;
@end
