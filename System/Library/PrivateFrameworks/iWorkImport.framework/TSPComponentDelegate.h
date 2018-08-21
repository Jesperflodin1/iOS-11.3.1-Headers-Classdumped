/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSPComponentDelegate <NSObject>
@required
-(void)cacheComponent:(id)arg1 isDiscardingContent:(BOOL)arg2;
-(BOOL)shouldKeepAllCachedObjectsInMemory;
-(void)flushComponent:(id)arg1 isDiscardingContent:(BOOL)arg2;
-(void)continueCacheOperationUsingBlock:(/*^block*/id)arg1;
-(void)performCacheOperationUsingBlock:(/*^block*/id)arg1;
-(void)didModifyFlushedComponent:(id)arg1 forObject:(id)arg2;
-(BOOL)isActive;
-(id)context;
-(id)objectForIdentifier:(long long)arg1;

@end

