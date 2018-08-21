/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:19 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMDaemonCore/IMDCKSyncStateDelegate.h>

@class IMDCKSyncState, IMLockdownManager, IDSServerBag, FTDeviceSupport, IMDefaults, NSString;

@interface IMDCKUtilities : NSObject <IMDCKSyncStateDelegate> {

	BOOL _useDeprecatedApi;
	IMDCKSyncState* _syncState;
	IMLockdownManager* _lockdownManager;
	IDSServerBag* _serverBag;
	FTDeviceSupport* _deviceSupport;
	IMDefaults* _imDefaults;

}

@property (nonatomic,retain) IMLockdownManager * lockdownManager;                        //@synthesize lockdownManager=_lockdownManager - In the implementation block
@property (nonatomic,retain) IDSServerBag * serverBag;                                   //@synthesize serverBag=_serverBag - In the implementation block
@property (nonatomic,retain) FTDeviceSupport * deviceSupport;                            //@synthesize deviceSupport=_deviceSupport - In the implementation block
@property (nonatomic,retain) IMDefaults * imDefaults;                                    //@synthesize imDefaults=_imDefaults - In the implementation block
@property (assign,nonatomic) BOOL useDeprecatedApi;                                      //@synthesize useDeprecatedApi=_useDeprecatedApi - In the implementation block
@property (nonatomic,readonly) IMDCKSyncState * syncState;                               //@synthesize syncState=_syncState - In the implementation block
@property (nonatomic,readonly) BOOL isSyncingPaused; 
@property (getter=isDeviceCharging,nonatomic,readonly) BOOL deviceCharging; 
@property (getter=isDeviceOnWifi,nonatomic,readonly) BOOL deviceOnWifi; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)logHandle;
+(id)im_AKSecurityLevelKey;
-(id)init;
-(id)logHandle;
-(BOOL)isSyncingPaused;
-(id)dsid;
-(id)_accountStore;
-(IMDCKSyncState *)syncState;
-(id)_authenticationController;
-(id)initWithServerBag:(id)arg1 lockDownmanager:(id)arg2 deviceSupport:(id)arg3 imDefaults:(id)arg4 ;
-(BOOL)cloudKitSyncingEnabled;
-(id)backupController;
-(IMLockdownManager *)lockdownManager;
-(unsigned long long)messageDatabaseSize;
-(id)_truthDatabase;
-(long long)_mininimumServerBagClientValue;
-(BOOL)_serverAllowsSync;
-(BOOL)_mocFeatureEnabled;
-(BOOL)_isInExitState;
-(IDSServerBag *)serverBag;
-(void)broadcastInstantStateChangeNotification;
-(void)_resetKeepMessagesSettingandBroadcastToAllDevices;
-(void)evalToggleiCloudSettingsSwitch;
-(BOOL)_allowDestructiveMOCFeaturesBasedOnDSID;
-(BOOL)_serverAllowsCacheDelete;
-(BOOL)_serverAllowsRemovalFromBackUp;
-(void)fetchCloudKitAccountStatusWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)cacheDeleteEnabled;
-(id)_truthContainer;
-(BOOL)_checkEligibilityWithAccountInfo:(id)arg1 ;
-(BOOL)_accountInfoWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_createAccountError:(id)arg1 ;
-(void)_checkEligibilityWithLoggedInAccountWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchSecurityLevelForAccount:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)_accountNeedsRepairOverride;
-(BOOL)shouldRepairAccountWithDeviceAccountSecurityLevel:(unsigned long long)arg1 serverAccountStatus:(long long)arg2 ;
-(void)fetchLocalAccountSecurityLevel:(/*^block*/id)arg1 ;
-(FTDeviceSupport *)deviceSupport;
-(id)_dumpLogsForTrainPrefix;
-(BOOL)_checkIfBuildVersionIsNewEnoughToLogDump;
-(BOOL)_checkIfEnabledByServerBagOrDefault:(id)arg1 ;
-(id)logCollectorAddress;
-(void)reportMOCDebuggingErrorWithString:(id)arg1 internalOnly:(BOOL)arg2 initialSync:(BOOL)arg3 sendToHandle:(id)arg4 ;
-(void)reportMOCDebuggingErrorWithString:(id)arg1 internalOnly:(BOOL)arg2 initialSync:(BOOL)arg3 sendToHandle:(id)arg4 reasonString:(id)arg5 ;
-(BOOL)shouldLogDumpOnCloudKitError;
-(void)logDumpAndSendMessageTo:(id)arg1 forHours:(int)arg2 reason:(id)arg3 ;
-(BOOL)shouldPresentTTROnCloudKitError;
-(void)_askToTapToRadarWithString:(id)arg1 internalOnly:(BOOL)arg2 ;
-(unsigned long long)_mocEnabledStateFromAccountStatus:(long long)arg1 ;
-(IMDefaults *)imDefaults;
-(BOOL)_isCKErrorPartialFailure:(id)arg1 ;
-(id)_errorsFromPartialError:(id)arg1 ;
-(BOOL)CKPartialError:(id)arg1 onlyHasErrorCodes:(id)arg2 ;
-(BOOL)CKPartialErrorOnlyHasQuotaExceededError:(id)arg1 ;
-(BOOL)errorIndicatesDeviceConditionsDontAllowSync:(id)arg1 ;
-(void)reportMOCDebuggingErrorWithString:(id)arg1 internalOnly:(BOOL)arg2 initialSync:(BOOL)arg3 ;
-(BOOL)_shouldiCloudSwitchBeEnabled;
-(void)_setiCloudSettingsSwitchEnabled:(BOOL)arg1 ;
-(id)_personIdFromAccount:(id)arg1 ;
-(void)_fetchPrimaryAccountWithCompletion:(/*^block*/id)arg1 ;
-(id)_batteryStatus;
-(id)_mobileNetworkManager;
-(BOOL)_isSyncingPausedOverride;
-(BOOL)_deviceActive;
-(id)deviceActiveString;
-(void)_showCKLogNotificationWithCompletion:(/*^block*/id)arg1 ;
-(id)_ckStatisticCaluclations;
-(id)metricForPCSReportManateeStatusWithReason:(id)arg1 ;
-(id)_accountManager;
-(id)_primaryiCloudAccountAltDSID;
-(void)setCloudKitSyncingEnabled:(BOOL)arg1 ;
-(void)syncStateWillUpdate:(id)arg1 ;
-(BOOL)shouldUseDevContainer;
-(BOOL)shouldForceArchivedMessagesSync;
-(BOOL)shouldSyncToSRContainer;
-(long long)overrideNumberOfChatsToFetch;
-(long long)overrideNumberOfChatsToWrite;
-(void)isFirstSyncWithCompletion:(/*^block*/id)arg1 ;
-(void)checkiCloudQuota:(/*^block*/id)arg1 ;
-(BOOL)cloudKitSyncDownloadAssetsOnly;
-(BOOL)enableAttachmentMetricCollection;
-(BOOL)removeFromBackUpAllowed;
-(BOOL)accountIsVerifiedForMOCAndSafeForCacheDelete;
-(void)fetchCloudKitAccountStatusAndCheckForAccountNeedsRepairWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)shouldCollectDailyLogDump;
-(void)reportMOCDebuggingErrorWithString:(id)arg1 internalOnly:(BOOL)arg2 ;
-(id)recordNameForMessageWithGUID:(id)arg1 usingSalt:(id)arg2 ;
-(id)syncFailureMetricString:(id)arg1 error:(id)arg2 ;
-(void)fetchMOCEnabledStateWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)extractServerRecordFromCKServerErrorRecordChanged:(id)arg1 ;
-(BOOL)CKPartialError:(id)arg1 hasErrorCode:(id)arg2 ;
-(BOOL)isRecoverableCloudKitError:(id)arg1 withRetryInterval:(id*)arg2 ;
-(BOOL)acceptableErrorCodeWhileDeleting:(id)arg1 ;
-(id)extractRecordIDsDeletedFromCKPartialError:(id)arg1 ;
-(BOOL)errorIndicatesZoneNotCreated:(id)arg1 ;
-(BOOL)errorIndicatesUserDeletedZone:(id)arg1 ;
-(void)resetLastSyncDate;
-(void)checkCloudkitEnabledStatusAndToggleiCloudSwitchIfNeeded;
-(void)fetchiCloudAccountPersonID:(/*^block*/id)arg1 ;
-(void)primaryAccountHasiCloudBackupEnabledWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isDeviceCharging;
-(BOOL)isDeviceOnWifi;
-(id)deviceConditions;
-(BOOL)deviceConditionsAllowPeriodicSync;
-(id)newfilteredArrayRemovingCKRecordDupes:(id)arg1 ;
-(id)newfilteredArrayRemovingCKRecordIDDupes:(id)arg1 ;
-(id)lastDeviceBackUpDate;
-(BOOL)errorIndicatesIdentityWasLost:(id)arg1 ;
-(BOOL)errorIndicateDeviceDoesNotHaveKeysToSync:(id)arg1 ;
-(void)noteAllSyncedItemsPriorToSync;
-(BOOL)logDumpIsNecessaryAfterSync;
-(void)submitPCSReportManateeStatuMetricWithPrefix:(id)arg1 andReason:(id)arg2 ;
-(BOOL)_allowDestructiveMOCFeatureForDSID:(id)arg1 ;
-(unsigned long long)_primaryiCloudAccountSecurityLevel;
-(void)enableMOCIfNeeded;
-(void)downgradingFromHSA2AndDisablingMOC;
-(void)eligibleForTruthZoneWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isInCloudKitDemoMode;
-(void)disableAllDevicesWithCompletion:(/*^block*/id)arg1 ;
-(id)accountDSID:(id)arg1 ;
-(id)accountWithDSID:(id)arg1 ;
-(void)setLockdownManager:(IMLockdownManager *)arg1 ;
-(void)setServerBag:(IDSServerBag *)arg1 ;
-(void)setDeviceSupport:(FTDeviceSupport *)arg1 ;
-(void)setImDefaults:(IMDefaults *)arg1 ;
-(BOOL)useDeprecatedApi;
-(void)setUseDeprecatedApi:(BOOL)arg1 ;
-(id)_primaryiCloudAccount;
@end
