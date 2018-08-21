/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:07 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDS/IDSDaemonListenerProtocol.h>
#import <IDS/IDSBaseSocketPairConnectionDelegate.h>

@protocol OS_dispatch_queue;
@class NSString, NSSet, IDSBaseSocketPairConnection, CUTWeakReference, NSObject, NSMutableDictionary;

@interface _IDSSession : NSObject <IDSDaemonListenerProtocol, IDSBaseSocketPairConnectionDelegate> {

	id _delegateContext;
	id _boostContext;
	NSString* _uniqueID;
	NSString* _accountID;
	NSSet* _destinations;
	IDSBaseSocketPairConnection* _unreliableSocketPairConnection;
	CUTWeakReference* _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned _state;
	long long _transportType;
	unsigned long long _initialLinkType;
	int _socket;
	BOOL _isAudioEnabled;
	BOOL _isMuted;
	BOOL _isLegacy;
	long long _inviteTimeout;
	unsigned long long _connectionCountHint;
	BOOL _needsToWaitForPreConnectionData;
	BOOL _disallowCellularInterface;
	BOOL _disallowWifiInterface;
	unsigned long long _preferredAddressFamily;
	BOOL _preferCellularForCallSetup;
	NSString* _clientUUID;
	BOOL _disableEncryption;
	BOOL _shouldUseSocketForTransport;
	BOOL _enableSingleChannelDirectMode;
	BOOL _alwaysSkipSelf;
	unsigned _sessionEndedReason;
	NSMutableDictionary* _preferences;
	NSMutableDictionary* _sessionConfig;

}

@property (nonatomic,readonly) int socket; 
@property (nonatomic,readonly) NSString * uniqueID; 
@property (nonatomic,readonly) unsigned state;                                  //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) unsigned long long initialLinkType;              //@synthesize initialLinkType=_initialLinkType - In the implementation block
@property (assign,nonatomic) long long inviteTimeout; 
@property (nonatomic,readonly) unsigned sessionEndedReason; 
@property (nonatomic,retain) id boostContext;                                   //@synthesize boostContext=_boostContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)uniqueID;
-(void)dealloc;
-(unsigned)state;
-(void)setPreferences:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)endSession;
-(id)boostContext;
-(void)setBoostContext:(id)arg1 ;
-(void)xpcObject:(id)arg1 objectContext:(id)arg2 ;
-(void)daemonDisconnected;
-(void)sessionAcceptReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3 ;
-(void)sessionDeclineReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3 ;
-(void)sessionCancelReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3 ;
-(void)sessionMessageReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3 ;
-(void)sessionEndReceived:(id)arg1 fromID:(id)arg2 withData:(id)arg3 ;
-(void)session:(id)arg1 invitationSentToTokens:(id)arg2 shouldBreakBeforeMake:(BOOL)arg3 ;
-(void)session:(id)arg1 audioEnabled:(BOOL)arg2 ;
-(void)session:(id)arg1 muted:(BOOL)arg2 ;
-(void)allocationDone:(id)arg1 sessionInfo:(id)arg2 ;
-(id)initWithAccount:(id)arg1 destinations:(id)arg2 options:(id)arg3 delegateContext:(id)arg4 ;
-(unsigned)sessionEndedReason;
-(id)initWithAccount:(id)arg1 destinations:(id)arg2 transportType:(long long)arg3 delegateContext:(id)arg4 ;
-(id)initWithAccount:(id)arg1 destinations:(id)arg2 transportType:(long long)arg3 uniqueID:(id)arg4 delegateContext:(id)arg5 ;
-(unsigned long long)initialLinkType;
-(void)sendInvitationWithOptions:(id)arg1 ;
-(void)sendInvitationWithData:(id)arg1 declineOnError:(BOOL)arg2 ;
-(id)getPreferences;
-(void)cancelInvitationWithRemoteEndedReasonOverride:(unsigned)arg1 ;
-(void)cancelInvitationWithData:(id)arg1 ;
-(void)acceptInvitationWithData:(id)arg1 ;
-(void)declineInvitationWithData:(id)arg1 ;
-(void)cancelInvitation;
-(void)endSessionWithData:(id)arg1 ;
-(void)sendSessionMessage:(id)arg1 ;
-(void)sendSessionMessage:(id)arg1 toDestinations:(id)arg2 ;
-(void)sendAllocationRequest:(id)arg1 ;
-(BOOL)getAudioEnabled;
-(BOOL)getMuted;
-(BOOL)sendData:(id)arg1 error:(id*)arg2 ;
-(void)setInviteTimeout:(long long)arg1 ;
-(long long)inviteTimeout;
-(BOOL)shouldUseSocketForTransport;
-(id)_initWithAccount:(id)arg1 destinations:(id)arg2 options:(id)arg3 delegateContext:(id)arg4 ;
-(void)_broadcastNewSessionToDaemon;
-(void)_cleanupSocketPairConnections;
-(void)_callDelegateWithBlock:(/*^block*/id)arg1 ;
-(id)daemonListener;
-(id)daemonController;
-(void)_setupSocketPairToDaemon;
-(id)_initWithAccount:(id)arg1 destinations:(id)arg2 transportType:(long long)arg3 connectionCountHint:(unsigned long long)arg4 needsToWaitForPreConnectionData:(BOOL)arg5 uniqueID:(id)arg6 delegateContext:(id)arg7 ;
-(void)_setupUnreliableSocketPairConnection;
-(void)setAudioEnabled:(BOOL)arg1 ;
-(void)setMuted:(BOOL)arg1 ;
-(void)declineInvitation;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(unsigned long long)MTUForAddressFamily:(unsigned long long)arg1 ;
-(void)sessionStarted:(id)arg1 ;
-(void)sessionEnded:(id)arg1 withReason:(unsigned)arg2 error:(id)arg3 ;
-(int)socket;
-(void)acceptInvitation;
@end

