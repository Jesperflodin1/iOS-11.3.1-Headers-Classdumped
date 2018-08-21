/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVCSessionDelegate, OS_dispatch_queue;
@class AVCSessionParticipant, NSMutableDictionary, AVCSessionConfiguration, NSString, NSObject, AVConferenceXPCClient;

@interface AVCSession : NSObject {

	AVCSessionParticipant* _localParticipant;
	NSMutableDictionary* _remoteParticipants;
	NSMutableDictionary* _cachedParticipants;
	AVCSessionConfiguration* _configuration;
	NSString* _transportToken;
	id<AVCSessionDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateNotificationQueue;
	NSObject*<OS_dispatch_queue> _stateQueue;
	AVConferenceXPCClient* _connection;

}

@property (nonatomic,retain) AVCSessionConfiguration * configuration;                               //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateNotificationQueue;              //@synthesize delegateNotificationQueue=_delegateNotificationQueue - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * remoteParticipants;                            //@synthesize remoteParticipants=_remoteParticipants - In the implementation block
@property (nonatomic,readonly) AVCSessionParticipant * localParticipant;                            //@synthesize localParticipant=_localParticipant - In the implementation block
-(id)delegate;
-(void)dealloc;
-(id)description;
-(void)stop;
-(void)start;
-(void)setConfiguration:(AVCSessionConfiguration *)arg1 ;
-(AVCSessionConfiguration *)configuration;
-(NSObject*<OS_dispatch_queue>)delegateNotificationQueue;
-(id)participantForID:(id)arg1 ;
-(void)updateConfiguration:(id)arg1 ;
-(AVCSessionParticipant *)localParticipant;
-(void)registerBlocksForNotifications;
-(void)deregisterFromNotifications;
-(void)setupNotificationQueue:(id)arg1 ;
-(BOOL)validateParticipantToAddWithID:(id)arg1 data:(id)arg2 initFailed:(BOOL)arg3 ;
-(BOOL)validateParticipantToRemoveWithID:(id)arg1 ;
-(NSMutableDictionary *)remoteParticipants;
-(id)initWithTransportToken:(id)arg1 configuration:(id)arg2 delegate:(id)arg3 queue:(id)arg4 ;
-(void)addParticipantWithID:(id)arg1 data:(id)arg2 delegate:(id)arg3 queue:(id)arg4 ;
-(void)removeParticipantWithID:(id)arg1 ;
@end

