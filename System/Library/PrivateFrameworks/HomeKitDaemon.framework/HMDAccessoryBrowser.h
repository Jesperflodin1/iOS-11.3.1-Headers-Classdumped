/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:56 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HAPAccessoryServerBrowserDelegate.h>
#import <libobjc.A.dylib/HAPAccessoryServerDelegate.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/HMDMediaBrowserDelegate.h>
#import <libobjc.A.dylib/HMDWatchSystemStateDelegate.h>
#import <libobjc.A.dylib/HMDAuthServerDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDAccessoryBrowserProtocol.h>
#import <libobjc.A.dylib/HMDAccessoryBrowserHapProtocol.h>

@protocol OS_dispatch_queue, HMDAccessoryBrowserManagerDelegate, OS_dispatch_source;
@class NSArray, HAPAccessoryServerBrowserRelay, HMDMediaBrowser, NSMutableSet, NSObject, NSUUID, HMFMessageDispatcher, HMDHomeManager, NSMapTable, NSMutableArray, HAPAccessoryServerBrowserIP, HAPAccessoryServerBrowserBTLE, HMDAuthServer, HMDDAccessoryServerBrowserDemo, HMFTimer, NSString, NSHashTable;

@interface HMDAccessoryBrowser : HMFObject <HAPAccessoryServerBrowserDelegate, HAPAccessoryServerDelegate, HMFMessageReceiver, HMFTimerDelegate, HMDMediaBrowserDelegate, HMDWatchSystemStateDelegate, HMDAuthServerDelegate, HMFLogging, HMDAccessoryBrowserProtocol, HMDAccessoryBrowserHapProtocol> {

