/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:56 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/APSConnectionDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSPersistentStore, NSPersistentStoreCoordinator, NSString, CKContainer, CKRecordZone, CKRecordZoneSubscription, CKDatabase, NSObject, APSConnection, NSError, NSURL;

@interface AXCloudKitHelper : NSObject <APSConnectionDelegate> {

	NSPersistentStore* _observedStore;
	NSPersistentStoreCoordinator* _observedCoordinator;
	NSString* _containerIdentifier;
	CKContainer* _container;
	CKRecordZone* _zone;
	CKRecordZoneSubscription* _zoneSubscription;
	CKDatabase* _database;
	NSObject*<OS_dispatch_queue> _cloudkitQueue;
	NSObject*<OS_dispatch_semaphore> _cloudKitQueueSemaphore;
	APSConnection* _apsConnection;
	NSError* _lastInitializationError;
	NSURL* _largeBlobDirectoryURL;

}

@property (nonatomic,__weak,readonly) NSPersistentStore * observedStore;                             //@synthesize observedStore=_observedStore - In the implementation block
@property (nonatomic,readonly) NSPersistentStoreCoordinator * observedCoordinator;                   //@synthesize observedCoordinator=_observedCoordinator - In the implementation block
@property (nonatomic,readonly) NSString * containerIdentifier;                                       //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (nonatomic,readonly) CKContainer * container;                                              //@synthesize container=_container - In the implementation block
@property (nonatomic,readonly) CKRecordZone * zone;                                                  //@synthesize zone=_zone - In the implementation block
@property (nonatomic,readonly) CKRecordZoneSubscription * zoneSubscription;                          //@synthesize zoneSubscription=_zoneSubscription - In the implementation block
@property (nonatomic,readonly) CKDatabase * database;                                                //@synthesize database=_database - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> cloudkitQueue;                           //@synthesize cloudkitQueue=_cloudkitQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_semaphore> cloudKitQueueSemaphore;              //@synthesize cloudKitQueueSemaphore=_cloudKitQueueSemaphore - In the implementation block
@property (nonatomic,readonly) APSConnection * apsConnection;                                        //@synthesize apsConnection=_apsConnection - In the implementation block
@property (nonatomic,readonly) NSError * lastInitializationError;                                    //@synthesize lastInitializationError=_lastInitializationError - In the implementation block
@property (nonatomic,readonly) NSURL * largeBlobDirectoryURL;                                        //@synthesize largeBlobDirectoryURL=_largeBlobDirectoryURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)shouldExportManagedObject:(id)arg1 ;
-(void)managedObjectContextDidSave:(id)arg1 ;
-(void)observeChangesForStore:(id)arg1 inPersistentStoreCoordinator:(id)arg2 ;
-(void)_beginWatchingForChanges;
-(void)_openTransactionWithLabel:(id)arg1 andExecuteWorkBlock:(/*^block*/id)arg2 ;
-(BOOL)pruneExternalAssetFileAtURL:(id)arg1 error:(id*)arg2 ;
-(void)fetchChangesAndUpdateObservedStore;
-(void)logMessage:(id)arg1 ;
-(void)_setObservedStore:(id)arg1 observedCoordinator:(id)arg2 ;
-(void)_setDatabase:(id)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)cloudKitQueueSemaphore;
-(CKRecordZoneSubscription *)zoneSubscription;
-(NSError *)lastInitializationError;
-(NSPersistentStore *)observedStore;
-(NSPersistentStoreCoordinator *)observedCoordinator;
-(BOOL)_checkAccountStatus:(id*)arg1 ;
-(BOOL)_createZoneIfNecessary:(id*)arg1 ;
-(BOOL)_setupZoneSubscriptionIfNecessary:(id*)arg1 ;
-(BOOL)_createSchemaIfNecessary:(id*)arg1 ;
-(BOOL)_initializeAssetStorageURLError:(id*)arg1 ;
-(NSURL *)largeBlobDirectoryURL;
-(id)init;
-(void)dealloc;
-(CKRecordZone *)zone;
-(CKContainer *)container;
-(void)_setContainer:(id)arg1 ;
-(void)_initializeCloudkitForObservedStore;
-(BOOL)_setupPushConnection:(id*)arg1 ;
-(id)createCKRecordFromObject:(id)arg1 withExternalAssetFile:(BOOL*)arg2 ;
-(id)_writeLargeData:(id)arg1 forUID:(id)arg2 error:(id*)arg3 ;
-(void)processAccumulatedChangesForServerChangeToken:(id)arg1 withAccumulatedUpdates:(id)arg2 andDeletes:(id)arg3 inTransaction:(id)arg4 ;
-(void)_setApsConnection:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)cloudkitQueue;
-(CKDatabase *)database;
-(NSString *)containerIdentifier;
-(APSConnection *)apsConnection;
-(id)initWithContainerIdentifier:(id)arg1 ;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4 ;
-(void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3 ;
@end

