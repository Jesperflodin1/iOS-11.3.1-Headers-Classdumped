/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:02 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ICLRUCacheDelegate;
@class NSMapTable, NSMutableArray, NSArray;

@interface ICLRUCache : NSObject {

	NSMapTable* mData;
	NSMutableArray* mOrderedKeys;
	unsigned long long mMax;
	id<ICLRUCacheDelegate> _delegate;

}

@property (nonatomic,readonly) unsigned long long maxSize; 
@property (nonatomic,readonly) NSArray * allKeys; 
@property (assign,nonatomic,__weak) id<ICLRUCacheDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)cacheCollection;
+(void)purgeAllCaches;
-(id<ICLRUCacheDelegate>)delegate;
-(id)objectForKey:(id)arg1 ;
-(void)setDelegate:(id<ICLRUCacheDelegate>)arg1 ;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(NSArray *)allKeys;
-(unsigned long long)maxSize;
-(id)initWithMaxSize:(unsigned long long)arg1 ;
-(void)p_removeOldestObject;
@end
