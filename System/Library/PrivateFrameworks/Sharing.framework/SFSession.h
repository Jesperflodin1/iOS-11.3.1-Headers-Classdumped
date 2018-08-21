/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:08 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sharing/Sharing-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/SFXPCInterface.h>

@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;
@class NSObject, NSString, NSMutableData, NSUUID, CUMessageSessionServer, CUMessageSession, NSDate, NSXPCConnection, SFTRSession, TRSession, SFDevice, CUAppleIDClient, NSDictionary, NSXPCListenerEndpoint, NSMutableDictionary;

@interface SFSession : NSObject <NSSecureCoding, SFXPCInterface> {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	CryptoAEADPrivateRef _encryptionReadAEAD;
	unsigned char _encryptionReadNonce[12];
	CryptoAEADPrivateRef _encryptionWriteAEAD;
	unsigned char _encryptionWriteNonce[12];
	NSString* _fixedPIN;
	NSMutableData* _fragmentData;
	unsigned short _fragmentLastIndex;
	unsigned long long _heartbeatLastTicks;
	NSObject*<OS_dispatch_source> _heartbeatTimer;
	NSUUID* _peer;
	NSString* _peerAppleID;
	NSMutableDictionary* _requestHandlers;
	NSMutableDictionary* _requestMap;
	unsigned char _serviceType;
	unsigned _sessionFlags;
	unsigned _sessionID;
	unsigned _sharingSourceVersion;
	NSObject*<OS_os_transaction> _transaction;
	LogCategory* _ucatCore;
	LogCategory* _ucatCrypto;
	BOOL _activateCalled;
	BOOL _activateInProgress;
	BOOL _activateCompleted;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	unsigned _heartbeatID;
	BOOL _heartbeatV2;
	BOOL _heartbeatWaiting;
	CUMessageSessionServer* _messageSessionServer;
	CUMessageSession* _messageSessionTemplate;
	/*^block*/id _pairSetupCompletion;
	BOOL _pairSetupEnded;
	unsigned _pairSetupFlags;
	PairingSessionPrivateRef _pairSetupSession;
	unsigned _pairSetupXID;
	NSMutableData* _pairTLSBuffer;
	BOOL _pairTLSSuccess;
	NSDate* _pairTLSStart;
	/*^block*/id _pairTLSCompletion;
	BOOL _pairTLSConfigured;
	SecIdentityRef _pairTLSIdentity;
	BOOL _pairTLSClient;
	NSObject*<OS_dispatch_queue> _pairTLSQueue;
	SSLContextRef _pairTLSSession;
	/*^block*/id _pairVerifyCompletion;
	BOOL _pairVerifyEnded;
	unsigned _pairVerifyFlags;
	PairingSessionPrivateRef _pairVerifySession;
	NSMutableDictionary* _requestQueue;
	BOOL _timeoutFired;
	NSObject*<OS_dispatch_source> _timeoutTimer;
	NSXPCConnection* _xpcCnx;
	SFTRSession* _sfTRSession;
	TRSession* _trSession;
	BOOL _touchRemoteEnabled;
	long long _bluetoothState;
	/*^block*/id _errorHandler;
	NSUUID* _identifier;
	NSString* _label;
	SFDevice* _peerDevice;
	NSString* _serviceIdentifier;
	double _timeout;
	NSString* _myAppleID;
	CUAppleIDClient* _myAppleIDInfoClient;
	NSString* _peerContactIdentifier;
	/*^block*/id _bluetoothStateChangedHandler;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;
	NSDictionary* _pairSetupACL;
	NSDictionary* _pairVerifyACL;
	/*^block*/id _promptForPINHandler;
	/*^block*/id _receivedObjectHandler;
	/*^block*/id _receivedRequestHandler;
	/*^block*/id _sessionStartedHandler;
	/*^block*/id _timeoutHandler;
	/*^block*/id _eventMessageHandler;
	/*^block*/id _requestMessageHandler;
	/*^block*/id _receivedFrameHandler;
	/*^block*/id _responseMessageInternalHandler;
	/*^block*/id _sendFrameHandler;
	NSUUID* _serviceUUID;
	NSXPCListenerEndpoint* _testListenerEndpoint;

}

