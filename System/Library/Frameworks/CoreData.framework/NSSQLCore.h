/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:07 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSPersistentStore.h>
#import <libobjc.A.dylib/NSFilePresenter.h>

@class NSURL, NSOperationQueue, NSSet, NSSQLModel, NSSQLiteAdapter, NSSQLiteConnection, NSSQLCoreDispatchManager, NSGenerationalRowCache, NSMutableDictionary, NSString, NSDictionary, NSData;

@interface NSSQLCore : NSPersistentStore <NSFilePresenter> {

	NSSQLModel* _model;
	NSSQLiteAdapter* _adapter;
	NSSQLiteConnection* _schemaValidationConnection;
	NSSQLCoreDispatchManager* _dispatchManager;
	NSGenerationalRowCache* _generationalRowCache;
	id _observer;
	int _sqlCoreStateLock;
	NSMutableDictionary* _storeMetadata;
	NSString* _externalDataReferencesDirectory;
	NSString* _externalDataLinksDirectory;
	int _transactionInMemorySequence;
	BOOL _metadataIsClean;
	struct {
		unsigned useSyntaxColoredLogging : 1;
		unsigned checkedExternalReferences : 1;
		unsigned fileProtectionType : 3;
		unsigned notifyFOKChanges : 1;
		unsigned initializationComplete : 1;
		unsigned connectionsAreLocal : 1;
		unsigned isXPCDelegate : 1;
		unsigned queryGenerationInitializationFailed : 1;
		unsigned persistentHistoryTracking : 1;
		unsigned hasAncillaryModels : 1;
		unsigned createdAncillaryModelTables : 1;
		unsigned _RESERVED : 20;
	}  _sqlCoreFlags;
	NSSQLiteConnection* _queryGenerationTrackingConnection;
	NSDictionary* _ancillaryModels;
	NSDictionary* _ancillarySQLModels;
	NSDictionary* _historyTrackingOptions;
	NSData* _dbKey;

}

