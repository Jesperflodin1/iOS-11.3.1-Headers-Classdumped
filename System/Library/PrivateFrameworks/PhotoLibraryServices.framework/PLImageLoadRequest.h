/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:53 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSManagedObjectID, PLImageSource, NSMutableSet, NSMutableArray, PLLoadRequestKey, NSArray;

@interface PLImageLoadRequest : NSObject {

	NSManagedObjectID* _assetID;
	PLImageSource* _source;
	NSMutableSet* _queues;
	int _priority;
	NSMutableArray* _completionBlocks;
	PLLoadRequestKey* _key;

}

@property (assign,nonatomic) int priority;                                 //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) NSArray * completionBlocks; 
@property (nonatomic,retain,readonly) PLImageSource * source;              //@synthesize source=_source - In the implementation block
@property (nonatomic,retain,readonly) PLLoadRequestKey * key; 
+(id)requestWithAsset:(id)arg1 source:(id)arg2 priority:(int)arg3 completion:(/*^block*/id)arg4 loadingQueue:(id)arg5 ;
-(PLLoadRequestKey *)key;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)debugDescription;
-(NSArray *)completionBlocks;
-(void)setPriority:(int)arg1 ;
-(int)priority;
-(PLImageSource *)source;
-(void)addCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)isImageLoadingQueueRegistered:(id)arg1 ;
-(void)deregisterImageLoadingQueue:(id)arg1 ;
-(BOOL)someImageLoadingQueuesRegistered;
-(void)registerImageLoadingQueue:(id)arg1 ;
-(void)notifyImageLoadingQueuesOfImageAvailability:(id)arg1 ;
-(id)assetInPhotoLibrary:(id)arg1 ;
-(id)initWithAsset:(id)arg1 source:(id)arg2 priority:(int)arg3 ;
@end