@property (nonatomic,copy) NSUUID * identifier;                                         //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) unsigned long long heartbeatLastTicks;                     //@synthesize heartbeatLastTicks=_heartbeatLastTicks - In the implementation block
@property (nonatomic,copy) NSUUID * peer;                                               //@synthesize peer=_peer - In the implementation block
@property (nonatomic,copy) id receivedFrameHandler;                                     //@synthesize receivedFrameHandler=_receivedFrameHandler - In the implementation block
@property (nonatomic,copy,readonly) NSMutableDictionary * requestHandlers;              //@synthesize requestHandlers=_requestHandlers - In the implementation block
@property (nonatomic,copy) id responseMessageInternalHandler;                           //@synthesize responseMessageInternalHandler=_responseMessageInternalHandler - In the implementation block
@property (nonatomic,copy) id sendFrameHandler;                                         //@synthesize sendFrameHandler=_sendFrameHandler - In the implementation block
@property (assign,nonatomic) unsigned char serviceType;                                 //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,copy) NSUUID * serviceUUID;                                        //@synthesize serviceUUID=_serviceUUID - In the implementation block
@property (assign,nonatomic) unsigned sessionID;                                        //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic) unsigned sharingSourceVersion;                             //@synthesize sharingSourceVersion=_sharingSourceVersion - In the implementation block
@property (nonatomic,retain) NSXPCListenerEndpoint * testListenerEndpoint;              //@synthesize testListenerEndpoint=_testListenerEndpoint - In the implementation block
@property (assign,nonatomic) BOOL touchRemoteEnabled;                                   //@synthesize touchRemoteEnabled=_touchRemoteEnabled - In the implementation block
@property (nonatomic,retain) TRSession * trSession;                                     //@synthesize trSession=_trSession - In the implementation block
@property (assign,nonatomic) long long bluetoothState;                                  //@synthesize bluetoothState=_bluetoothState - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;                //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id errorHandler;                                             //@synthesize errorHandler=_errorHandler - In the implementation block
@property (nonatomic,copy) NSString * fixedPIN;                                         //@synthesize fixedPIN=_fixedPIN - In the implementation block
@property (nonatomic,retain) NSString * label;                                          //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) CUMessageSession * messageSessionTemplate;               //@synthesize messageSessionTemplate=_messageSessionTemplate - In the implementation block
@property (nonatomic,retain) SFDevice * peerDevice;                                     //@synthesize peerDevice=_peerDevice - In the implementation block
@property (nonatomic,copy) NSString * serviceIdentifier;                                //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
@property (assign,nonatomic) unsigned sessionFlags;                                     //@synthesize sessionFlags=_sessionFlags - In the implementation block
@property (assign,nonatomic) double timeout;                                            //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,copy) NSString * myAppleID;                                        //@synthesize myAppleID=_myAppleID - In the implementation block
@property (nonatomic,retain) CUAppleIDClient * myAppleIDInfoClient;                     //@synthesize myAppleIDInfoClient=_myAppleIDInfoClient - In the implementation block
@property (nonatomic,copy) NSString * peerAppleID;                                      //@synthesize peerAppleID=_peerAppleID - In the implementation block
@property (nonatomic,copy) NSString * peerContactIdentifier;                            //@synthesize peerContactIdentifier=_peerContactIdentifier - In the implementation block
@property (nonatomic,copy) id bluetoothStateChangedHandler;                             //@synthesize bluetoothStateChangedHandler=_bluetoothStateChangedHandler - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                      //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                      //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) NSDictionary * pairSetupACL;                                 //@synthesize pairSetupACL=_pairSetupACL - In the implementation block
@property (nonatomic,copy) NSDictionary * pairVerifyACL;                                //@synthesize pairVerifyACL=_pairVerifyACL - In the implementation block
@property (nonatomic,copy) id promptForPINHandler;                                      //@synthesize promptForPINHandler=_promptForPINHandler - In the implementation block
@property (nonatomic,copy) id receivedObjectHandler;                                    //@synthesize receivedObjectHandler=_receivedObjectHandler - In the implementation block
@property (nonatomic,copy) id receivedRequestHandler;                                   //@synthesize receivedRequestHandler=_receivedRequestHandler - In the implementation block
@property (nonatomic,copy) id sessionStartedHandler;                                    //@synthesize sessionStartedHandler=_sessionStartedHandler - In the implementation block
@property (nonatomic,copy) id timeoutHandler;                                           //@synthesize timeoutHandler=_timeoutHandler - In the implementation block
@property (nonatomic,copy) id eventMessageHandler;                                      //@synthesize eventMessageHandler=_eventMessageHandler - In the implementation block
@property (nonatomic,copy) id requestMessageHandler;                                    //@synthesize requestMessageHandler=_requestMessageHandler - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setTimeout:(double)arg1 ;
-(void)setSessionID:(unsigned)arg1 ;
-(unsigned)sessionID;
-(NSUUID *)peer;
-(void)setPeer:(NSUUID *)arg1 ;
-(void)setErrorHandler:(id)arg1 ;
-(id)errorHandler;
-(unsigned char)serviceType;
-(void)setServiceType:(unsigned char)arg1 ;
-(id)init;
-(void)invalidate;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(NSUUID *)identifier;
-(void)sendResponse:(id)arg1 ;
-(void)sendEvent:(id)arg1 ;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(void)_cleanup;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(void)_activated;
-(id)interruptionHandler;
-(void)setInterruptionHandler:(id)arg1 ;
-(id)invalidationHandler;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)setServiceIdentifier:(NSString *)arg1 ;
-(void)setTimeoutHandler:(id)arg1 ;
-(id)timeoutHandler;
-(double)timeout;
-(void)sendRequestWithFlags:(unsigned)arg1 object:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)sendWithFlags:(unsigned)arg1 object:(id)arg2 ;
-(void)_invalidated;
-(void)_interrupted;
-(void)pairTLSClient:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_ensureXPCStarted;
-(void)pairSetupTryPIN:(id)arg1 ;
-(void)setPeerContactIdentifier:(NSString *)arg1 ;
-(void)setSessionFlags:(unsigned)arg1 ;
-(void)setPromptForPINHandler:(id)arg1 ;
-(void)setReceivedObjectHandler:(id)arg1 ;
-(void)pairVerifyWithFlags:(unsigned)arg1 completion:(/*^block*/id)arg2 ;
-(id)promptForPINHandler;
-(void)sessionBluetoothStateChanged:(long long)arg1 ;
-(void)sessionError:(id)arg1 ;
-(void)sessionReceivedEvent:(id)arg1 ;
-(void)sessionReceivedFrameType:(unsigned char)arg1 data:(id)arg2 ;
-(void)sessionReceivedRequest:(id)arg1 ;
-(void)sessionReceivedResponse:(id)arg1 ;
-(void)setFixedPIN:(NSString *)arg1 ;
-(void)setSessionStartedHandler:(id)arg1 ;
-(id)bluetoothStateChangedHandler;
-(void)setBluetoothStateChangedHandler:(id)arg1 ;
-(void)_startTimeoutIfNeeded;
-(void)_timeoutTimerFired;
-(TRSession *)trSession;
-(void)setTrSession:(TRSession *)arg1 ;
-(void)sendRequestID:(id)arg1 options:(id)arg2 request:(id)arg3 responseHandler:(/*^block*/id)arg4 ;
-(void)registerRequestID:(id)arg1 options:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)deregisterRequestID:(id)arg1 ;
-(void)setTouchRemoteEnabled:(BOOL)arg1 ;
-(void)setPairSetupACL:(NSDictionary *)arg1 ;
-(id)pairingDeriveKeyForIdentifier:(id)arg1 keyLength:(unsigned long long)arg2 ;
-(void)pairSetupWithFlags:(unsigned)arg1 completion:(/*^block*/id)arg2 ;
-(void)setReceivedRequestHandler:(id)arg1 ;
-(NSString *)fixedPIN;
-(unsigned)sharingSourceVersion;
-(BOOL)touchRemoteEnabled;
-(CUMessageSession *)messageSessionTemplate;
-(id)receivedObjectHandler;
-(void)_hearbeatTimer;
-(void)setEventMessageHandler:(id)arg1 ;
-(int)setEncryptionReadKey:(const char*)arg1 readKeyLen:(unsigned long long)arg2 writeKey:(const char*)arg3 writeKeyLen:(unsigned long long)arg4 ;
-(unsigned)sessionFlags;
-(void)setHeartbeatLastTicks:(unsigned long long)arg1 ;
-(NSDictionary *)pairSetupACL;
-(NSDictionary *)pairVerifyACL;
-(void)setPairVerifyACL:(NSDictionary *)arg1 ;
-(NSString *)myAppleID;
-(void)setMyAppleID:(NSString *)arg1 ;
-(CUAppleIDClient *)myAppleIDInfoClient;
-(void)setMyAppleIDInfoClient:(CUAppleIDClient *)arg1 ;
-(NSString *)peerAppleID;
-(void)setPeerAppleID:(NSString *)arg1 ;
-(id)receivedRequestHandler;
-(id)sessionStartedHandler;
-(id)eventMessageHandler;
-(id)requestMessageHandler;
-(void)setRequestMessageHandler:(id)arg1 ;
-(id)responseMessageInternalHandler;
-(void)setResponseMessageInternalHandler:(id)arg1 ;
-(void)setServiceUUID:(NSUUID *)arg1 ;
-(NSXPCListenerEndpoint *)testListenerEndpoint;
-(void)setTestListenerEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(void)_setupMessageSession;
-(void)_setupTouchRemote;
-(void)_tearDownMessageSession;
-(void)_tearDownTouchRemote;
-(BOOL)_sessionReceivedRegisteredRequestID:(id)arg1 flags:(unsigned)arg2 xidKey:(id)arg3 xidValue:(id)arg4 ;
-(BOOL)_sessionReceivedEvent:(id)arg1 flags:(unsigned)arg2 ;
-(BOOL)_sessionReceivedRequest:(id)arg1 flags:(unsigned)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)_sendRequestWithFlags:(unsigned)arg1 object:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)sessionReceivedFragmentData:(id)arg1 last:(BOOL)arg2 ;
-(void)_pairSetupCompleted:(int)arg1 ;
-(void)_pairVerifyCompleted:(int)arg1 ;
-(void)sendFrameType:(unsigned char)arg1 data:(id)arg2 ;
-(BOOL)pairingContainsACL:(id)arg1 ;
-(void)_registerRequestID:(id)arg1 options:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_deregisterRequestID:(id)arg1 ;
-(void)_sendRequestID:(id)arg1 options:(id)arg2 request:(id)arg3 responseHandler:(/*^block*/id)arg4 ;
-(void)_pairSetupWithFlags:(unsigned)arg1 completion:(/*^block*/id)arg2 ;
-(void)_pairSetup:(id)arg1 start:(BOOL)arg2 ;
-(void)sendFrameType:(unsigned char)arg1 object:(id)arg2 ;
-(void)_pairSetupTryPIN:(id)arg1 ;
-(void)_pairTLSCompleted:(int)arg1 ;
-(int)_pairTLSEnsureConfigured;
-(int)_pairTLSStart;
-(void)_pairTLSReceivedData:(id)arg1 type:(unsigned char)arg2 ;
-(void)_tlsReceivedObjectWithLength:(unsigned long long)arg1 ;
-(void)_tlsReceivedValidationRecordData:(id)arg1 ;
-(id)_tlsCertificateChainFromTrust:(SecTrustRef)arg1 ;
-(void)_pairVerifyWithFlags:(unsigned)arg1 completion:(/*^block*/id)arg2 ;
-(void)_pairVerify:(id)arg1 start:(BOOL)arg2 ;
-(void)_sendFrameType:(unsigned char)arg1 object:(id)arg2 ;
-(void)_sendEncryptedObject:(id)arg1 ;
-(void)_sendTLSEncryptedObject:(id)arg1 ;
-(void)_sessionReceivedEncryptedData:(id)arg1 type:(unsigned char)arg2 ;
-(void)_sessionReceivedUnencryptedData:(id)arg1 type:(unsigned char)arg2 ;
-(void)_sessionReceivedStartAck:(id)arg1 ;
-(void)_sessionReceivedObject:(id)arg1 flags:(unsigned)arg2 ;
-(void)_sessionReceivedResponseID:(id)arg1 object:(id)arg2 flags:(unsigned)arg3 ;
-(void)_sessionReceivedRequestID:(id)arg1 object:(id)arg2 flags:(unsigned)arg3 ;
-(void)pairTLSWithIdentity:(SecIdentityRef)arg1 asClient:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)pairTLSReceivedData:(id)arg1 type:(unsigned char)arg2 ;
-(void)sendTLSEncryptedObject:(id)arg1 ;
-(void)setBluetoothState:(long long)arg1 ;
-(NSString *)peerContactIdentifier;
-(unsigned long long)heartbeatLastTicks;
-(id)receivedFrameHandler;
-(void)setReceivedFrameHandler:(id)arg1 ;
-(NSMutableDictionary *)requestHandlers;
-(id)sendFrameHandler;
-(void)setSendFrameHandler:(id)arg1 ;
-(void)setSharingSourceVersion:(unsigned)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSUUID *)serviceUUID;
-(void)sendRequest:(id)arg1 ;
-(NSString *)serviceIdentifier;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(SFDevice *)peerDevice;
-(void)setPeerDevice:(SFDevice *)arg1 ;
-(long long)bluetoothState;
@end

