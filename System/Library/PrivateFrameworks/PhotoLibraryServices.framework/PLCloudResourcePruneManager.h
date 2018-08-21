/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:56 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class PLPhotoLibrary, PLCloudPhotoLibraryManager, NSObject;

@interface PLCloudResourcePruneManager : NSObject {

	PLPhotoLibrary* _photoLibrary;
	PLCloudPhotoLibraryManager* _cplManager;
	BOOL _stopped;
	NSObject*<OS_dispatch_queue> _workQueue;

}
+(id)_originalResourceTypes;
+(id)_nonOriginalResourceTypes;
-(id)init;
-(void)dealloc;
-(void)stop;
-(id)initWithCPLManager:(id)arg1 ;
-(id)_identifierForResource:(id)arg1 ;
-(void)_runOnWorkQueueWithTransaction:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)_handleCacheDeleteRegistration;
-(long long)_fetchResourcesForPruningWithBudget:(long long)arg1 batchHandler:(/*^block*/id)arg2 ;
-(long long)diskSpaceToPrune;
-(void)startAutomaticPruneWithBudget:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(long long)_purgeableAmountWithBudget:(long long)arg1 debugString:(id)arg2 ;
-(long long)pruneResources:(id)arg1 inPhotoLibrary:(id)arg2 ;
-(void)updateCacheDeletePurgeableAmount;
-(id)_predicateForPrune;
-(id)_colorAwareResourceTypes;
-(id)_predicateForCPLResourceTypes:(id)arg1 ;
-(void)_updateLocalStateForPrunedResource:(id)arg1 inPhotoLibrary:(id)arg2 ;
-(void)_updateLocalSRGBFileForPrunedResource:(id)arg1 inPhotoLibrary:(id)arg2 ;
-(id)pruneStatusForDebug:(BOOL)arg1 ;
-(long long)_localResourcesSize;
@end

