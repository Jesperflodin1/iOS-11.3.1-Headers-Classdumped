/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:35 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURLCache, ISURLCacheConfiguration, NSString;

@interface ISURLCache : NSObject {

	NSURLCache* _cache;
	ISURLCacheConfiguration* _configuration;

}

@property (readonly) NSString * persistentIdentifier; 
@property (nonatomic,readonly) unsigned long long currentDiskUsage; 
@property (nonatomic,readonly) unsigned long long currentMemoryUsage; 
@property (nonatomic,readonly) unsigned long long diskCapacity; 
@property (nonatomic,readonly) unsigned long long memoryCapacity; 
+(id)cacheDirectoryPath;
-(unsigned long long)currentMemoryUsage;
-(id)init;
-(void)dealloc;
-(void)saveMemoryCacheToDisk;
-(unsigned long long)diskCapacity;
-(id)initWithCacheConfiguration:(id)arg1 ;
-(void)reloadWithCacheConfiguration:(id)arg1 ;
-(void)purgeMemoryCache;
-(unsigned long long)memoryCapacity;
-(void)storeCachedResponse:(id)arg1 forRequest:(id)arg2 ;
-(unsigned long long)currentDiskUsage;
-(void)removeCachedResponseForRequest:(id)arg1 ;
-(NSString *)persistentIdentifier;
-(void)removeAllCachedResponses;
-(id)cachedResponseForRequest:(id)arg1 ;
@end