@property (nonatomic,readonly) NSSQLModel * model; 
@property (nonatomic,readonly) BOOL isInitialized; 
@property (nonatomic,readonly) NSDictionary * ancillaryModels;                           //@synthesize ancillaryModels=_ancillaryModels - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSURL * presentedItemURL; 
@property (retain,readonly) NSOperationQueue * presentedItemOperationQueue; 
@property (copy,readonly) NSURL * primaryPresentedItemURL; 
@property (readonly) NSSet * observedPresentedItemUbiquityAttributes; 
+(int)debugDefault;
+(void)setDebugDefault:(int)arg1 ;
+(BOOL)coloredLoggingDefault;
+(BOOL)useConcurrentFetching;
+(id)metadataForPersistentStoreWithURL:(id)arg1 error:(id*)arg2 ;
+(id)metadataForPersistentStoreWithURL:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(BOOL)setMetadata:(id)arg1 forPersistentStoreWithURL:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
+(BOOL)setMetadata:(id)arg1 forPersistentStoreWithURL:(id)arg2 error:(id*)arg3 ;
+(Class)migrationManagerClass;
+(id)cachedModelForPersistentStoreWithURL:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(Class)rowCacheClass;
+(BOOL)_replacePersistentStoreAtURL:(id)arg1 destinationOptions:(id)arg2 withPersistentStoreFromURL:(id)arg3 sourceOptions:(id)arg4 error:(id*)arg5 ;
+(BOOL)_destroyPersistentStoreAtURL:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)_figureOutWhereExternalReferencesEndedUpRelativeTo:(id)arg1 ;
+(id)databaseKeyFromOptionsDictionary:(id)arg1 ;
+(BOOL)sanityCheckFileAtURL:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(void)setColoredLoggingDefault:(BOOL)arg1 ;
+(void)initialize;
-(id)initWithPersistentStoreCoordinator:(id)arg1 configurationName:(id)arg2 URL:(id)arg3 options:(id)arg4 ;
-(void)_useModel:(id)arg1 ;
-(id)adapter;
-(Class)objectIDFactoryForSQLEntity:(id)arg1 ;
-(BOOL)load:(id*)arg1 ;
-(void)removeRowCacheForGenerationWithIdentifier:(id)arg1 ;
-(id)rowCacheForGeneration:(id)arg1 ;
-(id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(void)willRemoveFromPersistentStoreCoordinator:(id)arg1 ;
-(BOOL)supportsGenerationalQuerying;
-(id)currentQueryGeneration;
-(void)freeQueryGenerationWithIdentifier:(id)arg1 ;
-(id)reopenQueryGenerationWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1 generation:(id)arg2 ;
-(void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1 generation:(id)arg2 ;
-(id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4 ;
-(Class)objectIDFactoryForEntity:(id)arg1 ;
-(id)entityForEntityDescription:(id)arg1 ;
-(NSScalarObjectID*)newObjectIDForEntity:(id)arg1 pk:(long long)arg2 ;
-(Class)_objectIDClass;
-(id)_storeInfoForEntityDescription:(id)arg1 ;
-(id)_newObjectIDForEntityDescription:(id)arg1 pk:(long long)arg2 ;
-(NSScalarObjectID*)newForeignKeyID:(long long)arg1 entity:(id)arg2 ;
-(id)_newRowDataForXPCFetch:(id)arg1 variables:(id)arg2 context:(id)arg3 error:(id*)arg4 ;
-(void)_cacheRows:(id)arg1 ;
-(void)_uncacheRows:(id)arg1 ;
-(id)newObjectIDSetsForToManyPrefetchingRequest:(id)arg1 andSourceObjectIDs:(id)arg2 orderColumnName:(id)arg3 ;
-(id)fetchOutstandingImportOperations;
-(BOOL)hasHistoryTracking;
-(BOOL)_aContextSomewhereCaresAboutGenerations;
-(id)externalDataReferencesDirectory;
-(void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1 ;
-(void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1 ;
-(id)currentChangeToken;
-(id)_newOrderedRelationshipInformationForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4 ;
-(void)setExclusiveLockingMode:(BOOL)arg1 ;
-(int)fileProtectionLevel;
-(BOOL)_unload:(id*)arg1 ;
-(NSDictionary *)ancillaryModels;
-(BOOL)_prepareForExecuteRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(BOOL)supportsConcurrentRequestHandling;
-(id)_externalDataLinksDirectory;
-(void)_disconnectAllConnections;
-(void)_ensureDatabaseMatchesModel;
-(void)setConnectionsAreLocal:(BOOL)arg1 ;
-(void)setCreatedAncillaryModelTables:(BOOL)arg1 ;
-(void)_checkAndRepairCorrelationTables:(BOOL)arg1 storeVersionNumber:(id)arg2 usingConnection:(id)arg3 ;
-(id)_dissectCorrelationTableCreationSQL:(id)arg1 ;
-(id)_collectSkewedComponents:(id*)arg1 usingConnection:(id)arg2 ;
-(void)_repairDatabaseCorrelationTables:(id)arg1 brokenHashModel:(id)arg2 storeVersionNumber:(id)arg3 recurse:(BOOL)arg4 usingConnection:(id)arg5 ;
-(id)fetchTableNames;
-(BOOL)_rebuildTriggerSchemaUsingConnection:(id)arg1 recomputeValues:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)_updateToVersion640PrimaryKeyTableUsingStatements:(id)arg1 connection:(id)arg2 ;
-(void)_fixPrimaryKeyTableFromEntitiesAndJoinsUsingConnection:(id)arg1 ;
-(void)_fixPrimaryKeyTableFromEntitiesUsingConnection:(id)arg1 ;
-(id)schemaValidationConnection;
-(void)_doBasicTableNameCheckUsingConnection:(id)arg1 ;
-(BOOL)_checkAndRepairSchemaUsingConnection:(id)arg1 ;
-(void)_doUnboundedGrowthCheckAndConstraintUsingConnection:(id)arg1 ;
-(void)_cacheModelIfNecessaryUsingConnection:(id)arg1 ;
-(BOOL)_checkAndRepairTriggersUsingConnection:(id)arg1 ;
-(void)_checkAndRepairHistoryTrackingUsingConnection:(id)arg1 ;
-(void)_checkAndRepairCloudKitMetadata:(id)arg1 ;
-(BOOL)_fixPrimaryKeyTablesUsingConnection:(id)arg1 ;
-(void)_setMetadata:(id)arg1 clean:(BOOL)arg2 ;
-(void)dispatchRequest:(id)arg1 withRetries:(long long)arg2 ;
-(id)_loadAndSetMetadata;
-(id)_loadAndSetMetadataReadOnly;
-(id)rowCacheForContext:(id)arg1 ;
-(id)_newValuesForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4 ;
-(id)entityForFetchRequest:(id)arg1 ;
-(id)entityForObject:(id)arg1 ;
-(id)processFetchRequest:(id)arg1 inContext:(id)arg2 ;
-(id)processCountRequest:(id)arg1 inContext:(id)arg2 ;
-(id)processSaveChanges:(id)arg1 forContext:(id)arg2 ;
-(id)processRefreshObjects:(id)arg1 inContext:(id)arg2 ;
-(id)processBatchUpdate:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(id)processBatchDelete:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(id)processChangeRequest:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(id)processCloudMetadataRequest:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(id)processCloudKitMirroringRequest:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(id)externalDataLinksDirectory;
-(id)cachedModelWithError:(id*)arg1 ;
-(BOOL)supportsComplexFeatures;
-(int)_registerNewQueryGenerationSnapshot:(id)arg1 pointerResponsibility:(unsigned long long)arg2 ;
-(void)_initializeQueryGenerationTrackingConnection;
-(BOOL)isUbiquitized;
-(void)resetExternalDataReferencesDirectories;
-(id)newFetchUUIDSForSubentitiesRootedAt:(id)arg1 ;
-(void)dropUbiquityTables;
-(id)fetchUbiquityKnowledgeVector;
-(void)updateUbiquityKnowledgeVector:(id)arg1 ;
-(void)updateUbiquityKnowledgeForPeerWithID:(id)arg1 andTransactionNumber:(id)arg2 ;
-(void)replaceUbiquityKnowledgeVector:(id)arg1 ;
-(id)allPeerRanges;
-(void)addPeerRange:(id)arg1 ;
-(void)addPeerRangeForPeerID:(id)arg1 entityName:(id)arg2 rangeStart:(id)arg3 rangeEnd:(id)arg4 peerRangeStart:(id)arg5 peerRangeEnd:(id)arg6 ;
-(id)createMapOfEntityNameToPKMaxForEntitiesFromUBRangeTable:(id)arg1 ;
-(id)createMapOfEntityNameToPKMaxForEntitiesFromPKTable:(id)arg1 ;
-(id)createMapOfEntityNameToPKMaxForEntities:(id)arg1 ;
-(void)setUbiquityTableValue:(id)arg1 forKey:(id)arg2 ;
-(id)ubiquityTableKeysAndValues;
-(id)ubiquityTableValueForKey:(id)arg1 ;
-(void)configureUbiquityMetadataTable;
-(id)ancillarySQLModels;
-(Class)objectIDFactoryForPersistentHistoryEntity:(id)arg1 ;
-(id)metadataToWrite;
-(id)externalLocationForFileWithUUID:(id)arg1 ;
-(id)safeguardLocationForFileWithUUID:(id)arg1 ;
-(void)_updateAutoVacuumMetadataWithValues:(id)arg1 ;
-(id)dispatchManager;
-(id)connectionForMigration;
-(id)_debugConnection;
-(BOOL)shouldNotifyFOKChanges;
-(void)_purgeRowCache;
-(void)removeUbiquityMetadata;
-(id)_ubiquityDictionaryForAttribute:(id)arg1 onObject:(id)arg2 ;
-(void)recomputePrimaryKeyMaxForEntities:(id)arg1 ;
-(id)_newReservedKeysForEntities:(id)arg1 counts:(id)arg2 ;
-(id)_newObjectIDForEntity:(id)arg1 referenceData64:(unsigned long long)arg2 ;
-(void)writeImportOperation:(id)arg1 ;
-(void)evictResolvedRelationships:(id)arg1 ;
-(id)fetchMirroredRelationshipsWithRecordNames:(id)arg1 ;
-(id)fetchMirroredRelationshipsByCKRecordID:(id)arg1 ;
-(void)updateMirroredRelationshipsByAddingRelationships:(id)arg1 updatingRelationships:(id)arg2 andDeletingRelationships:(id)arg3 ;
-(void)purgeCloudKitMetadataTables;
-(BOOL)hasAncillaryModels;
-(BOOL)hasCreatedAncillaryModelTables;
-(void)_setHasAncillaryModels:(BOOL)arg1 ;
-(id)dbKey;
-(id)entitiesToInclude;
-(id)entitiesToExclude;
-(void)setMetadata:(id)arg1 ;
-(void)dealloc;
-(id)identifier;
-(id)type;
-(void)setIdentifier:(id)arg1 ;
-(void)setURL:(id)arg1 ;
-(NSSQLModel *)model;
-(NSURL *)presentedItemURL;
-(NSOperationQueue *)presentedItemOperationQueue;
-(void)accommodatePresentedItemDeletionWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)metadata;
-(id)obtainPermanentIDsForObjects:(id)arg1 error:(id*)arg2 ;
-(BOOL)loadMetadata:(id*)arg1 ;
-(BOOL)_refreshTriggerValues:(id*)arg1 ;
-(id)_allOrderKeysForDestination:(id)arg1 inRelationship:(id)arg2 error:(id*)arg3 ;
-(BOOL)isInitialized;
-(void)_setMetadata:(id)arg1 ;
@end

