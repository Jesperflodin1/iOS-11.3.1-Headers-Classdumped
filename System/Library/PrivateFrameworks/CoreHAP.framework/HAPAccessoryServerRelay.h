/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHAP/HAPAccessoryServer.h>
#import <libobjc.A.dylib/HAPSecuritySessionDelegate.h>
#import <libobjc.A.dylib/HAPFragmentationStreamDelegate.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/HAPStreamDelegate.h>

@class NSMutableArray, NSMapTable, NSOperationQueue, HAPFragmentationStream, HAPSecuritySession, HMFExponentialBackoffTimer, HAPCharacteristic, HAPRelayStream, NSString;

@interface HAPAccessoryServerRelay : HAPAccessoryServer <HAPSecuritySessionDelegate, HAPFragmentationStreamDelegate, HMFTimerDelegate, HAPStreamDelegate> {

	BOOL _securitySessionOpening;
	BOOL _discovered;
	BOOL _shouldDiscover;
	unsigned short _nextRequestTransactionIdentifier;
	NSMutableArray* _pendingRequests;
	NSMapTable* _pendingResponses;
	NSOperationQueue* _requestOperationQueue;
	NSOperationQueue* _clientOperationQueue;
	HAPFragmentationStream* _fragmentationStream;
	HAPSecuritySession* _securitySession;
	NSOperationQueue* _pairVerifyOperationQueue;
	HMFExponentialBackoffTimer* _reachabilityProbeTimer;
	unsigned long long _configurationNumber;
	HAPCharacteristic* _pairingsCharacteristic;
	HAPRelayStream* _stream;

}

