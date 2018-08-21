/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:46 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HFStateDumpSerializable.h>
#import <libobjc.A.dylib/HFHomeManagerObserver.h>
#import <libobjc.A.dylib/HFHomeObserver.h>
#import <libobjc.A.dylib/HFAccessoryObserver.h>
#import <libobjc.A.dylib/HFResidentDeviceObserver.h>
#import <libobjc.A.dylib/HFCameraObserver.h>
#import <libobjc.A.dylib/HFMediaSessionObserver.h>
#import <libobjc.A.dylib/HFMediaObjectObserver.h>
#import <libobjc.A.dylib/HFSoftwareUpdateControllerObserver.h>
#import <libobjc.A.dylib/HFSoftwareUpdateObserver.h>
#import <libobjc.A.dylib/HFAVRoutingControllerObserver.h>
#import <libobjc.A.dylib/HFSymptomsHandlerObserver.h>
#import <libobjc.A.dylib/HFUserObserver.h>
#import <libobjc.A.dylib/HFTemperatureUnitObserver.h>
#import <libobjc.A.dylib/HFItemUpdating.h>

@protocol HFItemManagerDelegate, HFCharacteristicReadPolicy;
@class HFItem, HMHome, NSArray, NAFuture, NSMapTable, NSMutableDictionary, NSMutableSet, HFItemManagerBatchedDelegateAdapter, NSString, NSSet;

@interface HFItemManager : NSObject <HFStateDumpSerializable, HFHomeManagerObserver, HFHomeObserver, HFAccessoryObserver, HFResidentDeviceObserver, HFCameraObserver, HFMediaSessionObserver, HFMediaObjectObserver, HFSoftwareUpdateControllerObserver, HFSoftwareUpdateObserver, HFAVRoutingControllerObserver, HFSymptomsHandlerObserver, HFUserObserver, HFTemperatureUnitObserver, HFItemUpdating> {

