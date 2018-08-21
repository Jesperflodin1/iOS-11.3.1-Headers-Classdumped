/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:38 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class HDProfile, NSObject, HDDatabaseValueCache;

@interface HDSourceManager : NSObject {

	HDProfile* _profile;
	NSObject*<OS_dispatch_queue> _queue;
	HDDatabaseValueCache* _localSourceEntityCache;
	HDDatabaseValueCache* _clientSourceCache;

}
+(BOOL)_isLocalDeviceBundleIdentifier:(id)arg1 ;
+(BOOL)_isSpartanDeviceBundleIdentifier:(id)arg1 ;
+(id)_applicationNameForBundleIdentifier:(id)arg1 ;
-(id)init;
-(id)initWithProfile:(id)arg1 ;
-(BOOL)_deleteSourcesWithUUIDs:(id)arg1 localSourceEntityCacheKey:(id)arg2 deleteSamples:(BOOL)arg3 database:(id)arg4 error:(id*)arg5 ;
-(id)clientSourceForSourceEntity:(id)arg1 error:(id*)arg2 ;
-(id)clientSourceForPersistentID:(id)arg1 error:(id*)arg2 ;
-(id)localSourceForBundleIdentifier:(id)arg1 copyIfNecessary:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)createSourcesWithCodables:(id)arg1 provenance:(long long)arg2 error:(id*)arg3 ;
-(BOOL)setLocalDeviceSourceUUID:(id)arg1 bundleIdentifier:(id)arg2 error:(id*)arg3 ;
-(id)localSourceForBundleIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)allSourcesForBundleIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)updateCurrentDeviceNameWithError:(id*)arg1 ;
-(id)clientSourceForBundleIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)allSourcesWithError:(id*)arg1 ;
-(id)localSourceForSourceID:(id)arg1 copyIfNecessary:(BOOL)arg2 error:(id*)arg3 ;
-(id)localDeviceSourceWithError:(id*)arg1 ;
-(void)_applicationsUninstalledNotification:(id)arg1 ;
-(id)_createSourceEntityForLocalDeviceWithError:(id*)arg1 ;
-(id)_sourceForBundleIdentifier:(id)arg1 createSourceBlock:(/*^block*/id)arg2 modifySourceBlock:(/*^block*/id)arg3 error:(id*)arg4 ;
-(id)_predicateForSourceBundleIdentifier:(id)arg1 localOnly:(BOOL)arg2 ;
-(id)_createCopyOfFirstSourceWithPredicate:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
-(id)_getNameForBundleIdentifier:(id)arg1 isCurrentDevice:(BOOL)arg2 ;
-(id)_createSourceEntityForBundleIdentifier:(id)arg1 name:(id)arg2 options:(unsigned long long)arg3 isCurrentDevice:(BOOL)arg4 productType:(id)arg5 error:(id*)arg6 ;
-(id)sourceForApplicationIdentifier:(id)arg1 createOrUpdateIfNecessary:(BOOL)arg2 entitlements:(id)arg3 name:(id)arg4 error:(id*)arg5 ;
-(id)healthAppSourceWithError:(id*)arg1 ;
-(unsigned long long)_sourceOptionsForApplicationEntitlements:(id)arg1 ;
-(id)sourceEntityForClientSource:(id)arg1 createOrUpdateIfNecessary:(BOOL)arg2 error:(id*)arg3 ;
-(id)_createSourceEntityForSpartanDeviceWithError:(id*)arg1 ;
-(id)clientSourcesForSourceIDs:(id)arg1 error:(id*)arg2 ;
-(id)_fetchClientSourceForPersistentID:(id)arg1 error:(id*)arg2 ;
-(id)_clientSourcesWithPredicate:(id)arg1 error:(id*)arg2 ;
-(BOOL)_createSourcesWithCodables:(id)arg1 provenance:(long long)arg2 sourceUUIDSToDelete:(id)arg3 deleteSamples:(BOOL)arg4 database:(id)arg5 error:(id*)arg6 ;
-(id)sourceForCodableSource:(id)arg1 provenance:(long long)arg2 createIfNecessary:(BOOL)arg3 isDeleted:(BOOL*)arg4 error:(id*)arg5 ;
-(id)_sourceUUIDsForBundleIdentifier:(id)arg1 error:(id*)arg2 ;
-(BOOL)deleteSourceWithBundleIdentifier:(id)arg1 error:(id*)arg2 ;
-(void)_deleteSourceIfNoSampleFoundWithBundleIdentifier:(id)arg1 ;
-(id)sourceForClinicalAccountIdentifier:(id)arg1 provenance:(long long)arg2 createIfNecessary:(BOOL)arg3 error:(id*)arg4 ;
-(id)sourceForClient:(id)arg1 error:(id*)arg2 ;
-(id)createOrUpdateSourceForClient:(id)arg1 error:(id*)arg2 ;
-(id)sourceForAppleDeviceWithUUID:(id)arg1 identifier:(id)arg2 name:(id)arg3 productType:(id)arg4 createIfNecessary:(BOOL)arg5 error:(id*)arg6 ;
-(id)clientSourceForSourceEntities:(id)arg1 error:(id*)arg2 ;
-(id)sourceUUIDForBundleIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)clientSourceForUUID:(id)arg1 error:(id*)arg2 ;
-(id)allWatchSourcesWithError:(id*)arg1 ;
-(id)_sourcePersistentIDsFromSourceEntities:(id)arg1 ;
@end

