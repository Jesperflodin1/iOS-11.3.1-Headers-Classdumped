/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:40 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDDiagnosticObject.h>
#import <libobjc.A.dylib/HDUnitPreferencesManagerObserver.h>
#import <libobjc.A.dylib/HDDeepBreathingSessionServerDelegate.h>
#import <libobjc.A.dylib/HDHealthStoreServerInterface.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSMutableDictionary, NSMutableSet, NSObject, NSString, HDDaemon, HDProfile, HKServerConfiguration, HDXPCClient, HDAuthorizationServer, HDDataCollectionManager, HDCloudSyncServer, HDHealthServicesServer, HDMedicalIDServer, HDNanoSyncServer, HDNotificationServer, HDProfileServer, HDQueryControlServer, HDUtilityServer, HDWorkoutServer;

@interface HDHealthStoreServer : NSObject <HDDiagnosticObject, HDUnitPreferencesManagerObserver, HDDeepBreathingSessionServerDelegate, HDHealthStoreServerInterface> {

	NSMutableDictionary* _deepBreathingSessionServersByUUID;
	NSMutableSet* _activeSeriesSamples;
	NSObject*<OS_dispatch_source> _clientTransactionTimer;
	NSString* _clientSourceVersion;
	HDDaemon* _daemon;
	HDProfile* _profile;
	HKServerConfiguration* _configuration;
	HDXPCClient* _client;
	NSObject*<OS_dispatch_queue> _queue;
	HDAuthorizationServer* _authorizationServer;
	HDDataCollectionManager* _dataCollectMgr;
	NSString* _serverID;
	NSString* _clientDebuggingIdentifier;
	NSMutableSet* _subservers;
	HDCloudSyncServer* _cloudSyncServer;
	HDHealthServicesServer* _healthServicesServer;
	HDMedicalIDServer* _medicalIDServer;
	HDNanoSyncServer* _nanoSyncServer;
	HDNotificationServer* _notificationServer;
	HDProfileServer* _profileServer;
	HDQueryControlServer* _queryControlServer;
	HDUtilityServer* _utilityServer;
	HDWorkoutServer* _workoutServer;

}

