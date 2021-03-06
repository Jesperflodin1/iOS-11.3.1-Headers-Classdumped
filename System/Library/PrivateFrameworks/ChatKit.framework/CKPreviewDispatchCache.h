/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:22 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IMSystemMonitorListener.h>

@class CKDispatchCache, CKMultiDict;

@interface CKPreviewDispatchCache : NSObject <IMSystemMonitorListener> {

	CKDispatchCache* _dispatchCache;
	CKMultiDict* _pendingBlocks;

}

@property (nonatomic,retain) CKDispatchCache * dispatchCache;              //@synthesize dispatchCache=_dispatchCache - In the implementation block
@property (nonatomic,retain) CKMultiDict * pendingBlocks;                  //@synthesize pendingBlocks=_pendingBlocks - In the implementation block
+(id)transcriptPreviewCache;
+(id)mapThumbnailQueue;
+(id)detailsPreviewCache;
+(id)snapshotCache;
+(void)_invalidateStickerPreviewCache;
+(id)stickerPreviewCache;
-(id)init;
-(void)dealloc;
-(void)flush;
-(void)didReceiveMemoryWarning;
-(void)resume;
-(id)cachedPreviewForKey:(id)arg1 ;
-(void)setCachedPreview:(id)arg1 key:(id)arg2 ;
-(BOOL)isGeneratingPreviewForKey:(id)arg1 ;
-(void)enqueueSaveBlock:(/*^block*/id)arg1 withPriority:(long long)arg2 ;
-(void)enqueueGenerationBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 withPriority:(long long)arg3 forKey:(id)arg4 ;
-(void)systemApplicationDidSuspend;
-(void)enqueueSaveBlock:(/*^block*/id)arg1 forMediaObject:(id)arg2 withPriority:(long long)arg3 ;
-(id)notificationCenter;
-(void)transferRemoved:(id)arg1 ;
-(void)beginGeneratingForKey:(id)arg1 ;
-(void)endGeneratingForKey:(id)arg1 ;
-(id)initWithCacheLimit:(unsigned long long)arg1 ;
-(void)setDispatchCache:(CKDispatchCache *)arg1 ;
-(void)setPendingBlocks:(CKMultiDict *)arg1 ;
-(CKDispatchCache *)dispatchCache;
-(BOOL)shouldReplaceCachedPreview:(id)arg1 withPreview:(id)arg2 ;
-(CKMultiDict *)pendingBlocks;
-(id)mediaObjectManager;
-(void)transferFinished:(id)arg1 ;
@end

