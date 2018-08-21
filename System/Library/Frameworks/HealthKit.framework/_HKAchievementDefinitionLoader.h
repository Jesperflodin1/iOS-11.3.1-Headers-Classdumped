/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, _HKMobileAssetDownloadManager, NSArray, NSDictionary, NSMutableArray;

@interface _HKAchievementDefinitionLoader : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	int _externalDefinitionsChangedNotificationCount;
	_HKMobileAssetDownloadManager* _assetDownloadManager;
	NSArray* _allDefinitions;
	NSDictionary* _allDefinitionsByIdentifier;
	NSDictionary* _builtinDefinitionsByIdentifier;
	NSDictionary* _remoteDefinitionsByIdentifier;
	NSDictionary* _dynamicDefinitionsByIdentifier;
	NSDictionary* _injectedTestDefinitionsByIdentifier;
	NSDictionary* _resourcesPathURLsByIdentifier;
	NSDictionary* _stickersPathURLsByIdentifier;
	BOOL _didCompleteInitialLoad;
	NSMutableArray* _blocksToRunAfterInitialization;

}
+(id)sharedLoader;
+(void)initialize;
+(void)_loadLoadsRemoteDefinitions;
+(void)_getNewestAsset:(id*)arg1 olderAssets:(id*)arg2 installedOnly:(BOOL)arg3 fromAssets:(id)arg4 ;
+(id)_dynamicDefinitionLoader;
+(void)_getDefinitionsAsset:(id*)arg1 resourcesAssets:(id*)arg2 stickersAssets:(id*)arg3 installedOnly:(BOOL)arg4 fromCombinedAssets:(id)arg5 ;
+(id)_findAchievementAssetsToDownload:(id*)arg1 remove:(id*)arg2 installed:(id*)arg3 amongAssets:(id)arg4 definitions:(id)arg5 withFilterBlock:(/*^block*/id)arg6 ;
+(id)_definitionIdentifiersFromAssets:(id)arg1 ;
+(id)_assetsGroupedByDefinitionIdentifier:(id)arg1 ;
+(id)_loadAchievementDefinitionsFromAsset:(id)arg1 ;
+(id)_achievementAssetPathURLsByIdentifier:(id)arg1 ;
+(id)_perWorkoutTypeDefinitionIdentifiers;
+(id)_suppressedDefinitionIdentifiers;
+(id)_perMonthDefinitionIdentifiers;
+(void)_setLoadsRemoteDefinitions:(BOOL)arg1 ;
+(void)setDynamicDefinitionLoaderInitializationDisabled:(BOOL)arg1 ;
+(void)setDynamicAchievementDefinitionLoader:(id)arg1 ;
+(void)_setAndNotifyStickersAvailable:(BOOL)arg1 ;
+(BOOL)_loadsRemoteDefinitions;
+(void)setServerURL:(id)arg1 ;
+(id)serverURLWithError:(id*)arg1 ;
-(id)init;
-(void)_updateDynamicAchievementDefinitions;
-(void)_achievementAssetsDidChangeWithAssets:(id)arg1 postDarwinNotification:(BOOL)arg2 ;
-(id)_compatibilityVersionPredicate;
-(void)_queue_clearCaches;
-(id)_achievementDefinitionsByIdentifier;
-(BOOL)_queue_isDefinitionWithIdentifierRemotelyDefined:(id)arg1 ;
-(id)_definitionsPlistPredicate;
-(void)_queue_rebuildAllDefinitionsByIdentifierDictionary;
-(id)_allAchievementResourcesPredicate;
-(id)_allAchievementStickersPredicate;
-(void)_queue_updateStickerAvailabilityWithInstalledAssets:(id)arg1 downloadedAssets:(id)arg2 removedAssets:(id)arg3 usingFilter:(id)arg4 ;
-(void)_injectDefinitionsForTesting:(id)arg1 ;
-(void)_achievementDefinitionsChangedExternally;
-(id)allAchievementDefinitionIdentifiers;
-(id)stickersBundleForIdentifier:(id)arg1 ;
-(void)_dynamicAchievementDefinitionsChangedExternally;
-(void)_fetchCurrentAssetsWithCompletion:(/*^block*/id)arg1 ;
-(void)_clearInjectedDefinitionsForTesting;
-(BOOL)isDefinitionWithIdentifierLoaded:(id)arg1 ;
-(id)allRemotelyDefinedDefinitionIdentifiers;
-(id)achievementDefinitionForIdentifier:(id)arg1 ;
-(id)allAchievementDefinitions;
-(BOOL)isDefinitionWithIdentifierRemotelyDefined:(id)arg1 ;
-(id)resourcesBundleForIdentifier:(id)arg1 ;
-(void)updateAchievementStickersAssetsRemovingExpired:(BOOL)arg1 withFilter:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)updateAchievementResourcesAssetsRemovingExpired:(BOOL)arg1 withFilter:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)updateDefinitionsAssetWithCompletion:(/*^block*/id)arg1 ;
-(void)runBlockAfterInitialization:(/*^block*/id)arg1 ;
-(id)loadedRemotelyDefinedDefinitionIdentifiers;
-(id)dynamicDefinitions;
-(void)_clearCaches;
@end