@property (nonatomic,retain) HDXPCClient * client;                                       //@synthesize client=_client - In the implementation block
@property (nonatomic,retain) HDDataCollectionManager * dataCollectMgr;                   //@synthesize dataCollectMgr=_dataCollectMgr - In the implementation block
@property (nonatomic,retain) HDAuthorizationServer * authorizationServer;                //@synthesize authorizationServer=_authorizationServer - In the implementation block
@property (nonatomic,retain) NSString * serverID;                                        //@synthesize serverID=_serverID - In the implementation block
@property (nonatomic,retain) NSString * clientDebuggingIdentifier;                       //@synthesize clientDebuggingIdentifier=_clientDebuggingIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableSet * subservers;                                  //@synthesize subservers=_subservers - In the implementation block
@property (nonatomic,retain) HDCloudSyncServer * cloudSyncServer;                        //@synthesize cloudSyncServer=_cloudSyncServer - In the implementation block
@property (nonatomic,retain) HDHealthServicesServer * healthServicesServer;              //@synthesize healthServicesServer=_healthServicesServer - In the implementation block
@property (nonatomic,retain) HDMedicalIDServer * medicalIDServer;                        //@synthesize medicalIDServer=_medicalIDServer - In the implementation block
@property (nonatomic,retain) HDNanoSyncServer * nanoSyncServer;                          //@synthesize nanoSyncServer=_nanoSyncServer - In the implementation block
@property (nonatomic,retain) HDNotificationServer * notificationServer;                  //@synthesize notificationServer=_notificationServer - In the implementation block
@property (nonatomic,retain) HDProfileServer * profileServer;                            //@synthesize profileServer=_profileServer - In the implementation block
@property (nonatomic,retain) HDQueryControlServer * queryControlServer;                  //@synthesize queryControlServer=_queryControlServer - In the implementation block
@property (nonatomic,retain) HDUtilityServer * utilityServer;                            //@synthesize utilityServer=_utilityServer - In the implementation block
@property (nonatomic,retain) HDWorkoutServer * workoutServer;                            //@synthesize workoutServer=_workoutServer - In the implementation block
@property (nonatomic,__weak,readonly) HDDaemon * daemon;                                 //@synthesize daemon=_daemon - In the implementation block
@property (nonatomic,readonly) HDProfile * profile;                                      //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) HKServerConfiguration * configuration;                    //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                       //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HDDaemon *)daemon;
-(void)invalidate;
-(void)dealloc;
-(void)start;
-(HKServerConfiguration *)configuration;
-(NSObject*<OS_dispatch_queue>)queue;
-(HDProfile *)profile;
-(void)_finishIfNeeded:(id)arg1 ;
-(void)_performIfAuthorizedToSaveObjects:(id)arg1 usingBlock:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(HDXPCClient *)client;
-(void)_performIfAuthorizedToDeleteObjects:(id)arg1 usingBlock:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(void)_finishSeriesBuilder:(id)arg1 ;
-(void)_saveWorkoutRouteData:(id)arg1 withRoute:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_finishWorkoutRoute:(id)arg1 workout:(id)arg2 metadata:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_discardWorkoutRoute:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_entityForLocationSeriesSample:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
-(id)diagnosticDescription;
-(void)remote_saveDataObjects:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_saveDataObjects:(id)arg1 sourceEntity:(id)arg2 sourceVersion:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)remote_deleteDataObjects:(id)arg1 options:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)unitPreferencesManagerDidUpdateUnitPreferences:(id)arg1 ;
-(id)initWithClient:(id)arg1 profile:(id)arg2 queue:(id)arg3 configuration:(id)arg4 ;
-(HDAuthorizationServer *)authorizationServer;
-(/*^block*/id)objectAuthorizationPromptHandler;
-(void)_serverActivityChanged;
-(void)setClient:(HDXPCClient *)arg1 ;
-(void)deliverWorkoutSessionError:(id)arg1 forSessionUUID:(id)arg2 ;
-(void)deliverWorkoutSessionChangedToState:(long long)arg1 fromState:(long long)arg2 date:(id)arg3 forSessionUUID:(id)arg4 ;
-(void)deliverWorkoutEvent:(id)arg1 forSessionUUID:(id)arg2 ;
-(id)clientSourceWithError:(id*)arg1 ;
-(void)_queue_deactivateDeepBreathingSessionServerWithUUID:(id)arg1 ;
-(void)_requireEntitlement:(id)arg1 usingBlock:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(void)_fetchSubserverWithRequiredEntitlement:(id)arg1 subserverHandler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_clientHasPrivateHealthKitEntitlementWithError:(id*)arg1 ;
-(BOOL)_clientHasUtilityEntitlementWithError:(id*)arg1 ;
-(void)_openAppForAuthorizationForSession:(id)arg1 completion:(/*^block*/id)arg2 ;
-(/*^block*/id)_authorizationPromptHandler;
-(id)_clientRemoteObjectProxy;
-(BOOL)_queue_insertObjects:(id)arg1 sourceEntity:(id)arg2 sourceVersionOverride:(id)arg3 shouldJournal:(BOOL)arg4 error:(id*)arg5 ;
-(id)_objectsToInsertWithObjects:(id)arg1 error:(id*)arg2 ;
-(void)_saveValidatedDataObjects:(id)arg1 transactionIdentifier:(id)arg2 final:(BOOL)arg3 handler:(/*^block*/id)arg4 ;
-(BOOL)_insertedObjects:(id)arg1 containsQuantitySampleWithType:(id)arg2 ;
-(id)_queue_objectsByProvenanceForInsertion:(id)arg1 sourceEntity:(id)arg2 sourceVersionOverride:(id)arg3 error:(id*)arg4 ;
-(id)_clientSourceVersion;
-(/*^block*/id)_permissionBlockForRestrictedSourceEntities:(id)arg1 ;
-(void)_requirePrivateHealthKitEntitlementUsingBlock:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)_performIfAuthorizedToReadTypes:(id)arg1 usingBlock:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(void)_cancelActiveClientTransaction;
-(void)_holdActiveClientTransactionWithCompletion:(/*^block*/id)arg1 ;
-(void)_queue_serverActivityChanged;
-(BOOL)_queue_isServerActive;
-(void)_queue_cancelActiveClientTransaction;
-(void)_queue_holdActiveClientTransactionWithCompletion:(/*^block*/id)arg1 ;
-(void)deepBreathingServerDidDeactivate:(id)arg1 ;
-(void)remote_proxyForCloudSyncServerWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_proxyForHealthServicesServerWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_proxyForMedicalIDServerWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_proxyForNanoSyncServerWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_proxyForNotificationServerWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_proxyForProfileServerWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_proxyForQueryControlServerWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_proxyForUtilityServerWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_proxyForWorkoutServerWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_fetchPluginServiceEndpointWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_fetchDisplayNameWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_authorizationStatusForType:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_requestAuthorizationToShareTypes:(id)arg1 readTypes:(id)arg2 shouldPrompt:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)remote_handleAuthorizationForExtensionWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_allAuthorizationRecordsForBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_allAuthorizationRecordsForType:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_retrieveAllAuthorizationRecordsForDocumentType:(id)arg1 bundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)remote_allObjectAuthorizationRecordsForSampleWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_setAuthorizationStatuses:(id)arg1 forBundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)remote_setRequestedAuthorizationForBundleIdentifier:(id)arg1 shareTypes:(id)arg2 readTypes:(id)arg3 prompt:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)remote_resetAuthorizationStatusForBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_beginAuthorizationDelegateTransactionWithSessionIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)remote_endAuthorizationDelegateTransactionWithSessionIdentifier:(id)arg1 error:(id)arg2 ;
-(void)remote_setObjectAuthorizationStatuses:(id)arg1 forBundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)remote_resetObjectAuthorizationStatusForBundleIdentifier:(id)arg1 objectType:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)remote_resetObjectAuthorizationStatusForObjects:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_saveDataObjects:(id)arg1 transactionIdentifier:(id)arg2 final:(BOOL)arg3 handler:(/*^block*/id)arg4 ;
-(void)remote_deleteDataObjectsOfType:(id)arg1 matchingFilter:(id)arg2 options:(unsigned long long)arg3 handler:(/*^block*/id)arg4 ;
-(void)_remote_associateSampleUUIDs:(id)arg1 withSampleUUID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_remote_attachDeepBreathingSessionServerWithClient:(id)arg1 sessionConfiguration:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)remote_saveWorkoutRouteData:(id)arg1 withRoute:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)remote_finishWorkoutRoute:(id)arg1 workout:(id)arg2 metadata:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)remote_discardWorkoutRoute:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_clientWillSuspendWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_clientResumedWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_setBackgroundDeliveryFrequency:(long long)arg1 forDataType:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)remote_closeTransactionWithDataType:(id)arg1 anchor:(id)arg2 ackTime:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)remote_hasSampleWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_hasSourceWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_addSourceWithBundleIdentifier:(id)arg1 name:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)remote_allSourcesWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_orderedSourcesForObjectType:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_updateOrderedSources:(id)arg1 forObjectType:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)remote_fetchDevicesMatchingProperty:(id)arg1 values:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)remote_deleteAllSamplesWithTypes:(id)arg1 sourceBundleIdentifier:(id)arg2 options:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)remote_deleteSourceWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_deleteObjectsWithUUIDs:(id)arg1 options:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)remote_suppressActivityAlertsForIdentifier:(id)arg1 suppressionReason:(long long)arg2 timeoutUntilDate:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)remote_invalidateActivityAlertSuppressionForIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_fetchCharacteristicWithDataType:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)remote_setCharacteristic:(id)arg1 forDataType:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)remote_getDefaultForKey:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)remote_setDefaultValue:(id)arg1 forKey:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)remote_removeDefaultForKey:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)remote_setHealthLiteValue:(id)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)remote_getHealthLiteValueForKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_getHealthDirectorySizeInBytesWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_obliterateHealthDataWithOptions:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_performMigrationWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_submitMetricsIgnoringAnchor:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_registerKeepAliveWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_unregisterKeepAliveWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_setPreferredUnit:(id)arg1 forType:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)remote_fetchUnitPreferencesForTypes:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)remote_weeklySummaryInfoForDate:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)remote_splitTotalCalories:(double)arg1 timeInterval:(double)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)remote_fetchDaemonPreferenceForKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remote_setDaemonPreferenceValue:(id)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)remote_badgeHealthAppForEmergencyContactsConsolidationWithCompletion:(/*^block*/id)arg1 ;
-(void)remote_containerAppExtensionEntitlementsWithCompletion:(/*^block*/id)arg1 ;
-(void)setAuthorizationServer:(HDAuthorizationServer *)arg1 ;
-(HDDataCollectionManager *)dataCollectMgr;
-(void)setDataCollectMgr:(HDDataCollectionManager *)arg1 ;
-(NSString *)serverID;
-(void)setServerID:(NSString *)arg1 ;
-(NSString *)clientDebuggingIdentifier;
-(void)setClientDebuggingIdentifier:(NSString *)arg1 ;
-(NSMutableSet *)subservers;
-(void)setSubservers:(NSMutableSet *)arg1 ;
-(HDCloudSyncServer *)cloudSyncServer;
-(void)setCloudSyncServer:(HDCloudSyncServer *)arg1 ;
-(HDHealthServicesServer *)healthServicesServer;
-(void)setHealthServicesServer:(HDHealthServicesServer *)arg1 ;
-(HDMedicalIDServer *)medicalIDServer;
-(void)setMedicalIDServer:(HDMedicalIDServer *)arg1 ;
-(HDNanoSyncServer *)nanoSyncServer;
-(void)setNanoSyncServer:(HDNanoSyncServer *)arg1 ;
-(HDNotificationServer *)notificationServer;
-(void)setNotificationServer:(HDNotificationServer *)arg1 ;
-(HDProfileServer *)profileServer;
-(void)setProfileServer:(HDProfileServer *)arg1 ;
-(HDQueryControlServer *)queryControlServer;
-(void)setQueryControlServer:(HDQueryControlServer *)arg1 ;
-(HDUtilityServer *)utilityServer;
-(void)setUtilityServer:(HDUtilityServer *)arg1 ;
-(HDWorkoutServer *)workoutServer;
-(void)setWorkoutServer:(HDWorkoutServer *)arg1 ;
@end
