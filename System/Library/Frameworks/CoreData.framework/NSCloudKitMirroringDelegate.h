/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:07 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSPersistentStoreMirroringDelegate.h>

@protocol OS_dispatch_semaphore, OS_dispatch_queue;
@class NSCloudKitMirroringDelegateOptions, NSString, NSObject, CKRecordZone, CKRecordZoneSubscription, CKContainer, CKDatabase, NSError, NSSQLCore, NSPersistentStoreCoordinator, NSPersistentStore;

@interface NSCloudKitMirroringDelegate : NSObject <NSPersistentStoreMirroringDelegate> {

	NSCloudKitMirroringDelegateOptions* _options;
	NSString* _ckDatabaseName;
	NSObject*<OS_dispatch_semaphore> _cloudKitQueueSemaphore;
	NSObject*<OS_dispatch_queue> _cloudKitQueue;
	CKRecordZone* _zone;
	CKRecordZoneSubscription* _zoneSubscription;
	CKContainer* _container;
	CKDatabase* _database;
	NSError* _lastInitializationError;
	BOOL _hadObservedStore;
	BOOL _successfullyInitialized;
	NSSQLCore* _observedStore;
	NSPersistentStoreCoordinator* _observedCoordinator;

}

@property (nonatomic,copy,readonly) NSCloudKitMirroringDelegateOptions * options;                      //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) NSString * ckDatabaseName;                                              //@synthesize ckDatabaseName=_ckDatabaseName - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_semaphore> cloudKitQueueSemaphore;                //@synthesize cloudKitQueueSemaphore=_cloudKitQueueSemaphore - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> cloudKitQueue;                             //@synthesize cloudKitQueue=_cloudKitQueue - In the implementation block
@property (nonatomic,readonly) CKRecordZone * zone;                                                    //@synthesize zone=_zone - In the implementation block
@property (nonatomic,readonly) CKRecordZoneSubscription * zoneSubscription;                            //@synthesize zoneSubscription=_zoneSubscription - In the implementation block
@property (nonatomic,readonly) CKContainer * container;                                                //@synthesize container=_container - In the implementation block
@property (nonatomic,readonly) CKDatabase * database;                                                  //@synthesize database=_database - In the implementation block
@property (nonatomic,readonly) NSError * lastInitializationError;                                      //@synthesize lastInitializationError=_lastInitializationError - In the implementation block
@property (nonatomic,__weak,readonly) NSPersistentStore * observedStore;                               //@synthesize observedStore=_observedStore - In the implementation block
@property (nonatomic,__weak,readonly) NSPersistentStoreCoordinator * observedCoordinator;              //@synthesize observedCoordinator=_observedCoordinator - In the implementation block
@property (nonatomic,readonly) BOOL hadObservedStore;                                                  //@synthesize hadObservedStore=_hadObservedStore - In the implementation block
@property (nonatomic,readonly) BOOL successfullyInitialized;                                           //@synthesize successfullyInitialized=_successfullyInitialized - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(BOOL)validateManagedObjectModel:(id)arg1 forUseWithStoreWithDescription:(id)arg2 error:(id*)arg3 ;
-(void)persistentStoreCoordinator:(id)arg1 didSuccessfullyAddPersistentStore:(id)arg2 withDescription:(id)arg3 ;
-(id)executeMirroringRequest:(id)arg1 error:(id*)arg2 ;
-(void)observeChangesForStore:(id)arg1 inPersistentStoreCoordinator:(id)arg2 ;
-(void)_setUpCloudKitIntegration;
-(void)_beginWatchingForChanges;
-(BOOL)recoverFromError:(id)arg1 ;
-(void)ckAccountChanged:(id)arg1 ;
-(void)ckIdentityChanged:(id)arg1 ;
-(void)_openTransactionWithLabel:(id)arg1 andExecuteWorkBlock:(/*^block*/id)arg2 ;
-(void)resetAfterError:(id)arg1 andKeepContainer:(BOOL)arg2 ;
-(void)coordinatorWillRemoveStore:(id)arg1 ;
-(void)storesDidChange:(id)arg1 ;
-(BOOL)wipeCachedZoneMetadataFromStore:(id)arg1 error:(id*)arg2 ;
-(void)resetAfterError:(id)arg1 ;
-(void)_performImportWithRequest:(id)arg1 ;
-(void)_performExportWithRequest:(id)arg1 ;
-(void)_performResetZoneRequest:(id)arg1 ;
-(void)_requestEncounteredUnrecoverableError:(id)arg1 withResult:(id)arg2 ;
-(void)_requestAbortedNotInitialized:(id)arg1 ;
-(BOOL)wipeCloudMetadataFromMirroredObjects:(id*)arg1 ;
-(BOOL)_recoverFromPartialError:(id)arg1 withMonitor:(id)arg2 ;
-(BOOL)_recoverFromError:(id)arg1 withMonitor:(id)arg2 ;
-(void)postWillResetNotificationForError:(id)arg1 ;
-(BOOL)wipeAllCloudDataAndPurgeHistoryToken:(BOOL)arg1 error:(id*)arg2 ;
-(void)postDidResetNotificationForError:(id)arg1 ;
-(BOOL)wipeCachedIdentityInformationFromStore:(id)arg1 error:(id*)arg2 ;
-(id)resetNotificationUserInfoForError:(id)arg1 ;
-(BOOL)isPrivateContextSave:(id)arg1 ;
-(BOOL)pruneExternalAssetFileAtURL:(id)arg1 error:(id*)arg2 ;
-(void)checkForNewChanges;
-(void)fetchChangesAndUpdateObservedStore;
-(void)logMessage:(id)arg1 ;
-(void)_setObservedStore:(id)arg1 observedCoordinator:(id)arg2 ;
-(void)_setDatabase:(id)arg1 ;
-(void)_setZone:(id)arg1 ;
-(NSString *)ckDatabaseName;
-(NSObject*<OS_dispatch_semaphore>)cloudKitQueueSemaphore;
-(NSObject*<OS_dispatch_queue>)cloudKitQueue;
-(CKRecordZoneSubscription *)zoneSubscription;
-(NSError *)lastInitializationError;
-(NSPersistentStore *)observedStore;
-(NSPersistentStoreCoordinator *)observedCoordinator;
-(BOOL)successfullyInitialized;
-(BOOL)hadObservedStore;
-(void)tearDown;
-(void)dealloc;
-(CKRecordZone *)zone;
-(CKContainer *)container;
-(NSCloudKitMirroringDelegateOptions *)options;
-(id)initWithOptions:(id)arg1 ;
-(void)_setContainer:(id)arg1 ;
-(CKDatabase *)database;
@end