	BOOL _hasRequestedFirstUpdate;
	id<HFItemManagerDelegate> _delegate;
	HFItem* _sourceItem;
	HMHome* _home;
	NSArray* _itemProviders;
	id<HFCharacteristicReadPolicy> _readPolicy;
	unsigned long long _overallLoadingState;
	NAFuture* _firstFastUpdateFuture;
	HMHome* _lastUpdatedHome;
	NSArray* _sections;
	NSMapTable* _childItemsByParentItem;
	NSMutableDictionary* _suppressedCharacteristicUpdatesByReason;
	NSMutableSet* _disableUpdateReasons;
	HFItemManagerBatchedDelegateAdapter* _batchedDelegateAdapterAllowingReads;
	HFItemManagerBatchedDelegateAdapter* _batchedDelegateAdapterDisallowingReads;
	NAFuture* _firstFullUpdateFuture;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSArray * itemProviders;                                                                   //@synthesize itemProviders=_itemProviders - In the implementation block
@property (nonatomic,retain) HMHome * lastUpdatedHome;                                                                  //@synthesize lastUpdatedHome=_lastUpdatedHome - In the implementation block
@property (nonatomic,retain) NSArray * sections;                                                                        //@synthesize sections=_sections - In the implementation block
@property (nonatomic,retain) NSMapTable * childItemsByParentItem;                                                       //@synthesize childItemsByParentItem=_childItemsByParentItem - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * suppressedCharacteristicUpdatesByReason;                             //@synthesize suppressedCharacteristicUpdatesByReason=_suppressedCharacteristicUpdatesByReason - In the implementation block
@property (assign,nonatomic) unsigned long long overallLoadingState;                                                    //@synthesize overallLoadingState=_overallLoadingState - In the implementation block
@property (assign,nonatomic) BOOL hasRequestedFirstUpdate;                                                              //@synthesize hasRequestedFirstUpdate=_hasRequestedFirstUpdate - In the implementation block
@property (nonatomic,readonly) NSMutableSet * disableUpdateReasons;                                                     //@synthesize disableUpdateReasons=_disableUpdateReasons - In the implementation block
@property (nonatomic,retain) HFItemManagerBatchedDelegateAdapter * batchedDelegateAdapterAllowingReads;                 //@synthesize batchedDelegateAdapterAllowingReads=_batchedDelegateAdapterAllowingReads - In the implementation block
@property (nonatomic,retain) HFItemManagerBatchedDelegateAdapter * batchedDelegateAdapterDisallowingReads;              //@synthesize batchedDelegateAdapterDisallowingReads=_batchedDelegateAdapterDisallowingReads - In the implementation block
@property (nonatomic,readonly) NAFuture * firstFullUpdateFuture;                                                        //@synthesize firstFullUpdateFuture=_firstFullUpdateFuture - In the implementation block
@property (assign,nonatomic,__weak) id<HFItemManagerDelegate> delegate;                                                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) HFItem * sourceItem;                                                                       //@synthesize sourceItem=_sourceItem - In the implementation block
@property (nonatomic,retain) HMHome * home;                                                                             //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) id<HFCharacteristicReadPolicy> readPolicy;                                                 //@synthesize readPolicy=_readPolicy - In the implementation block
@property (nonatomic,readonly) NSSet * allItems; 
@property (nonatomic,readonly) NSSet * allDisplayedItems; 
@property (nonatomic,readonly) NAFuture * firstFastUpdateFuture;                                                        //@synthesize firstFastUpdateFuture=_firstFastUpdateFuture - In the implementation block
+(BOOL)_canReloadDuringUnitTests;
-(HMHome *)home;
-(void)setHome:(HMHome *)arg1 ;
-(id)init;
-(id<HFItemManagerDelegate>)delegate;
-(void)setDelegate:(id<HFItemManagerDelegate>)arg1 ;
-(void)dealloc;
-(unsigned long long)numberOfSections;
-(void)setItemProviders:(NSArray *)arg1 ;
-(NSArray *)itemProviders;
-(unsigned long long)_numberOfSections;
-(id)initWithDelegate:(id)arg1 ;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(void)setSections:(NSArray *)arg1 ;
-(NSArray *)sections;
-(id)_identifierForSection:(unsigned long long)arg1 ;
-(void)routingControllerAvailableRoutesDidChange:(id)arg1 ;
-(void)routingController:(id)arg1 pickedRouteDidChange:(id)arg2 ;
-(id)childItemsForItem:(id)arg1 ;
-(NSSet *)allItems;
-(id)_debug_itemManagerDescription;
-(id)_debug_itemProviderDescriptions;
-(id)_debug_itemDescriptions;
-(void)_debug_registerForStateDump;
-(id)hf_serializedStateDumpRepresentation;
-(void)cameraStream:(id)arg1 didUpdateAudioStreamSettingWithError:(id)arg2 ;
-(void)settingsDidUpdate:(id)arg1 ;
-(void)accessorySettings:(id)arg1 willWriteValueForSettings:(id)arg2 ;
-(void)accessorySettings:(id)arg1 didWriteValueForSettings:(id)arg2 failedSettings:(id)arg3 ;
-(HFItemManagerBatchedDelegateAdapter *)batchedDelegateAdapterAllowingReads;
-(HFItemManagerBatchedDelegateAdapter *)batchedDelegateAdapterDisallowingReads;
-(id)_itemsToUpdateForModifiedMetadataForHomes:(id)arg1 ;
-(id)_itemsToUpdateForRemoteAccessChange;
-(id)_itemsToUpdateForAllowAccessWhileLockedSettingChange;
-(id)_itemsToUpdateForModifiedAccessories:(id)arg1 ;
-(id)_invalidationReasonsForAddedOrRemovedAccessory:(id)arg1 ;
-(id)_itemsToUpdateForModifiedUsers:(id)arg1 ;
-(id)_itemsToUpdateForModifiedRooms:(id)arg1 ;
-(id)_itemsToUpdateForModifiedZones:(id)arg1 ;
-(id)_itemsToUpdateForModifiedServiceGroups:(id)arg1 ;
-(id)_itemsToUpdateForModifiedServices:(id)arg1 ;
-(id)_itemsToUpdateForModifiedActionSets:(id)arg1 ;
-(id)_itemsToUpdateForModifiedTriggers:(id)arg1 ;
-(id)_itemsToUpdateForOutgoingInvitation:(id)arg1 ;
-(id)_itemsToUpdateForIncomingInvitation:(id)arg1 ;
-(id)_itemsToUpdateForModifiedResidentDevices:(id)arg1 ;
-(id)_itemsToUpdateForModifiedCharacteristics:(id)arg1 ;
-(id)_cameraForCameraControl:(id)arg1 ;
-(id)_itemsToUpdateForModifiedCameras:(id)arg1 ;
-(id)_cameraForCameraStream:(id)arg1 ;
-(id)_itemsToUpdateForModifiedSoftwareUpdateControllers:(id)arg1 ;
-(id)_itemsToUpdateForModifiedSoftwareUpdates:(id)arg1 ;
-(id)_itemsToUpdateForAccessorySettingChanges:(id)arg1 ;
-(id)_itemsToUpdateForMediaProfileContainer:(id)arg1 ;
-(void)_updateLoadingStateAndNotifyDelegateForItems:(id)arg1 canFinishTransaction:(BOOL)arg2 ;
-(id)_itemsToUpdateForMediaSessionChange:(id)arg1 ;
-(id)_itemsToUpdateForMediaObjectChange:(id)arg1 ;
-(id)_itemsToUpdateForAccessorySettingsChange:(id)arg1 ;
-(id)_itemsToUpdateForMediaSystemChange:(id)arg1 ;
-(id)_invalidationReasonsForAddedOrRemovedMediaSystem:(id)arg1 ;
-(id)_itemsToUpdateForModifiedRoutes:(id)arg1 ;
-(void)_setupDelegateNotifications;
-(void)_removeDelegateNotifications;
-(void)residentDevice:(id)arg1 didUpdateName:(id)arg2 ;
-(void)residentDevice:(id)arg1 didUpdateCapabilities:(unsigned long long)arg2 ;
-(void)residentDevice:(id)arg1 didUpdateEnabled:(BOOL)arg2 ;
-(void)residentDevice:(id)arg1 didUpdateStatus:(unsigned long long)arg2 ;
-(void)cameraSnapshotControl:(id)arg1 didTakeSnapshot:(id)arg2 error:(id)arg3 ;
-(void)cameraSnapshotControlDidUpdateMostRecentSnapshot:(id)arg1 ;
-(void)cameraStreamControlDidStartStream:(id)arg1 ;
-(void)cameraStreamControl:(id)arg1 didStopStreamWithError:(id)arg2 ;
-(void)cameraStreamControlDidUpdateStreamState:(id)arg1 ;
-(void)cameraStreamControlDidUpdateManagerState:(id)arg1 ;
-(void)softwareUpdateController:(id)arg1 didUpdateAvailableUpdate:(id)arg2 ;
-(void)symptomsHandler:(id)arg1 didUpdateSymptoms:(id)arg2 ;
-(void)symptomsHandler:(id)arg1 didUpdateFixState:(long long)arg2 ;
-(void)symptomsHandler:(id)arg1 didUpdateCanInitiateFix:(long long)arg2 ;
-(void)mediaSession:(id)arg1 willUpdatePlaybackState:(long long)arg2 ;
-(void)mediaSession:(id)arg1 didUpdatePlaybackState:(long long)arg2 ;
-(void)mediaSession:(id)arg1 failedToUpdatePlaybackStateWithError:(id)arg2 ;
-(BOOL)_requiresNotificationsForCharacteristic:(id)arg1 ;
-(void)setReadPolicy:(id<HFCharacteristicReadPolicy>)arg1 ;
-(void)notificationSettingsInvalidatedForManager:(id)arg1 ;
-(void)_updateExternalUpdatesEnabled:(BOOL)arg1 reloadItems:(BOOL)arg2 ;
-(id)_internalItems;
-(unsigned long long)_sectionForItem:(id)arg1 assertOnNotFound:(BOOL)arg2 ;
-(id)_indexPathForItem:(id)arg1 inDisplayedItemsArray:(id)arg2 ;
-(NSMapTable *)childItemsByParentItem;
-(NSMutableSet *)disableUpdateReasons;
-(NSMutableDictionary *)suppressedCharacteristicUpdatesByReason;
-(id)_allSuppressedCharacteristics;
-(id)_updateResultsForItems:(id)arg1 context:(id)arg2 ;
-(void)resetItemProviders;
-(id)_reloadAndUpdateItemsForProviders:(id)arg1 updateItems:(id)arg2 senderSelector:(SEL)arg3 ;
-(void)recalculateVisibilityAndSortAllItems;
-(void)_updateRepresentationForExternalItemsWithUpdatedOrAddedItems:(id)arg1 logger:(id)arg2 ;
-(BOOL)hasRequestedFirstUpdate;
-(NAFuture *)firstFullUpdateFuture;
-(HMHome *)lastUpdatedHome;
-(void)setLastUpdatedHome:(HMHome *)arg1 ;
-(id)_reloadAllItemProvidersFromSenderSelector:(SEL)arg1 ;
-(void)setHasRequestedFirstUpdate:(BOOL)arg1 ;
-(id)_reloadItemProviders:(id)arg1 updateItems:(id)arg2 shouldUpdateExistingItems:(BOOL)arg3 senderSelector:(SEL)arg4 readPolicy:(id)arg5 fastInitialUpdatePromise:(id)arg6 ;
-(BOOL)_shouldPerformFastInitialUpdates;
-(id)_updateResultsForItems:(id)arg1 removedItems:(id)arg2 context:(id)arg3 allowDelaying:(BOOL)arg4 ;
-(unsigned long long)_loadingStateForItem:(id)arg1 ;
-(void)_updateOverallLoadingStateAndNotifyDelegate;
-(void)_didFinishUpdateTransactionWithAffectedItems:(id)arg1 ;
-(id)_dependentHomeKitObjectsOfClass:(Class)arg1 inHomeKitObjects:(id)arg2 ;
-(unsigned long long)overallLoadingState;
-(id)_allDisplayedItemsIncludingInternalItems;
-(void)setOverallLoadingState:(unsigned long long)arg1 ;
-(id)_performUpdateForItem:(id)arg1 withContext:(id)arg2 isInternal:(BOOL)arg3 isChild:(BOOL)arg4 ;
-(void)_batchItemUpdateFutureWrappers:(id)arg1 removedItems:(id)arg2 batchingIntervals:(id)arg3 logger:(id)arg4 ;
-(void)_updateRepresentationForInternalItemsWithUpdatedItems:(id)arg1 ;
-(id)_performUpdateForChildItemsOfItem:(id)arg1 withContext:(id)arg2 isInternal:(BOOL)arg3 ;
-(void)_notifyDelegateOfChangesFromDiff:(id)arg1 logger:(id)arg2 ;
-(id)_footerTitleForSectionWithIdentifier:(id)arg1 ;
-(id)_sortedItems:(id)arg1 forSectionIdentifier:(id)arg2 ;
-(void)_notifyDelegateOfSectionOperations:(id)arg1 logger:(id)arg2 ;
-(void)_notifyDelegateOfItemOperations:(id)arg1 logger:(id)arg2 ;
-(id)_itemsOfClass:(Class)arg1 inItems:(id)arg2 allowTransformedItems:(BOOL)arg3 ;
-(id)_serviceItemsToHideInSet:(id)arg1 allServiceGroupItems:(id)arg2 ;
-(id)_serviceGroupItemForServiceGroup:(id)arg1 inItems:(id)arg2 ;
-(BOOL)_shouldHideServiceItem:(id)arg1 containedInServiceGroupItem:(id)arg2 ;
-(id)_itemsWithDependenciesPassingTest:(/*^block*/id)arg1 forItems:(id)arg2 ;
-(id)_allItemsIncludingInternalItems;
-(id)_directItemDependenciesForHomeKitObjects:(id)arg1 class:(Class)arg2 ;
-(id)_itemsToUpdateForModifiedActions:(id)arg1 ;
-(id)_itemsToUpdateForModifiedEvents:(id)arg1 ;
-(id)_itemsToUpdateForModifiedServiceTypes:(id)arg1 ;
-(id)_itemsToUpdateForAccessorySettingChange:(id)arg1 ;
-(unsigned long long)_sectionForItem:(id)arg1 ;
-(void)temperatureUnitObserver:(id)arg1 didChangeTemperatureUnit:(BOOL)arg2 ;
-(id)attributedFooterTitleForSection:(unsigned long long)arg1 ;
-(unsigned long long)sectionIndexForDisplayedSectionIdentifier:(id)arg1 ;
-(id)childItemsForItem:(id)arg1 ofClass:(Class)arg2 conformingToProtocol:(id)arg3 ;
-(id)reloadAndUpdateItemsForProviders:(id)arg1 senderSelector:(SEL)arg2 ;
-(id)_itemsToUpdateForModifiedSharingDevices:(id)arg1 ;
-(void)setChildItemsByParentItem:(NSMapTable *)arg1 ;
-(void)setSuppressedCharacteristicUpdatesByReason:(NSMutableDictionary *)arg1 ;
-(void)setBatchedDelegateAdapterAllowingReads:(HFItemManagerBatchedDelegateAdapter *)arg1 ;
-(void)setBatchedDelegateAdapterDisallowingReads:(HFItemManagerBatchedDelegateAdapter *)arg1 ;
-(id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 ;
-(id<HFCharacteristicReadPolicy>)readPolicy;
-(id)_reloadItemProviders:(id)arg1 updateItems:(id)arg2 shouldUpdateExistingItems:(BOOL)arg3 senderSelector:(SEL)arg4 readPolicy:(id)arg5 ;
-(void)setSourceItem:(HFItem *)arg1 ;
-(HFItem *)sourceItem;
-(/*^block*/id)_comparatorForSectionIdentifier:(id)arg1 ;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(id)_itemForSorting;
-(void)softwareUpdate:(id)arg1 didUpdateState:(long long)arg2 ;
-(void)softwareUpdate:(id)arg1 didUpdateDocumentationAvailable:(BOOL)arg2 ;
-(void)softwareUpdate:(id)arg1 didUpdateDocumentation:(id)arg2 ;
-(id)displayedItemAtIndexPath:(id)arg1 ;
-(id)childItemsForItem:(id)arg1 ofClass:(Class)arg2 ;
-(id)updateResultsForItems:(id)arg1 senderSelector:(SEL)arg2 ;
-(id)indexPathForItem:(id)arg1 ;
-(id)displayedItemsInSection:(unsigned long long)arg1 ;
-(id)displayedSectionIdentifierForSectionIndex:(unsigned long long)arg1 ;
-(void)sortDisplayedItemsInSection:(long long)arg1 ;
-(id)_homeFuture;
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
-(id)performItemUpdateRequest:(id)arg1 ;
-(void)user:(id)arg1 didUpdateAssistantAccessControl:(id)arg2 forHome:(id)arg3 ;
-(void)disableExternalUpdatesWithReason:(id)arg1 ;
-(void)endDisableExternalUpdatesWithReason:(id)arg1 ;
-(NSSet *)allDisplayedItems;
-(id)_itemsToHideInSet:(id)arg1 ;
-(id)_titleForSectionWithIdentifier:(id)arg1 ;
-(id)_sectionIdentifierForItem:(id)arg1 ;
-(void)_willUpdateSections;
-(void)home:(id)arg1 didUpdateStateForOutgoingInvitations:(id)arg2 ;
-(void)homeDidUpdateName:(id)arg1 ;
-(void)home:(id)arg1 didAddAccessory:(id)arg2 ;
-(void)home:(id)arg1 didRemoveAccessory:(id)arg2 ;
-(void)home:(id)arg1 didAddUser:(id)arg2 ;
-(void)home:(id)arg1 didRemoveUser:(id)arg2 ;
-(void)home:(id)arg1 didUpdateRoom:(id)arg2 forAccessory:(id)arg3 ;
-(void)home:(id)arg1 didAddRoom:(id)arg2 ;
-(void)home:(id)arg1 didRemoveRoom:(id)arg2 ;
-(void)home:(id)arg1 didUpdateNameForRoom:(id)arg2 ;
-(void)home:(id)arg1 didAddZone:(id)arg2 ;
-(void)home:(id)arg1 didRemoveZone:(id)arg2 ;
-(void)home:(id)arg1 didUpdateNameForZone:(id)arg2 ;
-(void)home:(id)arg1 didAddRoom:(id)arg2 toZone:(id)arg3 ;
-(void)home:(id)arg1 didRemoveRoom:(id)arg2 fromZone:(id)arg3 ;
-(void)home:(id)arg1 didAddServiceGroup:(id)arg2 ;
-(void)home:(id)arg1 didRemoveServiceGroup:(id)arg2 ;
-(void)home:(id)arg1 didUpdateNameForServiceGroup:(id)arg2 ;
-(void)home:(id)arg1 didAddService:(id)arg2 toServiceGroup:(id)arg3 ;
-(void)home:(id)arg1 didRemoveService:(id)arg2 fromServiceGroup:(id)arg3 ;
-(void)home:(id)arg1 didAddActionSet:(id)arg2 ;
-(void)home:(id)arg1 didRemoveActionSet:(id)arg2 ;
-(void)home:(id)arg1 didUpdateNameForActionSet:(id)arg2 ;
-(void)home:(id)arg1 didUpdateActionsForActionSet:(id)arg2 ;
-(void)home:(id)arg1 didAddTrigger:(id)arg2 ;
-(void)home:(id)arg1 didRemoveTrigger:(id)arg2 ;
-(void)home:(id)arg1 didUpdateNameForTrigger:(id)arg2 ;
-(void)home:(id)arg1 didUpdateTrigger:(id)arg2 ;
-(void)home:(id)arg1 didUnblockAccessory:(id)arg2 ;
-(void)home:(id)arg1 didEncounterError:(id)arg2 forAccessory:(id)arg3 ;
-(void)home:(id)arg1 didAddResidentDevice:(id)arg2 ;
-(void)home:(id)arg1 didRemoveResidentDevice:(id)arg2 ;
-(void)home:(id)arg1 didUpdateAccesoryInvitationsForUser:(id)arg2 ;
-(void)homeDidUpdateApplicationData:(id)arg1 ;
-(void)home:(id)arg1 didUpdateApplicationDataForRoom:(id)arg2 ;
-(void)home:(id)arg1 didUpdateApplicationDataForServiceGroup:(id)arg2 ;
-(void)home:(id)arg1 didUpdateApplicationDataForActionSet:(id)arg2 ;
-(void)home:(id)arg1 didUpdateAccessControlForUser:(id)arg2 ;
-(void)home:(id)arg1 didAddMediaSystem:(id)arg2 ;
-(void)home:(id)arg1 didRemoveMediaSystem:(id)arg2 ;
-(void)home:(id)arg1 didUpdateReprovisionStateForAccessory:(id)arg2 ;
-(id)titleForSection:(unsigned long long)arg1 ;
-(void)homeManager:(id)arg1 didRemoveHome:(id)arg2 ;
-(void)homeManagerDidUpdatePrimaryHome:(id)arg1 ;
-(void)homeManager:(id)arg1 didAddHome:(id)arg2 ;
-(void)homeKitDispatcher:(id)arg1 manager:(id)arg2 didChangeHome:(id)arg3 ;
-(void)homeManagerDidFinishInitialDatabaseLoad:(id)arg1 ;
-(void)homeManagerDidFinishUnknownChange:(id)arg1 ;
-(void)homeManager:(id)arg1 didUpdateStateForIncomingInvitations:(id)arg2 ;
-(void)homeManagerDidUpdateCurrentHome:(id)arg1 ;
-(void)homeManagerDidUpdateDataSyncState:(id)arg1 ;
-(void)homeManager:(id)arg1 residentProvisioningStatusChanged:(unsigned long long)arg2 ;
-(void)homeManager:(id)arg1 didUpdateAccessAllowedWhenLocked:(BOOL)arg2 ;
-(void)homeManagerWillStartBatchNotifications:(id)arg1 ;
-(void)homeManagerDidEndBatchNotifications:(id)arg1 ;
-(id)reloadAndUpdateAllItemsFromSenderSelector:(SEL)arg1 ;
-(void)_registerForExternalUpdates;
-(void)_unregisterForExternalUpdates;
-(NAFuture *)firstFastUpdateFuture;
-(void)home:(id)arg1 willReadValuesForCharacteristics:(id)arg2 ;
-(void)home:(id)arg1 willWriteValuesForCharacteristics:(id)arg2 ;
-(void)home:(id)arg1 willExecuteActionSets:(id)arg2 ;
-(void)home:(id)arg1 didReadValuesForCharacteristics:(id)arg2 failedCharacteristics:(id)arg3 ;
-(void)home:(id)arg1 didWriteValuesForCharacteristics:(id)arg2 failedCharacteristics:(id)arg3 ;
-(void)home:(id)arg1 didExecuteActionSets:(id)arg2 failedActionSets:(id)arg3 ;
-(void)home:(id)arg1 remoteAccessStateDidChange:(unsigned long long)arg2 ;
-(void)home:(id)arg1 didUpdateMediaSystem:(id)arg2 ;
-(void)accessoryDidUpdateName:(id)arg1 ;
-(void)accessory:(id)arg1 didUpdateNameForService:(id)arg2 ;
-(void)accessory:(id)arg1 didUpdateAssociatedServiceTypeForService:(id)arg2 ;
-(void)accessoryDidUpdateServices:(id)arg1 ;
-(void)accessory:(id)arg1 didAddProfile:(id)arg2 ;
-(void)accessory:(id)arg1 didRemoveProfile:(id)arg2 ;
-(void)accessoryDidUpdateReachability:(id)arg1 ;
-(void)accessory:(id)arg1 service:(id)arg2 didUpdateValueForCharacteristic:(id)arg3 ;
-(void)accessory:(id)arg1 didUpdateFirmwareVersion:(id)arg2 ;
-(void)accessoryDidUpdateApplicationData:(id)arg1 ;
-(void)accessoryDidUpdateAdditionalSetupRequired:(id)arg1 ;
-(void)accessory:(id)arg1 didUpdateApplicationDataForService:(id)arg2 ;
-(void)accessory:(id)arg1 didUpdateHasAuthorizationDataForCharacteristic:(id)arg2 ;
-(void)accessory:(id)arg1 didUpdateBundleID:(id)arg2 ;
-(void)accessory:(id)arg1 didUpdateStoreID:(id)arg2 ;
-(void)accessory:(id)arg1 didUpdateFirmwareUpdateAvailable:(BOOL)arg2 ;
-(void)accessory:(id)arg1 didUpdateSoftwareVersion:(id)arg2 ;
-(void)accessory:(id)arg1 didUpdateLoggedInAccount:(id)arg2 ;
-(void)accessoryDidUpdateControllable:(id)arg1 ;
-(void)accessory:(id)arg1 didUpdateConfiguredNameForService:(id)arg2 ;
-(void)accessory:(id)arg1 didUpdateDefaultNameForService:(id)arg2 ;
-(void)accessory:(id)arg1 didUpdateServiceSubtypeForService:(id)arg2 ;
-(void)accessory:(id)arg1 didUpdateConfigurationStateForService:(id)arg2 ;
-(void)mediaObject:(id)arg1 didUpdateMediaSession:(id)arg2 ;
-(void)mediaObject:(id)arg1 didUpdateSettings:(id)arg2 ;
-(void)mediaSystem:(id)arg1 didUpdateName:(id)arg2 ;
-(void)mediaSystem:(id)arg1 didUpdateComponents:(id)arg2 ;
-(void)beginSuppressingUpdatesForCharacteristics:(id)arg1 withReason:(id)arg2 ;
-(void)endSuppressingUpdatesForCharacteristicsWithReason:(id)arg1 updateAffectedItems:(BOOL)arg2 ;
-(id)footerTitleForSection:(unsigned long long)arg1 ;
-(id)_itemsToUpdateForModifiedCharacteristics:(id)arg1 includeSuppressedCharacteristics:(BOOL)arg2 ;
@end