	NSMutableSet* _unpairedHAPAccessories;
	NSMutableSet* _unassociatedMediaAccessories;
	NSMutableSet* _deviceSetupMediaAccessories;
	NSMutableSet* _mediaAccessoryControlConnections;
	BOOL _browseForMediaAccessories;
	BOOL _appIsInForeground;
	BOOL _activeSiriCommand;
	HAPAccessoryServerBrowserRelay* _relayAccessoryServerBrowser;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	NSUUID* _uuid;
	HMFMessageDispatcher* _messageDispatcher;
	unsigned long long _generationCounter;
	NSMutableSet* _browsingXPCConnections;
	HMDHomeManager* _homeManager;
	NSMapTable* _delegates;
	id<HMDAccessoryBrowserManagerDelegate> _managerDelegate;
	NSMutableArray* _accessoryServerBrowsers;
	HAPAccessoryServerBrowserIP* _ipAccessoryServerBrowser;
	HAPAccessoryServerBrowserBTLE* _btleAccessoryServerBrowser;
	HMDMediaBrowser* _mediaBrowser;
	HMDAuthServer* _authServer;
	HMDDAccessoryServerBrowserDemo* _demoAccessoryServerBrowser;
	HMFTimer* _stopReprovisioningTimer;
	HMFTimer* _stopBrowsingAccessoriesNeedingReprovisioningTimer;
	NSString* _identifierOfAccessoryBeingReprovisioned;
	NSMutableSet* _identifiersOfBTLEPairedAccessories;
	NSObject*<OS_dispatch_source> _reachabilityTimerForBTLE;
	NSMutableSet* _identifiersOfPairedAccessories;
	NSMutableSet* _identifiersOfAssociatedMediaAccessories;
	NSMutableArray* _currentlyPairingAccessories;
	NSMutableArray* _currentlyPairingProgressHandlers;
	NSHashTable* _tombstonedHAPAccessoryServers;
	NSHashTable* _discoveringBLEAccessoryServerIdentifiers;
	NSMutableSet* _discoveredAccessoryServerIdentifiers;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                                      //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> propertyQueue;                                //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                                                               //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) HMFMessageDispatcher * messageDispatcher;                                    //@synthesize messageDispatcher=_messageDispatcher - In the implementation block
@property (assign,nonatomic) unsigned long long generationCounter;                                        //@synthesize generationCounter=_generationCounter - In the implementation block
@property (nonatomic,retain) NSMutableSet * browsingXPCConnections;                                       //@synthesize browsingXPCConnections=_browsingXPCConnections - In the implementation block
@property (assign,nonatomic) BOOL browseForMediaAccessories;                                              //@synthesize browseForMediaAccessories=_browseForMediaAccessories - In the implementation block
@property (assign,nonatomic,__weak) HMDHomeManager * homeManager;                                         //@synthesize homeManager=_homeManager - In the implementation block
@property (nonatomic,retain) NSMapTable * delegates;                                                      //@synthesize delegates=_delegates - In the implementation block
@property (assign,nonatomic,__weak) id<HMDAccessoryBrowserManagerDelegate> managerDelegate;               //@synthesize managerDelegate=_managerDelegate - In the implementation block
@property (nonatomic,retain) NSMutableArray * accessoryServerBrowsers;                                    //@synthesize accessoryServerBrowsers=_accessoryServerBrowsers - In the implementation block
@property (nonatomic,retain) HAPAccessoryServerBrowserIP * ipAccessoryServerBrowser;                      //@synthesize ipAccessoryServerBrowser=_ipAccessoryServerBrowser - In the implementation block
@property (nonatomic,retain) HAPAccessoryServerBrowserBTLE * btleAccessoryServerBrowser;                  //@synthesize btleAccessoryServerBrowser=_btleAccessoryServerBrowser - In the implementation block
@property (nonatomic,retain) HMDMediaBrowser * mediaBrowser;                                              //@synthesize mediaBrowser=_mediaBrowser - In the implementation block
@property (nonatomic,retain) HMDAuthServer * authServer;                                                  //@synthesize authServer=_authServer - In the implementation block
@property (nonatomic,retain) HMDDAccessoryServerBrowserDemo * demoAccessoryServerBrowser;                 //@synthesize demoAccessoryServerBrowser=_demoAccessoryServerBrowser - In the implementation block
@property (nonatomic,retain) HMFTimer * stopReprovisioningTimer;                                          //@synthesize stopReprovisioningTimer=_stopReprovisioningTimer - In the implementation block
@property (nonatomic,retain) HMFTimer * stopBrowsingAccessoriesNeedingReprovisioningTimer;                //@synthesize stopBrowsingAccessoriesNeedingReprovisioningTimer=_stopBrowsingAccessoriesNeedingReprovisioningTimer - In the implementation block
@property (nonatomic,retain) NSString * identifierOfAccessoryBeingReprovisioned;                          //@synthesize identifierOfAccessoryBeingReprovisioned=_identifierOfAccessoryBeingReprovisioned - In the implementation block
@property (assign,nonatomic) BOOL appIsInForeground;                                                      //@synthesize appIsInForeground=_appIsInForeground - In the implementation block
@property (assign,nonatomic) BOOL activeSiriCommand;                                                      //@synthesize activeSiriCommand=_activeSiriCommand - In the implementation block
@property (nonatomic,retain) NSMutableSet * identifiersOfBTLEPairedAccessories;                           //@synthesize identifiersOfBTLEPairedAccessories=_identifiersOfBTLEPairedAccessories - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> reachabilityTimerForBTLE;                      //@synthesize reachabilityTimerForBTLE=_reachabilityTimerForBTLE - In the implementation block
@property (nonatomic,retain) NSMutableSet * identifiersOfPairedAccessories;                               //@synthesize identifiersOfPairedAccessories=_identifiersOfPairedAccessories - In the implementation block
@property (nonatomic,retain) NSMutableSet * identifiersOfAssociatedMediaAccessories;                      //@synthesize identifiersOfAssociatedMediaAccessories=_identifiersOfAssociatedMediaAccessories - In the implementation block
@property (nonatomic,readonly) NSArray * unpairedHAPAccessories; 
@property (nonatomic,readonly) NSArray * unassociatedMediaAccessories; 
@property (nonatomic,readonly) NSArray * deviceSetupMediaAccessories; 
@property (nonatomic,retain) NSMutableArray * currentlyPairingAccessories;                                //@synthesize currentlyPairingAccessories=_currentlyPairingAccessories - In the implementation block
@property (nonatomic,retain) NSMutableArray * currentlyPairingProgressHandlers;                           //@synthesize currentlyPairingProgressHandlers=_currentlyPairingProgressHandlers - In the implementation block
@property (nonatomic,readonly) NSHashTable * tombstonedHAPAccessoryServers;                               //@synthesize tombstonedHAPAccessoryServers=_tombstonedHAPAccessoryServers - In the implementation block
@property (nonatomic,readonly) NSHashTable * discoveringBLEAccessoryServerIdentifiers;                    //@synthesize discoveringBLEAccessoryServerIdentifiers=_discoveringBLEAccessoryServerIdentifiers - In the implementation block
@property (nonatomic,retain) NSMutableSet * discoveredAccessoryServerIdentifiers;                         //@synthesize discoveredAccessoryServerIdentifiers=_discoveredAccessoryServerIdentifiers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (copy,readonly) NSArray * unassociatedAccessories; 
@property (nonatomic,readonly) HAPAccessoryServerBrowserRelay * relayAccessoryServerBrowser;              //@synthesize relayAccessoryServerBrowser=_relayAccessoryServerBrowser - In the implementation block
+(id)logCategory;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)dealloc;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(void)addDelegate:(id)arg1 queue:(id)arg2 ;
-(HMDHomeManager *)homeManager;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_registerForMessages;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(void)setMessageDispatcher:(HMFMessageDispatcher *)arg1 ;
-(HMFMessageDispatcher *)messageDispatcher;
-(id)initWithMessageDispatcher:(id)arg1 ;
-(void)configureDemoBrowserWithDemoAccessories:(id)arg1 finalized:(BOOL)arg2 ;
-(void)setHomeManager:(HMDHomeManager *)arg1 ;
-(void)configureWithHomeManager:(id)arg1 ;
-(void)timerDidFire:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(void)handleAppTermination:(id)arg1 ;
-(void)setQOS:(long long)arg1 ;
-(id)messageDestination;
-(void)handleRemovedAccessory:(id)arg1 ;
-(void)registerProgressHandler:(/*^block*/id)arg1 unpairedAccessoryUUID:(id)arg2 ;
-(NSArray *)unassociatedAccessories;
-(void)pairAccessory:(id)arg1 homeName:(id)arg2 setupCode:(id)arg3 setupCodeProvider:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)pairAccessoryWithDescription:(id)arg1 homeName:(id)arg2 neeedsUserConfirmation:(BOOL)arg3 progressHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)didReceiveUserConsentResponseForSetupAccessoryDescription:(id)arg1 consent:(BOOL)arg2 ;
-(void)handleNewlyPairedAccessory:(id)arg1 linkType:(long long)arg2 ;
-(void)startDiscoveringPairedAccessories;
-(void)registerPairedAccessory:(id)arg1 btleTransport:(BOOL)arg2 airPlay:(BOOL)arg3 ;
-(HMDMediaBrowser *)mediaBrowser;
-(void)deregisterPairedAccessory:(id)arg1 ;
-(void)addUnpairedAccessoryServer:(id)arg1 identifier:(id)arg2 ;
-(void)btleAccessoryReachabilityProbeTimer:(BOOL)arg1 ;
-(void)cancelPairingWithAccessoryDescription:(id)arg1 error:(id)arg2 ;
-(id)unpairedAccessoryWithUUID:(id)arg1 ;
-(void)cancelPairingWithAccessory:(id)arg1 error:(id)arg2 ;
-(void)handleSetupCodeAvailable:(id)arg1 ;
-(BOOL)isBrowsingAllowed;
-(void)discoverAccessoryServer:(id)arg1 linkType:(long long)arg2 errorHandler:(/*^block*/id)arg3 ;
-(void)discoverAccessories:(id)arg1 ;
-(void)probeReachabilityForBTLEAccessoryServersWithIdentifiers:(id)arg1 onQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)tombstoneAccessoryServer:(id)arg1 ;
-(void)resurrectAccessoryServer:(id)arg1 ;
-(void)stopTrackingBTLEAccessoriesWithIdentifiers:(id)arg1 ;
-(void)resetConfiguration;
-(void)removeUnassociatedAccessory:(id)arg1 ;
-(void)accessoryServerBrowser:(id)arg1 didStartDiscoveringWithError:(id)arg2 ;
-(void)accessoryServerBrowser:(id)arg1 didFindAccessoryServer:(id)arg2 stateChanged:(BOOL)arg3 stateNumber:(id)arg4 ;
-(void)accessoryServerBrowser:(id)arg1 didRemoveAccessoryServer:(id)arg2 error:(id)arg3 ;
-(void)accessoryServerBrowser:(id)arg1 didFailToDiscoverAccessoryServerWithIdentifier:(id)arg2 ;
-(BOOL)isDemoAccessoryIdentifier:(id)arg1 ;
-(void)addUnassociatedAccessory:(id)arg1 forDeviceSetup:(BOOL)arg2 ;
-(unsigned long long)generationCounter;
-(void)setGenerationCounter:(unsigned long long)arg1 ;
-(id)acessoryBrowserHapProtocol;
-(void)updateBroadcastKeyForIdentifer:(id)arg1 key:(id)arg2 keyUpdatedStateNumber:(id)arg3 keyUpdatedTime:(double)arg4 ;
-(void)configureAccessory:(id)arg1 trackState:(BOOL)arg2 connectionPriority:(BOOL)arg3 ;
-(void)retrieveCurrentStateForIdentifer:(id)arg1 onQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)updateStateForIdentifier:(id)arg1 stateNumber:(id)arg2 ;
-(void)handlePPIDInfoResponse:(id)arg1 context:(id)arg2 error:(id)arg3 ;
-(void)handleActivationResponse:(id)arg1 context:(id)arg2 ;
-(void)didFinishActivation:(id)arg1 context:(id)arg2 ;
-(void)startDiscoveringAccessoriesNeedingReprovisioning;
-(void)stopDiscoveringAccessories;
-(void)reprovisionAccessoryWithIdentifier:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)accessoryServer:(id)arg1 didDiscoverAccessories:(id)arg2 transaction:(id)arg3 error:(id)arg4 ;
-(void)accessoryServer:(id)arg1 didUpdateValuesForCharacteristics:(id)arg2 stateNumber:(id)arg3 broadcast:(BOOL)arg4 ;
-(void)accessoryServer:(id)arg1 didStopPairingWithError:(id)arg2 ;
-(NSMapTable *)delegates;
-(void)setDelegates:(NSMapTable *)arg1 ;
-(HAPAccessoryServerBrowserRelay *)relayAccessoryServerBrowser;
-(id)initWithMessageDispatcher:(id)arg1 workQueue:(id)arg2 injectedSettings:(id)arg3 ;
-(HMDDAccessoryServerBrowserDemo *)demoAccessoryServerBrowser;
-(void)setDemoAccessoryServerBrowser:(HMDDAccessoryServerBrowserDemo *)arg1 ;
-(NSMutableArray *)accessoryServerBrowsers;
-(void)setMediaBrowser:(HMDMediaBrowser *)arg1 ;
-(NSMutableSet *)identifiersOfAssociatedMediaAccessories;
-(void)__evaluateStartDiscoveringAssociatedMediaAccessories;
-(HAPAccessoryServerBrowserBTLE *)btleAccessoryServerBrowser;
-(void)addUnassociatedMediaAccessory:(id)arg1 forDeviceSetup:(BOOL)arg2 ;
-(void)addUnpairedHAPAccessory:(id)arg1 ;
-(void)removeUnassociatedMediaAccessory:(id)arg1 ;
-(void)removeUnpairedHAPAccessory:(id)arg1 ;
-(NSArray *)unassociatedMediaAccessories;
-(void)_handleAddedAccessory:(id)arg1 ;
-(void)_sendNewAccessoryData:(id)arg1 added:(BOOL)arg2 requiresSPIEntitlement:(BOOL)arg3 ;
-(id<HMDAccessoryBrowserManagerDelegate>)managerDelegate;
-(void)_handleRemovedAccessory:(id)arg1 ;
-(BOOL)__isConnectionBeingObserved:(id)arg1 ;
-(void)__evaluateStopDiscoveringAssociatedMediaAccessories;
-(id)__observerMatchingConnection:(id)arg1 ;
-(void)__removeMediaAccessoryControlObserver:(id)arg1 ;
-(void)_notifyDelegatesOfReachability:(BOOL)arg1 forAccessoryWithIdentifier:(id)arg2 ;
-(NSMutableSet *)identifiersOfPairedAccessories;
-(NSMutableSet *)browsingXPCConnections;
-(BOOL)browseForMediaAccessories;
-(id)_unassociatedMediaAccessoryWithIdentifier:(id)arg1 ;
-(NSMutableSet *)identifiersOfBTLEPairedAccessories;
-(void)_stopDiscoveringAccessoriesWithForce:(BOOL)arg1 ;
-(void)_cancelCurrentlyPairingAccessories:(id)arg1 ;
-(NSArray *)unpairedHAPAccessories;
-(void)_startDiscoveringPairedAccessories;
-(BOOL)_isBrowsingAllowed;
-(void)_startDiscoveringAccessories;
-(void)_btleAccessoryReachabilityProbeTimer:(BOOL)arg1 ;
-(void)_discoverAccessoryServer:(id)arg1 linkType:(long long)arg2 errorHandler:(/*^block*/id)arg3 ;
-(void)handleHomeKitAppInForeground:(id)arg1 ;
-(void)handleNoActiveHomeKitApp:(id)arg1 ;
-(void)handleActiveSiriCommand:(id)arg1 ;
-(void)handleNoActiveSiriCommand:(id)arg1 ;
-(void)homeLocationChangeNotification:(id)arg1 ;
-(void)_setBTLEPowerChangeCompletionHandler;
-(void)_reprovisionAccessoryWithIdentifier:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(HAPAccessoryServerBrowserIP *)ipAccessoryServerBrowser;
-(NSString *)identifierOfAccessoryBeingReprovisioned;
-(NSMutableArray *)currentlyPairingAccessories;
-(void)setIdentifierOfAccessoryBeingReprovisioned:(NSString *)arg1 ;
-(HMFTimer *)stopReprovisioningTimer;
-(BOOL)__isMediaAccessoryControlRequested;
-(BOOL)__isCurrentDevicePrimaryResident;
-(void)setAppIsInForeground:(BOOL)arg1 ;
-(void)_handleActiveAppOrSiriCommand;
-(BOOL)activeSiriCommand;
-(BOOL)appIsInForeground;
-(void)_startOrStopAccessoryDiscovery;
-(void)_handleNoActiveHomeKitAppOrSiriCommand;
-(void)setActiveSiriCommand:(BOOL)arg1 ;
-(id)_unpairedAccessoryWithServerIdentifier:(id)arg1 ;
-(void)_discoverAccessories:(id)arg1 ;
-(NSMutableArray *)currentlyPairingProgressHandlers;
-(void)_handleRemovedUnpairedHAPAccessory:(id)arg1 ;
-(void)_removePairingInformationForUnpairedAccessory:(id)arg1 ;
-(id)_pairingInformationForUnpairedAccessory:(id)arg1 ;
-(id)_progressHandlerForUnpairedAccessory:(id)arg1 ;
-(void)handleAddedAccessory:(id)arg1 ;
-(id)_tombstonedAccessoryServerWithServerIdentifier:(id)arg1 ;
-(BOOL)_isAccessoryServerTombstoned:(id)arg1 ;
-(BOOL)_shouldAccessoryServerBeTombstoned:(id)arg1 ;
-(void)_resurrectAccessoryServer:(id)arg1 ;
-(void)_addUnpairedAccessoryForServer:(id)arg1 ;
-(NSMutableSet *)discoveredAccessoryServerIdentifiers;
-(void)_pairAccessory:(id)arg1 homeName:(id)arg2 setupCode:(id)arg3 setupCodeProvider:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_pairAccessoryWithDescription:(id)arg1 homeName:(id)arg2 neeedsUserConfirmation:(BOOL)arg3 progressHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)findAccessoryServerForAccessoryDescription:(id)arg1 ;
-(id)_unpairedAccessoryForServer:(id)arg1 ;
-(void)_continueAfterPPIDValidation:(BOOL)arg1 server:(id)arg2 ;
-(void)_handleSetupCodeAvailable:(id)arg1 ;
-(void)_cancelPairingWithAccessory:(id)arg1 error:(id)arg2 ;
-(NSObject*<OS_dispatch_source>)reachabilityTimerForBTLE;
-(void)setReachabilityTimerForBTLE:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)_notifyDelegatesOfReachabilityChange:(BOOL)arg1 forBTLEAccessories:(id)arg2 ;
-(void)_notifyDelegatesOfWACCompletionForAccessoryServerWithIdentifier:(id)arg1 error:(id)arg2 ;
-(void)_stopReprovisioningTimerHandler;
-(HMFTimer *)stopBrowsingAccessoriesNeedingReprovisioningTimer;
-(id)_unpairedAccessoryMatchingPairingInfo:(id)arg1 ;
-(void)_handlePairingInterruptedTimeout:(id)arg1 error:(id)arg2 ;
-(void)_promptForPairingPasswordForServer:(id)arg1 reason:(id)arg2 ;
-(NSHashTable *)discoveringBLEAccessoryServerIdentifiers;
-(void)_removeMediaAccessoryControlObserverMatchingConnection:(id)arg1 ;
-(void)__addMediaAccessoryControlObserver:(id)arg1 ;
-(void)setBrowseForMediaAccessories:(BOOL)arg1 ;
-(void)_startDiscoveringAccessoriesNeedingReprovisioning;
-(void)_tombstoneAccessoryServer:(id)arg1 ;
-(void)setManagerDelegate:(id<HMDAccessoryBrowserManagerDelegate>)arg1 ;
-(void)_handleRequestFetchNewAccessories:(id)arg1 ;
-(void)_handleRequestSearchForNewAccessories:(id)arg1 ;
-(void)_handleInvalidatedXPCConnection:(id)arg1 ;
-(void)_removePairingInformation:(id)arg1 errorCode:(long long)arg2 ;
-(id)unassociatedHAPAccessories;
-(void)_stopSearchingWithXPCConnection:(id)arg1 ;
-(NSHashTable *)tombstonedHAPAccessoryServers;
-(void)_checkDelegatesOfAccessoryWithSetupID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_sendPairingCompletionStatusForServer:(id)arg1 error:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_notifyDelegatesOfTombstonedAccessoryServer:(id)arg1 ;
-(void)_notifyDelegatesOfAccessoryServer:(id)arg1 didUpdateValuesForCharacteristics:(id)arg2 stateNumber:(id)arg3 broadcast:(BOOL)arg4 ;
-(void)_checkIfPairingWithPairedAccessoryServer:(id)arg1 errorCode:(long long)arg2 ;
-(void)_notifyDelegatesOfNewPairedAccessoryServer:(id)arg1 stateChanged:(BOOL)arg2 stateNumber:(id)arg3 ;
-(void)_notifyDelegatesOfDiscoveryFailure:(id)arg1 accessoryServer:(id)arg2 linkType:(long long)arg3 ;
-(void)_notifyDelegatesOfAccessoryServerNeedingReprovisioning:(id)arg1 error:(id)arg2 ;
-(void)_notifyDelegatesOfRemovedAccessoryServer:(id)arg1 error:(id)arg2 ;
-(void)_stopReconfirmTimer:(id)arg1 ;
-(void)_startPairingInterruptionTimer:(id)arg1 ;
-(void)_callProgressOrErrorOut:(id)arg1 pairingInfo:(id)arg2 accessoryInfo:(id)arg3 unpairedAccessory:(id)arg4 progress:(long long)arg5 certStatus:(unsigned long long)arg6 ;
-(void)accessoryServer:(id)arg1 promtDialog:(id)arg2 forNotCertifiedAccessory:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_updatePairingRetryTimerForAccessory:(id)arg1 delay:(long long)arg2 ;
-(void)_addReconfirmTimer:(id)arg1 accessoryServer:(id)arg2 ;
-(void)_notifyDelegatesOfAccessoryServer:(id)arg1 didStopPairingWithError:(id)arg2 ;
-(void)_notifyDelegatesOfAccessoryServer:(id)arg1 didDiscoverAccessories:(id)arg2 transaction:(id)arg3 error:(id)arg4 ;
-(void)_checkDelegatesofBlockedAccessoryServer:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_notifyDelegatesOfAccessoryServer:(id)arg1 didUpdateHasPairings:(BOOL)arg2 ;
-(void)_notifyDelegatesOfAccessoryServer:(id)arg1 didUpdateCategory:(id)arg2 ;
-(void)_notifyDelegatesOfAccessoryServer:(id)arg1 didUpdateName:(id)arg2 ;
-(void)continueAddingAccesosryToHomeAfterUserConfirmation:(id)arg1 withError:(id)arg2 ;
-(HMDAuthServer *)authServer;
-(void)_handleAddedAccessoryAdvertisements:(id)arg1 ;
-(void)_handleRemovedAccessoryAdvertisements:(id)arg1 ;
-(void)accessoryServer:(id)arg1 didFinishAuth:(id)arg2 ;
-(void)accessoryServer:(id)arg1 didUpdateName:(id)arg2 ;
-(void)accessoryServer:(id)arg1 requestUserPermission:(long long)arg2 accessoryInfo:(id)arg3 error:(id)arg4 ;
-(void)accessoryServerBrowser:(id)arg1 didFindAccessoryServerForReprovisioning:(id)arg2 ;
-(void)accessoryServerBrowser:(id)arg1 didFindAccessoryServerNeedingReprovisioning:(id)arg2 error:(id)arg3 ;
-(void)accessoryServerBrowser:(id)arg1 didFinishWACForAccessoryWithIdentifier:(id)arg2 error:(id)arg3 ;
-(void)accessoryServerBrowser:(id)arg1 didStopDiscoveringWithError:(id)arg2 ;
-(void)accessoryServerBrowser:(id)arg1 didChangeReachability:(BOOL)arg2 forAccessoryServerWithIdentifier:(id)arg3 ;
-(void)accessoryServerBrowser:(id)arg1 saveCache:(id)arg2 serverIdentifier:(id)arg3 ;
-(void)accessoryServerBrowser:(id)arg1 getCacheForAccessoryWithIdentifier:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)accessoryServerBrowser:(id)arg1 removeCacheForAccessoryWithIdentifier:(id)arg2 ;
-(void)accessoryServerBrowser:(id)arg1 accessoryServer:(id)arg2 didUpdateValuesForCharacteristics:(id)arg3 stateNumber:(id)arg4 broadcast:(BOOL)arg5 ;
-(void)accessoryServer:(id)arg1 promptUserForPasswordWithType:(unsigned long long)arg2 ;
-(void)accessoryServer:(id)arg1 didReceiveBadPasswordThrottleAttemptsWithDelay:(long long)arg2 ;
-(void)accessoryServer:(id)arg1 isBlockedWithCompletionHandler:(/*^block*/id)arg2 ;
-(void)accessoryServer:(id)arg1 didUpdateHasPairings:(BOOL)arg2 ;
-(void)accessoryServerDidUpdateStateNumber:(id)arg1 ;
-(void)accessoryServer:(id)arg1 didUpdateCategory:(id)arg2 ;
-(void)accessoryServer:(id)arg1 validateUUID:(id)arg2 token:(id)arg3 model:(id)arg4 ;
-(void)accessoryServer:(id)arg1 authenticateUUID:(id)arg2 token:(id)arg3 ;
-(void)accessoryServer:(id)arg1 confirmUUID:(id)arg2 token:(id)arg3 ;
-(void)browser:(id)arg1 didAddAdvertisements:(id)arg2 ;
-(void)browser:(id)arg1 didRemoveAdvertisements:(id)arg2 ;
-(void)browser:(id)arg1 didRemoveSessions:(id)arg2 ;
-(void)browser:(id)arg1 didUpdateEndpoints:(id)arg2 ;
-(void)activate:(BOOL)arg1 ;
-(void)startDiscoveringAccessories;
-(id)discoveredAccessoryServers;
-(id)dumpUnassociatedAccessories;
-(id)dumpRegisteredPairedAccessories;
-(id)dumpBrowsingConnections;
-(BOOL)hasClientRequestedMediaAccessoryControl:(id)arg1 ;
-(void)handleStartDiscoveringAssociatedMediaAccessories:(BOOL)arg1 forTransport:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSArray *)deviceSetupMediaAccessories;
-(void)notifyDelegatesOfReachability:(BOOL)arg1 forAccessoryWithIdentifier:(id)arg2 ;
-(unsigned long long)numPairedIPAccessories;
-(void)_stopBtleAccessoryReachabilityProbeTimer;
-(void)_notifyDelegatesOfNewAccessory:(id)arg1 ;
-(void)setBrowsingXPCConnections:(NSMutableSet *)arg1 ;
-(void)setAccessoryServerBrowsers:(NSMutableArray *)arg1 ;
-(void)setIpAccessoryServerBrowser:(HAPAccessoryServerBrowserIP *)arg1 ;
-(void)setBtleAccessoryServerBrowser:(HAPAccessoryServerBrowserBTLE *)arg1 ;
-(void)setAuthServer:(HMDAuthServer *)arg1 ;
-(void)setStopReprovisioningTimer:(HMFTimer *)arg1 ;
-(void)setStopBrowsingAccessoriesNeedingReprovisioningTimer:(HMFTimer *)arg1 ;
-(void)setIdentifiersOfBTLEPairedAccessories:(NSMutableSet *)arg1 ;
-(void)setIdentifiersOfPairedAccessories:(NSMutableSet *)arg1 ;
-(void)setIdentifiersOfAssociatedMediaAccessories:(NSMutableSet *)arg1 ;
-(void)setCurrentlyPairingAccessories:(NSMutableArray *)arg1 ;
-(void)setCurrentlyPairingProgressHandlers:(NSMutableArray *)arg1 ;
-(void)setDiscoveredAccessoryServerIdentifiers:(NSMutableSet *)arg1 ;
@end

