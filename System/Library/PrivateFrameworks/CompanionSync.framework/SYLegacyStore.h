/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:19:42 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <CompanionSync/SYStore.h>
#import <libobjc.A.dylib/IDSServiceDelegate.h>
#import <libobjc.A.dylib/NMSMessageCenterDelegate.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSMutableIndexSet, NSMutableDictionary, SYRetryTimer, NSObject, NSError, SYPersistentStore, NSString, NSUUID, NMSMessageCenter, SYVectorClock;

@interface SYLegacyStore : SYStore <IDSServiceDelegate, NMSMessageCenterDelegate> {

	unsigned long long _batchCounter;
	NSMutableIndexSet* _batchChunkUnackedIndices;
	BOOL _tracksChanges;
	NSMutableDictionary* _sendSignals;
	SYRetryTimer* _syncRetryTimer;
	NSObject*<OS_dispatch_source> _overflowRetryTimer;
	NSError* _overflowRetryError;
	BOOL _deferredFullSync;
	BOOL _encryptPayloads;
	BOOL _alwaysWins;
	BOOL _registeredNotificationHandlers;
	BOOL _fullSyncWasRequestedBySlave;
	long long _priority;
	SYPersistentStore* _persistentStore;
	NSString* _service;
	NSString* _databaseFileName;
	NSObject*<OS_dispatch_queue> _queue;
	CFStringRef _loggingFacility;
	NSUUID* _pairedDeviceID;
	NMSMessageCenter* _messageCenter;
	SYVectorClock* _vectorClock;
	/*^block*/id _nextBatchStep;

}

