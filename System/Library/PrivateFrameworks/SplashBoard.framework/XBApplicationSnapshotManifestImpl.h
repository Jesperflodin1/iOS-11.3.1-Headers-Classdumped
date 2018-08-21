/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:35 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SplashBoard/XBApplicationSnapshotManifest.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class XBSnapshotContainerIdentity, XBSnapshotManifestIdentity, NSMutableDictionary, NSFileManager, BSTimer, BSAtomicSignal, NSMutableArray, NSString;

@interface XBApplicationSnapshotManifestImpl : XBApplicationSnapshotManifest <NSSecureCoding, BSDescriptionProviding> {

	XBSnapshotContainerIdentity* _containerIdentity;
	XBSnapshotManifestIdentity* _identity;
	NSMutableDictionary* _snapshotGroupsByID;
	NSFileManager* _imageAccessFileManger;
	AQ _bytesWaitingToWriteOut;
	BSTimer* _reapingTimer;
	BSAtomicSignal* _invalidatedSignal;
	unsigned long long _clientCount;
	unsigned long long _pendingOperations;
	NSMutableArray* _archiveSchedulingQueue_synchronizeCompletions;
	BOOL _archiveSchedulingQueue_dirty;
	BOOL _archiveSchedulingQueue_scheduled;

}

@property (nonatomic,copy,readonly) XBSnapshotContainerIdentity * containerIdentity;              //@synthesize containerIdentity=_containerIdentity - In the implementation block
@property (nonatomic,copy,readonly) XBSnapshotManifestIdentity * identity;                        //@synthesize identity=_identity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isUnderMemoryPressure;
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(id)acquireManifestForContainerIdentity:(id)arg1 store:(id)arg2 creatingIfNecessary:(BOOL)arg3 ;
+(void)relinquishManifest:(id)arg1 ;
+(id)_snapshotPredicateForRequest:(id)arg1 ;
+(long long)_defaultOutputFormat;
+(void)_configureSnapshot:(id)arg1 withCompatibilityInfo:(id)arg2 forLaunchRequest:(id)arg3 ;
+(void)_queue_noteManifestInvalidated:(id)arg1 ;
+(void)_flushManifestQueue;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(XBSnapshotManifestIdentity *)identity;
-(id)bundleIdentifier;
-(void)_commonInit;
-(BOOL)_invalidate;
-(id)containerPath;
-(void)deleteSnapshotsMatchingPredicate:(id)arg1 ;
-(void)_synchronizeDataStoreWithCompletion:(/*^block*/id)arg1 ;
-(XBSnapshotContainerIdentity *)containerIdentity;
-(id)snapshotsForGroupID:(id)arg1 ;
-(id)snapshotsForGroupID:(id)arg1 matchingPredicate:(id)arg2 ;
-(id)snapshotsForGroupID:(id)arg1 fetchRequest:(id)arg2 ;
-(id)createSnapshotWithGroupID:(id)arg1 ;
-(id)createVariantForSnapshot:(id)arg1 withIdentifier:(id)arg2 ;
-(void)generateImageForSnapshot:(id)arg1 dataProvider:(id)arg2 writeToFile:(BOOL)arg3 didGenerateImage:(/*^block*/id)arg4 didSaveImage:(/*^block*/id)arg5 ;
-(void)saveSnapshot:(id)arg1 atPath:(id)arg2 withContext:(id)arg3 ;
-(void)deleteAllSnapshots;
-(void)deleteSnapshot:(id)arg1 ;
-(void)deleteSnapshots:(id)arg1 ;
-(void)deleteSnapshotsUsingPredicateBuilder:(/*^block*/id)arg1 ;
-(void)deleteSnapshotsForGroupID:(id)arg1 ;
-(void)deleteSnapshotsForGroupID:(id)arg1 matchingPredicate:(id)arg2 ;
-(void)deleteSnapshotsForGroupID:(id)arg1 predicateBuilder:(/*^block*/id)arg2 ;
-(void)beginSnapshotAccessTransaction:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_queue_handleMemoryPressure;
-(id)_initWithContainerIdentity:(id)arg1 ;
-(id)_allSnapshotGroups;
-(BOOL)_queue_validateWithContainerIdentity:(id)arg1 ;
-(void)_noteDirtied;
-(void)_scheduleArchivingIfNecessaryWithCompletion:(/*^block*/id)arg1 ;
-(void)_queue_incrementClientCount;
-(void)_queue_decrementClientCount;
-(id)_queue_snapshotsForGroupID:(id)arg1 matchingPredicate:(id)arg2 ;
-(id)_generatableSnapshotForGroupID:(id)arg1 generationContext:(id)arg2 ;
-(id)_createSnapshotWithGroupID:(id)arg1 newSnapshotCreator:(/*^block*/id)arg2 ;
-(void)_queue_reapExpiredAndInvalidSnapshots;
-(BOOL)_imageAccessQueue_saveData:(id)arg1 forSnapshot:(id)arg2 ;
-(void)_queue_accessSnapshotsWithBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_queue_deleteSnapshots:(id)arg1 ;
-(id)_queue_snapshotsMatchingPredicate:(id)arg1 ;
-(id)_queue_snapshotGroupForID:(id)arg1 creatingIfNeeded:(BOOL)arg2 ;
-(void)_queue_deletePaths:(id)arg1 ;
-(id)_createSnapshotWithGroupID:(id)arg1 generationContext:(id)arg2 ;
-(void)_queue_doArchiveWithCompletions:(id)arg1 ;
-(void)_queue_checkClientCount;
-(void)_queue_gatherPaths:(id)arg1 forSnapshot:(id)arg2 ;
-(void)_queue_reallyCheckClientCount;
-(id)_snapshotGroupsByID;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
@end

