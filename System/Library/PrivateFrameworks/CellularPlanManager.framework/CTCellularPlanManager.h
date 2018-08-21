/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CellularPlanManager.framework/CellularPlanManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CellularPlanManager/CellularPlanManager-Structs.h>
#import <libobjc.A.dylib/CTCellularPlanClientDelegate.h>

@class NSMutableArray, NSString, NSData, NSXPCConnection;

@interface CTCellularPlanManager : NSObject <CTCellularPlanClientDelegate> {

	NSMutableArray* _subscriptionCompletions;
	dispatch_queue_sRef _queue;
	NSString* _lastSessionId;
	NSData* _cookieData;
	NSXPCConnection* _connection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
+(long long)calculateInstallConsentTextTypeFor:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)ping;
-(void)_connect_sync;
-(void)isNewDataPlanCapable:(/*^block*/id)arg1 ;
-(void)didPurchasePlanWithIccid:(id)arg1 downloadProfile:(BOOL)arg2 ;
-(void)didProvisionEsimWithIccid:(id)arg1 ;
-(void)setUserInPurchaseFlow:(BOOL)arg1 ;
-(void)getDeviceInfo:(/*^block*/id)arg1 ;
-(void)openInternalUrlId:(long long)arg1 ;
-(void)getCurrentPlanType:(/*^block*/id)arg1 ;
-(void)getIMEIPrefix:(/*^block*/id)arg1 ;
-(void)setIMEIPrefix:(id)arg1 ;
-(void)getESimServerURL:(/*^block*/id)arg1 ;
-(void)setESimServerURL:(id)arg1 ;
-(void)getSelectedEnv:(/*^block*/id)arg1 ;
-(void)setSelectedEnv:(long long)arg1 ;
-(void)getSelectedProxy:(/*^block*/id)arg1 ;
-(void)setSelectedProxy:(long long)arg1 ;
-(void)mccMncOverride:(/*^block*/id)arg1 ;
-(void)setMcc:(long long)arg1 andMnc:(long long)arg2 ;
-(void)latitudeLongitudeOverride:(/*^block*/id)arg1 ;
-(void)setLatitude:(id)arg1 andLongitude:(id)arg2 ;
-(void)launchSequoia;
-(void)expirePlan;
-(void)updatePlansDatabase;
-(void)launchDataActivationNextWithUrl:(id)arg1 ;
-(void)manageAccountForRemotePlan:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)didSelectRemotePlanItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)didDeleteRemotePlanItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)didPurchaseRemotePlanForEid:(id)arg1 imei:(id)arg2 meid:(id)arg3 iccid:(id)arg4 alternateSmdpFqdn:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)didCancelRemotePlan;
-(void)pendingReleaseRemotePlan;
-(void)remotePlanLaunchInfoForCsn:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remotePlansSignupParamsForCsn:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)eraseAllRemotePlansWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchRemoteProfiles:(id)arg1 ;
-(void)selectRemoteProfile:(id)arg1 ;
-(void)deleteRemoteProfile:(id)arg1 ;
-(void)deleteAllRemoteProfiles;
-(void)getAutoPlanSelectionWithCompletion:(/*^block*/id)arg1 ;
-(void)setAutoPlanSelection:(BOOL)arg1 ;
-(void)getRoamingSignupOverrideWithCompletion:(/*^block*/id)arg1 ;
-(void)setRoamingSignupOverride:(BOOL)arg1 ;
-(void)getRemoteInfo:(/*^block*/id)arg1 ;
-(void)shouldShowAddNewRemotePlan:(/*^block*/id)arg1 ;
-(void)setActivePlan:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)planInfoDidUpdate;
-(void)remoteProvisioningDidBecomeAvailable;
-(void)_ensureConnected_sync;
-(void)plansWithProgress:(/*^block*/id)arg1 andCompletion:(/*^block*/id)arg2 additionalParameters:(id)arg3 ;
-(void)_plansForRenewal:(BOOL)arg1 progress:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 latitude:(id)arg4 longitude:(id)arg5 additionalParameters:(id)arg6 ;
-(void)plansWithCompletion:(/*^block*/id)arg1 latitude:(id)arg2 longitude:(id)arg3 ;
-(void)_remotePlansWithCsn:(id)arg1 parameters:(id)arg2 remoteCompletion:(/*^block*/id)arg3 ;
-(void)connectionSettings:(/*^block*/id)arg1 ;
-(void)plansWithProgress:(/*^block*/id)arg1 andCompletion:(/*^block*/id)arg2 ;
-(void)plansForRenewalWithProgress:(/*^block*/id)arg1 andCompletion:(/*^block*/id)arg2 ;
-(void)plansWithCompletion:(/*^block*/id)arg1 ;
-(void)plansForRenewalWithCompletion:(/*^block*/id)arg1 ;
-(void)subscriptionDetailsWithCompletion:(/*^block*/id)arg1 ;
-(void)carrierHandoffToken:(/*^block*/id)arg1 ;
-(void)shouldShowAddNewRemotePlanWithFlowType:(/*^block*/id)arg1 ;
-(void)addNewRemotePlan:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)addNewRemotePlanWithCardData:(id)arg1 isPairing:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)addNewRemotePlanWithCardData:(id)arg1 confirmationCode:(id)arg2 isPairing:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)addNewRemotePlanWithAddress:(id)arg1 matchingId:(id)arg2 oid:(id)arg3 confirmationCode:(id)arg4 isPairing:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(void)addNewRemotePlanWithCardData:(id)arg1 isPairing:(BOOL)arg2 userConsent:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)remotePlanItemsWithCompletion:(/*^block*/id)arg1 ;
-(void)remotePlanLaunchInfoForEid:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remoteplansWithCsn:(id)arg1 parameters:(id)arg2 andRemoteCompletion:(/*^block*/id)arg3 ;
-(void)remotePlanSubscriptionStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)userDidProvideConsentResponse:(long long)arg1 forPlan:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)subscriptionDetailsForCompletion:(id)arg1 ;
-(void)triggerAddNewDataPlan:(/*^block*/id)arg1 ;
-(void)manageAccountForPlan:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)planItemsWithCompletion:(/*^block*/id)arg1 ;
-(void)isMultipleDataPlanSupportAvailable:(/*^block*/id)arg1 ;
-(void)isRoamingPlanSupportAvailable:(/*^block*/id)arg1 ;
-(void)isAddButtonEnabled:(/*^block*/id)arg1 ;
-(void)shouldShowPlanList:(/*^block*/id)arg1 ;
-(void)willDisplayPlanItems;
-(void)didSelectPlanItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addNewRemotePlanWithCardData:(id)arg1 confirmationCode:(id)arg2 isPairing:(BOOL)arg3 userConsent:(long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)addNewRemotePlan:(BOOL)arg1 userConsent:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)shouldShowAddNewRemotePlanWithFlowTypeAndTrialPlanType:(/*^block*/id)arg1 ;
-(void)isRemotePlanCapable:(/*^block*/id)arg1 ;
-(void)remotePlanItemsWithUpdateFetch:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)startRemoteProvisioningWithCompletion:(/*^block*/id)arg1 ;
-(void)finishRemoteProvisioningWithCompletion:(/*^block*/id)arg1 ;
-(void)addNewRemotePlanWithAddress:(id)arg1 matchingId:(id)arg2 oid:(id)arg3 confirmationCode:(id)arg4 isPairing:(BOOL)arg5 userConsent:(long long)arg6 completion:(/*^block*/id)arg7 ;
-(void)_reconnect;
@end

