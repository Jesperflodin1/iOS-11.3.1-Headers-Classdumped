/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:39 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PHAWorkerConfiguration.h>

@protocol PHAAssetResourceDataLoading, OS_dispatch_queue;
@class PHAManager, PHAServiceCancelableOperation, NSObject, PHPhotoLibrary, NSURL, PHALibraryChangeListener, NSString;

@interface PHAWorker : NSObject <PHAWorkerConfiguration> {

	PHAManager* _photoAnalysisManager;
	BOOL _shutdownHasBeenCalled;
	BOOL _warmedUp;
	id<PHAAssetResourceDataLoading> _dataLoader;
	PHAServiceCancelableOperation* _currentOperation;
	NSObject*<OS_dispatch_queue> _userInitiatedRequestQueue;

}

@property (assign,getter=isWarmedUp,nonatomic) BOOL warmedUp;                           //@synthesize warmedUp=_warmedUp - In the implementation block
@property (nonatomic,retain) id<PHAAssetResourceDataLoading> dataLoader;                //@synthesize dataLoader=_dataLoader - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> userInitiatedRequestQueue;              //@synthesize userInitiatedRequestQueue=_userInitiatedRequestQueue - In the implementation block
@property (readonly) PHPhotoLibrary * photoLibrary; 
@property (readonly) NSObject*<OS_dispatch_queue> executiveStateQueue; 
@property (readonly) PHAManager * photoAnalysisManager; 
@property (readonly) NSURL * persistentStorageDirectoryURL; 
@property (readonly) BOOL isEnabled; 
@property (readonly) PHALibraryChangeListener * changeListener; 
@property (getter=isQuiescent,readonly) BOOL quiescent; 
@property (retain) PHAServiceCancelableOperation * currentOperation;                    //@synthesize currentOperation=_currentOperation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(short)workerType;
+(BOOL)wantsToReceiveXPCRequestsOnUserInitiatedRequestQueue;
+(BOOL)runsExclusively;
+(long long)applicationDataFolderIdentifier;
+(BOOL)persistsState;
+(void)configureXPCConnection:(id)arg1 ;
-(id)init;
-(BOOL)isEnabled;
-(PHPhotoLibrary *)photoLibrary;
-(PHALibraryChangeListener *)changeListener;
-(void)warmup;
-(void)shutdown;
-(void)setCurrentOperation:(PHAServiceCancelableOperation *)arg1 ;
-(PHAServiceCancelableOperation *)currentOperation;
-(BOOL)hasAdditionalJobsForScenario:(unsigned long long)arg1 requestReason:(unsigned long long)arg2 ;
-(id)nextAdditionalJobWithScenario:(unsigned long long)arg1 requestReason:(unsigned long long)arg2 ;
-(BOOL)startAcknowledgeDeletionsJob:(id)arg1 error:(id*)arg2 ;
-(BOOL)stopAcknowledgeDeletionsJob:(id)arg1 error:(id*)arg2 ;
-(id)statusAsDictionary;
-(void)dispatchAsyncToExecutiveStateQueue:(/*^block*/id)arg1 ;
-(BOOL)dispatchAsyncToUserInitiatedRequestQueue:(/*^block*/id)arg1 ;
-(PHAManager *)photoAnalysisManager;
-(id)initWithPhotoAnalysisManager:(id)arg1 dataLoader:(id)arg2 ;
-(void)startup;
-(void)cooldown;
-(BOOL)isWarmedUp;
-(BOOL)warmupBasedOnConstraintChanges;
-(BOOL)shouldCooldownForConstraintChange:(id)arg1 ;
-(BOOL)shouldWarmupForConstraintChange:(id)arg1 ;
-(BOOL)allowCooldownForWorkerChange:(id)arg1 ;
-(BOOL)workerJobCausesCooldown:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)executiveStateQueue;
-(BOOL)isQuiescent;
-(id<PHAAssetResourceDataLoading>)dataLoader;
-(BOOL)startAnalysisJob:(id)arg1 error:(id*)arg2 ;
-(BOOL)stopAnalysisJob:(id)arg1 error:(id*)arg2 ;
-(BOOL)dispatchSyncToUserInitiatedRequestQueue:(/*^block*/id)arg1 ;
-(id)libraryScopedWorkerPreferences;
-(void)setLibraryScopedWorkerPreferencesValue:(id)arg1 forKey:(id)arg2 ;
-(NSURL *)persistentStorageDirectoryURL;
-(void)assertUserInitiatedRequestQueue;
-(NSObject*<OS_dispatch_queue>)userInitiatedRequestQueue;
-(id)libraryScopedWorkerPreferencesURL;
-(void)updateLibraryScopedWorkerPreferencesWithEntriesFromDictionary:(id)arg1 keysToRemove:(id)arg2 ;
-(void)setUserInitiatedRequestQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setWarmedUp:(BOOL)arg1 ;
-(void)setDataLoader:(id<PHAAssetResourceDataLoading>)arg1 ;
@end

