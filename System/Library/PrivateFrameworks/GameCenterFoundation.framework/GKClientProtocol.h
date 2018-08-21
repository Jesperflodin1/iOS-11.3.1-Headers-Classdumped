/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:20 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GKClientProtocol <NSObject>
@required
-(oneway void)session:(id)arg1 player:(id)arg2 didChangeConnectionState:(long long)arg3;
-(oneway void)session:(id)arg1 player:(id)arg2 didSaveData:(id)arg3;
-(oneway void)session:(id)arg1 didReceiveData:(id)arg2 fromPlayer:(id)arg3;
-(oneway void)session:(id)arg1 didReceiveMessage:(id)arg2 withData:(id)arg3 fromPlayer:(id)arg4;
-(oneway void)cancelGameInvite:(id)arg1;
-(oneway void)relayPushNotification:(id)arg1;
-(oneway void)refreshContentsForDataType:(unsigned)arg1 userInfo:(id)arg2;
-(oneway void)beginNetworkActivity;
-(oneway void)endNetworkActivity;
-(oneway void)resetNetworkActivity;
-(oneway void)friendRequestSelected:(id)arg1;
-(oneway void)receivedChallengeSelected:(id)arg1;
-(oneway void)completedChallengeSelected:(id)arg1;
-(oneway void)challengeReceived:(id)arg1;
-(oneway void)challengeCompleted:(id)arg1;
-(oneway void)setBadgeCount:(unsigned long long)arg1 forType:(unsigned long long)arg2;
-(oneway void)setPreferencesValues:(id)arg1;
-(oneway void)setCurrentGame:(id)arg1 serverEnvironment:(long long)arg2 reply:(/*^block*/id)arg3;
-(oneway void)authenticatedPlayersDidChange:(id)arg1 reply:(/*^block*/id)arg2;
-(oneway void)completedOptimisticAuthenticationWithResponse:(id)arg1 error:(id)arg2;
-(oneway void)respondedToNearbyInvite:(id)arg1;
-(oneway void)acceptMultiplayerGameInvite;
-(oneway void)acceptInviteWithNotification:(id)arg1;
-(oneway void)declineInviteWithNotification:(id)arg1;
-(oneway void)didConnectToParticipantWithID:(id)arg1;
-(oneway void)didDisconnectFromParticipantWithID:(id)arg1;
-(oneway void)didReceiveData:(id)arg1 reliably:(BOOL)arg2 forRecipients:(id)arg3 fromSender:(id)arg4;
-(oneway void)session:(id)arg1 addedPlayer:(id)arg2;
-(oneway void)session:(id)arg1 removedPlayer:(id)arg2;
-(oneway void)fetchTurnBasedData;
-(oneway void)scoreSelected:(id)arg1;
-(oneway void)achievementSelected:(id)arg1;
-(oneway void)setLogBits:(int)arg1;

@end

