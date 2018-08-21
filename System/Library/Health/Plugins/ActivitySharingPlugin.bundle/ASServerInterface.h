/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:01 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Health/Plugins/ActivitySharingPlugin.bundle/ActivitySharingPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ASServerInterface <NSObject>
@required
-(void)remote_sendInviteRequestToDestination:(id)arg1 callerID:(id)arg2 serviceIdentifier:(id)arg3 completion:(/*^block*/id)arg4;
-(void)remote_acceptInviteRequestFromFriendWithUUID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_sendWithdrawInviteRequestToFriendWithUUID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_ignoreInviteRequestFromFriendWithUUID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_setActivityDataVisible:(BOOL)arg1 toFriendWithUUID:(id)arg2 completion:(/*^block*/id)arg3;
-(void)remote_setMuteEnabled:(BOOL)arg1 forFriendWithUUID:(id)arg2 completion:(/*^block*/id)arg3;
-(void)remote_removeFriendWithUUID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)remote_pushActivityDataWithCompletion:(/*^block*/id)arg1;
-(void)remote_pushFakeActivityDataWithCompletion:(/*^block*/id)arg1;
-(void)remote_fetchAllDataWithCompletion:(/*^block*/id)arg1;
-(void)remote_fetchAllDataIfTimeSinceLastFetchIsGreaterThan:(unsigned long long)arg1 completion:(/*^block*/id)arg2;
-(void)remote_cloudKitAccountStatusWithCompletion:(/*^block*/id)arg1;
-(void)remote_clearFriendListWithCompletion:(/*^block*/id)arg1;
-(void)remote_fetchAreMultipleDevicesSharingDataForSnapshotIndex:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)remote_consolidateRelationshipEventsForFriendWithUUID:(id)arg1 completion:(/*^block*/id)arg2;

@end
