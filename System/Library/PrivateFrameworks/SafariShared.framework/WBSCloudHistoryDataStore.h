/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:41 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WBSCloudHistoryDataStore
@required
-(id)initWithConfiguration:(id)arg1;
-(void)saveCloudHistoryVisits:(id)arg1 tombstones:(id)arg2 longLivedOperationPersistenceCompletion:(/*^block*/id)arg3 completion:(/*^block*/id)arg4;
-(void)fetchRecordsWithServerChangeTokenData:(id)arg1 completion:(/*^block*/id)arg2;
-(void)replayPersistedLongLivedSaveOperationWithID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)initializePushNotifications:(/*^block*/id)arg1;
-(void)fetchNumberOfDevicesInSyncCircleWithCompletion:(/*^block*/id)arg1;

@end
