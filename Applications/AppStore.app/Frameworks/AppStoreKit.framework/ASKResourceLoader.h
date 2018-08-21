/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 21, 2018 at 11:42:07 PM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /Applications/AppStore.app/Frameworks/AppStoreKit.framework/AppStoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSOperationQueue, NSMutableDictionary, NSMapTable, NSCache;

@interface ASKResourceLoader : NSObject {

	long long _requestCountMap[3];
	BOOL _isInBackground;
	NSOperationQueue* _accessQueue;
	NSOperationQueue* _notificationQueue;
	NSOperationQueue* _requestQueue;
	NSMutableDictionary* _pendingOperations;
	NSMapTable* _requestsByCacheKey;
	NSCache* _cachedResources;

}

@property (nonatomic,readonly) NSMutableDictionary * pendingOperations;              //@synthesize pendingOperations=_pendingOperations - In the implementation block
@property (nonatomic,readonly) NSMapTable * requestsByCacheKey;                      //@synthesize requestsByCacheKey=_requestsByCacheKey - In the implementation block
@property (nonatomic,readonly) NSCache * cachedResources;                            //@synthesize cachedResources=_cachedResources - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * accessQueue;                       //@synthesize accessQueue=_accessQueue - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * notificationQueue;                 //@synthesize notificationQueue=_notificationQueue - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * requestQueue;                      //@synthesize requestQueue=_requestQueue - In the implementation block
@property (nonatomic,readonly) BOOL isIdle; 
@property (nonatomic,readonly) BOOL isInBackground;                                  //@synthesize isInBackground=_isInBackground - In the implementation block
-(NSCache *)cachedResources;
-(id)mutableResourcesForCacheKey:(id)arg1 ;
-(NSMapTable *)requestsByCacheKey;
-(id)requestKeyForCacheKey:(id)arg1 ;
-(void)postDidLoadAllForReason:(long long)arg1 ;
-(void)reprioritizeOperations;
-(void)updateLoadReason:(long long)arg1 forOperation:(id)arg2 ;
-(long long)currentQualityOfService;
-(void)finishLoadForRequest:(id)arg1 withResource:(id)arg2 error:(id)arg3 ;
-(void)postDidBeginLoadingIfIdle;
-(void)postDidIdleIfIdle;
-(id)initWithRequestQueue:(id)arg1 accessQueue:(id)arg2 notificationQueue:(id)arg3 cacheLimit:(long long)arg4 ;
-(id)initWithParentResourceLoader:(id)arg1 ;
-(void)addResource:(id)arg1 forCacheKey:(id)arg2 ;
-(id)cachedResourcesForCacheKey:(id)arg1 ;
-(void)cancelRequestForCacheKey:(id)arg1 ;
-(BOOL)setReason:(long long)arg1 forRequestWithKey:(id)arg2 ;
-(NSOperationQueue *)requestQueue;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)_commonInit;
-(void)cancelAllRequests;
-(void)enterForeground;
-(BOOL)loadResourceWithRequest:(id)arg1 reason:(long long)arg2 ;
-(NSOperationQueue *)accessQueue;
-(BOOL)isIdle;
-(BOOL)isIdleForReason:(long long)arg1 ;
-(void)removeAllCachedResources;
-(BOOL)isInBackground;
-(void)enterBackground;
-(NSOperationQueue *)notificationQueue;
-(NSMutableDictionary *)pendingOperations;
@end