@property (nonatomic,readonly) NSMutableArray * pendingRequests;                                       //@synthesize pendingRequests=_pendingRequests - In the implementation block
@property (nonatomic,readonly) NSMapTable * pendingResponses;                                          //@synthesize pendingResponses=_pendingResponses - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * requestOperationQueue;                               //@synthesize requestOperationQueue=_requestOperationQueue - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * clientOperationQueue;                                //@synthesize clientOperationQueue=_clientOperationQueue - In the implementation block
@property (nonatomic,readonly) HAPFragmentationStream * fragmentationStream;                           //@synthesize fragmentationStream=_fragmentationStream - In the implementation block
@property (nonatomic,readonly) unsigned short nextRequestTransactionIdentifier;                        //@synthesize nextRequestTransactionIdentifier=_nextRequestTransactionIdentifier - In the implementation block
@property (nonatomic,retain) HAPSecuritySession * securitySession;                                     //@synthesize securitySession=_securitySession - In the implementation block
@property (assign,getter=isSecuritySessionOpening,nonatomic) BOOL securitySessionOpening;              //@synthesize securitySessionOpening=_securitySessionOpening - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * pairVerifyOperationQueue;                            //@synthesize pairVerifyOperationQueue=_pairVerifyOperationQueue - In the implementation block
@property (nonatomic,retain) HMFExponentialBackoffTimer * reachabilityProbeTimer;                      //@synthesize reachabilityProbeTimer=_reachabilityProbeTimer - In the implementation block
@property (assign,nonatomic) unsigned long long configurationNumber;                                   //@synthesize configurationNumber=_configurationNumber - In the implementation block
@property (assign,getter=hasDiscovered,nonatomic) BOOL discovered;                                     //@synthesize discovered=_discovered - In the implementation block
@property (assign,nonatomic) BOOL shouldDiscover;                                                      //@synthesize shouldDiscover=_shouldDiscover - In the implementation block
@property (assign,nonatomic,__weak) HAPCharacteristic * pairingsCharacteristic;                        //@synthesize pairingsCharacteristic=_pairingsCharacteristic - In the implementation block
@property (nonatomic,readonly) HAPRelayStream * stream;                                                //@synthesize stream=_stream - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)_enqueueRequest:(id)arg1 ;
-(NSOperationQueue *)clientOperationQueue;
-(void)_tearDownSessionWithError:(id)arg1 ;
-(void)_sendRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(HAPCharacteristic *)pairingsCharacteristic;
-(void)setSecuritySession:(HAPSecuritySession *)arg1 ;
-(void)setSecuritySessionOpening:(BOOL)arg1 ;
-(HAPSecuritySession *)securitySession;
-(void)_cancelAllQueuedOperationsWithError:(id)arg1 ;
-(void)_resumeAllOperations;
-(id)_decryptData:(id)arg1 error:(id*)arg2 ;
-(NSOperationQueue *)pairVerifyOperationQueue;
-(BOOL)isSecuritySessionOpening;
-(void)_suspendAllOperations;
-(void)setPairingsCharacteristic:(HAPCharacteristic *)arg1 ;
-(id)getLocalPairingIdentityAndAllowCreation:(BOOL)arg1 error:(id*)arg2 ;
-(id)securitySession:(id)arg1 didReceiveLocalPairingIdentityRequestWithError:(id*)arg2 ;
-(id)securitySession:(id)arg1 didReceiveRequestForPeerPairingIdentityWithIdentifier:(id)arg2 error:(id*)arg3 ;
-(void)securitySession:(id)arg1 didReceiveSetupExchangeData:(id)arg2 ;
-(void)securitySessionIsOpening:(id)arg1 ;
-(void)securitySessionDidOpen:(id)arg1 ;
-(void)securitySession:(id)arg1 didCloseWithError:(id)arg2 ;
-(void)_handleSecuritySessionSetupExchangeData:(id)arg1 ;
-(HMFExponentialBackoffTimer *)reachabilityProbeTimer;
-(void)setReachabilityProbeTimer:(HMFExponentialBackoffTimer *)arg1 ;
-(BOOL)shouldDiscover;
-(void)_establishSecuritySession;
-(void)_parseAttributeDatabase:(id)arg1 configurationNumber:(id)arg2 ;
-(void)setShouldDiscover:(BOOL)arg1 ;
-(void)_parseServicesFromPrimaryAccessory:(id)arg1 ;
-(void)setDiscovered:(BOOL)arg1 ;
-(void)setConfigurationNumber:(unsigned long long)arg1 ;
-(void)_readCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_handleCharacteristicReadResponse:(id)arg1 characteristics:(id)arg2 error:(id)arg3 completionQueue:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_writeCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_performTimedWriteValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_performWriteValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_handleCharacteristicWriteResponse:(id)arg1 characteristicWriteRequestTuples:(id)arg2 error:(id)arg3 completionQueue:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_handleCharacteristicPrepareWriteResponse:(id)arg1 characteristicWriteRequestTuples:(id)arg2 prepareIdentifier:(id)arg3 error:(id)arg4 timeout:(double)arg5 completionQueue:(id)arg6 completionHandler:(/*^block*/id)arg7 ;
-(void)_performExecuteWriteValues:(id)arg1 prepareIdentifier:(id)arg2 timeout:(double)arg3 completionQueue:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(unsigned long long)configurationNumber;
-(void)_startAddPairingWithIdentifier:(id)arg1 publicKey:(id)arg2 admin:(BOOL)arg3 pairingsCharacteristic:(id)arg4 queue:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)_removePairingWithIdentifier:(id)arg1 publicKey:(id)arg2 pairingsCharacteristic:(id)arg3 queue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_listPairingWithCompletionQueue:(id)arg1 pairingsCharacteristic:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_encryptData:(id)arg1 error:(id*)arg2 ;
-(void)_handleNotificationResponse:(id)arg1 ;
-(void)_handleReceivedMessageData:(id)arg1 withIdentifier:(id)arg2 error:(id)arg3 ;
-(void)_startReachabilityProbe;
-(void)_endReachabilityProbe;
-(void)_handleFragmentedResponse:(id)arg1 transactionIdentifier:(unsigned short)arg2 error:(id)arg3 ;
-(void)_handleReachabilityProbeFire;
-(id)initWithStream:(id)arg1 name:(id)arg2 identifier:(id)arg3 keyStore:(id)arg4 ;
-(BOOL)hasDiscovered;
-(void)timerDidFire:(id)arg1 ;
-(long long)linkType;
-(NSMapTable *)pendingResponses;
-(BOOL)removePairingForCurrentControllerOnQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isPaired;
-(NSMutableArray *)pendingRequests;
-(void)listPairingsWithCompletionQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)writeCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)readCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)enableEvents:(BOOL)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 queue:(id)arg4 ;
-(void)identifyWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)hasPairings;
-(void)discoverAccessories;
-(void)continuePairingAfterAuthPrompt;
-(BOOL)stopPairingWithError:(id*)arg1 ;
-(BOOL)tryPairingPassword:(id)arg1 error:(id*)arg2 ;
-(void)addPairing:(id)arg1 completionQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)removePairing:(id)arg1 completionQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSOperationQueue *)requestOperationQueue;
-(void)startPairingWithConsentRequired:(BOOL)arg1 ;
-(HAPFragmentationStream *)fragmentationStream;
-(unsigned short)_nextTransactionIdentifier;
-(void)fragmentationStream:(id)arg1 didCloseWithError:(id)arg2 ;
-(void)fragmentationStream:(id)arg1 didReceiveData:(id)arg2 transactionIdentifier:(unsigned short)arg3 error:(id)arg4 ;
-(unsigned short)nextRequestTransactionIdentifier;
-(void)stream:(id)arg1 didCloseWithError:(id)arg2 ;
-(void)streamDidSuspend:(id)arg1 ;
-(void)streamDidResume:(id)arg1 ;
-(void)stream:(id)arg1 didFailToWriteDataWithIdentifier:(id)arg2 error:(id)arg3 ;
-(void)stream:(id)arg1 didReceiveData:(id)arg2 withIdentifier:(id)arg3 ;
-(HAPRelayStream *)stream;
@end

