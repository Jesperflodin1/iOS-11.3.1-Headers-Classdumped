/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:19:43 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CompanionSync/SYSyncEngine.h>
#import <libobjc.A.dylib/IDSServiceDelegate.h>

@protocol OS_dispatch_queue;
@class SYStartSyncSession, NSURL, _SYOutputStreamer, _SYInputStreamer, IDSMessageContext, IDSService, NSObject, SYDevice, NSMutableIndexSet, NSMutableArray, NSMutableSet, NSMutableDictionary, NSDictionary, NSString;

@interface SYFileTransferSyncEngine : SYSyncEngine <IDSServiceDelegate> {

	BOOL _inSession;
	BOOL _sessionCanceled;
	SYStartSyncSession* _sessionStartMessage;
	NSURL* _outputFileURL;
	_SYOutputStreamer* _outputStream;
	NSURL* _inputFileURL;
	_SYInputStreamer* _inputStream;
	IDSMessageContext* _inputPriorityBoostContext;
	NSURL* _responseFileURL;
	_SYOutputStreamer* _responseStream;
	BOOL _responsesCanceled;
	IDSService* _idsService;
	NSObject*<OS_dispatch_queue> _idsQueue;
	SYDevice* _activeDevice;
	SYDevice* _sessionDevice;
	SYDevice* _responseDevice;
	NSMutableIndexSet* _messageRows;
	NSMutableIndexSet* _responseMessageRows;
	NSMutableArray* _deferredIncomingSessions;
	NSMutableSet* _singleMessageUUIDs;
	NSMutableDictionary* _messageIDsToSessionIDs;
	NSDictionary* _customIDSOptions;

}

@property (nonatomic,copy) NSDictionary * customIDSOptions;              //@synthesize customIDSOptions=_customIDSOptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_cancelSession;
-(void)suspend;
-(void)endSession;
-(BOOL)resume:(id*)arg1 ;
-(void)beginSession;
-(NSDictionary *)customIDSOptions;
-(void)setCustomIDSOptions:(NSDictionary *)arg1 ;
-(void)enqueueSyncRequest:(id)arg1 withMessageID:(unsigned short)arg2 priority:(long long)arg3 options:(id)arg4 userContext:(id)arg5 callback:(/*^block*/id)arg6 ;
-(BOOL)buffersSessions;
-(void)_recordLastSeqNo:(id)arg1 ;
-(id)stateForLogging;
-(BOOL)targetIsNearby;
-(id)initWithService:(id)arg1 queue:(id)arg2 ;
-(BOOL)buffersHandshake;
-(id)outputStreamWithMetadata:(id)arg1 priority:(long long)arg2 options:(id)arg3 context:(id)arg4 error:(id*)arg5 ;
-(id)_wrapMessage:(id)arg1 ofType:(unsigned short)arg2 userInfo:(id)arg3 ;
-(id)_fileTransferHeader;
-(BOOL)isInSession;
-(id)cancelMessagesReturningFailures:(id)arg1 ;
-(id)idsOptions:(id)arg1 ;
-(unsigned long long)_crcChecksum:(id)arg1 ;
-(void)_handleIncomingSessionFileAtOwnedURL:(id)arg1 metadata:(id)arg2 identifier:(id)arg3 idsContext:(id)arg4 ;
-(void)endFileTransferForStream:(id)arg1 atURL:(id)arg2 target:(id)arg3 wasCancelled:(BOOL)arg4 messageRows:(id)arg5 ;
-(BOOL)_sessionDeviceCanUseSingleMessages;
-(id)idsOptions:(id)arg1 forFileTransfer:(BOOL)arg2 ;
-(void)_enqueueSingleMessage:(id)arg1 withMessageID:(unsigned short)arg2 priority:(long long)arg3 options:(id)arg4 userContext:(id)arg5 callback:(/*^block*/id)arg6 ;
-(void)_handleSessionRestart:(id)arg1 priority:(long long)arg2 options:(id)arg3 userContext:(id)arg4 callback:(/*^block*/id)arg5 ;
-(BOOL)_shouldTreatAsSessionEnd:(id)arg1 ;
-(void)_reallyHandleSessionRestart:(id)arg1 priority:(long long)arg2 options:(id)arg3 userContext:(id)arg4 callback:(/*^block*/id)arg5 ;
-(void)_cancelResponses;
-(void)_consumeRemainingStreamDataWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_readNextProtobuf:(/*^block*/id)arg1 ;
-(id)_wrapIncomingResponse:(id)arg1 ofType:(unsigned short)arg2 identifier:(id)arg3 ;
-(id)_wrapIncomingMessage:(id)arg1 ofType:(unsigned short)arg2 identifier:(id)arg3 ;
-(id)_wrapResponse:(id)arg1 toRequest:(id)arg2 ofType:(unsigned short)arg3 ;
-(void)_handleError:(id)arg1 messageID:(id)arg2 streamer:(id)arg3 ;
-(void)_handleIncomingStreamDataWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleProtobuf:(id)arg1 ofType:(unsigned short)arg2 identifier:(id)arg3 isResponse:(BOOL)arg4 withCompletion:(/*^block*/id)arg5 ;
-(void)beginResponseSession;
-(void)endResponseSession;
-(id)_assumeOwnershipOfURL:(id)arg1 error:(id*)arg2 ;
-(void)_handleIncomingSessionFileAtURL:(id)arg1 metadata:(id)arg2 identifier:(id)arg3 idsContext:(id)arg4 ;
-(void)_processNMSMessageData:(id)arg1 context:(id)arg2 ;
-(void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg1 account:(id)arg2 incomingResourceAtURL:(id)arg3 metadata:(id)arg4 fromID:(id)arg5 context:(id)arg6 ;
-(void)service:(id)arg1 nearbyDevicesChanged:(id)arg2 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 context:(id)arg6 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 hasBeenDeliveredWithContext:(id)arg4 ;
-(void)service:(id)arg1 didSwitchActivePairedDevice:(id)arg2 acknowledgementBlock:(/*^block*/id)arg3 ;
@end

