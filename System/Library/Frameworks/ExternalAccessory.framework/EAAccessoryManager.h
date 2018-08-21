/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ExternalAccessory/ExternalAccessory-Structs.h>
#import <libobjc.A.dylib/EABluetoothAccessoryPickerDelegate.h>
#import <libobjc.A.dylib/ACCExternalAccessoryProviderProtocol.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSString, NSTimer, NSRecursiveLock, NSObject, EABluetoothAccessoryPicker, NSArray;

@interface EAAccessoryManager : NSObject <EABluetoothAccessoryPickerDelegate, ACCExternalAccessoryProviderProtocol> {

	NSMutableArray* _connectedAccessories;
	NSMutableArray* _sequesteredAccessories;
	NSString* _selectedBluetoothAddress;
	/*^block*/id _pickerCompletion;
	BOOL _sequesterNewAccessories;
	NSTimer* _pickerTimer;
	NSRecursiveLock* _pickerLock;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	EABluetoothAccessoryPicker* _picker;

}

@property (nonatomic,readonly) NSArray * connectedAccessories; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)accessoryDictionaryForLogging:(id)arg1 ;
+(void)registerCapabilities:(unsigned)arg1 ;
+(void)accessibilityStartListening;
+(void)accessibilityStopListening;
+(BOOL)isLoggingEnabled;
+(id)sharedAccessoryManager;
-(void)_cameraInfoUpdated:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(NSArray *)connectedAccessories;
-(void)_externalAccessoryConnectedNotificationHandler:(id)arg1 ;
-(void)_externalAccessoryUpdated:(id)arg1 ;
-(void)_externalAccessoryDisconnected:(id)arg1 ;
-(void)_pointOfInterestStatusReceived:(id)arg1 ;
-(void)_OOBBTPairingCompletionStatusReceived:(id)arg1 ;
-(void)_iapServerDied:(id)arg1 ;
-(void)_externalAccessoryReconnected:(id)arg1 ;
-(void)_timeSyncInfoUpdated:(id)arg1 ;
-(void)_vehicleDataUpdated:(id)arg1 ;
-(id)_initFromSingletonCreationMethod;
-(void)_externalAccessoryConnected:(id)arg1 ;
-(void)_locationNmeaDataAvailable:(id)arg1 ;
-(void)_locationPointDataAvailable:(id)arg1 ;
-(void)_ephemerisURLAvailable:(id)arg1 ;
-(void)_nmeaFilteringSupportChanged:(id)arg1 ;
-(void)_gpsTimeRequested:(id)arg1 ;
-(void)_removeAlliAPAccessoriesFromArray:(id)arg1 notifyClients:(BOOL)arg2 ;
-(void)_cleanUpForTaskSuspendWithTaskIdentifier:(unsigned long long)arg1 ;
-(void)_checkForConnectedAccessories:(BOOL)arg1 backgroundTaskIdentifier:(unsigned long long)arg2 ;
-(id)_findExtraAccessoriesContainedOnlyIniAP:(id)arg1 ;
-(id)_findExtraAccessoriesContainedOnlyInEA:(id)arg1 ;
-(void)_notifyObserversThatAccessoryDisconnectedWithUserInfo:(id)arg1 ;
-(void)_integrateSequesteredAccessories;
-(BOOL)areLocationAccessoriesEnabled;
-(void)startLocationForConnectedAccessories;
-(void)stopLocationForConnectedAccessories;
-(void)_handleAccessoryNotificationTimeout:(id)arg1 ;
-(void)sendDeviceIdentifierNotification:(id)arg1 usbIdentifier:(id)arg2 forUUID:(id)arg3 ;
-(void)devicePicker:(id)arg1 didSelectAddress:(id)arg2 errorCode:(long long)arg3 ;
-(void)EAAccessoryArrived:(id)arg1 ;
-(void)EAAccessoryLeft:(id)arg1 ;
-(void)handleIncomingExternalAccessoryData:(id)arg1 forEASessionIdentifier:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)resumeEASessionData:(id)arg1 ;
-(void)accessoryClosedEASession:(id)arg1 ;
-(void)initialEAAccessoriesAttachedAfterClientConnection:(id)arg1 ;
-(void)startDestinationSharingForUUID:(id)arg1 ;
-(void)stopDestinationSharingForUUID:(id)arg1 ;
-(void)destinationSharingStatus:(BOOL)arg1 forDestinationUUID:(id)arg2 supportedParams:(id)arg3 forUUID:(id)arg4 ;
-(void)nmeaSentenceArrived:(id)arg1 forAccessoryUUID:(id)arg2 ;
-(void)vehicleStatusUpdate:(id)arg1 forAccessoryUUID:(id)arg2 ;
-(void)showBluetoothAccessoryPickerWithNameFilter:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)openCompleteForSession:(unsigned)arg1 connectionID:(unsigned)arg2 ;
-(void)endSession:(unsigned)arg1 forConnectionID:(unsigned)arg2 ;
-(void)wakeAccessoryWithToken:(id)arg1 ;
-(BOOL)appDeclaresProtocol:(id)arg1 ;
-(id)_connectedAccessories;
-(BOOL)shouldAllowInternalProtocols;
-(void)setShouldAllowInternalProtocols:(BOOL)arg1 ;
-(BOOL)shouldAllowCppRuntime;
-(void)setShouldAllowCppRuntime:(BOOL)arg1 ;
-(void)accessibilityAction:(id)arg1 ;
-(void)accessibilityContextChange:(id)arg1 ;
-(void)accessibilityItemPropertyRequest:(id)arg1 ;
-(void)accessibilitySystemPropertyChange:(id)arg1 ;
-(void)accessibilitySystemPropertyRequest:(id)arg1 ;
-(void)setAreLocationAccessoriesEnabled:(BOOL)arg1 ;
-(void)sendGPRMCDataStatus:(BOOL)arg1 ValueV:(BOOL)arg2 ValueX:(BOOL)arg3 forUUID:(id)arg4 ;
-(void)pointOfInterestSelection:(id)arg1 ;
-(BOOL)destinationInformation:(id)arg1 forAccessoryUUID:(id)arg2 ;
-(void)createEASessionForProtocol:(id)arg1 accessoryUUID:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)closeEASessionForEASessionUUID:(id)arg1 ;
-(void)closeInputStreamForEASessionUUID:(id)arg1 ;
-(void)saveEASession:(id)arg1 forEASessionUUID:(id)arg2 ;
-(void)sendOutgoingEAData:(id)arg1 forSessionUUID:(id)arg2 ;
-(void)openSessionFromAccessoryToApp:(id)arg1 ;
-(void)openSessionFromAppToAccessory:(id)arg1 ;
-(void)sendNMEAFilterList:(id)arg1 forUUID:(id)arg2 ;
-(BOOL)processIDIsUsingAccessory:(CFStringRef)arg1 ;
-(id)authCertForLegacyConnectionID:(unsigned)arg1 ;
-(id)authCertSerialNumberForLegacyConnectionID:(unsigned)arg1 ;
-(void)requestIAPAccessoryWiFiCredentials:(id)arg1 ;
-(id)currentVehicleInformation:(id)arg1 ;
-(void)updateAccessoryInfo:(id)arg1 ;
-(void)initiateConnectionToIPAccessory:(id)arg1 ;
-(void)disconnectIPAccessory:(id)arg1 ;
-(id)availableAccessories;
-(void)startIPAccessoryDiscovery;
-(void)stopIPAccessoryDiscovery;
-(void)registerForLocalNotifications;
-(void)unregisterForLocalNotifications;
@end