@property (nonatomic,retain) NSString * service;                               //@synthesize service=_service - In the implementation block
@property (nonatomic,retain) NSString * databaseFileName;                      //@synthesize databaseFileName=_databaseFileName - In the implementation block
@property (assign,nonatomic) long long priority;                               //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic) BOOL encryptPayloads;                             //@synthesize encryptPayloads=_encryptPayloads - In the implementation block
@property (assign,nonatomic) BOOL alwaysWins;                                  //@synthesize alwaysWins=_alwaysWins - In the implementation block
@property (nonatomic,retain) SYPersistentStore * persistentStore;              //@synthesize persistentStore=_persistentStore - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;               //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) CFStringRef loggingFacility;                      //@synthesize loggingFacility=_loggingFacility - In the implementation block
@property (nonatomic,retain) NSUUID * pairedDeviceID;                          //@synthesize pairedDeviceID=_pairedDeviceID - In the implementation block
@property (assign,nonatomic) BOOL registeredNotificationHandlers;              //@synthesize registeredNotificationHandlers=_registeredNotificationHandlers - In the implementation block
@property (nonatomic,retain) NMSMessageCenter * messageCenter;                 //@synthesize messageCenter=_messageCenter - In the implementation block
@property (nonatomic,retain) SYVectorClock * vectorClock;                      //@synthesize vectorClock=_vectorClock - In the implementation block
@property (assign,nonatomic) BOOL fullSyncWasRequestedBySlave;                 //@synthesize fullSyncWasRequestedBySlave=_fullSyncWasRequestedBySlave - In the implementation block
@property (nonatomic,copy) id nextBatchStep;                                   //@synthesize nextBatchStep=_nextBatchStep - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)fullSyncActivityDictionary;
-(NSUUID *)pairedDeviceID;
-(NSString *)service;
-(void)setService:(NSString *)arg1 ;
-(CFStringRef)loggingFacility;
-(void)setLoggingFacility:(CFStringRef)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(long long)state;
-(void)setPriority:(long long)arg1 ;
-(long long)priority;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(double)timeToLive;
-(void)setTimeToLive:(double)arg1 ;
-(id)initWithService:(id)arg1 isGStore:(BOOL)arg2 highPriority:(BOOL)arg3 ;
-(id)initWithService:(id)arg1 isGStore:(BOOL)arg2 highPriority:(BOOL)arg3 isMasterStore:(BOOL)arg4 ;
-(id)initWithService:(id)arg1 isGStore:(BOOL)arg2 priority:(long long)arg3 isMasterStore:(BOOL)arg4 ;
-(id)initWithService:(id)arg1 isGStore:(BOOL)arg2 priority:(long long)arg3 isMasterStore:(BOOL)arg4 tracksChanges:(BOOL)arg5 ;
-(BOOL)inFullSync;
-(BOOL)addObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3 error:(id*)arg4 ;
-(BOOL)updateObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3 error:(id*)arg4 ;
-(BOOL)deleteObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3 error:(id*)arg4 ;
-(void)_transaction:(/*^block*/id)arg1 context:(id)arg2 idsOptions:(id)arg3 blockUntilSent:(BOOL)arg4 reportError:(/*^block*/id)arg5 ;
-(void)setNeedsFullSyncWithContext:(id)arg1 idsOptions:(id)arg2 ;
-(id)initWithBundleIdentifier:(id)arg1 isGStore:(BOOL)arg2 highPriority:(BOOL)arg3 ;
-(id)initWithService:(id)arg1 isGStore:(BOOL)arg2 highPriority:(BOOL)arg3 isMasterStore:(BOOL)arg4 tracksChanges:(BOOL)arg5 ;
-(void)setDeliveryQOS:(unsigned)arg1 ;
-(BOOL)hasCompletedFullSync;
-(long long)maxBytesInFlight;
-(void)setMaxBytesInFlight:(long long)arg1 ;
-(BOOL)inDeltaSync;
-(void)willBeginDeltaSync;
-(void)didEndDeltaSync;
-(void)setTracksChanges:(BOOL)arg1 ;
-(void)setupPairingNotifications;
-(id)_getPairedDeviceID;
-(void)setPairedDeviceID:(NSUUID *)arg1 ;
-(void)_setupMessageCenter_LOCKED;
-(void)_listenForPrefsChangeNotifications;
-(void)_updateMessageCenterPrefs:(id)arg1 ;
-(BOOL)registeredNotificationHandlers;
-(void)setRegisteredNotificationHandlers:(BOOL)arg1 ;
-(void)_devicePaired:(id)arg1 ;
-(void)_deviceUnpaired:(id)arg1 ;
-(BOOL)_isUsingGenericCache;
-(BOOL)_isPairedWithDevice:(id)arg1 ;
-(void)postUserNotification:(id)arg1 message:(id)arg2 ;
-(void)_postVersionRejectedForMessageID:(id)arg1 ;
-(id)newMessageHeader;
-(void)sendMessage:(id)arg1 ofType:(unsigned short)arg2 respondingTo:(id)arg3 userInfo:(id)arg4 idsOptions:(id)arg5 ;
-(id)_pathForMessageCenterCache;
-(BOOL)_checkMessageHeader:(id)arg1 messageID:(id)arg2 ;
-(void)handleFullSyncRequest:(id)arg1 response:(id)arg2 ;
-(void)_recordLastSeqNo:(id)arg1 ;
-(void)handleSyncAllObjects:(id)arg1 response:(id)arg2 ;
-(void)handleBatchSyncStart:(id)arg1 ;
-(void)handleBatchSyncEnd:(id)arg1 response:(id)arg2 ;
-(void)handleBatchSyncChunk:(id)arg1 response:(id)arg2 ;
-(void)handleChangeMessage:(id)arg1 ;
-(void)performFullSyncToCurrentDBVersion;
-(void)processBatchChunkAck:(unsigned)arg1 ;
-(void)_retrySync;
-(void)_handleIDSOverflowWithError:(id)arg1 ;
-(id)nextBatchStep;
-(void)performFullSyncIfNecessaryAskingDelegate:(BOOL)arg1 ;
-(BOOL)tracksChanges;
-(void)_vectorClockUpdated;
-(void)remoteStoreRequestFullSync;
-(BOOL)alwaysWins;
-(BOOL)_shouldIgnoreSyncID:(id)arg1 ;
-(void)_syncEndedWithSyncID:(id)arg1 ;
-(void)remoteStoreAllObjects:(id)arg1 fromPeer:(id)arg2 clock:(id)arg3 ;
-(void)processBatchSyncStart;
-(BOOL)processBatchChunkAtIndex:(unsigned)arg1 encodedObjects:(id)arg2 error:(id*)arg3 ;
-(void)processBatchSyncEnd:(unsigned long long)arg1 ;
-(BOOL)_shouldSkipNonSyncMessages;
-(void)performFullSync;
-(id)wrapMessage:(id)arg1 ofType:(unsigned short)arg2 respondingTo:(id)arg3 userInfo:(id)arg4 ;
-(SYVectorClock *)vectorClock;
-(BOOL)_allowDeltaSyncWithContext:(id)arg1 error:(id*)arg2 ;
-(void)handleObjectChanges:(id)arg1 contextInfo:(id)arg2 idsOptions:(id)arg3 blockUntilSent:(BOOL)arg4 reportError:(/*^block*/id)arg5 ;
-(void)_handleObjectChanges:(id)arg1 contextInfo:(id)arg2 idsOptions:(id)arg3 blockUntilSent:(BOOL)arg4 reportError:(/*^block*/id)arg5 notifyingTransaction:(id)arg6 ;
-(void)logChanges:(id)arg1 ;
-(void)sendChanges:(id)arg1 context:(id)arg2 options:(id)arg3 sentSignal:(id)arg4 ;
-(void)setFullSyncWasRequestedBySlave:(BOOL)arg1 ;
-(void)performFullSyncIfNecessary;
-(void)_postBatchEndMessageWithState:(id)arg1 error:(id)arg2 then:(/*^block*/id)arg3 ;
-(BOOL)performBatchedSyncToCurrentDBVersion;
-(BOOL)fullSyncWasRequestedBySlave;
-(BOOL)objectChanged:(id)arg1 sinceVersion:(unsigned long long)arg2 ;
-(void)messageCenter:(id)arg1 didResolveIDSIdentifier:(id)arg2 forResponse:(id)arg3 ;
-(void)messageCenter:(id)arg1 didSuccessfullySendRequestWithIdentifier:(id)arg2 userInfo:(id)arg3 ;
-(void)messageCenter:(id)arg1 didSuccessfullyDeliverRequestWithIdentifier:(id)arg2 userInfo:(id)arg3 ;
-(id)_getPairingStorePath;
-(id)_batchChunkUnackedIndices;
-(void)_prefsChanged;
-(void)setupMessageCenter;
-(void)_copyPeerClockFromMessageHeaderIfNecessary:(id)arg1 ;
-(BOOL)peerState:(id)arg1 fromPeer:(id)arg2 matchesExpectationForChangeCount:(unsigned long long)arg3 offsetAmount:(unsigned long long*)arg4 ;
-(NSString *)databaseFileName;
-(void)setDatabaseFileName:(NSString *)arg1 ;
-(BOOL)encryptPayloads;
-(void)setEncryptPayloads:(BOOL)arg1 ;
-(void)setAlwaysWins:(BOOL)arg1 ;
-(void)setVectorClock:(SYVectorClock *)arg1 ;
-(void)setNextBatchStep:(id)arg1 ;
-(id)newFullSyncContext;
-(void)_postBatchStartMessageWithState:(id)arg1 then:(/*^block*/id)arg2 ;
-(void)_restartBatchSyncWithState:(id)arg1 then:(/*^block*/id)arg2 ;
-(void)_sendBatchChunk:(id)arg1 withState:(id)arg2 then:(/*^block*/id)arg3 ;
-(void)setPersistentStore:(SYPersistentStore *)arg1 ;
-(SYPersistentStore *)persistentStore;
-(id)initWithService:(id)arg1 ;
-(void)messageCenter:(id)arg1 didReceiveUnknownRequest:(id)arg2 ;
-(void)messageCenter:(id)arg1 didResolveIDSIdentifierForRequest:(id)arg2 ;
-(NMSMessageCenter *)messageCenter;
-(void)setMessageCenter:(NMSMessageCenter *)arg1 ;
-(void)setupDatabase;
-(BOOL)isPaired;
@end

