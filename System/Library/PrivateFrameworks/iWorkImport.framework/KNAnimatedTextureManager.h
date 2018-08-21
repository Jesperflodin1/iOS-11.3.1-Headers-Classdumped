/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:12 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class KNPlaybackSession, KNSlideNode, NSMapTable, NSMutableSet, NSLock, NSOperationQueue;

@interface KNAnimatedTextureManager : NSObject {

	KNPlaybackSession* _session;
	KNSlideNode* _currentSlideNode;
	NSMapTable* _slideNodeToASVMap;
	NSMutableSet* _slideNodesInMemorySet;
	BOOL _isPrecachingActive;
	NSLock* _slideNodesInMemorySetLock;
	NSOperationQueue* _preCacheBackgroundQueue;
	NSOperationQueue* _rasterizeTextureQueue;
	BOOL _shouldPreCache;

}

@property (assign,nonatomic,__weak) KNSlideNode * currentSlideNode;              //@synthesize currentSlideNode=_currentSlideNode - In the implementation block
@property (assign,nonatomic) BOOL shouldPreCache;                                //@synthesize shouldPreCache=_shouldPreCache - In the implementation block
-(KNSlideNode *)currentSlideNode;
-(void)setCurrentSlideNode:(KNSlideNode *)arg1 ;
-(void)addTextureToRasterizationQueue:(id)arg1 isOpenGL:(BOOL)arg2 asv:(id)arg3 ;
-(void)evictCaches;
-(id)ASVForSlideNode:(id)arg1 ;
-(BOOL)shouldPreCache;
-(void)p_setCurrentSlideNodeToProcess:(id)arg1 ;
-(void)p_serializeExtraSlideNodes;
-(BOOL)p_shouldProcessSlideNode:(id)arg1 ;
-(void)p_addSlideNodeToMemorySet:(id)arg1 ;
-(void)p_processSlideNode:(id)arg1 isHighPriority:(BOOL)arg2 ;
-(id)p_slideNodesToCacheAroundCurrentSlideNode:(id)arg1 shouldIncludeExtraSlideAtEnd:(BOOL)arg2 ;
-(void)p_rasterizeTexture:(id)arg1 isOpenGL:(BOOL)arg2 ;
-(void)p_invalidateASV:(id)arg1 ;
-(void)p_serializeTexturesForSlideNode:(id)arg1 ;
-(void)evictInMemoryCache;
-(void)evictPersistentCache;
-(void)stopPreCaching;
-(void)startPreCaching;
-(void)evictCacheForSlideNode:(id)arg1 ;
-(void)setShouldPreCache:(BOOL)arg1 ;
-(void)tearDown;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)initWithSession:(id)arg1 ;
-(void)p_didReceiveMemoryWarning:(id)arg1 ;
@end

